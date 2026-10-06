# Builds de diagnostic SS06 / SS03

Ces fichiers assemblent une copie de test de l'IPA **14.25.0.48** depuis
`extracted/Payload/Snapchat.app`. Le périmètre déclaré du projet est le client
et le backend de laboratoire. Le script ne modifie pas les endpoints réseau.
L'[inventaire statique](../docs/device-inventory.md), établi au commit
`b2788fd5cef78aa31db5003520d58bfd8dc187db`, sert de référence d'analyse.
Le rapport [SS03](../docs/ss03-analysis.md) décrit les chemins d'attestation
et de traitement des erreurs, avec leurs adresses et les limites de l'analyse.

## Variantes

`BUILD_VARIANT` accepte `none`, `swizzle` ou `full` ; sa valeur par défaut
est `full`. Une autre valeur arrête le script avant toute modification.

| Variante | Dylib injectée | IDFV / IDFA | Interposition Keychain |
| --- | --- | --- | --- |
| `none` | Non | Comportement d'origine | Aucune ajoutée |
| `swizzle` | Oui | UUID stables dans `NSUserDefaults` | Code exclu à la compilation |
| `full` | Oui | UUID stables dans `NSUserDefaults` | Filtre `SecItemCopyMatching` actuel |

La macro `SS06_ENABLE_KEYCHAIN_INTERPOSE=0` exclut toute la couche Keychain
de `swizzle`, y compris l'enregistrement `__interpose` et la résolution par
`dlsym`. `full` la compile avec la valeur `1`. `none` ne compile ni la dylib
ni l'outil d'injection. Les trois variantes conservent les attributs matériels.

Chaque variante retire les mêmes dossiers `PlugIns/`, `Extensions/`, `Watch/`
et reçoit la même signature ad hoc du principal. **`none` est donc un témoin
de repack sans injection, pas une copie identique de l'IPA d'origine.**

## Les trois couches

| Couche | Mécanisme | Effet attendu et limites |
| --- | --- | --- |
| 1. Lectures Keychain | Enregistrement `__DATA,__interpose` de `SecItemCopyMatching` ; recherche des motifs fournis dans `kSecAttrAccount` et `kSecAttrService`. | Une correspondance renvoie `errSecItemNotFound` et met le résultat à `NULL`. Les autres requêtes sont transmises à la fonction originale obtenue par `dlsym(RTLD_NEXT, ...)`. |
| 2. IDFV et IDFA | Swizzle de `UIDevice.identifierForVendor` et `ASIdentifierManager.advertisingIdentifier`. | Deux UUID distincts sont créés et stockés sous `ss06.idfv` et `ss06.idfa` dans `NSUserDefaults`. Les appels simultanés sont sérialisés et une valeur UUID invalide est régénérée. |
| 3. Matériel et système | Aucun hook de ces attributs. | `hw.machine`, `hw.model`, `uname`, `kern.osversion`, modèle et version système conservent leur comportement d'origine. |

Les motifs sont : `device_id`, `deviceId`, `DeviceId`, `DeviceToken`,
`device_token`, `fidelius`, `durable_device_id`, `persistent_device_id`,
`persistent_attestation_device_id`, `config_device_id`, `SCConfigDeviceId`,
`SCDeviceToken`. La recherche est une correspondance de sous-chaîne sensible
à la casse, limitée au compte et au service. Une chaîne repérée dans le
binaire ne prouve pas qu'elle est effectivement employée dans ces champs.

La couche 1 **ne supprime aucune entrée** et n'intercepte pas `SecItemAdd`,
`SecItemUpdate` ou `SecItemDelete`. Le masque s'applique à chaque lecture
ciblée, y compris après une nouvelle écriture. La création d'un nouvel
identifiant dépend donc du comportement du client et une écriture peut
rencontrer un élément déjà existant. Les caches en mémoire, préférences,
archives et autres requêtes Keychain ne sont pas réinitialisés.

Les UUID de la couche 2 restent stables tant que les préférences concernées
sont conservées. Ils ne constituent pas une attestation matérielle. Un IDFA
de test non nul ne change pas l'autorisation de suivi accordée par iOS.
UIKit et AdSupport sont liés à la dylib ; le swizzle reste conditionné à la
présence de la classe et de la méthode au moment de l'initialisation.

Dans `full`, la présence de `__interpose` dans le fichier ne démontre pas que le chargeur
iOS applique cette interposition dans toutes les configurations. Les appels
résolus dynamiquement, la version d'iOS, la signature et d'éventuels autres
hooks peuvent influer sur le résultat. Le message de démarrage indique
l'initialisation, pas la réussite des interceptions ni celle du test SS06.

## Retrait des composants intégrés

Seule la copie de travail perd les dossiers `PlugIns/`, `Extensions/` et
`Watch/`. Cela retire notamment les extensions de notification/partage et
les composants Watch contenus dans ces dossiers, ainsi que leurs fonctions.
Les originaux de `extracted/` et l'IPA de référence ne sont pas modifiés.

L'inventaire confirme un appel à `DCDevice.generateTokenWithCompletionHandler:`
dans `SnapchatNotificationServiceExt`. Retirer cette extension retire ce
chemin documenté ; l'analyse ne prouve pas qu'il s'agit du seul chemin
DeviceCheck de l'application. Ce retrait ne permet pas à lui seul de conclure
au résultat d'un contrôle côté serveur.

## Construire et récupérer les IPA

Depuis GitHub : **Actions → Build spoofed IPA → Run workflow → main**.
Le workflow est exclusivement manuel (`workflow_dispatch`) et utilise un
runner macOS avec Xcode et Git LFS.
Une matrice lance **les trois variantes dans la même exécution**, sur des
jobs isolés. `BUILD_VARIANT` reçoit la valeur de `matrix.variant`.

Depuis un checkout macOS :

```bash
git lfs pull
BUILD_VARIANT=none bash spoof/build_spoof_ipa.sh
BUILD_VARIANT=swizzle bash spoof/build_spoof_ipa.sh
BUILD_VARIANT=full bash spoof/build_spoof_ipa.sh
```

Pour `swizzle` et `full`, le script compile la dylib ARM64 pour iPhoneOS et l'outil
[`insert_dylib`](https://github.com/tyilo/insert_dylib) à la révision
`eb7278162af8fcc372e7f2946a2dee6a386b17d8`, copie le payload puis ajoute
`LC_LOAD_WEAK_DYLIB` vers `@executable_path/SS06Spoof.dylib` au binaire principal.
Cette liaison faible reprend le comportement demandé : le chargement de
l'app seul ne prouve donc pas celui de la dylib.

Corrections du script initial : arguments `dylib_path` puis `binary_path`,
retrait de l'option inexistante `--all-archs`, révision de l'outil fixée,
contrôle de l'espace Mach-O avant insertion et suppression des anciens
fichiers de signature/provisionnement du bundle principal dans la copie.

La dylib, lorsqu'elle existe, et l'exécutable principal reçoivent une **signature ad hoc**.
L'artefact nécessite une nouvelle signature et un provisionnement adaptés
avant une installation iOS standard ; il n'est pas signé pour un appareil
par ce workflow. Les frameworks déjà intégrés sont conservés.

Résultats :

| Variante | Fichier dans `build/` | Artefact GitHub Actions |
| --- | --- | --- |
| `none` | `Snap-SS06-14.25.0.48-none.ipa` | `Snap-SS06-spoofed-ipa-none` |
| `swizzle` | `Snap-SS06-14.25.0.48-swizzle.ipa` | `Snap-SS06-spoofed-ipa-swizzle` |
| `full` | `Snap-SS06-14.25.0.48-full.ipa` | `Snap-SS06-spoofed-ipa-full` |

Chaque artefact contient l'IPA et son fichier `.manifest.json` : variante,
commit et run GitHub, SHA-256 du principal source, du principal repacké,
de la dylib éventuelle et de l'IPA, taille et contrôles effectués. Le résumé
du job reprend la taille, le SHA-256 et les options compilées. Les répertoires
temporaires et sorties sont distincts par variante.

Le build vérifie le format ARM64 non chiffré du principal, les signatures
des fichiers modifiés, l'absence des trois dossiers retirés et l'intégrité ZIP.
Pour les variantes injectées, il contrôle aussi la place réservée à la commande
Mach-O et la dépendance ajoutée. Il exige l'absence de dylib/dépendance dans
`none`, l'absence de section `__interpose` et d'import `_SecItemCopyMatching`
dans la dylib `swizzle`, et leur présence dans `full`.
Ces contrôles attestent l'assemblage. Le chargement sur
iOS, la stabilité en session et le résultat du test serveur demandent une
validation sur appareil ; ils ne sont pas évalués par GitHub Actions.

Pour comparer les résultats, conserver les mêmes conditions de signature,
d'appareil, de compte de test, de réseau et d'état du conteneur. Les préférences,
archives et entrées Keychain peuvent survivre différemment aux réinstallations.
Un écart `none`/`swizzle` oriente vers les effets de l'injection et des swizzles ;
un écart `swizzle`/`full` oriente vers la couche Keychain. Aucun de ces écarts
ne localise, à lui seul, la décision qui conduit au message `SS03`.
