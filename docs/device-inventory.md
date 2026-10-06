# Inventaire statique des informations d’appareil

Analyse de l’IPA **14.25.0.48**, réalisée le **6 octobre 2026**. Ce document inventorie les points d’accès repérés dans le binaire principal et les deux composants demandés. Il sépare attributs matériels, informations système, identifiants applicatifs et simples noms de champs.

**Référence des exports initiaux :** [`aaf7130f3b8457de3d16074b5bea038069b845c9`](https://github.com/DamsPTC/Snap-SS06/tree/aaf7130f3b8457de3d16074b5bea038069b845c9). **Index unique :** [device-inventory.json](device-inventory.json). Les sources sont liées à une adresse et à des lignes de pseudo-C ; les entrées complémentaires sont conservées dans [analysis/device-inventory/pseudocode](../analysis/device-inventory/pseudocode).

## Résultats à retenir

- Des lectures de `hw.machine`, `hw.model`, `kern.osversion`, de capacités CPU et de statistiques système sont visibles. Ce sont des caractéristiques ou états, pas automatiquement des identifiants individuels.
- Des lectures de l’IDFV et de l’IDFA sont confirmées. Des méthodes homonymes lisent aussi des champs applicatifs : elles sont séparées des appels dont le receveur `UIDevice` ou `ASIdentifierManager` est établi.
- Le code montre plusieurs familles d’identifiants : identifiant de configuration mis en cache, UUID Fidelius, identifiants de notification/authentification et jetons DeviceCheck. Leur présence ne permet pas de les considérer comme un même identifiant matériel.
- Aucun import ni occurrence ASCII des noms `IOServiceGetMatchingService`, `IORegistryEntryCreateCFProperty`, `IORegistryEntrySearchCFProperty`, `IOPlatformSerialNumber`, `IOPlatformUUID` ou `MGCopyAnswer` n’a été trouvé dans les trois binaires. Aucun accès à un numéro de série ou à un UUID de plateforme par ces voies n’est établi. Cette recherche négative ne couvre pas les noms construits ou masqués à l’exécution.

## 1. Périmètre, couverture et niveau de preuve

| Binaire | Fonctions candidates initiales | Pseudo-C obtenu | Échecs initiaux | Entrées complémentaires | Fonctions/plages du catalogue d’accès¹ |
|---|---:|---:|---:|---:|---:|
| `Snapchat-thin` | 993 551 | 993 013 | 538 | 107 | 130 |
| `SnapchatNotificationServiceExt-thin` | 1 926 | 1 926 | 0 | 2 | 1 |
| `ExtensionsSharedDependencies-thin` | 38 316 | 38 310 | 6 | 3 | 22 |

¹ Appels système/Keychain et sélecteurs avec receveur suivi ou probable, hors trampolines de branchement. Ce nombre **n’est pas un nombre d’identifiants matériels distincts**. Les noms de champs, receveurs inconnus et références de chaînes restent consultables dans l’index.

L’index contient **1761 entrées de fonctions ou plages candidates**, **586 chaînes** et **647 déclarations Objective-C correspondantes**. Ses catégories et niveaux de preuve doivent accompagner toute citation.

```text
SHA-256 de l’IPA :
008086080f7e0e1a0c9dda4d5bfa092b20f9192d3b1897bae33dec0c5e0acef1
```

### Méthode

1. Parcours des exports pseudo-C et des index de fonctions des trois binaires, y compris les sous-parties de `shard-10` du principal ; lecture des métadonnées classes/méthodes/propriétés.
2. Résolution des imports et des pointeurs Mach-O chaînés, des stubs Objective-C et des relais `B`. Recensement des instructions `BL`/`B` vers les API ou sélecteurs recherchés. Les trampolines restent identifiés comme tels.
3. Recoupement avec `__cstring`, `__objc_methname`, `__objc_classname`, les objets CFString et les pointeurs vers les chaînes. Les références ADR/ADRP+ADD/LDR sont recherchées dans de courtes séquences linéaires ; ce n’est pas une propagation complète de toutes les données.
4. Vérification locale des registres pour retrouver certains receveurs, noms `sysctlbyname` et MIB ; revue des cas importants. Une correspondance IMP ↔ méthode est utilisée pour le conteneur, jamais la simple proximité d’une classe.
5. Export Ghidra ciblé de **112 entrées complémentaires**, toutes exportées, pour documenter les points hors des limites initialement proposées. [Exécution reproductible](https://github.com/DamsPTC/Snap-SS06/actions/runs/37407492208), [plages](../analysis/device-inventory/supplement-ranges.json), [script](../scripts/device_inventory_supplement.py).

Les adresses sont des **adresses virtuelles Mach-O sans ASLR**. Il faut citer **binaire + adresse** : le framework partagé utilise des adresses basses, différentes de celles des exécutables. Les 544 échecs initiaux, le code indirect, les limites approximatives et les petites chaînes Swift encodées dans les instructions empêchent de promettre une exhaustivité sémantique absolue. Aucun code de l’app n’a été exécuté et aucune valeur d’un appareil réel n’a été observée.

### Lire les sorties et les extraits

`sources[].probable_output` décrit la **valeur produite par l’API ou le sélecteur**, qui peut ensuite être stockée, transformée ou utilisée sans être renvoyée par la fonction conteneur. `probable_function_output` précise le retour/effet d’une fonction lorsque celui-ci a été revu. Une adresse sans classe reste explicitement sans classe récupérée.

Les extraits reproduisent le pseudo-C de Ghidra, avec des commentaires ajoutés pour décoder certains `func_0x…` et constantes. Les noms de variables et les types approximatifs restent ceux de Ghidra. Les ellipses signalent des portions non contiguës. Les adresses d’instructions et leur contexte ARM64 sont dans le JSON. Des passages de Ghidra peuvent déborder après un appel sans retour ; les mentions uniquement textuelles concernées figurent séparément à la fin.

## 2. Binaire principal : lectures et stockage

### Attributs système et matériel

| Source | Exemple de fonction | Valeur attendue |
|---|---|---|
| `hw.model` | [0x1060f24e0](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/004/functions-000284.c#L2515-L2564) · `-[BTHTTP platformString]` | Modèle/carte matérielle, chaîne. |
| `hw.machine` | [0x1060f2570](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/004/functions-000284.c#L2568-L2597) · `-[BTHTTP architectureString]` ; [0x109bad9dc](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000001.c#L383-L526) | Famille matérielle, chaîne. |
| `kern.osversion` / MIB `[1,65]` | [0x1001080e4](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000042.c#L3140-L3245) · `-[SCDevice initWithUIDevice:]` ; [0x100578570](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000241.c#L1168-L1247) ; [0x1090c54d0](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/004/functions-000285.c#L1551-L1650) | Build du système. |
| CPU | [0x104948fac](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000322.c#L1496-L1542) · `_readCoreCount` ; [0x1004605e0](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000192.c#L851-L862) ; [0x109badd6c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000598.c#L1768-L1816) | MIB `[6,25]` = `HW_AVAILCPU`, `hw.ncpu`, limites de cœurs. |
| Capacités CPU | [0x100060fa8](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000007.c#L2329-L2346) ; [0x10982ae58](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/008/functions-000525.c#L347-L372) | Drapeaux SHA-512/NEON ; pas un identifiant individuel. |
| `kern.boottime` | [0x1001d56b8](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000064.c#L1191-L1260) ; [0x10bd55e38](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/009/functions-000593.c#L1096-L1133) | Heure de démarrage ou durée dérivée. |
| `kern.proc.pid` | [0x1000283f0](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000000.c#L535-L639) ; [0x1001d2574](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000063.c#L1319-L1395) ; [0x10bd860c0](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/009/functions-000611.c#L1877-L1995) | Structure du processus courant ; certains usages testent des indicateurs. Ce n’est pas un identifiant de matériel. |

D’autres fonctions sont des helpers à nom/MIB paramétrable : aucune clé fixe ne leur est attribuée sans preuve. `uname` et les API `host_*` sont incluses pour couvrir les informations de système et de mémoire. Les clés comme `hw.memsize`, `kern.version`, `hw.cputype` et `hw.cpusubtype` sont aussi recherchées dans les constantes ; la présence d’une clé seule n’est pas une lecture démontrée.

### UIDevice, IDFV et IDFA

Le catalogue ci-dessous distingue les receveurs suivis des receveurs seulement probables. `model`/`localizedModel` décrivent une famille ; `name` n’est pas nécessairement le nom personnel choisi par l’utilisateur. Sur iOS 16 et ultérieur, Apple documente un nom générique par défaut et un entitlement pour le nom personnalisé. L’IDFV est lié au fournisseur ; l’IDFA peut être nul selon les autorisations. Ces valeurs ne sont pas des numéros de série immuables. Voir les références Apple en fin de document.

- **IDFV direct :** [0x108488994](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/003/functions-000245.c#L1016-L1035) · `-[SCAdDeviceInfoProvider identifierForVendor]` renvoie l’objet UUID obtenu sur `UIDevice.currentDevice`.
- **Nom de l’appareil :** [0x10523bd0c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/001/functions-000115.c#L2109-L2163) et [0x106eea324](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/006/functions-000387.c#L1494-L1567) ont un receveur `UIDevice` suivi pour `name`.
- **IDFA transformé :** [0x1057b23ac](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000419.c#L2241-L2275) · `+[SCCommercePixelEventHelpers hashedAdId]` lit l’IDFA, obtient `UUIDString`, met la chaîne en minuscules puis appelle `SHA256HexString:`.
- **Empreinte dérivée :** [0x100280378](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000092.c#L3121-L3222) combine notamment une lecture IDFV avec d’autres données avant `CC_SHA1` et une construction hexadécimale. Le résultat probable est une empreinte dérivée, pas l’IDFV brut.
- **Contre-exemple vérifié :** [0x10b2ad984](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/005/functions-000331.c#L2406-L2501) appelle `name` sur une action issue d’un tableau. Le `currentDevice` présent ailleurs dans cette fonction ne transforme pas ce `name` en lecture de `UIDevice.name`.

### Identifiants persistants et Keychain

**Identifiant de configuration.** [0x100077af8](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000013.c#L258-L335) · `-[SCDeviceInfoImplementation _loadConfigDeviceIdIntoMemory]` cherche d’abord la valeur dans les préférences, puis dans le Keychain. Si elle reste vide, le code utilise `UIDevice.identifierForVendor` puis `UUIDString`, avec un autre générateur en repli. Les lectures/écritures sous `SCConfigDeviceIdKeychainKey` sont visibles dans [0x10b7f9c7c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L866-L885) et [0x10b7f9d7c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L926-L941). Ce chemin démontre un cache applicatif d’identifiant ; il ne démontre pas sa durée de vie après désinstallation, restauration ou changement de signature.

**Fidelius.** [0x10592ec50](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/007/functions-000487.c#L1868-L1912) · `_createAndSaveDeviceID` crée un UUID via `NSUUID.UUID`. [0x10592ee6c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/007/functions-000487.c#L1999-L2056) · `_loadDeviceIDFromKeyChain` exige une donnée de **16 octets** avant de reconstruire un `NSUUID`. [0x10592f144](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/007/functions-000487.c#L2119-L2197) sauvegarde les octets UUID via `setBackgroundDataWithStatus:forKey:`. L’archive `fidelius_device_id.plist` apparaît dans les constantes et dans le chemin `_loadDeviceIDFromArchive`. Il s’agit d’un identifiant applicatif généré.

**Autres accès.** Les fonctions de `FBSDKKeychainStore`, `BTKeychain`, `GIDAuthStateMigration`, `GIDMDMPasscodeCache`, `SCValdiKeychainStore` et `SCKeychainManager`, ainsi que des fonctions sans symbole de classe, sont inventoriées. Le contenu de leurs requêtes n’est pas présumé être un identifiant d’appareil : il peut notamment relever de l’authentification ou de données applicatives.

`SecItemCopyMatching` effectue une recherche/lecture. Les écritures sont séparées : `SecItemAdd`, `SecItemUpdate` et `SecItemDelete`. Le statut OSStatus est distinct de la donnée retournée par la recherche.

**Résolution dynamique revue.** `FBSDKKeychainStore` passe par quatre dispatchers chargés avec `dlsym` : `0x104957d90` (Update), `0x104957dd8` (Add), `0x104957e20` (CopyMatching), `0x104957e68` (Delete). Les descripteurs contiennent le nom exact du symbole et le slot où le résolveur `0x104957ac8` stocke le pointeur. `dataForKey:` à `0x10496f884` lit via ce chemin ; `setData:forKey:accessibility:` à `0x10496f74c` modifie/ajoute/supprime. Les instructions et le pseudo-C **reconstruit manuellement** des dispatchers sont conservés dans [dynamic-keychain.c](../analysis/device-inventory/dynamic-keychain.c), distinctement de Ghidra. Les champs `dynamic_imports[]` du JSON documentent les descripteurs et slots.

### Catalogue des fonctions du principal

Chaque adresse ci-dessous possède un conteneur lorsqu’il est récupéré, les sources d’information, une sortie probable et un court extrait. Les trampolines purs sont regroupés après le catalogue. Les sélecteurs à receveur inconnu figurent dans une table séparée et dans le JSON.

<details>
<summary>0x1000283f0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000000.c#L535-L639).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.proc.pid (processus courant) | Structure d’informations du processus ; état/temps/indicateurs selon le champ consommé, pas un identifiant matériel. | appel API |

```c
  puVar7 = puVar6;
  func_0x000107c6100c /* _getpid */();
  *(int *)((long)puVar6 + 0x2c) = (int)puVar7;
  func_0x000107c61660 /* _sysctl */(puVar6 + 4,4,&uStack_2d0,&uStack_2e8,0,0);
  uStack_2e0 = 0;
  uStack_2d8 = 0;
```

</details>

<details>
<summary>0x100060fa8 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000007.c#L2329-L2346).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.optional.armv8_2_sha512 | Drapeau/capacité du processeur (entier/booléen), pas un identifiant individuel. | appel API |

```c
  uRam0000000113836a78 = 0x3d;
  lStack_30 = 4;
  iVar1 = 0xf6c5797;
  func_0x000107c61664 /* _sysctlbyname */(&UNK_10f6c5797 /* hw.optional.armv8_2_sha512 */,&iStack_24,&lStack_30,0,0);
  if ((iVar1 == 0) && (lStack_30 == 4 && iStack_24 != 0)) {
    uRam0000000113836a78 = uRam0000000113836a78 | 0x40;
```

</details>

<details>
<summary>0x100074d98 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000012.c#L914-L953).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.proc.pid (processus courant) | Structure d’informations du processus ; état/temps/indicateurs selon le champ consommé, pas un identifiant matériel. | appel API |

```c
  lVar3 = lVar2;
  func_0x000107c6100c /* _getpid */();
  *(int *)(lVar2 + 0x2c) = (int)lVar3;
  func_0x000107c61660 /* _sysctl */((undefined8 *)(lVar2 + 0x20),4,alStack_2c0,&uStack_2c8,0,0);
  func_0x000107c61574 /* _swift_release */();
  if (alStack_2c0[0] < 0) {
```

</details>

<details>
<summary>0x100077af8 · -[SCDeviceInfoImplementation _loadConfigDeviceIdIntoMemory]</summary>

Conteneur : `-[SCDeviceInfoImplementation _loadConfigDeviceIdIntoMemory]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000013.c#L258-L335).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

**Retour/effet de la fonction revu :** Alimente l’identifiant de configuration en mémoire : préférences, puis Keychain, puis UUIDString de l’IDFV ; un autre générateur est appelé si la chaîne reste vide. Les écritures de cache sont visibles.

```c
    func_0x000107c40efc /* objc:currentDevice */();
    func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
    puVar3 = puVar2;
    func_0x000107c44fe0 /* objc:identifierForVendor */();
    func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
    puVar4 = puVar3;
```

</details>

<details>
<summary>0x1001062fc · +[SCKeychainManager queryForKey:]</summary>

Conteneur : `+[SCKeychainManager queryForKey:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000042.c#L1584-L1627).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
    func_0x000107c56bcc /* objc:setObject:forKey: */(param_3);
    puStack_c8 = (undefined *)0x0;
    uVar2 = param_3;
    func_0x000107c60b5c /* _SecItemCopyMatching */(param_3,&puStack_c8);
    func_0x000107c61170 /* _objc_release */(param_3);
    if (param_2 != (int *)0x0) {
```

</details>

<details>
<summary>0x1001080e4 · -[SCDevice initWithUIDevice:]</summary>

Conteneur : `-[SCDevice initWithUIDevice:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000042.c#L3140-L3245).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.osversion | Numéro de build du système (chaîne). | appel API |
| `model` → UIDevice.model (receveur probable) | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur probable |
| `systemName` → UIDevice.systemName (receveur probable) | Nom du système (NSString). | receveur probable |
| `systemVersion` → UIDevice.systemVersion (receveur probable) | Version du système (NSString). | receveur probable |

```c
  uStack_d0 = 0;
  uStack_f0 = 0x80;
  uStack_e8 = 0x4100000001;
  func_0x000107c61660 /* _sysctl */(&uStack_e8,2,&uStack_e0,&uStack_f0,0,0);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200 /* objc:stringWithUTF8String: */(PTR__OBJC_CLASS___NSString_1126ae4d0);
  /* … extrait non contigu … */
  func_0x000107c613d0 /* _strlen */(0x1137fc5b8);
  func_0x000107c45aec /* objc:initWithBytesNoCopy:length:encoding:freeWhenDone: */(puVar5);
  uVar6 = param_3;
  func_0x000107c4d07c /* objc:model */(param_3);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  uVar7 = param_3;
  func_0x000107c5c620 /* objc:systemName */(param_3);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  uVar8 = param_3;
  func_0x000107c5c650 /* objc:systemVersion */(param_3);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c61170 /* _objc_release */(param_3);
```

</details>

<details>
<summary>0x100108338 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000042.c#L3249-L3258).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
                    /* WARNING: Could not recover jumptable at 0x00010bdc07fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uname_11034cd50)(0x1137fc2b8);
  return;
}
```

</details>

<details>
<summary>0x100128a9c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000048.c#L4772-L4858).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.boottime | Date/heure du démarrage (timeval). | appel API |

```c
    uStack_30 = 0x1500000001;
    uStack_48 = 0x10;
    puVar6 = (ulong *)0x2;
    func_0x000107c61660 /* _sysctl */(&uStack_30,2,&uStack_40,&uStack_48,0,0);
    func_0x000107c60734 /* _CFAbsoluteTimeGetCurrent */();
    lVar5 = 0;
```

</details>

<details>
<summary>0x1001c9bd0 · +[SCAbnormalExitLogger _didUpdateOS:preferences:]</summary>

Conteneur : `+[SCAbnormalExitLogger _didUpdateOS:preferences:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000061.c#L454-L493).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x000107c40efc /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar4 = puVar3;
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c61170 /* _objc_release */(puVar3);
```

</details>

<details>
<summary>0x1001d2574 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000063.c#L1319-L1395).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.proc.pid (processus courant) | Structure d’informations du processus ; état/temps/indicateurs selon le champ consommé, pas un identifiant matériel. | appel API |

```c
  uStack_2b4 = param_1;
  func_0x000107c6100c /* _getpid */();
  puVar3 = &uStack_2c0;
  func_0x000107c61660 /* _sysctl */(puVar3,4,auStack_2b0,&uStack_2c8,0,0);
  if ((int)puVar3 == 0) {
    puVar4 = (uint *)(ulong)(bStack_28f >> 3 & 1);
```

</details>

<details>
<summary>0x1001d34c4 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000063.c#L2226-L2491).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemName` → UIDevice.systemName | Nom du système (NSString). | receveur suivi |
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  puVar10 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c5c620 /* objc:systemName */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  FUN_1001d5920();
  /* … extrait non contigu … */
  puVar10 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  FUN_1001d5920();
```

</details>

<details>
<summary>0x1001d56b8 · +[SCAbnormalExitLogger _didLastSessionTerminatedNormallyWithDidUpdateOS:isUserUpdatingOrHasUpdatedAppRecently:appTerminationType:previousAppState:preferences:]</summary>

Conteneur : `+[SCAbnormalExitLogger _didLastSessionTerminatedNormallyWithDidUpdateOS:isUserUpdatingOrHasUpdatedAppRecently:appTerminationType:previousAppState:preferences:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000064.c#L1191-L1260).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.boottime | Date/heure du démarrage (timeval). | appel API |

```c
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_60 = 0x1500000001;
  uStack_78 = 0x10;
  func_0x000107c61660 /* _sysctl */(&uStack_60,2,auStack_70,&uStack_78,0,0);
  func_0x000107c4d964 /* objc:numberWithLong: */(puVar2);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
```

</details>

<details>
<summary>0x1001d59bc · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000064.c#L1330-L1339).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
                    /* WARNING: Could not recover jumptable at 0x00010bdc0700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctlbyname_11034cca8)();
  return;
}
```

</details>

<details>
<summary>0x100209f0c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000074.c#L337-L350).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics` → host_statistics | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  undefined4 uStack_14;
  
  func_0x000107c61078 /* _mach_host_self */();
  func_0x000107c61034 /* _host_statistics */();
  func_0x000107c61078 /* _mach_host_self */();
  func_0x000107c61030 /* _host_page_size */();
```

</details>

<details>
<summary>0x10020a1d0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000074.c#L467-L482).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics` → host_statistics | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  undefined4 uStack_14;
  
  func_0x000107c61078 /* _mach_host_self */();
  func_0x000107c61034 /* _host_statistics */();
  func_0x000107c61078 /* _mach_host_self */();
  func_0x000107c61030 /* _host_page_size */();
```

</details>

<details>
<summary>0x100280378 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000092.c#L3121-L3222).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `identifierForVendor` → UIDevice.identifierForVendor (receveur probable) | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur probable |

**Retour/effet de la fonction revu :** Empreinte dérivée probable : combinaison de données incluant l’IDFV puis CC_SHA1 et construction hexadécimale ; pas l’IDFV brut ni un numéro de série.

```c
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c40efc /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
    func_0x000107c44fe0 /* objc:identifierForVendor */();
    func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
    FUN_100281b4c();
```

</details>

<details>
<summary>0x100290110 · -[AFHTTPClient initWithBaseURL:]</summary>

Conteneur : `-[AFHTTPClient initWithBaseURL:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/001/functions-000097.c#L2820-L2998).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `model` → UIDevice.model | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur suivi |
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar14 = puVar13;
  func_0x000107c4d07c /* objc:model */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar15 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar16 = puVar15;
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
```

</details>

<details>
<summary>0x1004605e0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000192.c#L851-L862).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.ncpu | Nombre de processeurs/cœurs logiques ou physiques (entier), pas un identifiant individuel. | appel API |

```c
  undefined8 uStack_18;
  
  uStack_18 = 4;
  func_0x000107c61664 /* _sysctlbyname */(&UNK_10f51b5a3 /* hw.ncpu */,&uStack_1c,&uStack_18,0,0);
  return uStack_1c;
}
```

</details>

<details>
<summary>0x100479238 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000197.c#L4431-L4470).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c616a0 /* _uname */(auStack_528);
  puVar3 = (undefined8 *)0x4;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
```

</details>

<details>
<summary>0x10052b478 · +[SCSafeAreaBaselinePersistence _isIPhoneDevice]</summary>

Conteneur : `+[SCSafeAreaBaselinePersistence _isIPhoneDevice]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000226.c#L2492-L2512).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `model` → UIDevice.model | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur suivi |

```c
  func_0x000107c40efc /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar2 = puVar1;
  func_0x000107c4d07c /* objc:model */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar3 = puVar2;
```

</details>

<details>
<summary>0x10052b4ec · +[SCSafeAreaBaselinePersistence _currentDeviceKey]</summary>

Conteneur : `+[SCSafeAreaBaselinePersistence _currentDeviceKey]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000226.c#L2526-L2564).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `model` → UIDevice.model | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur suivi |
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar1;
  func_0x000107c4d07c /* objc:model */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar4 = puVar1;
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c4d448 /* objc:nativeBounds */(puVar2);
```

</details>

<details>
<summary>0x100578570 · -[SCCarrierNetworkInfoProviderImpl initWithStorageService:]</summary>

Conteneur : `-[SCCarrierNetworkInfoProviderImpl initWithStorageService:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000241.c#L1168-L1247).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → kern.osversion | Numéro de build du système (chaîne). | appel API |

```c
    func_0x000107c61144 /* _objc_initWeak */(auStack_58,puVar2);
    uStack_60 = 0;
    iVar1 = 0xf3b2862;
    func_0x000107c61664 /* _sysctlbyname */(&UNK_10f3b2862 /* kern.osversion */,0,&uStack_60,0,0);
    if (iVar1 == -1) {
      puVar7 = (undefined *)0x0;
```

</details>

<details>
<summary>0x10058d4ac · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/003/functions-000245.c#L438-L477).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
  func_0x000107c5aa04 /* objc:sharedManager */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar2 = puVar3;
  func_0x000107c3da10 /* objc:advertisingIdentifier */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c61170 /* _objc_release */(puVar3);
```

</details>

<details>
<summary>0x1007f8a64 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/005/functions-000382.c#L423-L452).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puRam00000001137f3f80 == (undefined *)0x0) {
    func_0x000107c616a0 /* _uname */(auStack_538);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c1f0 /* objc:stringWithCString:encoding: */();
```

</details>

<details>
<summary>0x1009f7268 · -[SCAppInstallUpdateConversionValueJobProviderEntryPoint _logDeviceVersion]</summary>

Conteneur : `-[SCAppInstallUpdateConversionValueJobProviderEntryPoint _logDeviceVersion]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/008/functions-000516.c#L1280-L1311).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar3 = puVar2;
```

</details>

<details>
<summary>0x100b8f44c · -[SCAdDeviceInfoProvider getOSVersion]</summary>

Conteneur : `-[SCAdDeviceInfoProvider getOSVersion]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/009/functions-000601.c#L2813-L2847).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar4 = puVar3;
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c51804 /* objc:sc_stringWithFormat: */(puVar5,param_2,puVar1);
```

</details>

<details>
<summary>0x100b91094 · -[SCAdUser _updateAdvertiserInfoFromDevice]</summary>

Conteneur : `-[SCAdUser _updateAdvertiserInfoFromDevice]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/009/functions-000602.c#L532-L557).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
  puVar1 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x000107c5aa04 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c3da10 /* objc:advertisingIdentifier */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
```

</details>

<details>
<summary>0x100c77f78 · +[SCDeviceInstallMetadata buildInstallSessionMetadata]</summary>

Conteneur : `+[SCDeviceInstallMetadata buildInstallSessionMetadata]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-01/chunks/000/functions-000034.c#L3068-L3118).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

```c
  func_0x000107c5aa04 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar2 = puVar1;
  func_0x000107c3da10 /* objc:advertisingIdentifier */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar3 = puVar2;
  /* … extrait non contigu … */
  func_0x000107c40efc /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar4 = puVar1;
  func_0x000107c44fe0 /* objc:identifierForVendor */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar5 = puVar4;
```

</details>

<details>
<summary>0x101425968 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-01/chunks/007/functions-000491.c#L639-L932).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar11 = puVar6;
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c61170 /* _objc_release */(puVar6);
```

</details>

<details>
<summary>0x1014c0020 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-01/chunks/008/functions-000524.c#L839-L1181).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemUpdate` → SecItemUpdate | OSStatus après modification des éléments correspondants. | appel API |

```c
  func_0x000107c5f9dc /* _$sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF */(lVar6,uStack_1e0);
  func_0x000107c6142c /* _swift_bridgeObjectRelease */(lVar6);
  lVar6 = lVar8;
  func_0x000107c60b5c /* _SecItemCopyMatching */(lVar8,alStack_1b0);
  plVar15 = param_2;
  func_0x00010006c090(uStack_1d8);
  /* … extrait non contigu … */
  lVar12 = lVar6;
  func_0x000107c5f9dc /* _$sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF */(lVar6,lVar10,PTR___sypN_11034f1a8 + 8,uVar17);
  lVar13 = lVar12;
  func_0x000107c60b58 /* _SecItemAdd */();
  func_0x000107c61170 /* _objc_release */(lVar12);
  if ((int)lVar13 == -0x62d3) {
  /* … extrait non contigu … */
    func_0x000107c5f9dc /* _$sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF */(lVar8,lVar10,puVar1 + 8,uVar17);
    func_0x000107c6142c /* _swift_bridgeObjectRelease */(lVar8);
    lVar8 = lVar4;
    func_0x000107c60b64 /* _SecItemUpdate */(lVar4,lVar11);
    func_0x00010006c090(puVar9,puVar7);
    func_0x000107c6142c /* _swift_bridgeObjectRelease */(lVar6);
```

</details>

<details>
<summary>0x1014c0880 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L436-L519).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x000107c5f9dc /* _$sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF */(lVar6,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c /* _swift_bridgeObjectRelease */(lVar6);
  lVar6 = lVar3;
  FUN_107c60b60 /* _SecItemDelete */();
  func_0x00010006c090(param_1,param_2);
  func_0x000107c61170 /* _objc_release */(lVar3);
```

</details>

<details>
<summary>0x1014f83b4 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-01/chunks/008/functions-000532.c#L5216-L5537).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  func_0x000107c40efc /* objc:currentDevice */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar6 = puVar4;
  func_0x000107c5c650 /* objc:systemVersion */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c61170 /* _objc_release */(puVar4);
  /* … extrait non contigu … */
  func_0x000107c61170 /* _objc_release */(puVar6);
  uVar13 = 0x500;
  func_0x000107c60ee4 /* _bzero */(&uStack_590);
  func_0x000107c616a0 /* _uname */(&uStack_590);
  puVar10 = auStack_190;
  func_0x000107c5fb80 /* _$sSS7cStringSSSPys4Int8VG_tcfC */();
```

</details>

<details>
<summary>0x101c96f94 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-02/chunks/004/functions-000270.c#L443-L487).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
  func_0x000107c5aa04 /* objc:sharedManager */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  puVar4 = puVar3;
  func_0x000107c3da10 /* objc:advertisingIdentifier */();
  func_0x000107c61180 /* _objc_retainAutoreleasedReturnValue */();
  func_0x000107c61170 /* _objc_release */(puVar3);
```

</details>

<details>
<summary>0x1044e6f28 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/001/functions-000101.c#L2269-L2517).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)&uStack_690 + lVar11;
  _bzero(auStack_610,0x500);
  _uname(auStack_610);
  uStack_668 = uStack_1f8;
  uStack_670 = uStack_200;
```

</details>

<details>
<summary>0x1048e7ec0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/004/functions-000305.c#L5937-L6036).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  __sSS10FoundationE8EncodingVMa();
  lVar2 = (long)puVar12 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _bzero(auStack_580,0x500);
  _uname(auStack_580);
  pppuVar8 = (undefined8 ***)apuStack_180;
  ppppuVar11 = &pppuStack_80;
```

</details>

<details>
<summary>0x10493ae3c · -[FBSDKCrashHandler _saveCrashLog:]</summary>

Conteneur : `-[FBSDKCrashHandler _saveCrashLog:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/004/functions-000318.c#L2734-L2905).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf71e80 /* objc:dictionary:setObject:forKey: */(puVar2,param_2,puVar1,puVar7,&PTR____CFConstantStringClassReference_110e6d7b8 /* app_version */)
  ;
  _objc_release(puVar7);
  _uname(auStack_568);
  puVar2 = PTR_PTR_1126add78;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  /* … extrait non contigu … */
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80 /* objc:dictionary:setObject:forKey: */(puVar2,param_2,puVar1,puVar8,&PTR____CFConstantStringClassReference_110da0678 /* device_os_version */)
```

</details>

<details>
<summary>0x104947cd0 · -[FBSDKAppEventsConfigurationManager loadAppEventsConfigurationWithBlock:]</summary>

Conteneur : `-[FBSDKAppEventsConfigurationManager loadAppEventsConfigurationWithBlock:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000322.c#L411-L531).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
    func_0x00010bf5e640 /* objc:currentDevice */();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c267460 /* objc:systemVersion */();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0 /* objc:stringWithFormat: */();
```

</details>

<details>
<summary>0x104948718 · -[FBSDKAppEventsDeviceInfo _collectPersistentData]</summary>

Conteneur : `-[FBSDKAppEventsDeviceInfo _collectPersistentData]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000322.c#L1089-L1167).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210fc0 /* objc:setSysVersion: */(param_5,param_6,puVar3);
  /* … extrait non contigu … */
  func_0x00010c1a7d00 /* objc:setHeight: */(param_5);
  func_0x00010c14e120 /* objc:scale */(puVar3);
  func_0x00010c18bca0 /* objc:setDensity: */(param_5);
  _uname(auStack_558);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80 /* objc:stringWithUTF8String: */(PTR__OBJC_CLASS___NSString_1126ae4d0,param_6,auStack_158);
```

</details>

<details>
<summary>0x104948fac · +[FBSDKAppEventsDeviceInfo _readCoreCount]</summary>

Conteneur : `+[FBSDKAppEventsDeviceInfo _readCoreCount]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000322.c#L1496-L1542).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → hw.availcpu | Nombre de processeurs disponibles (entier). | appel API |

```c
  uStack_20 = 0x1900000006;
  uStack_30 = 4;
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,&uStack_24,&uStack_30,0,0);
  if ((int)puVar2 != 0) {
    uStack_24 = 0;
```

</details>

<details>
<summary>0x104952128 · +[FBSDKCodelessIndexer extInfo]</summary>

Conteneur : `+[FBSDKCodelessIndexer extInfo]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000325.c#L1385-L1535).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_570);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80 /* objc:stringWithUTF8String: */(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,auStack_170);
```

</details>

<details>
<summary>0x104957d90 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/dynamic-keychain.c#L11-L37).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `SecItemUpdate` → SecItemUpdate via pointeur chargé par dlsym | OSStatus ; données/objet via second argument pour CopyMatching, selon la requête. Le contenu n’est pas présumé être un identifiant matériel. | symbole dynamique résolu |

**Pseudo-C reconstruit manuellement depuis les instructions ARM64**, dont la transcription figure dans la source liée.

```c
int32_t FUN_104957d90(void *query, void *second_argument)
{
    if (once_11369d1a0 != -1)
        resolve_once(0x11369d1a0, 0x11309eb60, 0x104957ac8);
    return pointer_11369d198(query, second_argument); /* dlsym(..., "SecItemUpdate") */
}
```

</details>

<details>
<summary>0x104957dd8 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/dynamic-keychain.c#L39-L65).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `SecItemAdd` → SecItemAdd via pointeur chargé par dlsym | OSStatus ; données/objet via second argument pour CopyMatching, selon la requête. Le contenu n’est pas présumé être un identifiant matériel. | symbole dynamique résolu |

**Pseudo-C reconstruit manuellement depuis les instructions ARM64**, dont la transcription figure dans la source liée.

```c
int32_t FUN_104957dd8(void *query, void *second_argument)
{
    if (once_11369d1b0 != -1)
        resolve_once(0x11369d1b0, 0x11309eb78, 0x104957ac8);
    return pointer_11369d1a8(query, second_argument); /* dlsym(..., "SecItemAdd") */
}
```

</details>

<details>
<summary>0x104957e20 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/dynamic-keychain.c#L67-L93).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `SecItemCopyMatching` → SecItemCopyMatching via pointeur chargé par dlsym | OSStatus ; données/objet via second argument pour CopyMatching, selon la requête. Le contenu n’est pas présumé être un identifiant matériel. | symbole dynamique résolu |

**Pseudo-C reconstruit manuellement depuis les instructions ARM64**, dont la transcription figure dans la source liée.

```c
int32_t FUN_104957e20(void *query, void *second_argument)
{
    if (once_11369d1c0 != -1)
        resolve_once(0x11369d1c0, 0x11309eb90, 0x104957ac8);
    return pointer_11369d1b8(query, second_argument); /* dlsym(..., "SecItemCopyMatching") */
}
```

</details>

<details>
<summary>0x104957e68 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/dynamic-keychain.c#L95-L119).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `SecItemDelete` → SecItemDelete via pointeur chargé par dlsym | OSStatus ; données/objet via second argument pour CopyMatching, selon la requête. Le contenu n’est pas présumé être un identifiant matériel. | symbole dynamique résolu |

**Pseudo-C reconstruit manuellement depuis les instructions ARM64**, dont la transcription figure dans la source liée.

```c
int32_t FUN_104957e68(void *query)
{
    if (once_11369d1d0 != -1)
        resolve_once(0x11369d1d0, 0x11309eba8, 0x104957ac8);
    return pointer_11369d1c8(query); /* dlsym(..., "SecItemDelete") */
}
```

</details>

<details>
<summary>0x104960994 · +[FBSDKGateKeeperManager requestToLoadGateKeepers]</summary>

Conteneur : `+[FBSDKGateKeeperManager requestToLoadGateKeepers]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000328.c#L2189-L2249).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80 /* objc:dictionary:setObject:forKey: */(puVar5,param_2,puVar1,puVar4,&PTR____CFConstantStringClassReference_110dd5c18 /* os_version */)
```

</details>

<details>
<summary>0x10496f74c · -[FBSDKKeychainStore setData:forKey:accessibility:]</summary>

Conteneur : `-[FBSDKKeychainStore setData:forKey:accessibility:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000332.c#L86-L138).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `SecItemUpdate` → SecItemUpdate via dispatcher 0x104957d90 | Opération Keychain générique ; données/objet recherchés ou statut de modification. Pas de contenu matériel établi. | symbole dynamique résolu |
| `SecItemAdd` → SecItemAdd via dispatcher 0x104957dd8 | Opération Keychain générique ; données/objet recherchés ou statut de modification. Pas de contenu matériel établi. | symbole dynamique résolu |
| `SecItemDelete` → SecItemDelete via dispatcher 0x104957e68 | Opération Keychain générique ; données/objet recherchés ou statut de modification. Pas de contenu matériel établi. | symbole dynamique résolu |

**Retour/effet de la fonction revu :** Booléen de succès. Supprime si la donnée fournie est nil ; sinon essaie Update, puis Add si errSecItemNotFound.

```c
      func_0x00010c1d0560(puVar3);
      uVar4 = param_1;
      FUN_104957d90(param_1,puVar3);
      iVar2 = (int)uVar4;
      if (iVar2 == -0x62d4) {
  /* … */
        func_0x00010c1d0560(param_1);
        uVar4 = param_1;
        func_0x000104957dd8(param_1,0);
        iVar2 = (int)uVar4;
      }
  /* … */
    if (param_3 == 0) {
      uVar4 = param_1;
      func_0x000104957e68();
      iVar2 = 0;
      if ((int)uVar4 != -0x62d4) {
```

</details>

<details>
<summary>0x10496f884 · -[FBSDKKeychainStore dataForKey:]</summary>

Conteneur : `-[FBSDKKeychainStore dataForKey:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000332.c#L142-L188).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `SecItemCopyMatching` → SecItemCopyMatching via dispatcher 0x104957e20 | Opération Keychain générique ; données/objet recherchés ou statut de modification. Pas de contenu matériel établi. | symbole dynamique résolu |

**Retour/effet de la fonction revu :** NSData correspondant à la clé, ou nil ; type CFData vérifié après SecItemCopyMatching.

```c
  lStack_38 = 0;
  uVar1 = param_1;
  func_0x000104957e20(param_1,&lStack_38);
  if (((int)uVar1 == 0) && (lStack_38 != 0)) {
    lVar2 = lStack_38;
```

</details>

<details>
<summary>0x10497fc3c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000334.c#L5156-L5293).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
    func_0x00010bf5e640 /* objc:currentDevice */();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = unaff_x24;
    func_0x00010c267460 /* objc:systemVersion */();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
```

</details>

<details>
<summary>0x104981930 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000335.c#L1660-L1797).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
    func_0x00010bf5e640 /* objc:currentDevice */();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = unaff_x24;
    func_0x00010c267460 /* objc:systemVersion */();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
```

</details>

<details>
<summary>0x104a484e0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000372.c#L2562-L2763).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
            (ppppuVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_release(ppppuVar2);
  ppppuVar2 = ppppuVar15;
  _SecItemCopyMatching(ppppuVar15,&ppuStack_60);
  _objc_release();
  if ((int)ppppuVar2 == -0x62d4) {
```

</details>

<details>
<summary>0x104a48a6c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000372.c#L2863-L2916).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(puVar2);
    puVar2 = puVar3;
    _SecItemDelete();
    _objc_release();
    if ((int)puVar2 == -0x62d4) {
```

</details>

<details>
<summary>0x104a48c50 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000372.c#L2939-L3066).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |

```c
            (puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar3);
  puVar3 = puVar5;
  _SecItemAdd(puVar5,0);
  _objc_release();
  __s6Darwin5noErrs5Int32Vvg();
```

</details>

<details>
<summary>0x104a57b5c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000376.c#L901-L999).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `model` → UIDevice.model | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur suivi |
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0cfdc0 /* objc:model */();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_104a579bc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)auStack_558;
  _uname();
  if (iVar1 == 0) {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
```

</details>

<details>
<summary>0x104a640a4 · +[GIDAuthStateMigration passwordForService:]</summary>

Conteneur : `+[GIDAuthStateMigration passwordForService:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000379.c#L2279-L2335).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  func_0x00010bf72080 /* objc:dictionaryWithObjects:forKeys:count: */();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  _SecItemCopyMatching();
  if ((int)puVar4 == 0) {
    lVar3 = 0;
```

</details>

<details>
<summary>0x104a6538c · -[GIDEMMErrorHandler passcodeRequiredAlertWithCompletion:]</summary>

Conteneur : `-[GIDEMMErrorHandler passcodeRequiredAlertWithCompletion:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000380.c#L234-L363).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
```

</details>

<details>
<summary>0x104a65f00 · +[GIDEMMSupport parametersWithParameters:emmSupport:isPasscodeInfoRequired:]</summary>

Conteneur : `+[GIDEMMSupport parametersWithParameters:emmSupport:isPasscodeInfoRequired:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000380.c#L876-L943).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemName` → UIDevice.systemName | Nom du système (NSString). | receveur suivi |
| `systemVersion` → UIDevice.systemVersion (receveur probable) | Version du système (NSString). | receveur probable |

```c
    func_0x00010bf5e640 /* objc:currentDevice */();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c267120 /* objc:systemName */();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
  /* … extrait non contigu … */
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar3 = ppuVar1;
    func_0x00010c267460 /* objc:systemVersion */();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0 /* objc:stringWithFormat: */(puVar4,param_2,&PTR____CFConstantStringClassReference_110db27b8 /* %@ %@ */);
```

</details>

<details>
<summary>0x104a67e44 · -[GIDMDMPasscodeCache obtainKeychainInfo]</summary>

Conteneur : `-[GIDMDMPasscodeCache obtainKeychainInfo]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000380.c#L2574-L2681).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
    _objc_release(ppuVar7);
  }
  puVar2 = puRam00000001136a1d18;
  _SecItemAdd(puRam00000001136a1d18,0);
  iVar1 = (int)puVar2;
  if (iVar1 == -0x62d3) {
    _SecItemDelete(puRam00000001136a1d20);
    puVar2 = puRam00000001136a1d18;
    _SecItemAdd(puRam00000001136a1d18,0);
```

</details>

<details>
<summary>0x104b89688 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/006/functions-000407.c#L1136-L1145).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemUpdate` → SecItemUpdate | OSStatus après modification des éléments correspondants. | appel API |

**Limite :** branchement indirect interne non résolu. Le site de l’API est présent dans la plage candidate, mais le chemin depuis l’entrée reste incertain. Consulter le contexte ARM64 du JSON.

```c
                    /* WARNING: Could not recover jumptable at 0x000104b896dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b896e0)();
  return;
}
```

</details>

<details>
<summary>0x104b899e0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/006/functions-000407.c#L1149-L1158).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

**Limite :** branchement indirect interne non résolu. Le site de l’API est présent dans la plage candidate, mais le chemin depuis l’entrée reste incertain. Consulter le contexte ARM64 du JSON.

```c
                    /* WARNING: Could not recover jumptable at 0x000104b89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b89a74)();
  return;
}
```

</details>

<details>
<summary>0x104c2d0cc · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/006/functions-000428.c#L3576-L3591).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
  
  uStack_14 = 0;
  uStack_20 = 4;
  _sysctlbyname(param_1,&uStack_14,&uStack_20,0,0);
  if ((int)param_1 != 0) {
    uStack_14 = 0;
```

</details>

<details>
<summary>0x10523bd0c · -[SCSpectaclesHomeComposerEntryPoint _createDeviceStatusProviderWithDevice:]</summary>

Conteneur : `-[SCSpectaclesHomeComposerEntryPoint _createDeviceStatusProviderWithDevice:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/001/functions-000115.c#L2109-L2163).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `name` → UIDevice.name | Nom de l’appareil exposé par iOS ; disponibilité et précision dépendent des droits et de la version du système. | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d4f60 /* objc:name */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ae80 /* objc:initWithSpectaclesDevice:spectaclesManager:spectaclesAppStatusProvider:wifiSettingsManager:currentPhoneDeviceName: */(puVar1,param_2,param_3,uVar3,uVar4,uVar6,puVar8);
```

</details>

<details>
<summary>0x1052c6b30 · -[SCAudioRouteImpl displayName]</summary>

Conteneur : `-[SCAudioRouteImpl displayName]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/002/functions-000150.c#L1611-L1640).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `localizedModel` → UIDevice.localizedModel | Nom localisé de la famille matérielle (NSString). | receveur suivi |

```c
    func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
    func_0x00010c09e620 /* objc:localizedModel */();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
```

</details>

<details>
<summary>0x105388e5c · -[SCPreLoginAttestationImpl initWithBlizzardLogger:grapheneRegistry:]</summary>

Conteneur : `-[SCPreLoginAttestationImpl initWithBlizzardLogger:grapheneRegistry:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L320-L367).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
    func_0x00010bf5e640 /* objc:currentDevice */();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c267460 /* objc:systemVersion */();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
```

</details>

<details>
<summary>0x105416be8 · -[SCAdUser getUserAdId]</summary>

Conteneur : `-[SCAdUser getUserAdId]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/003/functions-000230.c#L2153-L2202).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
  func_0x00010c22bc20 /* objc:sharedManager */();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010befe540 /* objc:advertisingIdentifier */();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
```

</details>

<details>
<summary>0x10545570c · -[SCAdOperationMetricsManagerImpl logApplePromptViewWithOptInStatus:adPromptUXType:adProductType:timeViewedInSec:]</summary>

Conteneur : `-[SCAdOperationMetricsManagerImpl logApplePromptViewWithOptInStatus:adPromptUXType:adProductType:timeViewedInSec:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/003/functions-000239.c#L4904-L5003).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

```c
    func_0x00010c22bc20 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010befe540 /* objc:advertisingIdentifier */();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
  /* … extrait non contigu … */
    func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfe5f00 /* objc:identifierForVendor */();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
```

</details>

<details>
<summary>0x10576ccb0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000404.c#L4025-L5434).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar34;
  func_0x00010bfe5f00 /* objc:identifierForVendor */();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
```

</details>

<details>
<summary>0x1057b23ac · +[SCCommercePixelEventHelpers hashedAdId]</summary>

Conteneur : `+[SCCommercePixelEventHelpers hashedAdId]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000419.c#L2241-L2275).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

**Retour/effet de la fonction revu :** Chaîne hexadécimale SHA-256 obtenue via SHA256HexString: à partir de UUIDString de l’IDFA mise en minuscules.

```c
  func_0x00010c22bc20 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010befe540 /* objc:advertisingIdentifier */();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
```

</details>

<details>
<summary>0x1057b32e8 · -[SCCommercePixelMetricsLoggerImpl _buildShowcasePixelDataWithPixelId:serveItemId:productSetId:itemIds:conversionType:eventType:]</summary>

Conteneur : `-[SCCommercePixelMetricsLoggerImpl _buildShowcasePixelDataWithPixelId:serveItemId:productSetId:itemIds:conversionType:eventType:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000419.c#L2853-L2946).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
  func_0x00010c22bc20 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010befe540 /* objc:advertisingIdentifier */();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
```

</details>

<details>
<summary>0x10591a648 · -[SCGtqAdData _idfa]</summary>

Conteneur : `-[SCGtqAdData _idfa]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/007/functions-000483.c#L2959-L2983).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
  func_0x00010c22bc20 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010befe540 /* objc:advertisingIdentifier */();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
```

</details>

<details>
<summary>0x1060d06d0 · -[SCLensAlwaysOnMediaPickerSupportedDeviceProvider _deviceModel]</summary>

Conteneur : `-[SCLensAlwaysOnMediaPickerSupportedDeviceProvider _deviceModel]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/004/functions-000278.c#L2143-L2172).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_528);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0 /* objc:stringWithCString:encoding: */(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,auStack_128,4);
```

</details>

<details>
<summary>0x1060f24e0 · -[BTHTTP platformString]</summary>

Conteneur : `-[BTHTTP platformString]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/004/functions-000284.c#L2515-L2564).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.model | Description/famille du matériel ou du CPU (chaîne), pas un numéro de série. | appel API |

```c
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0x80;
  iVar1 = 0xf3678bc;
  _sysctlbyname(&DAT_10f3678bc /* hw.model */,auStack_98,&uStack_a0,0,0);
  ppuVar2 = (undefined **)0x0;
  if (iVar1 == 0) {
```

</details>

<details>
<summary>0x1060f2570 · -[BTHTTP architectureString]</summary>

Conteneur : `-[BTHTTP architectureString]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/004/functions-000284.c#L2568-L2597).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.machine | Description/famille du matériel ou du CPU (chaîne), pas un numéro de série. | appel API |

```c
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0x80;
  iVar1 = 0xf3678c5;
  _sysctlbyname(&DAT_10f3678c5 /* hw.machine */,auStack_98,&uStack_a0,0,0);
  ppuVar2 = (undefined **)0x0;
  if (iVar1 == 0) {
```

</details>

<details>
<summary>0x1060f3dcc · +[BTKeychain setData:forKey:]</summary>

Conteneur : `+[BTKeychain setData:forKey:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/004/functions-000285.c#L640-L701).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemUpdate` → SecItemUpdate | OSStatus après modification des éléments correspondants. | appel API |
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x00010c1d0560 /* objc:setObject:forKey: */(puVar2);
  func_0x00010c1d0560 /* objc:setObject:forKey: */(puVar2);
  puVar3 = puVar2;
  _SecItemCopyMatching(puVar2,0);
  if ((int)puVar3 == 0) {
    if (param_3 == 0) {
      _SecItemDelete(puVar2);
LAB_1060f3f74:
      bVar1 = true;
  /* … extrait non contigu … */
      func_0x00010bf72040 /* objc:dictionaryWithObject:forKey: */(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      _SecItemUpdate(puVar2,puVar3);
      bVar1 = (int)puVar4 == 0;
      _objc_release(puVar3);
  /* … extrait non contigu … */
    func_0x00010c1d0560 /* objc:setObject:forKey: */(puVar2);
    func_0x00010c1d0560 /* objc:setObject:forKey: */(puVar2);
    puVar3 = puVar2;
```

</details>

<details>
<summary>0x1060f3fa8 · +[BTKeychain dataForKey:]</summary>

Conteneur : `+[BTKeychain dataForKey:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/004/functions-000285.c#L705-L741).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  func_0x00010c1d0560 /* objc:setObject:forKey: */(puVar2);
  uStack_38 = 0;
  puVar3 = puVar2;
  _SecItemCopyMatching(puVar2,&uStack_38);
  uVar1 = uStack_38;
  uVar4 = 0;
```

</details>

<details>
<summary>0x1065f2790 · -[SCPublicProfileComposerFactoryImpl createViewModelWithPublicProfileId:userId:configuration:]</summary>

Conteneur : `-[SCPublicProfileComposerFactoryImpl createViewModelWithPublicProfileId:userId:configuration:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/008/functions-000528.c#L2596-L2840).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
    func_0x00010c22bc20 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010befe540 /* objc:advertisingIdentifier */();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
```

</details>

<details>
<summary>0x1065fa47c · -[SCUnifiedPublicProfileEntryPoint beginUnifiedPublicProfile]</summary>

Conteneur : `-[SCUnifiedPublicProfileEntryPoint beginUnifiedPublicProfile]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-08/chunks/008/functions-000529.c#L1539-L2728).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |

```c
        func_0x00010c22bc20 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar21;
        func_0x00010befe540 /* objc:advertisingIdentifier */();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar22;
```

</details>

<details>
<summary>0x106894d24 · -[SCContinueUserActivityHandlerLockedCameraExtensionPlugin processEvent:]</summary>

Conteneur : `-[SCContinueUserActivityHandlerLockedCameraExtensionPlugin processEvent:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/000/functions-000045.c#L5-L41).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
```

</details>

<details>
<summary>0x106a40e8c · -[AuthenticatedWebViewToolbarViewController _generateParametersWithUsernameProvider:snapTokenProvider:completion:]</summary>

Conteneur : `-[AuthenticatedWebViewToolbarViewController _generateParametersWithUsernameProvider:snapTokenProvider:completion:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/001/functions-000122.c#L1493-L1615).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
```

</details>

<details>
<summary>0x106a53c30 · -[SCCameraLockScreenWidgetEntryPoint begin]</summary>

Conteneur : `-[SCCameraLockScreenWidgetEntryPoint begin]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/001/functions-000126.c#L2561-L2659).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80 /* objc:floatValue */();
```

</details>

<details>
<summary>0x106a53ec0 · -[SCCameraLockScreenWidgetEntryPoint end]</summary>

Conteneur : `-[SCCameraLockScreenWidgetEntryPoint end]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/001/functions-000126.c#L2681-L2736).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80 /* objc:floatValue */();
```

</details>

<details>
<summary>0x106a5406c · -[SCCameraLockScreenWidgetEntryPoint _finishCleanUp]</summary>

Conteneur : `-[SCCameraLockScreenWidgetEntryPoint _finishCleanUp]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/001/functions-000126.c#L2756-L2783).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80 /* objc:floatValue */();
```

</details>

<details>
<summary>0x106aeb780 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/002/functions-000156.c#L5747-L5780).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics` → host_statistics | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  _host_page_size();
  if ((int)uVar3 == 0) {
    uStack_34 = 0xf;
    _host_statistics(uVar2,2,param_1,&uStack_34);
    bVar1 = (int)uVar2 == 0;
    if ((int)uVar2 != 0) {
```

</details>

<details>
<summary>0x106af0f50 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L2397-L2406).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
                    /* WARNING: Could not recover jumptable at 0x00010bdc06f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctl_11034cca0)();
  return;
}
```

</details>

<details>
<summary>0x106bf24c8 · -[SCAppInstallConversionValueJobProcessor initWithPerformer:circumstanceEngine:grapheneMetric:grapheneFlusher:uaSKadNetworkService:requireAuth:systemLogger:firstInstallDate:enableSkan4:]</summary>

Conteneur : `-[SCAppInstallConversionValueJobProcessor initWithPerformer:circumstanceEngine:grapheneMetric:grapheneFlusher:uaSKadNetworkService:requireAuth:systemLogger:firstInstallDate:enableSkan4:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/003/functions-000219.c#L960-L1049).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

```c
    func_0x00010bf5e640 /* objc:currentDevice */();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfe5f00 /* objc:identifierForVendor */();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
```

</details>

<details>
<summary>0x106bf3ad4 · -[SCAppInstallUpdateConversionValueUserJobProviderEntryPoint _logDeviceVersion]</summary>

Conteneur : `-[SCAppInstallUpdateConversionValueUserJobProviderEntryPoint _logDeviceVersion]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/003/functions-000219.c#L2335-L2367).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
```

</details>

<details>
<summary>0x106eea324 · -[SCSpectaclesPairingManager requestBasicDeviceInformation]</summary>

Conteneur : `-[SCSpectaclesPairingManager requestBasicDeviceInformation]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/006/functions-000387.c#L1494-L1567).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `name` → UIDevice.name | Nom de l’appareil exposé par iOS ; disponibilité et précision dépendent des droits et de la version du système. | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d4f60 /* objc:name */();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db180 /* objc:setPhoneName: */(puVar3,param_2,puVar5);
```

</details>

<details>
<summary>0x106fcdb14 · +[SCSpectaclesCryptoHelper vendorData]</summary>

Conteneur : `+[SCSpectaclesCryptoHelper vendorData]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/006/functions-000443.c#L309-L350).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe5f00 /* objc:identifierForVendor */();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
```

</details>

<details>
<summary>0x107250e18 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L6718-L6727).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
                    /* WARNING: Could not recover jumptable at 0x00010bdc0700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctlbyname_11034cca8)();
  return;
}
```

</details>

<details>
<summary>0x1072b2c60 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/009/functions-000588.c#L2061-L2127).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics64` → host_statistics64 | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  _host_page_size();
  uStack_134 = 0x3e;
  _mach_host_self();
  _host_statistics64();
  if (iVar3 == 0) {
    uVar1 = iStack_12c + iStack_124 + iStack_128;
```

</details>

<details>
<summary>0x1072df9c4 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/009/functions-000605.c#L683-L997).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics64` → host_statistics64 | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
    _bzero(puVar7,0xf8);
    iVar6 = (int)puVar7;
    _mach_host_self();
    _host_statistics64();
    if (iVar6 == 0) {
      alStack_228[0] = 0;
```

</details>

<details>
<summary>0x107bccf4c · -[SCDiscoverLogger logEditionViewStorySessionId:]</summary>

Conteneur : `-[SCDiscoverLogger logEditionViewStorySessionId:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-10/part-02/chunks/001/functions-000112.c#L724-L1299).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `advertisingIdentifier` → ASIdentifierManager.advertisingIdentifier | UUID publicitaire (IDFA), éventuellement UUID nul selon les autorisations ; pas un identifiant matériel permanent. | receveur suivi |
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

```c
      func_0x00010c22bc20 /* objc:sharedManager */(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010befe540 /* objc:advertisingIdentifier */();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
  /* … extrait non contigu … */
      func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bfe5f00 /* objc:identifierForVendor */();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
```

</details>

<details>
<summary>0x1080694e0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/000/functions-000026.c#L1551-L1677).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
      func_0x00010bf5e640 /* objc:currentDevice */();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c267460 /* objc:systemVersion */();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433c0 /* objc:compare:options: */();
```

</details>

<details>
<summary>0x10809a3c8 · -[SCValdiDeviceModule _updateDeviceSettingsIfNeeded]</summary>

Conteneur : `-[SCValdiDeviceModule _updateDeviceSettingsIfNeeded]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/000/functions-000037.c#L1091-L1145).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |
| `model` → UIDevice.model | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 8);
  *(undefined **)(param_5 + 8) = puVar2;
  func_0x00010809c12c(uVar3);
  puVar2 = puVar1;
  func_0x00010c0cfdc0 /* objc:model */();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x10);
```

</details>

<details>
<summary>0x10809d6b0 · -[SCValdiKeychainStore store:value:]</summary>

Conteneur : `-[SCValdiKeychainStore store:value:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/000/functions-000038.c#L1606-L1690).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemUpdate` → SecItemUpdate | OSStatus après modification des éléments correspondants. | appel API |

```c
  func_0x00010c1d0560 /* objc:setObject:forKey: */();
  func_0x00010c1d0560 /* objc:setObject:forKey: */(param_1);
  puVar1 = param_1;
  _SecItemAdd(param_1,0);
  puVar2 = puVar1;
  if ((int)puVar1 == -0x62d3) {
  /* … extrait non contigu … */
    func_0x00010bf72080 /* objc:dictionaryWithObjects:forKeys:count: */();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    _SecItemUpdate(param_1,puVar1);
    _objc_release();
  }
```

</details>

<details>
<summary>0x10809d814 · -[SCValdiKeychainStore get:]</summary>

Conteneur : `-[SCValdiKeychainStore get:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/000/functions-000038.c#L1694-L1724).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560 /* objc:setObject:forKey: */();
  puStack_38 = (undefined *)0x0;
  _SecItemCopyMatching(param_1,&puStack_38);
  puVar1 = puStack_38;
  if (((int)param_1 == 0) && (puStack_38 != (undefined *)0x0)) {
```

</details>

<details>
<summary>0x10809d8bc · -[SCValdiKeychainStore erase:]</summary>

Conteneur : `-[SCValdiKeychainStore erase:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/000/functions-000038.c#L1728-L1738).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
{
  func_0x00010be5c1c0 /* objc:_makeSecQueryWithKey: */();
  _objc_retainAutoreleasedReturnValue();
  _SecItemDelete();
  FUN_10809d8f8();
  return param_1 == 0;
```

</details>

<details>
<summary>0x108488994 · -[SCAdDeviceInfoProvider identifierForVendor]</summary>

Conteneur : `-[SCAdDeviceInfoProvider identifierForVendor]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/003/functions-000245.c#L1016-L1035).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `identifierForVendor` → UIDevice.identifierForVendor | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur suivi |

**Retour/effet de la fonction revu :** NSUUID renvoyé par UIDevice.identifierForVendor (peut être nil).

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe5f00 /* objc:identifierForVendor */();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
```

</details>

<details>
<summary>0x10848b89c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/003/functions-000246.c#L1804-L1823).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
```

</details>

<details>
<summary>0x1085b68ec · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/004/functions-000299.c#L898-L937).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `localizedModel` → UIDevice.localizedModel | Nom localisé de la famille matérielle (NSString). | receveur suivi |

```c
    func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c09e620 /* objc:localizedModel */();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
```

</details>

<details>
<summary>0x1086076c0 · -[SCContinueUserActivityHandlerPluginRegistryConfiguration pluginTypeForEvent:]</summary>

Conteneur : `-[SCContinueUserActivityHandlerPluginRegistryConfiguration pluginTypeForEvent:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/004/functions-000315.c#L2742-L2837).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
          func_0x00010bf5e640 /* objc:currentDevice */();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c267460 /* objc:systemVersion */();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
```

</details>

<details>
<summary>0x108aede78 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000001.c#L95-L155).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → hw.availcpu | Nombre de processeurs disponibles (entier). | appel API |

```c
      uStack_30 = 0x1900000006;
      uStack_40 = 4;
      puVar3 = &uStack_30;
      _sysctl(puVar3,2,&iStack_34,&uStack_40,0,0);
      if ((int)puVar3 == 0) goto LAB_108aedf30;
      iVar2 = 1;
```

</details>

<details>
<summary>0x108b651f0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/009/functions-000586.c#L1748-L1853).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_528);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
```

</details>

<details>
<summary>0x108b6a550 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000001.c#L159-L171).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
  
  uStack_20 = 8;
  lStack_18 = 0;
  _sysctlbyname(param_1,&lStack_18,&uStack_20,0,0);
  return (int)param_1 == 0 && lStack_18 != 0;
}
```

</details>

<details>
<summary>0x108dcbcb0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/001/functions-000101.c#L200-L233).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.ncpu | Nombre de processeurs/cœurs logiques ou physiques (entier), pas un identifiant individuel. | appel API |

```c
  if (puRam000000011372e6b8 == (undefined *)0x0) {
    uStack_30 = 4;
    puVar1 = &UNK_10f51b5a3 /* hw.ncpu */;
    _sysctlbyname(&UNK_10f51b5a3 /* hw.ncpu */,&iStack_24,&uStack_30,0,0);
    if (iStack_24 < 2) {
      uVar2 = 0x1000;
```

</details>

<details>
<summary>0x1090c5474 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/004/functions-000285.c#L1438-L1547).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  
  func_0x0001090c5afc();
  uStack_28 = extraout_x8;
  _uname(auStack_528);
  func_0x0001090c5b64();
  func_0x00010c25d8e0 /* objc:stringWithCString:encoding: */();
```

</details>

<details>
<summary>0x1090c54d0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/004/functions-000285.c#L1551-L1650).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → kern.osversion | Numéro de build du système (chaîne). | appel API |

```c
  puVar1 = &UNK_10f3b2862 /* kern.osversion */;
  puVar4 = &uStack_b0;
  uStack_28 = extraout_x8;
  _sysctlbyname(&UNK_10f3b2862 /* kern.osversion */,puVar4,&uStack_b8,0,0);
  if ((int)puVar1 == 0) {
    func_0x0001090c5b64();
```

</details>

<details>
<summary>0x109214698 · -[YYAnimatedImageView calcMaxBufferCount]</summary>

Conteneur : `-[YYAnimatedImageView calcMaxBufferCount]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/005/functions-000361.c#L1235-L1302).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics` → host_statistics | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  puVar6 = puVar4;
  _host_page_size();
  dVar10 = -0.6;
  if (((int)puVar6 == 0) && (_host_statistics(puVar4,2,auStack_8c,&uStack_44), (int)puVar4 == 0)) {
    dVar10 = (double)(long)(lStack_50 * (ulong)auStack_8c[0]) * 0.6;
  }
```

</details>

<details>
<summary>0x10982ae58 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/008/functions-000525.c#L347-L372).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.optional.neon_hpfp | Drapeau/capacité du processeur (entier/booléen), pas un identifiant individuel. | appel API |

```c
    iStack_44 = 0;
    uStack_50 = 4;
    iVar1 = 0xf580be1;
    _sysctlbyname(&UNK_10f580be1 /* hw.optional.neon_hpfp */,&iStack_44,&uStack_50,0,0);
    if ((iVar1 == 0) && (iStack_44 != 0)) {
      uRam00000001137365a0 = uRam00000001137365a0 | 0x2000;
```

</details>

<details>
<summary>0x1099a9dd0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/008/functions-000564.c#L1038-L1109).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)auStack_538;
  _uname();
  if (iVar1 < 0) {
    auStack_438[0] = 0;
```

</details>

<details>
<summary>0x109bad8fc · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000598.c#L1509-L1681).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → machdep.cpu.brand_string | Description/famille du matériel ou du CPU (chaîne), pas un numéro de série. | appel API |

```c
  puVar1 = (uint *)&uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined4 *)&UNK_10f5a3393 /* machdep.cpu.brand_string */;
  _sysctlbyname(&UNK_10f5a3393 /* machdep.cpu.brand_string */,0,&uStack_30,0,0);
  if ((int)puVar2 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)(uStack_30);
```

</details>

<details>
<summary>0x109bad9dc · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000001.c#L383-L526).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.machine | Description/famille du matériel ou du CPU (chaîne), pas un numéro de série. | appel API |

```c
  puVar2 = auStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (uint *)&DAT_10f3678c5 /* hw.machine */;
  _sysctlbyname(&DAT_10f3678c5 /* hw.machine */,0,&uStack_40,0,0);
  if ((int)puVar3 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)(uStack_40);
```

</details>

<details>
<summary>0x109badc30 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000001.c#L530-L554).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
  lStack_28 = 0;
  uStack_2c = 0;
  puVar1 = param_1;
  _sysctlbyname(param_1,0,&lStack_28,0,0);
  if ((int)puVar1 == 0) {
    if (lStack_28 == 4) {
```

</details>

<details>
<summary>0x109badcb4 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000598.c#L1685-L1764).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → CTL_HW / sous-clé reçue en argument | Attribut matériel déterminé par la sous-clé ; helper générique. | appel API |
| `_sysctl` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
  uStack_20 = 6;
  puVar2 = &uStack_20;
  uStack_1c = param_1;
  _sysctl(puVar2,2,0,&lStack_28,0,0);
  if ((int)puVar2 == 0) {
    if (lStack_28 == 4) {
```

</details>

<details>
<summary>0x109badd6c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000598.c#L1768-L1816).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.physicalcpu_max | Nombre de processeurs/cœurs logiques ou physiques (entier), pas un identifiant individuel. | appel API |
| `_sysctlbyname` → hw.logicalcpu_max | Nombre de processeurs/cœurs logiques ou physiques (entier), pas un identifiant individuel. | appel API |

```c
  iStack_24 = 1;
  uStack_30 = 4;
  puVar1 = (undefined4 *)&UNK_10f5a33d3 /* hw.physicalcpu_max */;
  _sysctlbyname(&UNK_10f5a33d3 /* hw.physicalcpu_max */,&iStack_24,&uStack_30,0,0);
  if ((int)puVar1 == 0) {
    if (iStack_24 < 1) {
```

</details>

<details>
<summary>0x109c1c18c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000600.c#L2840-L2975).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  ppuVar12 = &puStack_580;
  iVar5 = (int)&puStack_580;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_558);
  ppppuVar13 = (undefined8 ****)appuStack_158;
  pppuStack_568 = ppppuVar13;
```

</details>

<details>
<summary>0x109d06954 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-13/chunks/000/functions-000010.c#L7444-L7576).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  
  ppiVar6 = &piStack_580;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_558);
  piVar5 = &iStack_158;
  piStack_580 = piVar5;
```

</details>

<details>
<summary>0x10ad57c20 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-13/chunks/008/functions-000539.c#L1900-L1944).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics` → host_statistics | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  _mach_host_self();
  uStack_24 = 0xf;
  _host_page_size();
  _host_statistics(param_2,2,&uStack_6c,&uStack_24);
  if ((int)param_2 == 0) {
    param_1[2] = uStack_64;
```

</details>

<details>
<summary>0x10ad59bb0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-13/chunks/008/functions-000539.c#L3811-L3908).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
    ___cxa_guard_acquire();
    if ((int)param_2 != 0) {
      unaff_x20 = auStack_538;
      _uname(auStack_538);
      func_0x000107c2b054(&uStack_550,auStack_138);
      uRam0000000113836720 = uStack_548;
```

</details>

<details>
<summary>0x10ad5b2c0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-13/chunks/008/functions-000539.c#L5198-L5221).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x00010bf5e640 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
```

</details>

<details>
<summary>0x10af826c4 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/000/functions-000056.c#L2898-L2958).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  }
  lStack_38 = 0;
  uVar1 = uVar4;
  _SecItemCopyMatching(uVar4,&lStack_38);
  _CFRelease(uVar4);
  if ((int)uVar1 == 0) {
```

</details>

<details>
<summary>0x10b309898 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/005/functions-000350.c#L6882-L6914).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_info` → host_info | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  uVar3 = uVar2;
  _mach_host_self();
  uVar4 = uVar3;
  _host_info();
  lVar5 = -0x5555555555555556;
  if ((int)uVar3 != 0) {
```

</details>

<details>
<summary>0x10b7f9f28 · +[SCKeychainManager removeAllDataExcludingWhitelist:]</summary>

Conteneur : `+[SCKeychainManager removeAllDataExcludingWhitelist:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L1105-L1203).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  func_0x00010bf72080 /* objc:dictionaryWithObjects:forKeys:count: */();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _SecItemCopyMatching();
  if ((int)puVar3 == 0) {
    _objc_retain(0);
```

</details>

<details>
<summary>0x10b7fa368 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L1269-L1318).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemUpdate` → SecItemUpdate | OSStatus après modification des éléments correspondants. | appel API |

```c
  puVar4 = param_3;
  func_0x00010c1d0640 /* objc:setObject:forKeyedSubscript: */();
  uVar2 = uVar1;
  _SecItemAdd(uVar1,0);
  if ((int)uVar2 == -0x62d3) {
    puVar4 = &uStack_68;
  /* … extrait non contigu … */
    func_0x00010bf72080 /* objc:dictionaryWithObjects:forKeys:count: */();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    _SecItemUpdate(param_1,puVar3);
    _objc_release(puVar3);
  }
```

</details>

<details>
<summary>0x10b7fa650 · +[SCKeychainManager removeSynchronizableDataForKeyWithStatus:]</summary>

Conteneur : `+[SCKeychainManager removeSynchronizableDataForKeyWithStatus:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L1400-L1413).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x00010c266b60 /* objc:synchronizableQueryForKey: */();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
```

</details>

<details>
<summary>0x10b7fa68c · +[SCKeychainManager removeDataForKey:]</summary>

Conteneur : `+[SCKeychainManager removeDataForKey:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L1417-L1430).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x00010c11d440 /* objc:queryForKey: */();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return (int)uVar1 == 0;
```

</details>

<details>
<summary>0x10b7fa6cc · +[SCKeychainManager removeDataForKeyWithStatus:]</summary>

Conteneur : `+[SCKeychainManager removeDataForKeyWithStatus:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L1434-L1447).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x00010c11d440 /* objc:queryForKey: */();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
```

</details>

<details>
<summary>0x10b86da58 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000100.c#L1381-L1451).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
  func_0x00010c14c760 /* objc:sc_appScreenBounds */();
  _CGRectGetHeight();
  _objc_release(puVar2);
  _uname(auStack_538);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0 /* objc:stringWithCString:encoding: */(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,auStack_138,4);
```

</details>

<details>
<summary>0x10bd55e38 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/009/functions-000593.c#L1096-L1133).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.boottime | Date/heure du démarrage (timeval). | appel API |

```c
  alStack_40[1] = 0x10;
  _time(alStack_40);
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,alStack_40 + 2,alStack_40 + 1,0,0);
  dVar3 = (double)(alStack_40[0] - alStack_40[2]);
  if (alStack_40[2] == 0 || (int)puVar2 == -1) {
```

</details>

<details>
<summary>0x10bd860c0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/009/functions-000611.c#L1877-L1995).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.proc.pid (processus courant) | Structure d’informations du processus ; état/temps/indicateurs selon le champ consommé, pas un identifiant matériel. | appel API |

```c
  _getpid();
  uStack_2c8 = 0x288;
  puVar2 = &uStack_38;
  _sysctl(puVar2,4,auStack_2c0,&uStack_2c8,0,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined8 *)(ulong)(uStack_2a0 >> 0xb & 1);
```

</details>

<details>
<summary>0x10bdae6a0 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/009/functions-000619.c#L2816-L2835).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.logicalcpu | Nombre de processeurs/cœurs logiques ou physiques (entier), pas un identifiant individuel. | appel API |

```c
  
  uStack_30 = 4;
  iVar1 = 0xf2453e7;
  _sysctlbyname("hw.logicalcpu",&uStack_24,&uStack_30,0,0);
  if (iVar1 != 0) {
    if (param_1 != 0) {
```

</details>

### Trampolines et sélecteurs à receveur non résolu

Les trampolines sont des fonctions de relais de branchement, pas des lectures indépendantes d’une nouvelle valeur. Tous les appels repérés vers ces relais sont recoupés dans le JSON.

| Adresse | Destination sémantique | Source |
|---|---|---|
| `0x107c3da10` | advertisingIdentifier | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7085-L7094) |
| `0x107c44fe0` | identifierForVendor | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7280-L7289) |
| `0x107c60b58` | _SecItemAdd | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7722-L7731) |
| `0x107c60b5c` | _SecItemCopyMatching | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7735-L7744) |
| `0x107c60b60` | _SecItemDelete | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7748-L7757) |
| `0x107c60b64` | _SecItemUpdate | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7761-L7770) |
| `0x107c61034` | _host_statistics | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7774-L7783) |
| `0x107c61660` | _sysctl | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7787-L7796) |
| `0x107c61664` | _sysctlbyname | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7800-L7809) |
| `0x107c616a0` | _uname | [preuve](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7813-L7822) |

Ces appels à `identifierForVendor`/`advertisingIdentifier` ont un receveur non établi par le suivi local. Ils peuvent être un accès de modèle ou un relais ; ils ne sont pas comptés comme lectures directes des classes système.

| Fonction | Conteneur | Sélecteur | Preuve |
|---|---|---|---|
| `0x10494afa8` | `-[FBSDKAppEventsUtility _advertiserIDFromDynamicFrameworkResolver:shouldUseCachedManager:]` | advertisingIdentifier | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000323.c#L764-L817) |
| `0x106bf9210` | `-[SCAppInstalledInfoProvider fetchAppInstalledInfoAndLogBlizzard]` | identifierForVendor | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/003/functions-000220.c#L2967-L3075) |
| `0x107c9a52c` | `C/C++/Swift : classe/méthode non récupérée` | identifierForVendor | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-10/part-02/chunks/002/functions-000135.c#L3614-L5286) |
| `0x108441b08` | `C/C++/Swift : classe/méthode non récupérée` | identifierForVendor | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/003/functions-000227.c#L1410-L1540) |
| `0x10848bb28` | `C/C++/Swift : classe/méthode non récupérée` | identifierForVendor | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/003/functions-000246.c#L1919-L2352) |
| `0x108eca868` | `C/C++/Swift : classe/méthode non récupérée` | identifierForVendor | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/002/functions-000157.c#L1719-L1846) |
| `0x108ecdd44` | `-[SCSnapKitLogger _addCreativeKitBaseInfoToEvent:]` | identifierForVendor | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/002/functions-000158.c#L1176-L1249) |
| `0x10b084998` | `+[SCCreativeKitSnapMetadataBuilder creativeKitSnapMetadataFromExistingCreativeKitSnapMetadata:]` | identifierForVendor | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/002/functions-000180.c#L1725-L1977) |

Les autres sélecteurs génériques (`name`, `model`, `systemVersion`…) à receveur inconnu sont conservés dans le JSON. Leur seul nom ne permet pas de les assimiler à `UIDevice`.

## 3. Chaînes et métadonnées des identifiants persistants

La liste intégrale est dans `strings[]` et `objc_metadata[]` du JSON : texte, adresse/section, classe/propriété/sélecteur, IMP lorsqu’il existe, fonctions/plages utilisatrices et nature de la référence. Les utilisations distinguent instruction ARM64, constante visible dans le pseudo-C, appel de sélecteur et simple correspondance de déclaration. Une référence à une chaîne ne prouve ni son contenu à l’exécution ni son envoi sur le réseau.

| Chaîne exacte, principal | Adresse(s) | Fonctions/plages associées (aperçu) |
|---|---|---|
| `device_id` | `0x10f7716cf` | [0x10070e560](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/005/functions-000337.c#L3420-L3431), [0x10ba4a3d4](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/004/functions-000282.c#L979-L990), [0x10ba50a68](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/004/functions-000287.c#L805-L816), [0x10ba51fec](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/004/functions-000288.c#L954-L965), [0x10ba52c68](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/004/functions-000289.c#L667-L682) ; +4 dans l’index |
| `deviceId` | `0x10d181770`, `0x10f28ed42` | [0x107c41904](../analysis/device-inventory/pseudocode/Snapchat-thin/chunks/000/functions-000000.c#L7202-L7211), [0x10af26474](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/000/functions-000020.c#L735-L744), [0x10b6debc0](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/009/functions-000584.c#L2164-L2173), [0x10b7672e8](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/000/functions-000016.c#L5-L62), [0x10b77b144](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/000/functions-000023.c#L1307-L1433) ; +61 dans l’index |
| `deviceIdentifier` | Aucune correspondance exacte | Aucune fonction utilisatrice résolue |
| `registrationToken` | `0x10d53af16`, `0x10f3342ab` | Aucune fonction utilisatrice résolue |
| `SCConfigDeviceIdKeychainKey` | `0x10f3f4940` | [0x106fd5c70](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/006/functions-000446.c#L1820-L1908), [0x10b7f9c7c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L866-L885), [0x10b7f9d7c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L926-L941) |
| `config_device_id` | `0x10f7d32fd` | [0x1001162f0](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000046.c#L28-L39) |
| `persistent_device_id` | `0x10f2ec6d0` | [0x1056fc5ec](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000384.c#L1370-L1496) |
| `persistentAttestationDeviceId` | `0x10d4e586e`, `0x10f2b0f4c` | [0x10573bc24](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000397.c#L2118-L2133), [0x10573bdc4](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000397.c#L2194-L2209), [0x10573be94](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000397.c#L2232-L2247), [0x10573c034](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000397.c#L2308-L2323), [0x10573c104](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/006/functions-000397.c#L2346-L2361) |
| `durable_device_id` | `0x10f7d50b8` | [0x10b9bbb80](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/002/functions-000191.c#L1347-L1358), [0x10b9bbbc4](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/002/functions-000191.c#L1419-L1430), [0x10b9bbc08](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/002/functions-000191.c#L1491-L1502), [0x10b9bea04](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/003/functions-000195.c#L145-L156) |
| `device_id_archive` | `0x10f30ea26` | [0x10592f03c](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/007/functions-000487.c#L2081-L2115) |
| `device_id_keychain` | `0x10f30ea75` | [0x10592f144](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-07/chunks/007/functions-000487.c#L2119-L2197) |
| `fidelius_device_id.plist` | `0x10f30e852` | [0x1006e8f60](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/005/functions-000330.c#L3965-L3984) |
| `x-snap-device-id` | `0x10efb0610` | [0x100768818](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/005/functions-000354.c#L3479-L3600) |
| `X-Snap-Advertising-Id` | `0x10f40ba6a` | [0x1073a4418](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-10/part-00/chunks/000/functions-000041.c#L856-L985) |
| `SCDeviceTokenKey2` | `0x10f73f236` | [0x10b27dbec](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/004/functions-000319.c#L3788-L3810), [0x10b27dc88](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/004/functions-000319.c#L3814-L3841) |
| `SCDeviceTokenValue2` | `0x10f73f248` | [0x10b27dbec](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/004/functions-000319.c#L3788-L3810), [0x10b27dc88](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/004/functions-000319.c#L3814-L3841) |
| `device_token_hash` | `0x10f7716d9` | [0x10b4acf90](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-14/chunks/005/functions-000369.c#L525-L596), [0x10ba4a3ec](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/004/functions-000282.c#L994-L1005), [0x10ba50a80](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/004/functions-000287.c#L820-L831), [0x10ba52004](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/004/functions-000288.c#L969-L980) |

`deviceIdentifier` n’apparaît pas comme chaîne exacte dans ces sections du principal ; des variantes comme `deviceIdentifierProvider` et `_deviceIdentifierExists` sont néanmoins présentes et indexées. `registrationToken` est présent comme chaîne et nom de sélecteur, sans utilisateur de code résolu par cette analyse : une adresse de fonction n’est pas inventée.

Les champs `deviceId`, `persistentAttestationDeviceId`, `durable_device_id`, `lagunaDeviceId` ou `installationId` ne sont pas présumés dériver de l’IDFV. Les noms Spectacles/Laguna peuvent désigner un accessoire. Les champs de protocoles et les classes de fournisseurs ne prouvent pas à eux seuls une collecte sur le téléphone.

## 4. Extensions

### SnapchatNotificationServiceExt

- [0x100021c4c](../analysis/device-inventory/pseudocode/SnapchatNotificationServiceExt-thin/chunks/000/functions-000000.c#L258-L307) : `sysctlnametomib("kern.proc.pid", …)` puis `sysctl` pour le processus courant. L’entrée est une fonction C sans classe retrouvée. **Elle ne doit pas être attribuée à `-[NotificationService .cxx_destruct]`**, dont l’enveloppe initiale englobait cette zone.
- [0x100030a28](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/SnapchatNotificationServiceExt-thin/shard-00/chunks/000/functions-000006.c#L995-L1020) · `-[SCDeviceCheckExtensionImpl fetchDeviceTokenWithCompletionHandler:]` utilise **DCDevice**, `isSupported` et `generateTokenWithCompletionHandler:`. Son `currentDevice` n’est pas celui de `UIDevice`. Le jeton DeviceCheck est distinct d’un IDFV et d’un jeton APNs.
- [0x100030b50](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/SnapchatNotificationServiceExt-thin/shard-00/chunks/000/functions-000006.c#L1024-L1046) relaie `fetchDeviceTokenWithCompletionHandler:` ; [0x100011910](../analysis/device-inventory/pseudocode/SnapchatNotificationServiceExt-thin/chunks/000/functions-000000.c#L5-L254) contient aussi un appel à ce fournisseur depuis le traitement d’une tâche.
- Aucun import direct des quatre `SecItem*` recherchés, de `UIDevice` ou d’`ASIdentifierManager` n’est relevé dans cet exécutable. Cette observation n’exclut pas le travail du framework partagé.

```c
/* Lecture système, extrait normalisé de 0x100021c4c. */
sysctlnametomib("kern.proc.pid", mib, &mib_len);
mib[3] = getpid();
sysctl(mib, 4, &process_info, &size, 0, 0);
```

La normalisation ci-dessus rétablit des noms descriptifs d’après les registres ; le pseudo-C exact et son affectation approximative de `getpid()` sont accessibles par le lien de source.

### ExtensionsSharedDependencies

- [0x637e18](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/004/functions-000317.c#L69-L253) · `-[SCDevice initWithUIDevice:]` lit le build via MIB `[1,65]` et exploite `model`, `systemName`, `systemVersion` sur le paramètre `UIDevice`.
- [0x4a60dc](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/003/functions-000214.c#L1533-L1663) contient une lecture IDFV dans une routine d’empreinte dérivée utilisant `CC_SHA1`.
- Les accès Keychain sont présents, notamment [0x4389a8](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000178.c#L3015-L3075), [0x4543c4](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2541-L2635), [0x454804](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2701-L2750) et [0x454aec](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2832-L2860). Leur existence ne démontre pas que toutes les valeurs lues sont des identifiants matériels.
- **Contre-exemple utile :** [0x42a4e4](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000175.c#L2361-L2367) · `-[SCNotificationsExtensionSnapTokenAuthenticatedRequestsProvider deviceId]` renvoie **0/nil** dans cet export.
- [0x47cb48](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/003/functions-000200.c#L475-L481) · `-[SCNNotificationsAckConfig deviceId]` renvoie un champ de l’objet ; [0x5b2758](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/004/functions-000290.c#L943-L1001) · `SCAPIAuth` ajoute conditionnellement les paramètres renvoyés par un gestionnaire `deviceIDParameters:`. Ces chemins sont des accès/assemblages de données fournies.

Les chaînes des requêtes `SnapAccessTokensRequest.device_id`, `persistent_attestation_device_id` et `AckNotificationRequest.deviceId/deviceToken` sont indexées. Leur nom ne suffit pas à reconstituer la valeur transportée.

Le catalogue léger suivant regroupe les fonctions d’accès du framework, avec les mêmes champs de preuve que le principal.

<details>
<summary>0x2ef340 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/001/functions-000125.c#L902-L911).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemUpdate` → SecItemUpdate | OSStatus après modification des éléments correspondants. | appel API |

**Limite :** branchement indirect interne non résolu. Le site de l’API est présent dans la plage candidate, mais le chemin depuis l’entrée reste incertain. Consulter le contexte ARM64 du JSON.

```c
                    /* WARNING: Could not recover jumptable at 0x002ef394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ef398)();
  return;
}
```

</details>

<details>
<summary>0x2ef698 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/001/functions-000125.c#L915-L924).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

**Limite :** branchement indirect interne non résolu. Le site de l’API est présent dans la plage candidate, mais le chemin depuis l’entrée reste incertain. Consulter le contexte ARM64 du JSON.

```c
                    /* WARNING: Could not recover jumptable at 0x002ef728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ef72c)();
  return;
}
```

</details>

<details>
<summary>0x338d88 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/001/functions-000126.c#L2203-L2214).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → hw.ncpu | Nombre de processeurs/cœurs logiques ou physiques (entier), pas un identifiant individuel. | appel API |

```c
  undefined8 uStack_18;
  
  uStack_18 = 4;
  _sysctlbyname("hw.ncpu",&uStack_1c,&uStack_18,0,0);
  return uStack_1c;
}
```

</details>

<details>
<summary>0x4389a8 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000178.c#L3015-L3075).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  }
  lStack_38 = 0;
  uVar1 = uVar4;
  _SecItemCopyMatching(uVar4,&lStack_38);
  _CFRelease(uVar4);
  if ((int)uVar1 == 0) {
```

</details>

<details>
<summary>0x4543c4 · +[SCKeychainManager removeAllDataExcludingWhitelist:]</summary>

Conteneur : `+[SCKeychainManager removeAllDataExcludingWhitelist:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2541-L2635).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  func_0x00782080 /* objc:dictionaryWithObjects:forKeys:count: */();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _SecItemCopyMatching();
  if ((int)puVar2 == 0) {
    _objc_retain(0);
```

</details>

<details>
<summary>0x454804 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2701-L2750).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemAdd` → SecItemAdd | OSStatus après ajout au trousseau ; retour d’objet éventuel selon la requête. | appel API |
| `_SecItemUpdate` → SecItemUpdate | OSStatus après modification des éléments correspondants. | appel API |

```c
  puVar4 = param_3;
  func_0x0078f4e0 /* objc:setObject:forKeyedSubscript: */();
  uVar2 = uVar1;
  _SecItemAdd(uVar1,0);
  if ((int)uVar2 == -0x62d3) {
    puVar4 = &uStack_68;
  /* … extrait non contigu … */
    func_0x00782080 /* objc:dictionaryWithObjects:forKeys:count: */();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    _SecItemUpdate(param_1,puVar3);
    _objc_release(puVar3);
  }
```

</details>

<details>
<summary>0x454aec · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2832-L2860).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemCopyMatching` → SecItemCopyMatching | OSStatus + objet, données ou attributs correspondant à la requête ; contenu et clé dépendent des arguments. | appel API |

```c
  func_0x0078f4a0 /* objc:setObject:forKey: */(param_1);
  lStack_38 = 0;
  uVar1 = param_1;
  _SecItemCopyMatching(param_1,&lStack_38);
  _objc_release(param_1);
  if (param_2 != (int *)0x0) {
```

</details>

<details>
<summary>0x454ba0 · +[SCKeychainManager removeSynchronizableDataForKeyWithStatus:]</summary>

Conteneur : `+[SCKeychainManager removeSynchronizableDataForKeyWithStatus:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2864-L2877).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x00792640 /* objc:synchronizableQueryForKey: */();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
```

</details>

<details>
<summary>0x454c30 · +[SCKeychainManager removeDataForKey:]</summary>

Conteneur : `+[SCKeychainManager removeDataForKey:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2915-L2928).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x0078ac80 /* objc:queryForKey: */();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return (int)uVar1 == 0;
```

</details>

<details>
<summary>0x454c70 · +[SCKeychainManager removeDataForKeyWithStatus:]</summary>

Conteneur : `+[SCKeychainManager removeDataForKeyWithStatus:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2932-L2945).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_SecItemDelete` → SecItemDelete | OSStatus après suppression des éléments correspondants. | appel API |

```c
  func_0x0078ac80 /* objc:queryForKey: */();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _SecItemDelete();
  _objc_release(param_1);
  return uVar1;
```

</details>

<details>
<summary>0x4a5a34 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/003/functions-000214.c#L1189-L1455).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `systemName` → UIDevice.systemName | Nom du système (NSString). | receveur suivi |
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  puVar10 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  func_0x007926a0 /* objc:systemName */();
  _objc_retainAutoreleasedReturnValue();
  FUN_004a5a08();
  /* … extrait non contigu … */
  puVar10 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  func_0x007926e0 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  FUN_004a5a08();
```

</details>

<details>
<summary>0x4a60dc · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/003/functions-000214.c#L1533-L1663).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `identifierForVendor` → UIDevice.identifierForVendor (receveur probable) | UUID du fournisseur (IDFV), éventuellement nil ; pas un numéro de série matériel. | receveur probable |

**Retour/effet de la fonction revu :** Empreinte dérivée probable : combinaison de données incluant l’IDFV puis CC_SHA1 et construction hexadécimale ; pas l’IDFV brut ni un numéro de série.

```c
    puVar1 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
    func_0x007812c0 /* objc:currentDevice */(PTR__OBJC_CLASS___UIDevice_00ac2f80);
    _objc_retainAutoreleasedReturnValue();
    func_0x007845c0 /* objc:identifierForVendor */();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a679c();
```

</details>

<details>
<summary>0x4a65e8 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/003/functions-000214.c#L1799-L1832).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_host_statistics` → host_statistics | Statistiques/informations de l’hôte (notamment mémoire selon le flavor), pas un identifiant individuel. | appel API |

```c
  _host_page_size();
  if ((int)uVar3 == 0) {
    uStack_34 = 0xf;
    _host_statistics(uVar2,2,param_1,&uStack_34);
    bVar1 = (int)uVar2 == 0;
    if ((int)uVar2 != 0) {
```

</details>

<details>
<summary>0x4a7210 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/003/functions-000214.c#L2518-L2583).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.proc.pid (processus courant) | Structure d’informations du processus ; état/temps/indicateurs selon le champ consommé, pas un identifiant matériel. | appel API |

```c
  _getpid();
  puVar1 = &uStack_2c0;
  iVar4 = 4;
  _sysctl(puVar1,4,auStack_2b0,&uStack_2c8,0,0);
  if ((int)puVar1 == 0) {
    pcVar2 = (char *)(ulong)(bStack_28f >> 3 & 1);
```

</details>

<details>
<summary>0x4ad888 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/ExtensionsSharedDependencies-thin/chunks/000/functions-000000.c#L287-L296).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctlbyname` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
                    /* WARNING: Could not recover jumptable at 0x0077b71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctlbyname_0099a7c0)();
  return;
}
```

</details>

<details>
<summary>0x4ad8cc · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](../analysis/device-inventory/pseudocode/ExtensionsSharedDependencies-thin/chunks/000/functions-000000.c#L300-L309).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → nom/MIB fourni par l’appelant, non résolu | Valeur système et statut ; type dépendant du nom/MIB. | appel API |

```c
                    /* WARNING: Could not recover jumptable at 0x0077b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctl_0099a7b8)();
  return;
}
```

</details>

<details>
<summary>0x58d89c · -[AFHTTPClient initWithBaseURL:]</summary>

Conteneur : `-[AFHTTPClient initWithBaseURL:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/004/functions-000276.c#L2242-L2420).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `model` → UIDevice.model | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur suivi |
| `systemVersion` → UIDevice.systemVersion | Version du système (NSString). | receveur suivi |

```c
  func_0x007812c0 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x007894c0 /* objc:model */();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0 /* objc:currentDevice */();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x007926e0 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIScreen_00ac2c50;
```

</details>

<details>
<summary>0x637e18 · -[SCDevice initWithUIDevice:]</summary>

Conteneur : `-[SCDevice initWithUIDevice:]`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/004/functions-000317.c#L69-L253).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.osversion | Numéro de build du système (chaîne). | appel API |
| `model` → UIDevice.model (receveur probable) | Famille commerciale du matériel (NSString, p. ex. iPhone). | receveur probable |
| `systemName` → UIDevice.systemName (receveur probable) | Nom du système (NSString). | receveur probable |
| `systemVersion` → UIDevice.systemVersion (receveur probable) | Version du système (NSString). | receveur probable |

```c
  uStack_d0 = 0;
  uStack_f0 = 0x80;
  uStack_e8 = 0x4100000001;
  _sysctl(&uStack_e8,2,&uStack_e0,&uStack_f0,0,0);
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220 /* objc:stringWithUTF8String: */();
  /* … extrait non contigu … */
  _strlen(0xb639c0);
  func_0x00784e40 /* objc:initWithBytesNoCopy:length:encoding:freeWhenDone: */();
  uVar14 = param_3;
  func_0x007894c0 /* objc:model */();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x007926a0 /* objc:systemName */();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x007926e0 /* objc:systemVersion */();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
```

</details>

<details>
<summary>0x638268 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/004/functions-000317.c#L401-L410).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_uname` → uname / struct utsname | Nom, version, architecture/famille du système dans struct utsname ; valeur effective non observée. | appel API |

```c
                    /* WARNING: Could not recover jumptable at 0x0077b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uname_0099a818)(0xb636c0);
  return;
}
```

</details>

<details>
<summary>0x734708 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/005/functions-000361.c#L2692-L2729).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.boottime | Date/heure du démarrage (timeval). | appel API |

```c
  alStack_40[1] = 0x10;
  _time(alStack_40);
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,alStack_40 + 2,alStack_40 + 1,0,0);
  dVar3 = (double)(alStack_40[0] - alStack_40[2]);
  if (alStack_40[2] == 0 || (int)puVar2 == -1) {
```

</details>

<details>
<summary>0x76f60c · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/005/functions-000381.c#L3998-L4030).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.proc.pid (processus courant) | Structure d’informations du processus ; état/temps/indicateurs selon le champ consommé, pas un identifiant matériel. | appel API |

```c
  uStack_2c = param_1;
  _getpid();
  uStack_2c8 = 0x288;
  _sysctl(&uStack_38,4,auStack_2c0,&uStack_2c8,0,0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (ulong)(uStack_2a0 >> 0xb & 1);
```

</details>

<details>
<summary>0xb55a8 · C/C++/Swift : classe/méthode non récupérée</summary>

Conteneur : `C/C++/Swift : classe/méthode non récupérée`. Source : [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/000/functions-000037.c#L2821-L2870).

| Source lue/opération | Sortie probable à l’API | Preuve |
|---|---|---|
| `_sysctl` → kern.proc.pid (processus courant) | Structure d’informations du processus ; état/temps/indicateurs selon le champ consommé, pas un identifiant matériel. | appel API |

```c
  puVar4 = puVar3;
  _getpid();
  *(int *)((long)puVar3 + 0x2c) = (int)puVar4;
  _sysctl(puVar3 + 4,4,alStack_2c0,&uStack_2c8,0,0);
  _swift_release();
  if (alStack_2c0[0] < 0) {
```

</details>

## 5. Exploiter l’index unique

Le JSON est la référence exhaustive des **résultats de cette recherche définie**, y compris les candidats non confirmés. Sa clé de fonction est `id = binary:function_address` ; les sites sans entrée certaine portent un identifiant de site. Les champs `containers[].class` et `containers[].selector` répondent au croisement classe/sélecteur. `sources[]` fournit l’information lue, la sortie probable, le niveau de preuve et les sites d’appel. `strings[].uses[]` relie les chaînes aux fonctions ; `objc_metadata[]` conserve les déclarations.

```bash
# Une fonction précise
jq '[.functions[] | select(.binary=="Snapchat-thin" and .function_address=="0x100077af8")]' docs/device-inventory.json

# Lectures IDFV avec receveur suivi
jq '[.functions[] | select(any(.sources[]; .api_or_selector=="identifierForVendor" and .evidence=="receiver_traced"))]' docs/device-inventory.json

# Constantes device_id et leurs utilisateurs
jq '[.strings[] | select(.text=="device_id")]' docs/device-inventory.json
```

### Mentions pseudo-C non confirmées comme appels dans la même fonction

Ces mentions sont conservées pour ne pas perdre les résultats de recherche, mais ne gonflent pas le catalogue d’accès. Elles peuvent provenir d’un appel indirect ou d’un débordement de décompilation dans une fonction voisine.

| Binaire | Plage candidate | API mentionnée | Pseudo-C |
|---|---|---|---|
| `Snapchat-thin` | `0x1001080e4` | `uname` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-00/chunks/000/functions-000042.c#L3140-L3245) |
| `Snapchat-thin` | `0x10493acd0` | `uname` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/004/functions-000318.c#L2506-L2730) |
| `Snapchat-thin` | `0x104a67c24` | `SecItemAdd` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000380.c#L2413-L2570) |
| `Snapchat-thin` | `0x104a67c24` | `SecItemDelete` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-06/chunks/005/functions-000380.c#L2413-L2570) |
| `Snapchat-thin` | `0x1072b2bd8` | `host_statistics64` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-09/chunks/009/functions-000588.c#L1965-L2057) |
| `Snapchat-thin` | `0x10809d6b0` | `SecItemCopyMatching` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-11/chunks/000/functions-000038.c#L1606-L1690) |
| `Snapchat-thin` | `0x1090c5474` | `sysctlbyname` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/004/functions-000285.c#L1438-L1547) |
| `Snapchat-thin` | `0x109badcb4` | `sysctlbyname` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000598.c#L1685-L1764) |
| `Snapchat-thin` | `0x109c1c144` | `uname` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000600.c#L2551-L2692) |
| `Snapchat-thin` | `0x109c1c158` | `uname` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-12/chunks/009/functions-000600.c#L2696-L2836) |
| `Snapchat-thin` | `0x10b7f9e08` | `SecItemCopyMatching` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/001/functions-000072.c#L972-L1101) |
| `Snapchat-thin` | `0x10bd55fbc` | `sysctl` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/Snapchat-thin/shard-15/chunks/009/functions-000593.c#L1171-L1208) |
| `ExtensionsSharedDependencies-thin` | `0x454184` | `SecItemCopyMatching` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2257-L2408) |
| `ExtensionsSharedDependencies-thin` | `0x4542a4` | `SecItemCopyMatching` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/002/functions-000186.c#L2412-L2537) |
| `ExtensionsSharedDependencies-thin` | `0x734888` | `sysctl` | [preuve](https://github.com/DamsPTC/Snap-SS06/blob/aaf7130f3b8457de3d16074b5bea038069b845c9/decompiled/ExtensionsSharedDependencies-thin/shard-00/chunks/005/functions-000361.c#L2823-L2860) |

## 6. Limites et références

- Une fonction contenant une lecture ne signifie pas que celle-ci s’exécute sur tous les parcours ou sur toutes les versions d’iOS. Les erreurs, permissions, valeurs nulles et branches de repli restent possibles.
- La persistance après réinstallation, le partage effectif du Keychain entre l’app et les extensions, les groupes d’accès actifs et l’envoi réseau nécessitent une analyse complémentaire des signatures/entitlements et des parcours d’exécution. Ils ne sont pas affirmés ici.
- Un nom d’API est résolu à son stub/import ; les dispatchs indirects non résolus, appels construits dynamiquement, sections non traitées et fonctions en échec peuvent cacher d’autres accès. « Aucun résultat » décrit le périmètre de recherche, pas une preuve universelle d’absence.
- Les limites des fonctions et les types Ghidra sont approximatifs ; citer de préférence l’adresse d’instruction, le binaire, le commit et le niveau de preuve du JSON avec le lien vers le pseudo-C.

Références primaires pour interpréter les API :

- [Apple — sysctl / sysctlbyname](https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man3/sysctlbyname.3.html) et [XNU — constantes sysctl](https://github.com/apple-oss-distributions/xnu/blob/main/bsd/sys/sysctl.h).
- [Apple — UIDevice.identifierForVendor](https://developer.apple.com/documentation/uikit/uidevice/identifierforvendor), [model](https://developer.apple.com/documentation/uikit/uidevice/model), [name](https://developer.apple.com/documentation/uikit/uidevice/name).
- [Apple — ASIdentifierManager.advertisingIdentifier](https://developer.apple.com/documentation/adsupport/asidentifiermanager/advertisingidentifier).
- [Apple — SecItemCopyMatching](https://developer.apple.com/documentation/security/secitemcopymatching(_:_:)), [SecItemAdd](https://developer.apple.com/documentation/security/secitemadd(_:_:)), [SecItemUpdate](https://developer.apple.com/documentation/security/secitemupdate(_:_:)), [SecItemDelete](https://developer.apple.com/documentation/security/secitemdelete(_:)).
- [Apple — DCDevice](https://developer.apple.com/documentation/devicecheck/dcdevice) et [données DeviceCheck](https://developer.apple.com/documentation/devicecheck/accessing-and-modifying-per-device-data).

Les descriptions de sorties sont des interprétations statiques fondées sur ces API et sur les extraits cités ; ce document ne contient aucune valeur réelle extraite d’un appareil.
