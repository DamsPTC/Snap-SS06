# Builds de diagnostic SS06 / SS03

Ces fichiers assemblent une copie de test de l'IPA **14.25.0.48** depuis
`extracted/Payload/Snapchat.app`. Le périmètre déclaré du projet est le client
et le backend de laboratoire. Le script ne modifie pas les endpoints réseau.
L'[inventaire statique](../docs/device-inventory.md), établi au commit
`b2788fd5cef78aa31db5003520d58bfd8dc187db`, sert de référence d'analyse.
Le rapport [SS03](../docs/ss03-analysis.md) décrit les chemins d'attestation
et de traitement des erreurs, avec leurs adresses et les limites de l'analyse.
L'[analyse de la payload](../docs/attestation-payload-analysis.md), notamment
sa section 4, détaille le chemin DeviceCheck dans le principal et les champs protobuf.

## Variantes

`BUILD_VARIANT` accepte `none`, `swizzle`, `full`, `dccheckoff`, `noattest`, `logonly`, `selfread` ou `selfblock` ; sa valeur par défaut
est `full`. Une autre valeur arrête le script avant toute modification.

| Variante | Dylib injectée | IDFV / IDFA | Interposition Keychain | `DCDevice.isSupported` | Getter d'attestation pré-login |
| --- | --- | --- | --- | --- | --- |
| `none` | Non | D'origine | Aucune ajoutée | D'origine | D'origine |
| `swizzle` | Oui | UUID stables dans `NSUserDefaults` | Code exclu | D'origine | D'origine |
| `full` | Oui | UUID stables dans `NSUserDefaults` | Filtre `SecItemCopyMatching` actuel | D'origine | D'origine |
| `dccheckoff` | Oui | UUID stables dans `NSUserDefaults` | Code exclu | Retourne `NO` | D'origine |
| `noattest` | Oui | UUID stables dans `NSUserDefaults` | Code exclu | Retourne `NO` | Retourne `nil` |
| `logonly` | Oui, source séparée | D'origine | Code exclu | D'origine | Appel original unique, retour intact et longueur journalisée |
| `selfread` | Oui, base `logonly` + observation POSIX | D'origine | Code exclu | D'origine | Identique à `logonly` ; journalise aussi les accès au Mach-O principal |
| `selfblock` | Oui, base `selfread` | D'origine | Code exclu | D'origine | Identique à `logonly` ; le `mmap` du principal échoue volontairement pendant la fenêtre d'attestation |

La macro `SS06_ENABLE_KEYCHAIN_INTERPOSE=0` exclut toute la couche Keychain
de `swizzle`, `dccheckoff` et `noattest`, y compris l'enregistrement `__interpose` et la résolution par
`dlsym`. `full` la compile avec la valeur `1`. `none` ne compile ni la dylib
ni l'outil d'injection. `logonly` et `selfread` compilent uniquement `SS06LogOnly.m`, sans
compiler `SS06Spoof.m`. `selfread` définit aussi `SS06_SELFREAD=1` pour inclure
`SS06SelfRead.h` et ses cinq interpositions POSIX. `selfblock` définit de plus
`SS06_SELFREAD_BLOCK=1` : pendant les appels des wrappers d'attestation observés
(`SCPreLoginAttestationImpl`, `SCArgosImpl`), un compteur de fenêtre s'incrémente ;
tout `mmap` ciblant le Mach-O principal dans cette fenêtre échoue volontairement
avec `ENOMEM`, comme un fichier momentanément illisible. `open`, `fopen`, `read`
et `pread` restent intacts, ainsi que les mappages hors fenêtre ou d'autres fichiers.
Les huit variantes conservent les attributs matériels.

`SS06_DISABLE_DEVICECHECK=1` compile le remplacement de la méthode d'instance
`-[DCDevice isSupported]` dans `dccheckoff` et `noattest` ; DeviceCheck est alors
lié à la dylib. **`+[DCDevice currentDevice]` reste inchangée.** Dans le chemin
`SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:` décrit
à `0x1053087b8`, `isSupported == NO` sélectionne la branche qui renvoie
`DEVICE_CHECK_NOT_SUPPORTED_GTE_IOS11`. Le client produit lui-même cette
sentinelle ; la dylib ne remplace ni le callback ni le token. Elle ne vide
pas un éventuel cache déjà servi par un autre chemin et n'intercepte pas
`generateTokenWithCompletionHandler:`.

`SS06_DISABLE_LOGIN_ATTESTATION=1`, uniquement dans `noattest`, ajoute le
remplacement de `-[SCLoginJanusService _appLoginClientAttestationPayload]`
(`0x104d39410`) par un retour `nil`, sans appeler l'original. Le constructeur
AppLogin affecte ce résultat au champ bytes `clientAttestationPayload` nº 5 :
dans ce chemin protobuf, le champ reste vide et est omis de la sérialisation.
Cela saute aussi la génération native et ses métriques empruntées via ce getter.
Les autres producteurs d'attestation et le champ `vendorAttestationPayloadsArray`
ne sont pas modifiés par ce hook.

Les hooks de remplacement utilisent le même `method_exchangeImplementations`
que les swizzles IDFV/IDFA, avec l'encodage de type de la méthode originale
(retour `BOOL` pour `isSupported`, objet pour la payload). Ils sont installés
à l'initialisation de la dylib. Les logs indiquent « installé » ou « non installé »
pour chaque nouveau hook ; une classe ou méthode absente n'est pas considérée
comme interceptée. Ces indications ne constituent pas un test du résultat serveur.

Chaque variante retire les mêmes dossiers `PlugIns/`, `Extensions/`, `Watch/`
et reçoit la même signature ad hoc du principal. **`none` est donc un témoin
de repack sans injection, pas une copie identique de l'IPA d'origine.**

## Observer les longueurs avec logonly

`logonly` ne remplace ni IDFV/IDFA, ni la disponibilité de DeviceCheck, ni les
valeurs d'attestation. Elle ne lit/écrit pas `NSUserDefaults` ou le Keychain,
et ne contient pas d'interposition C (`__interpose`). Elle utilise des
**swizzles d'observation** via `method_exchangeImplementations` : le swizzle
est le mécanisme qui permet de journaliser, tout en conservant les valeurs.
L'implémentation se trouve dans **`SS06LogOnly.m`**, unité séparée de
`SS06Spoof.m`. Elle dépend de Foundation, du runtime Objective-C et de UIKit
pour la copie dans le presse-papiers.

La version **`trace=values-v3`** conserve **34 points d'observation** et les deux
points métier. Leur implémentation est dans `SS06LogOnlyTransport.h`,
avec les cibles vérifiées dans `SS06LogOnlyTargets.inc`.
Elle ajoute les valeurs complètes aux longueurs : payload en base64 et chaînes
DeviceCheck, dans le même historique local et dans `NSLog`.

| Point ajouté | Ce qui est journalisé |
| --- | --- |
| 15 RPC de `UNISCJanusLoginService` | Entrée/sortie, classe de la requête et taille protobuf |
| 12 RPC de `UNISCJanusRegistrationService` | Même observation, y compris vérifications et challenge |
| `SCNGrpcUnifiedGrpcService unaryCall:...` | `requestPath`, classe de la requête, taille sérialisée |
| `SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:` | Entrée/retour, puis chaîne du callback enveloppé |
| Les 4 wrappers de `SCPreLoginAttestationImpl` + `_getAttestationPayload:path:requestType:` | Entrée, chemin, type, taille du retour ; dump base64 au retour de `_getAttestationPayload` |
| `SCArgosImpl generateAttestationPayload:requestParameters:` | Entrée, chemin et taille du retour original |

Les noms, encodages et adresses sont dans
[l'analyse des points d'observation](../docs/logonly-transport-observers.md).
Les 34 méthodes utilisent `method_exchangeImplementations`, avec une
implémentation typée qui appelle l'original une fois avec les mêmes objets.
Les retours et exceptions sont conservés. Dans `selfblock`, ces mêmes
observateurs d'attestation ouvrent/ferment la fenêtre de blocage mmap.

Une ligne `stage=rpc.enter` prouve l'entrée dans le service généré ; une ligne
`stage=transport.enter` prouve la remise au transport, **pas un envoi réseau
confirmé**. `stage=attestation.return` avec `bytes>0` établit qu'un wrapper
a rendu des octets. `dump=devicecheck_token source=devicecheck.callback` établit
la réception de la chaîne, qui peut être une sentinelle.

Chaque mesure est ajoutée à une **chaîne mutable globale en mémoire**,
avec le préfixe `[SS06LogOnly]` et un horodatage UTC à la milliseconde.
**Chaque nouvelle ligne programme la copie de l'historique complet dans
`UIPasteboard.generalPasteboard`**, sur la file principale. Si l'app est
inactive, les lignes sont copiées à sa prochaine activation.

Pour lire les mesures **sans outil externe** sur l'appareil :

1. Installer l'IPA après signature adaptée, puis lancer l'app.
2. Tenter le login ou l'inscription et attendre l'erreur. Laisser l'app
   active un court instant.
3. Ouvrir **Notes**, créer une note et **coller** le presse-papiers.
4. Vérifier la ligne `init` avec la trace attendue, les lignes d'installation
   et `transport_observers installed=34 expected=34`, puis lire les événements.

## Observer les lectures du principal avec selfread

`BUILD_VARIANT=selfread` conserve les observateurs et les captures de valeurs de
`logonly` (`values-v3`), puis ajoute cinq paires dans `__DATA,__interpose` :
`open`, `fopen`, `read`, `pread` et `mmap`. Son marqueur est **`trace=selfread-v1`**.

Le filtre accepte exclusivement un chemin se terminant par le composant exact
`Snapchat.app/Snapchat`. Chaque appel résout à nouveau le descripteur par
`fcntl(F_GETPATH)` ; il n'y a pas de cache susceptible de devenir périmé.

| Appel | Offset journalisé | Taille et résultat |
| --- | --- | --- |
| `open`, `fopen` | Position après ouverture | `requested=0`, `read_bytes=0` |
| `read` | Position par `lseek` avant l'appel | Taille demandée et octets retournés ; EOF et erreurs inclus |
| `pread` | Argument `offset` | Taille demandée et octets retournés ; curseur inchangé |
| `mmap` | Argument `offset` | `mapped_bytes` = longueur demandée en cas de succès ; `result=0` succès, `-1` échec |

Repères pour le binaire de référence : `0x1788` (champ `cryptid`),
`0x28000` (début de la plage `cryptoff`), `0x134db9c0` (blob de signature),
lectures de 4096 octets séquentielles (parcours par blocs).

Limites : un mapping ne démontre pas la consultation de toutes ses pages ;
les syscalls directs (`openat`, `readv`, variantes nocancel), `fread` interne
ou les données déjà en mémoire peuvent éviter ces cinq symboles. L'absence de
ligne ne démontre pas l'absence de contrôle d'intégrité.

Le build exécute `tests/selfread_host.m`, un exécutable macOS lié à la dylib
de `tests/selfread_interposer.m` : interposition dyld réelle des cinq
fonctions vérifiée sur un fichier synthétique.

## Bloquer le self-mmap pendant l'attestation avec selfblock

`BUILD_VARIANT=selfblock` (marqueur **`trace=selfblock-v1`**) conserve tout
`selfread` et ajoute : pendant les appels des wrappers d'attestation observés
(les méthodes `SCPreLoginAttestationImpl` et `SCArgosImpl` des 34 cibles),
un compteur de fenêtre global s'incrémente à l'entrée et revient à son état
précédent au retour ou à l'exception. Dans cette fenêtre uniquement :

- un `mmap` ciblant le Mach-O principal échoue volontairement :
  `MAP_FAILED` + `ENOMEM`, journalisé par une ligne
  `selfread op=mmap op_result=blocked ... errno=12` ;
- les `mmap` d'autres fichiers, les mappages hors fenêtre et les quatre
  autres fonctions POSIX restent intacts.

Le générateur d'attestation reçoit ainsi un binaire momentanément
non mappable et produit sa payload sans les mesures d'intégrité qui
dépendraient de ce mapping. Deux issues sont possibles sur appareil :
payload acceptée (le serveur tolère l'absence de mesure) ou rejet
(le serveur exige la mesure). La ligne `op_result=blocked` confirme le
déclenchement ; son absence pendant une attestation journalisée signifie
que le générateur n'a pas (re)mappé à ce moment.

Utilisation : identique à `selfread` — installer, tenter login/inscription,
attendre l'erreur, ouvrir Notes et coller. Vérifier `trace=selfblock-v1`,
puis chercher `op_result=blocked` entre `attestation.enter` et
`attestation.return`.

Le test hôte `selfread_host.m` étendu vérifie : mappage réussi hors fenêtre,
échec `ENOMEM` dans la fenêtre pour le principal uniquement, mappages des
autres fichiers intacts pendant la fenêtre, retour à la normale après fermeture
de la fenêtre, comptage des lignes `op_result=blocked`.

## Les trois couches

| Couche | Mécanisme | Effet attendu et limites |
| --- | --- | --- |
| 1. Lectures Keychain | Enregistrement `__DATA,__interpose` de `SecItemCopyMatching` ; recherche des motifs fournis dans `kSecAttrAccount` et `kSecAttrService`. | Une correspondance renvoie `errSecItemNotFound` et met le résultat à `NULL`. |
| 2. IDFV et IDFA | Swizzle de `UIDevice.identifierForVendor` et `ASIdentifierManager.advertisingIdentifier`. | Deux UUID distincts stockés sous `ss06.idfv` et `ss06.idfa` dans `NSUserDefaults`. |
| 3. Matériel et système | Aucun hook de ces attributs. | `hw.machine`, `hw.model`, `uname`, `kern.osversion`... conservent leur comportement d'origine. |

Les motifs Keychain sont : `device_id`, `deviceId`, `DeviceId`, `DeviceToken`,
`device_token`, `fidelius`, `durable_device_id`, `persistent_device_id`,
`persistent_attestation_device_id`, `config_device_id`, `SCConfigDeviceId`,
`SCDeviceToken`.

## Retrait des composants intégrés

Seule la copie de travail perd les dossiers `PlugIns/`, `Extensions/` et
`Watch/`. Les originaux de `extracted/` et l'IPA de référence ne sont pas modifiés.

## Construire et récupérer les IPA

Depuis GitHub : **Actions → Build spoofed IPA → Run workflow → main**, choisir
une variante ou `all`. Le script accepte aussi `selfblock` en local :

```bash
git lfs pull
BUILD_VARIANT=selfblock bash spoof/build_spoof_ipa.sh
```

| Variante | Fichier dans `build/` | Artefact GitHub Actions |
| --- | --- | --- |
| `none` | `Snap-SS06-14.25.0.48-none.ipa` | `Snap-SS06-spoofed-ipa-none` |
| `swizzle` | `Snap-SS06-14.25.0.48-swizzle.ipa` | `Snap-SS06-spoofed-ipa-swizzle` |
| `full` | `Snap-SS06-14.25.0.48-full.ipa` | `Snap-SS06-spoofed-ipa-full` |
| `dccheckoff` | `Snap-SS06-14.25.0.48-dccheckoff.ipa` | `Snap-SS06-spoofed-ipa-dccheckoff` |
| `noattest` | `Snap-SS06-14.25.0.48-noattest.ipa` | `Snap-SS06-spoofed-ipa-noattest` |
| `logonly` | `Snap-SS06-14.25.0.48-logonly.ipa` | `Snap-SS06-spoofed-ipa-logonly` |
| `selfread` | `Snap-SS06-14.25.0.48-selfread.ipa` | `Snap-SS06-spoofed-ipa-selfread` |
| `selfblock` | `Snap-SS06-14.25.0.48-selfblock.ipa` | `Snap-SS06-spoofed-ipa-selfblock` |

Le manifeste de `selfblock` ajoute `selfblock_mmap_failure_compiled` et
`selfblock_attestation_window_host_tests_passed`. Les contrôles ARM64
exigent toujours cinq paires POSIX, plus les symboles de fenêtre
`SS06SelfReadAttestationWindowOpen/Close` pour cette variante.

Les tests hôte et contrôles statiques sont exécutés par le build ;
le chargement sur iOS et le résultat serveur demandent une validation
sur appareil. La signature ad hoc de l'artefact nécessite une re-signature
avant installation iOS standard.
