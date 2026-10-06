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

`BUILD_VARIANT` accepte `none`, `swizzle`, `full`, `dccheckoff`, `noattest` ou `logonly` ; sa valeur par défaut
est `full`. Une autre valeur arrête le script avant toute modification.

| Variante | Dylib injectée | IDFV / IDFA | Interposition Keychain | `DCDevice.isSupported` | Getter d'attestation pré-login |
| --- | --- | --- | --- | --- | --- |
| `none` | Non | D'origine | Aucune ajoutée | D'origine | D'origine |
| `swizzle` | Oui | UUID stables dans `NSUserDefaults` | Code exclu | D'origine | D'origine |
| `full` | Oui | UUID stables dans `NSUserDefaults` | Filtre `SecItemCopyMatching` actuel | D'origine | D'origine |
| `dccheckoff` | Oui | UUID stables dans `NSUserDefaults` | Code exclu | Retourne `NO` | D'origine |
| `noattest` | Oui | UUID stables dans `NSUserDefaults` | Code exclu | Retourne `NO` | Retourne `nil` |
| `logonly` | Oui, source séparée | D'origine | Code exclu | D'origine | Appel original unique, retour intact et longueur journalisée |

La macro `SS06_ENABLE_KEYCHAIN_INTERPOSE=0` exclut toute la couche Keychain
de `swizzle`, `dccheckoff` et `noattest`, y compris l'enregistrement `__interpose` et la résolution par
`dlsym`. `full` la compile avec la valeur `1`. `none` ne compile ni la dylib
ni l'outil d'injection. `logonly` compile uniquement `SS06LogOnly.m`, sans
compiler `SS06Spoof.m`. Les six variantes conservent les attributs matériels.

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

Les deux nouveaux hooks utilisent le même `method_exchangeImplementations`
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
points métier ci-dessous. Leur implémentation est dans `SS06LogOnlyTransport.h`,
avec les cibles vérifiées dans `SS06LogOnlyTargets.inc`.
Elle ajoute les valeurs complètes aux longueurs : payload en base64 et chaînes
DeviceCheck, dans le même historique local et dans `NSLog`.

| Point ajouté | Ce qui est journalisé |
| --- | --- |
| 15 RPC de `UNISCJanusLoginService`, dont `appLoginWithRequest:callOptionsBuilder:handler:` et `loginWithPasswordWithRequest:callOptionsBuilder:handler:` | Entrée/sortie, classe de la requête et taille protobuf calculée par `serializedSize` |
| 12 RPC de `UNISCJanusRegistrationService`, dont `registerWithUsernamePasswordWithRequest:callOptionsBuilder:handler:` et `registerWithPhoneEmailWithRequest:callOptionsBuilder:handler:` | Même observation, y compris étapes de vérification et challenge |
| `SCNGrpcUnifiedGrpcService unaryCall:request:callOptionsBuilder:handler:` | `requestPath`, classe de la requête, taille des octets déjà sérialisés si `NSData` |
| `SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:` | Entrée/retour synchrone, puis chaîne complète reçue par le callback enveloppé |
| Les 4 wrappers de `SCPreLoginAttestationImpl` : login, register, commun et `_getAttestationPayload:path:requestType:` | Entrée, chemin, type interne et taille du retour ; dump base64 complet uniquement au retour de `_getAttestationPayload:path:requestType:` |
| `SCArgosImpl generateAttestationPayload:requestParameters:` | Entrée, chemin et taille du retour original de cet autre wrapper du pont natif |

Les noms, encodages, adresses et extraits pseudo-C sont dans
[l'analyse des points d'observation](../docs/logonly-transport-observers.md).
Le sélecteur `unaryCall:…` existe aussi dans `SCPlusGrpcService`, avec un retour
**void** au lieu d'un objet. Le hook cible explicitement le transport
`SCNGrpcUnifiedGrpcService` et vérifie les types/arguments avant l'échange.
Les 34 méthodes utilisent `method_exchangeImplementations`, avec une
implémentation typée qui appelle l'original une fois avec les mêmes objets,
options et sélecteurs. Les retours et exceptions sont conservés. Le callback
DeviceCheck est enveloppé : son identité change, mais chaque invocation
transmet le même objet au callback original sur la même file. Les autres
handlers sont transmis intacts. La capture ajoute un coût d'exécution.

Une ligne `stage=rpc.enter` prouve l'entrée dans le service généré ; une ligne
`stage=transport.enter` prouve la remise au transport, **pas un envoi réseau
confirmé**. `stage=attestation.return` avec `bytes>0` établit qu'un wrapper
a rendu des octets. `stage=devicecheck.enter` établit l'appel de la méthode
DeviceCheck ciblée, qui peut encore choisir un repli. Une ligne
`dump=devicecheck_token source=devicecheck.callback` établit la réception de
la chaîne, qui peut être une sentinelle plutôt qu'un token Apple.

`call=N` rapproche entrée et sortie d'un appel, pas d'une tentative complète.
Les sorties sont `return` ou `throw` ; les appels imbriqués ont des numéros
distincts. `requestType=-1` signifie que ce point n'a pas d'argument type.
Les requêtes de transport sont résumées par classe/taille : **aucun
`description` ni appel supplémentaire à `data`**. Les chemins RPC sont
dépouillés de query/fragment et les formats non reconnus sont masqués.
Les captures de valeurs sont limitées aux trois points explicitement décrits
ici ; aucun dump complet des requêtes de login ou de leurs headers n'est ajouté.

| Point observé | Mesure | Transmission |
| --- | --- | --- |
| `-[SCLoginJanusService _appLoginClientAttestationPayload]` | Taille en octets du `NSData` retourné ; états `nil`, `empty`, `nonempty` | C'est un **getter**, pas un setter. Appel de l'implémentation originale une seule fois, avec le même receveur et le même sélecteur ; renvoie le même objet |
| `-[SCJanusAppLoginRequest setIosDeviceCheckToken:]` | Longueur UTF-16 (`chars`), taille UTF-8 (`utf8_bytes`) et valeur complète de la chaîne affectée à AppLogin | Appel du setter original une seule fois avec l'objet inchangé, puis journalisation après son retour réussi |

Le second observateur voit la valeur au point d'affectation, qu'elle provienne
d'un cache ou d'une génération récente. Il ne vide pas le cache, ne demande
pas un nouveau token et ne permet pas de distinguer ces deux provenances.
Il mesure la **chaîne du champ protobuf**, pas les octets Apple après décodage
base64. Une sentinelle d'indisponibilité est également une chaîne non vide :
`nonempty` ne prouve donc pas qu'un token Apple valide est présent.

Chaque mesure, l'événement `init` de la dylib et les états d'installation
des observateurs sont ajoutés à une **chaîne mutable globale en mémoire**,
avec le préfixe `[SS06LogOnly]` et un horodatage UTC à la milliseconde
(`yyyy-MM-dd'T'HH:mm:ss.SSS'Z'`). La même ligne est émise par `NSLog`.
**Chaque nouvelle ligne programme la copie de l'historique complet dans
`UIPasteboard.generalPasteboard`**, sur la file principale, sans attente
bloquante dans les méthodes observées. Toutes les anciennes lignes sont
conservées pendant la vie du processus ; aucun fichier de diagnostic ni
envoi réseau supplémentaire n'est créé. L'historique repart à zéro lors
d'un nouveau lancement du processus.

Les ajouts concurrents sont protégés par un verrou. Une tâche de copie lit
le dernier historique disponible : elle ne peut pas rétablir un ancien
snapshot. Si l'app est inactive (notamment pendant l'init), les lignes
restent en mémoire et sont copiées à sa prochaine activation. Plusieurs
mesures rapprochées peuvent être réunies en une copie contenant toutes les
lignes. Une activation sans nouvelle ligne ne recopie pas l'historique.
Une exception de copie laisse les lignes en attente de la prochaine mesure
ou activation.

La copie **remplace le contenu courant du presse-papiers**, sans le lire.
L'option `UIPasteboardOptionLocalOnly` est activée et aucune expiration n'est
ajoutée par la dylib. Aucun bouton, alerte, geste de secousse ni modification
des vues de l'app n'est ajouté. L'historique contient désormais les payloads
d'attestation en base64 et les tokens DeviceCheck complets, en plus des
métadonnées. Il peut donc contenir des données sensibles : conserver les
captures localement et ne pas publier l'historique brut. Les exceptions des méthodes originales se
propagent ; une exception pendant la mesure est traitée séparément.
Un type inattendu produit `unexpected-type`, sans conversion de son contenu.

Les logs d'installation indiquent `installed` ou `unavailable=...` pour
chaque observateur. Les setters protobuf pouvant être résolus dynamiquement,
la recherche utilise `class_getInstanceMethod`. Une méthode héritée est
localisée sur la classe ciblée avant l'échange, sans modifier sa classe de
base. Une seule nouvelle tentative d'installation est programmée sur la
file principale si la première échoue ; les cibles encore absentes sont
également retentées à l'activation de l'app. Une cible déjà installée n'est
pas échangée une seconde fois.

Pour lire les mesures **sans outil externe** sur l'appareil :

1. Installer l'IPA `logonly` après signature adaptée, puis lancer l'app.
2. Tenter le login ou l'inscription et attendre l'erreur. Laisser l'app
   active un court instant pour que la file principale traite la copie.
3. Ouvrir **Notes**, créer une note et **coller** le presse-papiers.
4. Vérifier la ligne `init` avec `trace=values-v3`, les lignes d'installation
   et `transport_observers installed=34 expected=34`, puis lire les événements
   `rpc`, `transport`, `attestation`, `devicecheck`, les longueurs et les lignes
   `dump=attestation_payload` / `dump=devicecheck_token`. L'heure et les anciennes lignes permettent
   de distinguer plusieurs tentatives au sein d'une même session.

Les anciens points métier concernent **AppLogin** ; les nouveaux couvrent
les services Janus de login **et d'inscription** et le transport unifié.
Un autre client HTTP ou chemin de cache peut encore éviter ces méthodes.
Si seules l'init et l'installation apparaissent, cela ne démontre pas une
payload vide ni un rejet serveur : examiner les lignes d'installation et
le dernier point atteint ; masquer les dumps avant de partager un diagnostic général.
Si rien n'est collé, revenir dans l'app pour permettre une copie en attente,
puis réessayer Notes ; vérifier également que l'IPA installée est bien cette
version `logonly`. Un autre contenu copié entre-temps remplace l'historique
dans le presse-papiers. `NSLog` reste disponible en complément.

Exemples **illustratifs**, pas des mesures de cet appareil :

```text
[SS06LogOnly] 2026-10-06T10:00:00.000Z init logonly active; trace=values-v3; local attestation/token dumps; original values preserved; clipboard=automatic
[SS06LogOnly] 2026-10-06T10:00:04.120Z clientAttestationPayload state=nonempty bytes=256
[SS06LogOnly] 2026-10-06T10:00:04.123Z iosDeviceCheckToken state=nonempty chars=172 utf8_bytes=172
```

Les dumps utilisent `base64=...` sans coupure pour les octets et
`value={"token":"..."}` pour les chaînes. Les échappements JSON préservent
les retours à la ligne sans créer de fausses lignes de log. Le wrapper
pré-login fournit son vrai `requestPath` ; le callback DeviceCheck et le
setter n'en reçoivent pas, donc affichent `requestPath=unknown` et
`pathSource=unavailable`. Aucune attribution à un RPC concurrent n'est inventée.
`1421` n'est pas une taille imposée : tous les octets du retour sont capturés.

Pour décoder et comparer les captures login/inscription, suivre
[le rapport et les commandes d'analyse hors ligne](../docs/attestation-capture-analysis.md).
Le script `analyze_attestation.py` utilise le parseur standard
`protoc --decode_raw`, inventorie les champs sans schéma et compare chaque octet.
Les captures réelles n'étant pas fournies, leur structure et leur égalité
restent **non déterminées**. Aucun résultat synthétique n'est présenté comme
une observation de l'appareil.

`bytes > 0` établit uniquement que ce getter a retourné un `NSData` non vide
lors de cet appel. Cela ne prouve ni le format complet, ni la validité de
l'attestation, ni son acceptation serveur. L'absence de log ne signifie pas
une payload vide : le hook peut manquer, la méthode ne pas être appelée ou
le journal ne pas être collecté. L'injection et la re-signature restent des
modifications du build, et la journalisation ajoute un coût d'exécution.

Le test hôte [`tests/logonly_passthrough.m`](tests/logonly_passthrough.m)
vérifie sur macOS l'appel unique, l'identité des objets et des sélecteurs,
les valeurs nil/vides, la propagation des exceptions, une méthode héritée
et un setter résolu dynamiquement. Il contrôle aussi les horodatages,
l'historique complet, les ajouts concurrents, la publication sur la file
principale, la copie différée à l'activation et la reprise après exception
de copie. Le presse-papiers est simulé : celui du runner n'est pas touché.
Les descriptions de requêtes et messages d'exception restent absents des logs.
Les valeurs synthétiques destinées aux nouveaux dumps doivent, elles, être
retrouvées intégralement dans le presse-papiers simulé.
**Ces tests ne remplacent pas une exécution du client sur iPhone : la copie
réelle via UIKit et les mesures de cet appareil restent à vérifier.**
Le fichier `tests/logonly_transport_fixture.h` ajoute des classes simulées
pour les 34 cibles et vérifie la transmission, les signatures, les exceptions,
les tailles, l'absence de dump de requête et les traces copiées. Il vérifie une
payload synthétique de 1421 octets, les chaînes DeviceCheck nil/vides/sentinelles,
le callback différé sur une autre file et ses exceptions. Les tests Python de
`tests/test_attestation_analysis.py` valident les parseurs et la comparaison.

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
dans `SnapchatNotificationServiceExt`. L'analyse de la payload en confirme
aussi un dans le principal : retirer les extensions ne retire pas cette
seconde voie. C'est cette distinction que les nouvelles variantes permettent
de tester. Le retrait des composants ne permet pas à lui seul de conclure
au résultat d'un contrôle côté serveur.

## Construire et récupérer les IPA

Depuis GitHub : **Actions → Build spoofed IPA → Run workflow → main**.
Le workflow est exclusivement manuel (`workflow_dispatch`) et utilise un
runner macOS avec Xcode et Git LFS.
Le choix manuel `BUILD_VARIANT=all` lance **les six variantes dans la même
exécution**, sur des jobs isolés. Il est aussi possible de choisir une seule
variante, notamment `logonly`. Dans chaque job, la variable d'environnement
`BUILD_VARIANT` reçoit la valeur de `matrix.variant`. Le choix `all` appartient
au workflow uniquement ; ce n'est pas une valeur acceptée par le script local.

Depuis un checkout macOS :

```bash
git lfs pull
BUILD_VARIANT=none bash spoof/build_spoof_ipa.sh
BUILD_VARIANT=swizzle bash spoof/build_spoof_ipa.sh
BUILD_VARIANT=full bash spoof/build_spoof_ipa.sh
BUILD_VARIANT=dccheckoff bash spoof/build_spoof_ipa.sh
BUILD_VARIANT=noattest bash spoof/build_spoof_ipa.sh
BUILD_VARIANT=logonly bash spoof/build_spoof_ipa.sh
```

Pour toutes les variantes sauf `none`, le script compile la dylib ARM64 pour iPhoneOS et l'outil
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
| `dccheckoff` | `Snap-SS06-14.25.0.48-dccheckoff.ipa` | `Snap-SS06-spoofed-ipa-dccheckoff` |
| `noattest` | `Snap-SS06-14.25.0.48-noattest.ipa` | `Snap-SS06-spoofed-ipa-noattest` |
| `logonly` | `Snap-SS06-14.25.0.48-logonly.ipa` | `Snap-SS06-spoofed-ipa-logonly` |

Lorsqu'une exécution réussie inclut `logonly`, un job séparé publie également
son IPA et son manifeste dans une prérelease
`v14.25.0.48-logonly-<run_id>`, avec un lien direct `.ipa`. Les SHA-256 sont
vérifiés avant et après l'upload. Les releases existantes ne sont pas remplacées.

Chaque artefact contient l'IPA et son fichier `.manifest.json` : variante,
commit et run GitHub, SHA-256 du principal source, du principal repacké,
de la dylib éventuelle et de l'IPA, taille et contrôles effectués. Le résumé
du job reprend la taille, le SHA-256 et les options compilées. Les répertoires
temporaires et sorties sont distincts par variante.
Les booléens `idfv_idfa_swizzles_compiled`,
`devicecheck_is_supported_no_compiled` et `login_attestation_nil_compiled`
précisent les remplacements inclus ; `ios_runtime_tested` reste à `false`.
`logonly_observers_compiled` et `logonly_host_tests_passed` valent `true`
uniquement pour `logonly` après réussite de ses contrôles. `logonly_observes`
énumère les mesures de longueur et les familles d'observateurs. `logonly_trace_version`
vaut `values-v3` ; `logonly_transport_targets_compiled` vaut 34 et
`logonly_transport_host_tests_passed` confirme les tests hôte des nouveaux points.
Ces nombres décrivent la compilation, pas le nombre de hooks installés sur l'appareil.
`logonly_value_dumps_compiled`, `logonly_value_dump_host_tests_passed` et
`logonly_offline_analysis_tests_passed` décrivent les nouvelles captures et
leurs tests sur fixtures synthétiques ; ils ne prouvent pas un résultat réel
de décodage ou une égalité login/inscription.
`logonly_timestamped_history_compiled`,
`logonly_automatic_clipboard_compiled` et `logonly_clipboard_host_tests_passed`
décrivent l'historique, la copie automatique et ses tests avec un presse-papiers
simulé ; ils ne signifient pas que la copie UIKit a été exécutée sur appareil.
Les booléens de remplacement d'identité,
de DeviceCheck, d'attestation et de Keychain valent tous `false` dans ce mode.

Le build vérifie le format ARM64 non chiffré du principal, les signatures
des fichiers modifiés, l'absence des trois dossiers retirés et l'intégrité ZIP.
Pour les variantes injectées, il contrôle aussi la place réservée à la commande
Mach-O et la dépendance ajoutée. Il exige l'absence de dylib/dépendance dans
`none`, l'absence de section `__interpose` et d'import `_SecItemCopyMatching`
dans les dylibs `swizzle`, `dccheckoff`, `noattest` et `logonly`, et leur présence dans `full`.
Il vérifie les symboles des remplacements IDFV/IDFA dans les dylibs autres que `logonly`,
l'inclusion du remplacement DeviceCheck uniquement dans `dccheckoff`/`noattest`
et celle du retour `nil` uniquement dans `noattest`. La dépendance DeviceCheck
est également contrôlée pour les deux nouvelles variantes.
Dans `logonly`, il exige les deux observateurs métier, l'installateur des
observateurs de transport et l'absence des fonctions de
remplacement, de `NSUserDefaults`, de `NSUUID` et des imports Keychain/dlsym.
Il exige aussi l'import `UIPasteboard`, l'option de copie locale et la
dépendance UIKit de la dylib `logonly`.
Ces contrôles attestent l'assemblage. Le chargement sur
iOS, la stabilité en session et le résultat du test serveur demandent une
validation sur appareil ; ils ne sont pas évalués par GitHub Actions.

Pour comparer les résultats, conserver les mêmes conditions de signature,
d'appareil, de compte de test, de réseau et d'état du conteneur. Les préférences,
archives et entrées Keychain peuvent survivre différemment aux réinstallations.
Un écart `none`/`swizzle` oriente vers les effets de l'injection et des swizzles ;
un écart `swizzle`/`full` oriente vers la couche Keychain ;
un écart `swizzle`/`dccheckoff` vers le comportement DeviceCheck ;
un écart `dccheckoff`/`noattest` vers l'omission de la payload pré-login et
les effets du saut de sa génération. Aucun de ces écarts ne localise,
à lui seul, la décision qui conduit au message `SS03`.
