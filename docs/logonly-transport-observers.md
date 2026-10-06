# Points d'observation du transport logonly

Analyse du principal 14.25.0.48 fourni dans le dépôt, vérifiée le 6 octobre 2026.
SHA-256 : `a1f0ad6907587bee27f9700d05106da5beec4650acb0493e2409ff99cbfbf390`.
Les classes, sélecteurs, signatures et adresses ont été recoupés directement
avec les métadonnées Objective-C du Mach-O. Les adresses sont des VA avant ASLR :
le diagnostic résout les méthodes par classe/sélecteur, sans patch d'adresse native.

## Services et sérialisation établis

Il existe **15 méthodes RPC** dans `UNISCJanusLoginService` et **12** dans
`UNISCJanusRegistrationService`. L'inscription ne se limite pas à un hypothétique
`registerWithRequest:` : les noms vérifiés figurent dans le tableau ci-dessous.
Les 27 méthodes sont observées, y compris les étapes de vérification et challenge.

Les méthodes générées préparent un handler protobuf, appellent `[request data]`,
puis transmettent ce NSData et une constante de chemin RPC à leur service gRPC.
Extraits pseudo-C normalisés (ARC omis) :

```objc
// 0x10540ab64 : -[UNISCJanusLoginService appLoginWithRequest:callOptionsBuilder:handler:]
id responseHandler = [[SCNGrpcUnaryEventHandlerImpl alloc]
    initWithHandler:handler responseClass:[SCJanusAppLoginResponse class]];
[unifiedService unaryCall:@"/snapchat.janus.api.LoginService/AppLogin"
    request:[request data] callOptionsBuilder:options handler:responseHandler];

// 0x105406ff8 : registerWithUsernamePasswordWithRequest:callOptionsBuilder:handler:
[unifiedService unaryCall:@"/snapchat.janus.api.RegistrationService/RegisterWithUsernamePassword"
    request:[request data] callOptionsBuilder:options handler:responseHandler];

// 0x1054078e0 : registerWithPhoneEmailWithRequest:callOptionsBuilder:handler:
[unifiedService unaryCall:@"/snapchat.janus.api.RegistrationService/RegisterWithPhoneEmail"
    request:[request data] callOptionsBuilder:options handler:responseHandler];
```

L'observateur de service relève la classe concrète et `serializedSize` lorsque
l'objet est un `GPBMessage` et que sa signature est compatible (`Q16@0:8`).
Cette taille est calculée, **pas une nouvelle sérialisation**. L'observateur
n'appelle ni `description`, ni `data` : ces méthodes pourraient exposer des
identifiants/mots de passe ou ajouter une seconde sérialisation. Au transport,
`NSData.length` mesure les octets déjà sérialisés remis par l'appelant.

## unaryCall n'est pas un sélecteur unique

La recherche exacte dans `analysis/binaries/Snapchat-thin/methods.tsv` trouve :

| Classe | VA | Encodage | Traitement |
| --- | --- | --- | --- |
| `SCNGrpcUnifiedGrpcService` | `0x1006255a8` | `@48@0:8@16@24@32@40` | Transport unifié observé ; retour objet conservé |
| `SCPlusGrpcService` | `0x106c78abc` | `v48@0:8@16@24@32@40` | Retour void ; pas de swizzle générique appliqué à cette classe |

`SCPlusGrpcService` relaie lui-même à un service via ce sélecteur. Il existe
également `SCBloopsGrpcServiceImpl _unaryCall:request:callOptionsBuilder:handler:`
(underscore initial), qui est un **autre** sélecteur. Le hook vise explicitement
`SCNGrpcUnifiedGrpcService`, sans présumer que tous les réseaux/clients HTTP de
l'app transitent par lui. Une invocation observée prouve la remise au transport,
**pas l'envoi d'un paquet ni la réception ou l'acceptation par le serveur**.

Le premier argument est utilisé comme `requestPath`. Les chemins au format
`/package.Service/Method` sont conservés sans query/fragment ; les autres formes
sont notées `redacted`, `nil` ou `unknown-type`. Aucun header, corps ou handler
n'est décrit ou décodé.

## Attestation et DeviceCheck

`SCPreLoginAttestationImpl` expose les wrappers login, inscription, commun et
`_getAttestationPayload:path:requestType:`. Ce dernier sérialise un
`GetAttestationPayloadRequest` et appelle le pont `0x104b30cdc` (appel à
`0x1053890bc`). `SCArgosImpl generateAttestationPayload:requestParameters:`
est un second wrapper Objective-C de ce pont. Les deux chemins sont documentés
avec leur pseudo-C dans [l'analyse de la payload](attestation-payload-analysis.md#2-producteur-pré-login-et-frontière-native).

```objc
// 0x105389030, normalisé : wrapper le plus proche du pont pré-login.
GetAttestationPayloadRequest *r = [GetAttestationPayloadRequest new];
r.requestToken = token;
r.requestPath = path;
r.requestType = internalType == 1 ? 2 : 3;
return native_104b30cdc([r data]);

// 0x105388d40 : wrapper Argos distinct.
GetAttestationPayloadRequest *r = [GetAttestationPayloadRequest new];
r.requestPath = path;
r.requestParameters = parameters;
r.requestType = 4;
return native_104b30cdc([r data]);
```

Le diagnostic note l'entrée et la taille du retour original de ces wrappers.
`requestType` dans le log est **l'argument entier du wrapper**, pas forcément
la valeur protobuf normalisée. `-1` signifie que ce point ne fournit pas cet
argument. Le pont C/C++ n'est pas interposé ; les wrappers documentés sont
observés via `method_exchangeImplementations`.

`SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:` est observée
à l'entrée et au retour synchrone. L'entrée prouve l'appel de cette méthode,
qui peut ensuite choisir sa branche d'indisponibilité. Elle ne prouve pas qu'Apple
a effectivement été appelé, ni qu'un callback asynchrone a réussi. Le bloc est
transmis intact et n'est ni exécuté ni remplacé par le diagnostic. Un token servi
par un autre chemin/cache peut éviter cette méthode.

## Cibles exactes des 34 nouveaux observateurs

La table compilée est [SS06LogOnlyTargets.inc](../spoof/SS06LogOnlyTargets.inc).
Les deux anciens observateurs de getter/token sont conservés en complément.

| Classe | Sélecteur d'instance exact | VA | Encodage | Source |
| --- | --- | --- | --- | --- |
| `SCDeviceCheckFeature` | `_appleDeviceCheckTokenWithCompletionHandler:` | `0x1053087b8` | `v24@0:8@?16` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000166.c#L2392) |
| `SCArgosImpl` | `generateAttestationPayload:requestParameters:` | `0x105388d40` | `@32@0:8@16@24` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L230) |
| `SCPreLoginAttestationImpl` | `generateAttestationPayloadForLogin:requestPath:` | `0x105388f6c` | `@32@0:8@16@24` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L371) |
| `SCPreLoginAttestationImpl` | `generateAttestationPayloadForRegister:requestPath:` | `0x105388f74` | `@32@0:8@16@24` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L385) |
| `SCPreLoginAttestationImpl` | `generateAttestationPayloadForLoginOrRegistration:requestPath:requestType:` | `0x105388f7c` | `@36@0:8@16@24i32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L399) |
| `SCPreLoginAttestationImpl` | `_getAttestationPayload:path:requestType:` | `0x105389030` | `@36@0:8@16@24i32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L430) |
| `UNISCJanusRegistrationService` | `registerWithUsernamePasswordWithRequest:callOptionsBuilder:handler:` | `0x105406ff8` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1236) |
| `UNISCJanusRegistrationService` | `appRegisterAnswerChallengeWithRequest:callOptionsBuilder:handler:` | `0x1054070dc` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1274) |
| `UNISCJanusRegistrationService` | `webRegisterWithRequest:callOptionsBuilder:handler:` | `0x1054071c0` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1312) |
| `UNISCJanusRegistrationService` | `webRegisterVerifyChallengeWithRequest:callOptionsBuilder:handler:` | `0x1054072a4` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1350) |
| `UNISCJanusRegistrationService` | `webRegisterRequestChallengeWithRequest:callOptionsBuilder:handler:` | `0x105407388` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1388) |
| `UNISCJanusRegistrationService` | `registerWithGoogleWithRequest:callOptionsBuilder:handler:` | `0x10540746c` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1426) |
| `UNISCJanusRegistrationService` | `getPreferredVerificationMethodWithRequest:callOptionsBuilder:handler:` | `0x105407550` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1464) |
| `UNISCJanusRegistrationService` | `checkEmailWithRequest:callOptionsBuilder:handler:` | `0x105407634` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1502) |
| `UNISCJanusRegistrationService` | `requestPhoneVerificationCodeWithRequest:callOptionsBuilder:handler:` | `0x105407718` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1540) |
| `UNISCJanusRegistrationService` | `verifyPhoneWithCodeWithRequest:callOptionsBuilder:handler:` | `0x1054077fc` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1578) |
| `UNISCJanusRegistrationService` | `registerWithPhoneEmailWithRequest:callOptionsBuilder:handler:` | `0x1054078e0` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1616) |
| `UNISCJanusRegistrationService` | `registerOAuthWithRequest:callOptionsBuilder:handler:` | `0x1054079c4` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1654) |
| `UNISCJanusLoginService` | `fetchLoginOptionsWithRequest:callOptionsBuilder:handler:` | `0x10540aa80` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L715) |
| `UNISCJanusLoginService` | `appLoginWithRequest:callOptionsBuilder:handler:` | `0x10540ab64` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L753) |
| `UNISCJanusLoginService` | `appLoginAnswerChallengeWithRequest:callOptionsBuilder:handler:` | `0x10540ac48` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L791) |
| `UNISCJanusLoginService` | `loginWithPasswordWithRequest:callOptionsBuilder:handler:` | `0x10540ad2c` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L829) |
| `UNISCJanusLoginService` | `loginWith1TLv1WithRequest:callOptionsBuilder:handler:` | `0x10540ae10` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L867) |
| `UNISCJanusLoginService` | `loginWith1TLv3WithRequest:callOptionsBuilder:handler:` | `0x10540aef4` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L905) |
| `UNISCJanusLoginService` | `sendLoginCodeWithRequest:callOptionsBuilder:handler:` | `0x10540afd8` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L943) |
| `UNISCJanusLoginService` | `sendODLVCodeWithRequest:callOptionsBuilder:handler:` | `0x10540b0bc` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L981) |
| `UNISCJanusLoginService` | `sendTwoFACodeWithRequest:callOptionsBuilder:handler:` | `0x10540b1a0` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L1019) |
| `UNISCJanusLoginService` | `sendChannelVerificationCodeWithRequest:callOptionsBuilder:handler:` | `0x10540b284` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L1057) |
| `UNISCJanusLoginService` | `verifyLoginCodeWithRequest:callOptionsBuilder:handler:` | `0x10540b368` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L1095) |
| `UNISCJanusLoginService` | `verifyODLVWithRequest:callOptionsBuilder:handler:` | `0x10540b44c` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L1133) |
| `UNISCJanusLoginService` | `verifyTwoFAWithRequest:callOptionsBuilder:handler:` | `0x10540b530` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L1171) |
| `UNISCJanusLoginService` | `verifyChannelWithRequest:callOptionsBuilder:handler:` | `0x10540b614` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L1209) |
| `UNISCJanusLoginService` | `reactivateAccountWithRequest:callOptionsBuilder:handler:` | `0x10540b6f8` | `v40@0:8@16@24@?32` | [pseudo-C](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L1247) |
| `SCNGrpcUnifiedGrpcService` | `unaryCall:request:callOptionsBuilder:handler:` | `0x1006255a8` | `@48@0:8@16@24@32@40` | [pseudo-C](../decompiled/Snapchat-thin/shard-00/chunks/004/functions-000281.c#L390) |

## Lecture et limites

Chaque appel reçoit un identifiant `call=N` et des événements `enter`, `return`
ou `throw`. Un identifiant associe l'entrée à la sortie **d'un seul appel** ;
ce n'est pas un identifiant de tentative de login et les appels imbriqués ont
leurs propres numéros. Une exception originale est relancée intacte, sans
journaliser son message. Les handlers, options, requêtes et retours conservent
leur identité, et l'implémentation originale est appelée exactement une fois.

L'absence d'un événement laisse plusieurs possibilités : méthode non empruntée,
cible absente/incompatible, échec avant ce point ou arrêt du processus avant
la copie. Vérifier d'abord `trace=transport-v2`, les lignes d'installation et
`transport_observers installed=34 expected=34`. Les cibles manquantes sont
retentées sur la file principale puis à l'activation de l'app.

Les tests hôte emploient des classes simulées pour les 34 signatures. Ils
vérifient les objets, sélecteurs, blocs et retours inchangés, les exceptions,
les nil, le rejet de la signature void de l'autre classe, l'absence d'appel à
`description`/`data` par le diagnostic, la suppression de query/fragment et la
présence de ces événements dans le presse-papiers simulé. Ils ne valident ni
le chargement réel sur iOS ni la décision serveur ; `ios_runtime_tested=false`.

