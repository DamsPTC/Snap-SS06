# Payload d’attestation pré-login — Snapchat iOS 14.25.0.48

Analyse statique du 6 octobre 2026. Référence du dépôt avant publication :
`25a19935c6b80a1e9c40944015cbc5471547c61a`.

## Résultat et degré de certitude

**Les descripteurs complets de `GetAttestationPayloadRequest` et
`AppLoginRequest` sont récupérés ci-dessous. Ils ne déclarent aucun champ
explicite `cryptid`, hash du Mach-O, taille de `__TEXT`/`__TEXT_EXEC`, checksum
du binaire ou liste d’entitlements. Cela ne démontre pas l’absence de ces
mesures dans les octets opaques de `clientAttestationPayload`.**

Le chemin Objective-C de pré-login renseigne seulement le chemin RPC et le
type `PayloadTypeLogin` dans l’entrée du générateur natif. Le timestamp
préparé par l’appelant est remplacé par `nil` avant cette sérialisation.
Le générateur retourne des données utilisées directement comme
`AppLoginRequest.clientAttestationPayload` : **entrée du générateur et payload
envoyée au serveur sont deux objets différents**.

Le contenu complet de la sortie native n’est pas reconstitué : son traitement
passe par plusieurs répartiteurs obfusqués. Aucun descripteur ou littéral
`GetAttestationPayloadResponse` n’a été retrouvé dans les éléments examinés.
Il serait donc incorrect de fournir un schéma de réponse prétendument complet.

Trois constats sont plus précis :

- **Établi :** le principal lui-même obtient un token `DCDevice` et renseigne
  `AppLoginRequest.iosDeviceCheckToken`, indépendamment des extensions.
- **Établi dans une voie distincte :** le code possède un producteur Apple
  App Attest et un message `VendorAttestation`. Son raccordement au champ nº 6
  du constructeur Objective-C AppLogin étudié n’est pas démontré.
- **Établi sur le fichier seulement :** `cryptid = 0`, une signature embarquée
  est présente, et deux pages échantillonnées diffèrent des empreintes de ses
  CodeDirectory. Aucune transmission de ces mesures au serveur n’est établie.

Dans ce document, **établi** signifie observable dans les octets, métadonnées
ou instructions citées ; **plausible** signifie compatible avec les éléments,
mais sans chaîne de données prouvée ; **non établi** ne signifie pas absent.
Aucun test sur appareil ni capture de payload/réponse serveur n’a été réalisé.

## Échantillon et méthode

Principal : `extracted/Payload/Snapchat.app/Snapchat`, ARM64, 332 106 544 octets.
SHA-256 :
`a1f0ad6907587bee27f9700d05106da5beec4650acb0493e2409ff99cbfbf390`.
Les VA sont non slidées, base `0x100000000` ; les offsets de fichier sont
explicitement indiqués. Ajouter le slide ASLR pour comparer à un processus.

Les tables ont été lues dans le Mach-O après résolution des fixups de pointeurs,
avec les classes Objective-C comme vérification des types de messages.
Le format observé de `GPBMessageFieldDescription` occupe 32 octets :

```c
// Reconstruction de la disposition ARM64 observée, pas du format réseau.
struct FieldDescription {
    const char *name;               // +0x00
    uintptr_t dataTypeSpecific;     // +0x08 : classe ou fonction d’enum
    uint32_t number;               // +0x10 : numéro protobuf
    int32_t hasIndex;              // +0x14 : négatif pour oneof
    uint32_t storageOffset;        // +0x18 : stockage du message en mémoire
    uint16_t flags;                // +0x1c
    uint8_t dataType;              // +0x1e
    uint8_t padding;
};
```

La disposition et les types correspondent aux en-têtes officiels protobuf
[GPBDescriptor_PackagePrivate.h](https://github.com/protocolbuffers/protobuf/blob/v29.0/objectivec/GPBDescriptor_PackagePrivate.h)
et [GPBRuntimeTypes.h](https://github.com/protocolbuffers/protobuf/blob/v29.0/objectivec/GPBRuntimeTypes.h).
Cette comparaison ne détermine pas la version exacte de la bibliothèque embarquée.
Types utiles : 0 = bool, 4 = fixed64, 7 = int32, 12 = uint64, 13 = bytes,
14 = string, 15 = message, 17 = enum. Le flag `0x02` indique repeated ;
`0x80` accompagne le descripteur d’enum. `storageSize`/`storageOffset` ne sont
ni la longueur sérialisée ni des tailles de sections du Mach-O.

Les noms conservés dans les tableaux sont ceux du runtime Objective-C.
Le suffixe `Array` exprime un champ répété ; `id_p` est un nom généré.
Le nom exact dans le fichier `.proto` source n’est pas présumé.
Les pseudo-C sont normalisés à partir des exports et recoupements ARM64 ;
ils ne constituent pas le source original.

## 1. `security.GetAttestationPayloadRequest` : schéma complet de l’entrée

`+[GetAttestationPayloadRequest descriptor]` : **`0x10b29b3f0`**.
Classe `0x112c73890`, file description `0x11336f310` (package `security`,
syntax 3), table `0x11336f328`, **7 champs**, stockage `0x38`, flags `0x1c`.
Source : [descripteur, L17966](../decompiled/Snapchat-thin/shard-14/chunks/005/functions-000326.c#L17966).

```c
// 0x10b29b3f0 : arguments significatifs de l’enregistrement.
GPBDescriptor.allocDescriptorForClass(
    GetAttestationPayloadRequest, @"GetAttestationPayloadRequest",
    fileDescription_11336f310, fields_11336f328,
    /* fieldCount */ 7, /* storageSize */ 0x38, /* flags */ 0x1c);
```

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `requestToken` | `string` | `0x11336f328` | Setter appelé avec nil dans le chemin étudié |
| 2 | `requestPath` | `string` | `0x11336f348` | `/snapchat.janus.api.LoginService/AppLogin` |
| 3 | `requestType` | `enum` | `0x11336f368` | Valeur 2 = `PayloadTypeLogin` |
| 4 | `argosConfig` | `ArgosConfig` | `0x11336f388` | Non renseigné ici ; schéma ci-dessous |
| 5 | `nonce` | `bytes` | `0x11336f3a8` | Non renseigné ici |
| 6 | `requestParameters` | `bytes` | `0x11336f3c8` | Non renseigné ici |
| 7 | `v10Only` | `uint64` | `0x11336f3e8` | Non renseigné ici ; uint64, pas bool |


Enum `PayloadType` : fonction **`0x10b29b458`**, noms `0x10e5715b4`,
valeurs int32 `0x10e57162c`, compte 6 :

| Valeur | Nom |
| --- | --- |
| 0 | `PayloadTypeUnset` |
| 1 | `PayloadTypeArgos` |
| 2 | `PayloadTypeLogin` |
| 3 | `PayloadTypeRegister` |
| 4 | `PayloadTypeRefresh` |
| 5 | `PayloadTypeSnaptokenRefresh` |

### Messages de configuration référencés

`ArgosConfig` : descripteur **`0x10060c660`**, table `0x11336f4a0`, 5 champs
([L2168](../decompiled/Snapchat-thin/shard-00/chunks/004/functions-000274.c#L2168)).
Leur existence ne prouve pas leur utilisation dans ce login.

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `commonConfigsArray` | `repeated CommonEndpointConfiguration` | `0x11336f4a0` | — |
| 2 | `useColdToken` | `bool` | `0x11336f4c0` | — |
| 3 | `useSignedToken` | `bool` | `0x11336f4e0` | — |
| 4 | `argosExperimentId` | `uint64` | `0x11336f500` | — |
| 5 | `useV12Payload` | `bool` | `0x11336f520` | — |


`CommonEndpointConfiguration` : descripteur **`0x10060c0a4`**,
table `0x11336f420`, 4 champs
([L1708](../decompiled/Snapchat-thin/shard-00/chunks/004/functions-000274.c#L1708)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `prefixPathsArray` | `repeated string` | `0x11336f420` | — |
| 2 | `exactPathsArray` | `repeated string` | `0x11336f440` | — |
| 3 | `mode` | `enum` | `0x11336f460` | Enum fourni par `0x10060c10c` |
| 4 | `sendStrictEnforcementHeader` | `bool` | `0x11336f480` | — |


L’enum de mode, noms `0x10e571518`, valeurs `0x10e571598`, contient :
0 `UnknownModeUnset`, 1 `Disabled`, 2 `Legacy`, 3 `NonBlockingFallback`,
4 `BlockingLegacyFallback`, 5 `BlockingNoFallback`,
6 `BlockingNoFallbackWithColdToken`. Ces noms décrivent des modes ; ils ne
prouvent ni un contrôle de `cryptid`, ni le mode effectivement activé.

## 2. Producteur pré-login et frontière native

| VA | Rôle vérifié | Export |
| --- | --- | --- |
| `0x104d39410` | `SCLoginJanusService _appLoginClientAttestationPayload` | [L3863](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3863) |
| `0x105388f6c` | `SCPreLoginAttestationImpl generateAttestationPayloadForLogin:requestPath:` ; type interne 1 | [L371](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L371) |
| `0x105388f7c` | Wrapper commun login/registration ; premier argument remplacé par nil | [L399](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L399) |
| `0x105389030` | `_getAttestationPayload:path:requestType:` ; création et sérialisation de la requête | [L430](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L430) |
| `0x104b30cdc` | Pont NSData vers le traitement natif | [L2780](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000406.c#L2780) |

```c
// Pseudo-C normalisé ; ARC et métriques omis.
id appLoginClientAttestationPayload(void) {                // 0x104d39410
    NSNumber *ms = @(NSDate.date.timeIntervalSince1970 * 1000);
    return [provider generateAttestationPayloadForLogin:ms
        requestPath:@"/snapchat.janus.api.LoginService/AppLogin"];
}

id generateForLogin(id suppliedToken, NSString *path) {    // 0x105388f6c
    return generateCommon(suppliedToken, path, 1);
}

id generateCommon(id ignoredToken, NSString *path, int kind) {
    // 0x105388fc4 : mov x2, #0 ; appel au getter à 0x105388fd0.
    id payload = getPayload(nil, path, kind);
    logCreationDurationAndCount();                        // 0x1053890f4
    return payload;
}

id getPayload(id token, NSString *path, int kind) {        // 0x105389030
    GetAttestationPayloadRequest *r = [GetAttestationPayloadRequest new];
    r.requestToken = token;                               // 0x105389074
    r.requestPath = path;                                 // 0x105389088
    r.requestType = kind == 1 ? 2 : 3;                    // setter 0x1053890a4
    return native_104b30cdc([r data]);                     // appel 0x1053890bc
}
```

Dans ce chemin, l’entrée protobuf normalisée est donc :

```text
requestPath (2) = "/snapchat.janus.api.LoginService/AppLogin"
requestType (3) = 2
```

Les autres champs restent aux valeurs par défaut du message neuf ; ce n’est
pas une capture des octets réseau. Aucun hash de fichier, token Apple, nonce
ou `AppLoginRequest` complet n’est passé explicitement dans cet objet d’entrée.
**Le natif peut néanmoins collecter d’autres informations ou utiliser un état
global : le petit nombre de champs d’entrée ne borne pas le contenu de sa sortie.**

### Ce qui a été récupéré à partir de `0x104b30cdc`

L’export Ghidra échoue sur la table de sauts à `0x104b30d20`. Le désassemblage
ARM64 permet toutefois de retrouver :

| Point | Observation |
| --- | --- |
| `0x1107d1b00` | Table de 29 états du pont d’entrée |
| `0x104b30d3c` | `pthread_once`, initialiseur `0x104b8cbcc` |
| `0x104b30d9c` | Lecture de `NSData.length` |
| `0x104b30f94` | `getBytes:length:` copie les octets d’entrée dans un tampon |
| `0x104b30fb4` | Appel de `0x104b30b0c` avec le conteneur de ces octets |
| `0x104b30b84` | Appel de `0x104b32b50` avec la constante `0x795d375fe909e3c8` |
| `0x104b32bb4` | Saut indirect du répartiteur ; table `0x1107d1e80`, 325 entrées |
| `0x104b36f88` | Comparaison de cette constante ; branche vers l’état 136, à `0x104b34304` |

```c
// Squelette des opérations identifiées, pas décompilation complète du natif.
id native_104b30cdc(NSData *serializedRequest) {
    pthread_once(&once_1130a7f90, init_104b8cbcc);
    ByteVector input = copyNSDataBytes(serializedRequest);
    id result = bridge_104b30b0c(&input);
    releaseTemporaryInputStorage();
    return result;
}

id bridge_104b30b0c(ByteVector *input) {
    id result;
    ByteVector *argument = input;
    void *argumentAddresses[] = { &argument };
    dispatch_104b32b50(0x795d375fe909e3c8ULL, &result, argumentAddresses);
    return result;
}
```

La constante est un **identifiant de dispatch**, pas un hash de code démontré.
L’état initial 62 compare un autre identifiant puis passe à l’état 94 ;
celui-ci reconnaît `0x795d375fe909e3c8` et passe à 136, puis 192
(`0x104b34330`), où les bornes du tampon sont lues et comparées.

Un parcours conservateur des transitions suivantes retrouve des blocs de
construction de données : appel à `0x104bbffac` en `0x104b36120`, appel à
`0x104bc02d0` en `0x104b36694`, puis `CFDataCreate` en `0x104b36914`.
Ce parcours conserve les deux issues des prédicats non résolus : il ne prouve
pas que chacune soit exécutée lors d’un login réel.

Dans `0x104bc02d0`, les appels à `0x104bca080` emploient notamment les
paramètres numériques 1 (`0x104bc0358`), 2 (`0x104bc0434`) et 6
(`0x104bc0598`, doublon à `0x104bc06b0`) avec des pointeurs et longueurs.
Mais `0x104bca080` repart lui-même vers `0x104bcc098`, avec l’identifiant
`0xc15533115fc531fd`. **Sans résolution du sérialiseur, ces constantes ne
peuvent pas être publiées comme des numéros de champs protobuf établis.**
Ni leur sens, ni le type wire, ni une mesure d’intégrité ne sont prouvés.

L’initialiseur `0x104b8cbcc` appelle aussi `0x104b8c0b0` et `0x104bb1088`,
puis démarre le thread `0x104b8cb24`, qui appelle `0x104b8d60c`.
Ces corps à contrôle indirect restent partiellement non reconstruits.
Les prédicats arithmétiques d’obfuscation et les gardes de pile
`__stack_chk_guard` ne doivent pas être rebaptisés « checksum du binaire ».
Sources : [pont et répartiteur](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000406.c#L2687),
[initialisation](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000407.c#L1579),
[construction native](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000408.c#L1475).

### `GetAttestationPayloadResponse` : limite explicite

Recherche exacte ASCII dans les 13 tranches Mach-O : **aucune occurrence**
de `GetAttestationPayloadResponse`. Aucun descripteur Objective-C correspondant
n’a été identifié. `GetAttestationPayloadRequest` est présent dans le principal
et `ExtensionsSharedDependencies` ; `AttestationEnvelopeRoot` existe également,
mais la classe du principal (`0x112c739d0`) ne fournit pas de méthode
`descriptor` ni de schéma de champs récupérable par cette voie.

Le chemin étudié ne fait pas de `parseResponse` intermédiaire : le retour du
natif est directement affecté au champ bytes nº 5. Un message natif, chiffré,
compressé ou décrit autrement reste possible. **Le nom de la classe Root ne
prouve ni l’existence d’une `GetAttestationPayloadResponse`, ni son format.**

## 3. `snapchat.janus.api.AppLoginRequest` : schéma complet

`+[SCJanusAppLoginRequest descriptor]` : **`0x106b7e02c`**, classe
`0x112b1a750`, file description `0x1131739a8`, table `0x113173b00`,
**10 champs**, stockage `0x50`, flags `0x1c`, syntax 3.
Source : [L1269](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1269).

```c
// 0x106b7e02c : paramètres du descripteur.
GPBDescriptor.allocDescriptorForClass(
    SCJanusAppLoginRequest, @"AppLoginRequest", fileDescription_1131739a8,
    fields_113173b00, 10, 0x50, 0x1c);
```

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `loginContext` | `SCJanusAppLoginContext` | `0x113173b00` | Identifiants et contexte, détaillés ci-dessous |
| 2 | `bootstrapParams` | `SCJanusAppLoginBootstrapParams` | `0x113173b20` | COF et Fidelius |
| 3 | `loginIdentifier` | `SCJanusLoginIdentifier` | `0x113173b40` | Choix d’identité de connexion |
| 4 | `authenticationSessionPayload` | `bytes` | `0x113173b60` | Octets de session d’authentification ; pas un schéma d’intégrité récupéré |
| 5 | `clientAttestationPayload` | `bytes` | `0x113173b80` | Sortie opaque de `0x104b30cdc` |
| 6 | `vendorAttestationPayloadsArray` | `repeated bytes` | `0x113173ba0` | Champ disponible ; remplissage non établi dans le constructeur étudié |
| 7 | `deviceToken` | `SCJanusDeviceToken` | `0x113173bc0` | Message Snap `DeviceToken`, distinct du token Apple |
| 8 | `iosDeviceCheckToken` | `string` | `0x113173be0` | Base64 du token Apple ou chaîne d’indisponibilité |
| 9 | `isWhatsappInstalled` | `bool` | `0x113173c00` | Renseigné dans le constructeur |
| 10 | `simCardMetadata` | `SimCardMetadata` | `0x113173c20` | Champ disponible ; remplissage non établi dans ce constructeur |


Le bloc `0x104d36d6c` ([L2369](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L2369))
effectue notamment :

```c
// Extrait normalisé du constructeur, pas l’intégralité des arguments réseau.
SCJanusAppLoginRequest *r = [SCJanusAppLoginRequest message];
r.isWhatsappInstalled = isWhatsappInstalled;
r.loginContext = [service _appLoginContext:requestId /* autres paramètres */];
r.bootstrapParams = bootstrapParams;
r.loginIdentifier = loginIdentifier;
r.clientAttestationPayload = [service _appLoginClientAttestationPayload];
    // getter 0x104d36e8c ; setter 0x104d36ea4
r.deviceToken = [service _deviceToken];                   // setter 0x104d36ecc
r.iosDeviceCheckToken = preparedDeviceCheckToken;         // setter 0x104d36ee0
r.authenticationSessionPayload = [authenticationSession payload];
[rpc appLoginWithRequest:r callOptionsBuilder:options handler:handler];
    // appel 0x104d3703c
```

Ce bloc ne montre pas de remplissage des champs 6 et 10. Cette observation
n’exclut pas un autre producteur, un pont dynamique ou une autre configuration.
Le wrapper RPC `0x10540ab64` ([L753](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L753))
choisit **`SCJanusAppLoginResponse`** comme réponse de l’appel réseau : ce
message est distinct d’une éventuelle réponse du générateur natif.

### Contexte, Blizzard, COF et Fidelius

`AppLoginContext` : descripteur **`0x10af4799c`**, table `0x113332950`,
8 champs ([L57](../decompiled/Snapchat-thin/shard-14/chunks/000/functions-000039.c#L57)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `blizzardClientId` | `string` | `0x113332950` | `getClientId` du fournisseur Blizzard |
| 2 | `loginFlowSessionId` | `string` | `0x113332970` | — |
| 3 | `clientNetworkRequestId` | `string` | `0x113332990` | — |
| 4 | `loginAttemptId` | `string` | `0x1133329b0` | — |
| 5 | `cofDeviceId` | `string` | `0x1133329d0` | `stringDeviceUuid` du fournisseur COF |
| 6 | `clientAuthenticationSessionId` | `string` | `0x1133329f0` | — |
| 7 | `persistentAttestationDeviceId` | `string` | `0x113332a10` | `0x10af82634` → NSNumber → `stringValue` dans `0x104d38ab4` |
| 8 | `cloudAccountId` | `string` | `0x113332a30` | — |


Le producteur `0x104d38ab4` ([L3459](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3459))
renseigne ces identifiants. Leur usage peut permettre une corrélation de
sessions/appareils ; leur présence ne prouve pas une mesure de chiffrement du
Mach-O. La sémantique interne de `0x10af82634` n’est pas résolue ici.

`AppLoginBootstrapParams` : **`0x10af47a04`**, table `0x1133323b0`
([L77](../decompiled/Snapchat-thin/shard-14/chunks/000/functions-000039.c#L77)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `cofTags` | `SCJanusCofTags` | `0x1133323b0` | — |
| 2 | `fideliusClientInit` | `SCJanusFideliusClientInit` | `0x1133323d0` | — |


`CofTags` : **`0x10af48310`**, table `0x113332710`
([L475](../decompiled/Snapchat-thin/shard-14/chunks/000/functions-000039.c#L475)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `routeTag` | `string` | `0x113332710` | — |
| 2 | `eTag` | `string` | `0x113332730` | — |
| 3 | `lenscoreVersion` | `int32` | `0x113332750` | — |
| 4 | `bitmap` | `bytes` | `0x113332770` | — |


`FideliusClientInit` : **`0x10af48240`**, table `0x113332550`
([L437](../decompiled/Snapchat-thin/shard-14/chunks/000/functions-000039.c#L437)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `hashedPublicKeysArray` | `repeated bytes` | `0x113332550` | — |
| 2 | `tentativeDeviceKey` | `SCJanusFideliusTentativeDeviceKey` | `0x113332570` | — |
| 3 | `fideliusDeviceId` | `bytes` | `0x113332590` | — |


`FideliusTentativeDeviceKey` : **`0x10af482a8`**, table `0x113332690`
([L456](../decompiled/Snapchat-thin/shard-14/chunks/000/functions-000039.c#L456)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `publicKey` | `bytes` | `0x113332690` | — |
| 2 | `hashedPublicKey` | `bytes` | `0x1133326b0` | — |
| 3 | `iwek` | `bytes` | `0x1133326d0` | — |
| 4 | `version` | `uint64` | `0x1133326f0` | — |


Le préparateur `0x104d37f84` ([L3025](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3025))
utilise `clientInitInfo`, `tempIdentity`, `hashedKeys`, `deviceIDBytes` et les
setters Fidelius. `0x104d38d18` assemble les deux éléments du bootstrap.
**Les noms `hashedPublicKeysArray` et `hashedPublicKey` désignent des clés
publiques ; aucune donnée de section exécutable n’est reliée à ces champs.**
L’algorithme et la totalité des producteurs Fidelius ne sont pas rétablis ici.

`DeviceToken` Snap : **`0x10af47ad4`**, table `0x1133322d0`
([L116](../decompiled/Snapchat-thin/shard-14/chunks/000/functions-000039.c#L116)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `id_p` | `string` | `0x1133322d0` | — |


Son producteur est `_deviceToken`, `0x104d394c4`
([L3897](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3897)).
Il ne faut pas confondre ce message à un champ avec `iosDeviceCheckToken`.

### Identité de connexion et messages imbriqués

`LoginIdentifier` : **`0x106b7e1c0`**, table `0x113173c60`, 10 champs dans
un oneof (`hasIndex = -1`, appel `setupOneofs:`)
([L1362](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1362)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `username` | `string` | `0x113173c60` | oneof |
| 2 | `email` | `string` | `0x113173c80` | oneof |
| 3 | `phoneNumber` | `string` | `0x113173ca0` | oneof |
| 4 | `googleIdentifier` | `SCJanusGoogleIdentifier` | `0x113173cc0` | oneof |
| 5 | `tivNonce` | `string` | `0x113173ce0` | oneof |
| 6 | `passkeyIdentifier` | `SCJanusPasskeyIdentifier` | `0x113173d00` | oneof |
| 7 | `arcpIdentifier` | `SCJanusAccountRecoveryChangePasswordIdentifier` | `0x113173d20` | oneof |
| 8 | `appleIdentifier` | `SCJanusAppleIdentifier` | `0x113173d40` | oneof |
| 9 | `phoneIdentifier` | `SCJanusPhoneIdentifier` | `0x113173d60` | oneof |
| 10 | `oneTapLoginIdentifier` | `SCJanusOneTapLoginIdentifier` | `0x113173d80` | oneof |


`GoogleIdentifier` : **`0x106b7e24c`**, table `0x113173de0` ([L1382](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1382)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `idToken` | `bytes` | `0x113173de0` | — |
| 2 | `nonce` | `bytes` | `0x113173e00` | — |


`AppleIdentifier` : **`0x106b7e2b4`**, table `0x113173e20` ([L1401](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1401)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `idToken` | `bytes` | `0x113173e20` | — |
| 2 | `nonce` | `bytes` | `0x113173e40` | — |


`PasskeyIdentifier` : **`0x106b7e31c`**, table `0x113173e60` ([L1420](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1420)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `userId` | `SCCOREUUID` | `0x113173e60` | — |
| 2 | `passkeyAuthenticationPayload` | `SCJanusPasskeyAuthenticationPayload` | `0x113173e80` | — |


`PhoneIdentifier` : **`0x106b7e384`**, table `0x113173ea0` ([L1439](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1439)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `phoneNumberCountryCode` | `string` | `0x113173ea0` | — |
| 2 | `phoneNumber` | `string` | `0x113173ec0` | — |


`AccountRecoveryChangePasswordIdentifier` : **`0x106b7e3ec`**, table `0x113173ee0` ([L1459](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1459)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `email` | `string` | `0x113173ee0` | oneof |
| 2 | `phoneNumber` | `string` | `0x113173f00` | oneof |
| 3 | `phoneIdentifier` | `SCJanusPhoneIdentifier` | `0x113173f20` | oneof |
| 4 | `username` | `string` | `0x113173f40` | oneof |


`OneTapLoginIdentifier` : **`0x106b7e478`**, table `0x113173dc0` ([L1479](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000190.c#L1479)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `oneTapLoginToken` | `string` | `0x113173dc0` | — |


`PasskeyAuthenticationPayload` : **`0x10bc89a68`**, table `0x1134027b0`
([L1847](../decompiled/Snapchat-thin/shard-15/chunks/008/functions-000541.c#L1847)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `clientDataJson` | `bytes` | `0x1134027b0` | — |
| 2 | `signature` | `bytes` | `0x1134027d0` | — |
| 3 | `authenticatorData` | `bytes` | `0x1134027f0` | — |
| 4 | `selectedCredential` | `SCJanusPasskeyCredentialDescriptor` | `0x113402810` | — |


`PasskeyCredentialDescriptor` : **`0x10bc89b38`**, table `0x113402900`
([L1885](../decompiled/Snapchat-thin/shard-15/chunks/008/functions-000541.c#L1885)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `credentialId` | `bytes` | `0x113402900` | — |


`snapchat.core.UUID` (`SCCOREUUID`) : **`0x10bcb0b5c`**, table `0x113403e20`
([L1566](../decompiled/Snapchat-thin/shard-15/chunks/008/functions-000554.c#L1566)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `highBits` | `fixed64` | `0x113403e20` | — |
| 2 | `lowBits` | `fixed64` | `0x113403e40` | — |


La présence du champ passkey `signature` ne constitue pas un flag de signature
du Mach-O : il appartient au message d’authentification par passkey.

### Métadonnées SIM

`snapchat.telephony.api.SimCardMetadata` : **`0x10bc8a098`**,
table `0x113402bb0`, 7 champs
([L143](../decompiled/Snapchat-thin/shard-15/chunks/008/functions-000542.c#L143)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `hasPhoneNumber` | `bool` | `0x113402bb0` | — |
| 2 | `simSlotIndex` | `int32` | `0x113402bd0` | — |
| 3 | `carrier` | `string` | `0x113402bf0` | — |
| 4 | `mcc` | `string` | `0x113402c10` | — |
| 5 | `mnc` | `string` | `0x113402c30` | — |
| 6 | `isDualSim` | `bool` | `0x113402c50` | — |
| 7 | `simCountryCode` | `string` | `0x113402c70` | — |


## 4. DeviceCheck : production et contenu effectivement visible

Le préparateur `0x104d37f84` demande le token à `SCDeviceCheckFeature`.
Son callback `0x104d383f4` ([L3209](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3209))
conserve la chaîne reçue puis libère le groupe de préparation. Le constructeur
la transmet à `setIosDeviceCheckToken:` en **`0x104d36ee0`**.

`_fetchDeviceTokenUsingCache:completionHandler:` à `0x105308640`
([L2336](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000166.c#L2336))
peut employer un token en cache ou déclencher la voie Apple.

```c
// -[SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:]
// 0x1053087b8, pseudo-C normalisé.
void getDeviceCheckToken(void (^completion)(NSString *)) {
    DCDevice *device = [DCDevice currentDevice];
    if (device && device.isSupported) {
        [device generateTokenWithCompletionHandler:^(NSData *token, NSError *e) {
            // Callback 0x1053088c8.
            completion(token
                ? [token base64EncodedStringWithOptions:0]
                : @"DEVICE_CHECK_TOKEN_NOT_AVAILABLE_GTE_IOS11");
        }];
    } else {
        completion(@"DEVICE_CHECK_NOT_SUPPORTED_GTE_IOS11");
    }
}
```

Sources : [appel Apple, L2392](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000166.c#L2392),
[callback, L2431](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000166.c#L2431).
CFStrings des sentinelles : `0x110dd1718` et `0x110dd1758`.

**Établi :** le champ nº 8 peut donc rendre visible la disponibilité ou
l’indisponibilité du token, et transporte sinon les octets Apple en base64.
Le callback ne transmet pas ici le détail de `NSError`. Aucune lecture du
Mach-O ni ajout explicite de `cryptid` n’y apparaît.
La documentation Apple décrit ce token comme une information opaque utilisable
avec son service ; elle ne fournit pas un sous-champ `cryptid`
([DeviceCheck côté serveur](https://developer.apple.com/documentation/devicecheck/accessing-and-modifying-per-device-data)).
L’échec générique ne suffit pas à identifier sa cause comme « binaire décrypté ».

**Le retrait de `PlugIns`, `Extensions` et `Watch` ne retire pas cette voie du
principal.** Il ne faut pas non plus assimiler `DCDevice` à `DCAppAttestService`.

## 5. App Attest et `VendorAttestation` : une autre voie

`+[VendorAttestation descriptor]` : **`0x106b80cb0`**,
package `snapchat.abusedecision`, table `0x113175578`, **15 champs**
([L1223](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000191.c#L1223)).

| Nº | Nom Objective-C du champ | Type protobuf | Entrée du descripteur | Observation |
| --- | --- | --- | --- | --- |
| 1 | `type` | `enum` | `0x113175578` | Enum à `0x106b80b18` ; 4 = AppAttest |
| 2 | `payload` | `bytes` | `0x113175598` | Données d’attestation Apple dans le producteur étudié |
| 3 | `strictEnforcementRequired` | `bool` | `0x1131755b8` | — |
| 4 | `error` | `string` | `0x1131755d8` | — |
| 5 | `androidPackageName` | `string` | `0x1131755f8` | Champ multiplateforme ; aucune affectation dans ce producteur iOS |
| 6 | `standardErrorCode` | `int32` | `0x113175618` | — |
| 7 | `appAttestEnforcement` | `enum` | `0x113175638` | Enum à `0x106b80ba0` |
| 8 | `appAttestKeyId` | `string` | `0x113175658` | — |
| 9 | `appAttestNonce` | `string` | `0x113175678` | — |
| 10 | `appAttestAssertion` | `bytes` | `0x113175698` | Assertion Apple dans ce producteur |
| 11 | `keyAttestationKeyAlias` | `string` | `0x1131756b8` | Aucune affectation dans ce producteur iOS |
| 12 | `keyAttestationNonce` | `bytes` | `0x1131756d8` | Idem |
| 13 | `keyAttestationCertChainArray` | `repeated bytes` | `0x1131756f8` | Idem |
| 14 | `keyAttestationError` | `string` | `0x113175718` | Idem |
| 15 | `keyAttestationStandardErrorCode` | `int32` | `0x113175738` | Idem |


Enum de type : noms `0x10dde74f4`, valeurs `0x10dde76c0`, compte 11.
Le préfixe commun des noms est `VendorAttestationLibrary` :
0 `UnknownUnset`, 1 `SafetyNet`, 2 `PlayIntegrity`, 3 `Sysintegrity`,
4 `AppAttest`, 5 `KeyAttestation`, 6 `PlayIntegrityAndKeyAttestation`,
7 `SafetyNetAndKeyAttestation`, 8 `PlayIntegrityStandard`,
9 `SnapchatClientAttestation`, 10 `DeviceCheck`.
Cette liste n’établit pas que chaque producteur soit actif sur iOS.

`AppAttestEnforcement` : fonction `0x106b80ba0`, noms `0x10dde76ec`,
valeurs `0x10dde7764` : 0 `AppAttestEnforcementDefaultUnset`,
1 `AppAttestEnforcementKeyAttestationOnly`,
2 `AppAttestEnforcementKeyAttestationAndAssertion`.

```c
// -[SCAppAttestStateImpl _attestKey:withRetrier:], 0x105358ac4
NSData *clientDataHash = SHA256([nonce dataUsingEncoding:encoding]);
[DCAppAttestService.sharedService attestKey:keyId
    clientDataHash:clientDataHash completionHandler:handler]; // 0x105358bb8

// _generateAssertionWithData:..., 0x10535946c
NSData *assertionHash = SHA256(dataSuppliedByCaller);
[DCAppAttestService.sharedService generateAssertion:keyId
    clientDataHash:assertionHash completionHandler:handler];  // 0x1053595ac

// _generateVendorAttestationWithKeyId:..., 0x10535994c
if (self.enforcement == 0) {
    completion(nil);
} else {
    VendorAttestation *v = [VendorAttestation message];
    v.type = 4;                           // mov w2,#4 ; setter 0x1053599e0
    v.appAttestEnforcement = self.enforcement;
    v.appAttestKeyId = keyId;
    v.appAttestNonce = self.nonce;
    v.payload = attestation;               // setter 0x105359a10
    v.appAttestAssertion = assertion;      // setter 0x105359a1c
    if (error) {
        v.error = errorToString(error.code);
        v.standardErrorCode = error.code;
    }
    completion([v data]);
}
```

Sources : [_attestKey, L2772](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000182.c#L2772),
[assertion, L3141](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000182.c#L3141),
[message vendor, L3312](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000182.c#L3312).
Le premier SHA-256 porte sur le **nonce**, le second sur les **données fournies
par l’appelant**. Aucun de ces extraits ne permet de renommer son entrée
« octets du binaire principal ».

Des appels au producteur d’assertions sont retrouvés dans la préparation de
registration (`SCGrpcRegistrationService`, `0x10536d060`, appel
`0x10536d254`) et un pont Swift/Valdi à `0x1013ef9c0`
([L3129](../decompiled/Snapchat-thin/shard-01/chunks/007/functions-000480.c#L3129)).
La déclaration `AppLoginRequest.vendorAttestationPayloadsArray` autorise
des octets répétés, mais **ne prouve pas à elle seule** que ces données vendor
soient ajoutées au login. Aucun appel direct au setter/getter de ce champ
n’a été retrouvé dans le balayage des stubs ; les appels dynamiques ne sont
pas exclus par cette recherche.

### Informations Apple pouvant renseigner l’identité ou la signature

La [documentation officielle App Attest](https://developer.apple.com/documentation/devicecheck/validating-apps-that-connect-to-your-server),
consultée le 6 octobre 2026, décrit notamment dans les données authentifiées
un hash de l’App ID, l’environnement de la clé et son identifiant. Elle décrit
aussi des extensions optionnelles `apple_validation_category_01` et
`apple_bundle_version_01`, liées à la catégorie de validation au lancement et
à la version du bundle. Ce sont des informations susceptibles de distinguer
des contextes de signature/distribution, **pas un champ documenté `cryptid`**.

**Plausible, sous conditions :** si ce parcours produit une attestation sur un
OS qui fournit ces informations, si elle est attachée à la requête et si le
serveur la vérifie, une différence d’identité/signature peut être visible sans
qu’un hash du fichier soit déclaré dans AppLogin. Ni le contenu d’une attestation
réelle de cet échantillon, ni la présence de ces extensions sur l’OS utilisé,
ni la politique de vérification serveur n’ont été établis. La documentation
actuelle ne doit pas être projetée automatiquement sur un ancien OS.

## 6. Marqueurs du fichier et recherche de leur transmission

### Mesures locales reproductibles

| Élément | Valeur dans le principal analysé |
| --- | --- |
| Commande de chiffrement | `LC_ENCRYPTION_INFO_64` (`0x2c`), offset fichier `0x1778`, taille `0x18` |
| `cryptoff` / `cryptsize` | `0x28000` / `0x102fc000` |
| `cryptid` | **0**, uint32 à l’offset fichier **`0x1788`** |
| Segment `__TEXT` | VA `0x100000000`, vmsize = filesize = `0x10328000` (271 745 024 octets) |
| Section `__TEXT.__text` | VA `0x100028000`, offset `0x28000`, taille `0x0bd8c404` (198 755 332 octets) |
| Segment `__TEXT_EXEC` | Absent dans cet échantillon |
| Commande `LC_CODE_SIGNATURE` | Offset `0x40e0`, dataoff `0x134db9c0`, datasize `0x7dd170` |
| CodeDirectory principale | Offset `0x134db9fc`, version `0x20500`, flags embarqués `0`, SHA-1, pages de 4 096 octets |
| CodeDirectory alternative | Offset `0x137e0c7b`, SHA-256, flags embarqués `0` |
| Entitlements XML | Blob à `0x137dfdd3`, longueur incluant en-tête 2 307 octets |
| Entitlements DER | Blob à `0x137e06d6`, longueur incluant en-tête 1 445 octets |

Le sens de `cryptid = 0` est « non chiffré » dans la commande Mach-O
([XNU loader.h](https://github.com/apple-oss-distributions/xnu/blob/main/EXTERNAL_HEADERS/mach-o/loader.h)).
Cela caractérise le fichier ; cela ne démontre ni son histoire de déchiffrement,
ni une lecture/transmission de cette valeur par l’app.

L’entitlement XML contient notamment `application-identifier`,
`com.apple.developer.team-identifier` et `keychain-access-groups`.
`get-task-allow` et `com.apple.developer.devicecheck.appattest-environment`
ne figurent pas dans **ce blob XML**. Les entitlements effectifs d’une app
réinstallée/resignée ne sont pas déduits de cette seule observation, ni de la
présence d’un autre blob DER. Les flags de la CodeDirectory ne sont pas les
flags de validation du processus renvoyés par l’OS.

Une comparaison locale de pages de 4 096 octets avec les entrées de hash des
deux CodeDirectory donne :

| Index de page / offset fichier | SHA-1 embarqué vs calculé | SHA-256 embarqué vs calculé |
| --- | --- | --- |
| 0 / `0x0` | Correspondance | Correspondance |
| 40 / `0x28000` | Différence | Différence |
| 41 / `0x29000` | Différence | Différence |

Exemple, page à `0x28000`, CodeDirectory SHA-256 :

```text
empreinte stockée : 2f0f58696fe423fcf18139a73f325e6c4c52f1337b9476018c4639e44550a385
SHA256 du fichier : 1ac901a3b9c834691826441201b2cf2d7ff5ff41dddcb0d09798227d99649ca8
```

Méthode : pour chaque CodeDirectory, lire `hashOffset`, `hashSize`,
`hashType`, `pageSize`, `codeLimit` et comparer le hash des octets du fichier
à `CodeDirectory + hashOffset + index * hashSize`
([structure officielle XNU](https://github.com/apple-oss-distributions/xnu/blob/main/osfmk/kern/cs_blobs.h)).
Ce contrôle ponctuel établit des différences d’octets/empreintes. Il ne valide
pas toute la signature CMS, n’émule pas la politique iOS/FairPlay, ne détermine
pas la cause de la différence et **ne montre aucun envoi au serveur**.
Une signature présente n’équivaut donc ni à une signature vérifiée, ni à un
flag de signature inclus dans la payload. Ces mesures concernent le principal
source, pas les IPA diagnostiques après re-signature.

### Résultats des recherches d’accès à l’intégrité

Dans le principal, les littéraux ASCII `cryptid`, `LC_ENCRYPTION_INFO` et
`__TEXT_EXEC` n’ont pas été retrouvés. Cette absence est peu probante pour un
parseur utilisant les constantes numériques `0x21`/`0x2c` ou des chaînes
déchiffrées à l’exécution. Les recherches de strings/imports n’épuisent pas
les lectures directes de mémoire, appels indirects, symboles résolus à la
volée ou traitements effectués par l’OS.

Des accès aux sections et des fonctions de hash existent ailleurs dans le
principal. Deux exemples vérifiés évitent des rapprochements trompeurs :

- `0x106aec478`, appel `getsectiondata` à `0x106aec580`, lit
  `__DATA.__crash_info` et des métadonnées Mach-O
  ([L237](../decompiled/Snapchat-thin/shard-09/chunks/002/functions-000157.c#L237)).
- `0x10bd870dc` et `0x10bd87e28`, appels à `0x10bd870fc` et
  `0x10bd87e58`, lisent **`__TEXT.__swift5_proto`**, pas une empreinte du
  code exécutable ([L2556 et suivantes](../decompiled/Snapchat-thin/shard-15/chunks/009/functions-000611.c#L2556)).

Leur présence ne relie pas ces mesures à `clientAttestationPayload`.
De même, les strings `checksum` ou une référence à `get-task-allow` ne suffisent
pas à démontrer une affectation dans AppLogin. Aucun chemin complet
« lecture de cryptid/sections/signature → calcul de mesure → sérialisation
dans la payload de login » n’a été établi.

## 7. Réponse ciblée : que peut apprendre le serveur ?

| Marqueur envisagé | Ce qui est établi | Ce qui reste plausible ou non établi |
| --- | --- | --- |
| `cryptid = 0` | Valeur du fichier source ; aucun champ explicite dans les deux requêtes | Lecture et encodage internes par le natif non exclus, mais non retracés |
| Hash du binaire/de sections | Hashes de CodeDirectory présents ; différences ponctuelles constatées | Aucun hash de ces octets relié à un champ envoyé |
| Taille `__TEXT` / `__TEXT_EXEC` | Tailles locales relevées ; `__TEXT_EXEC` absent | Aucune transmission de ces tailles démontrée ; elles seules ne prouvent pas un déchiffrement |
| Checksum d’intégrité | Aucun champ explicite correspondant | Une mesure ou un verdict interne dans la sortie native opaque reste possible |
| Signature/entitlements | Signature embarquée et XML observables localement ; producteur App Attest présent | Pas de flags OS ou d’entitlements sérialisés établis ; App Attest peut fournir des informations d’identité/validation sous les conditions décrites |
| DeviceCheck | Champ nº 8, token base64 ou sentinelle d’indisponibilité, chemin principal prouvé | Déclencheur d’échec et politique serveur inconnus ; pas de bit « cryptid=0 » identifié |
| Fidelius | Clés publiques/hash de clés, identifiant device, version dans le bootstrap | Pas de preuve de hash du fichier dans ces champs |
| Blizzard / identifiants persistants | Contexte AppLogin effectivement renseigné | Corrélation possible ; ne constitue pas une preuve de déchiffrement |
| `clientAttestationPayload` | Retour du natif vers champ bytes nº 5 | Contenu interne incomplet ; principale limite à une conclusion négative |
| `vendorAttestationPayloadsArray` | Schéma repeated bytes ; producteur vendor séparé identifié | Affectation au login étudié et présence d’extensions Apple non établies |
| Session / passkey | Blobs d’authentification et signature passkey définis dans le schéma | Aucune assimilation justifiée à une mesure d’intégrité du Mach-O |

**Conclusion opérationnelle de l’analyse : on ne peut pas affirmer que le
serveur reçoit `cryptid = 0`, ni qu’il est incapable de distinguer le client
modifié.** Le schéma d’entrée ne contient pas une telle mesure explicite,
mais le contenu natif opaque et les mécanismes Apple empêchent de transformer
cette observation en preuve d’indétectabilité. Rien ici n’établit non plus
qu’une de ces différences soit la cause de SS03.

Pour clore l’incertitude, il faudrait disposer d’une sortie native réelle et
du message AppLogin sérialisé correspondant dans un environnement de test,
résoudre le sérialiseur natif et relier chaque sous-champ à son producteur.
Un verdict serveur ou l’affichage d’un code d’erreur ne remplace pas cette
chaîne de preuves. Le présent rapport fournit les descripteurs, points
d’affectation et frontières non résolues ; il ne prétend pas avoir récupéré
la totalité du format opaque.
