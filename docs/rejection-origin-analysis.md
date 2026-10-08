# Localiser l’apparition du refus de connexion/inscription

Analyse du 8 octobre 2026, base `e4943732553f09b10ab6819ae4d1f497d76d0313`.
Les captures privées ne sont pas publiées. Aucun verdict sur une règle serveur
ne doit être déduit du nom de ce dépôt ou d’un conseil général d’attente.

## Ce qui est établi par les captures v6

| Appel | Résultat à la frontière du callback Janus |
| --- | --- |
| LoginWithPassword | statut 16, libellé de schéma ErrBlocked, message de restriction temporaire, pas de code SS dans le texte capturé |
| RegisterWithUsernamePassword | statut 20, libellé de schéma ErrBlocked, message de restriction temporaire avec SS03 |

Il s’agit de deux énumérations différentes. Ces résultats ne révèlent pas le
signal déclencheur, la durée réelle, l’ordre des contrôles internes, un éventuel
SS06 non exposé, ni l’origine réseau indépendante de l’objet de réponse.

## Chemin client retrouvé

Les services générés construisent un `SCNGrpcUnaryEventHandlerImpl` avec le bloc
de réponse et la classe protobuf, puis sérialisent la requête et passent le
handler **objet** à `SCNGrpcUnifiedGrpcService unaryCall:request:callOptionsBuilder:handler:`.

- [Inscription, 0x105406ff8](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000225.c#L1236).
- [Connexion, 0x10540ad2c](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L829).
- [Transport unifié, 0x1006255a8](../decompiled/Snapchat-thin/shard-00/chunks/004/functions-000281.c#L390).
- [Réception onEvent:status:, 0x100837a64](../decompiled/Snapchat-thin/shard-00/chunks/006/functions-000393.c#L1370).
- [Signature vérifiée de ce handler : v32@0:8@16@24](../objc/Snapchat-thin/fe/SCNGrpcUnaryEventHandlerImpl-112bfe568.h).

`onEvent:status:` traite l’événement avec la classe de réponse lorsque le statut
de transport est nil ; sinon il construit un NSError et transmet une réponse
nil. Il appelle ensuite le bloc à deux arguments. Le pseudo-C a des types et
limites approximatifs : l’instrumentation vérifie les signatures runtime et
journalise le type réel de l’événement, sans supposer systématiquement NSData.

Le statut transport [SCNGrpcStatus](../objc/Snapchat-thin/87/SCNGrpcStatus-112ce4a68.h)
expose `statusCode` (entier 64 bits) et `errorString`. Ce code est journalisé dans
`grpc_status_code`, séparément du `status_code` Janus.
[SCJanusErrorData](../objc/Snapchat-thin/e3/SCJanusErrorData-112c1fc40.h)
n’expose dans ses métadonnées qu’un `humanReadableErrorMessage` : aucun champ
de motif détaillé supplémentaire n’a été établi dans ce message.

## Correction du header d’inscription

[SCJanusRegisterWithUsernamePasswordRequest](../objc/Snapchat-thin/0b/SCJanusRegisterWithUsernamePasswordRequest-112a36f00.h)
porte `registrationHeader` et `hasRegistrationHeader`.
[SCJanusRegistrationHeader](../objc/Snapchat-thin/42/SCJanusRegistrationHeader-112b1b8d0.h)
porte `clientAttestationPayload` et `iosDeviceCheckToken`.
V6 cherchait les champs directs puis `loginHeader`, ce qui expliquait
`getter_unavailable`. V7 lit également le header d’inscription présent, sans
autocréer un header absent. Cela permet de comparer l’empreinte du payload
généré à celle de son champ dans la requête ; ce n’est pas une preuve d’acceptation.

## Observations v7 et critères de lecture

1. Vérifier `trace=responses-v7`, les 34 cibles historiques et
   `receive_observer installed=1 expected=1`.
2. Relever `rpc.request` puis `transport.bind`. Le lien utilise le handler
   concret et la pile RPC en cours, avec égalité de chemin. Les requêtes hors
   ordre ne sont pas rapprochées par horodatage ou par « dernier appel ».
3. Examiner `transport.event`. Si l’événement est NSData et borné à 256 Kio,
   son empreinte et les champs de statut/message sélectionnés par les numéros
   du schéma runtime sont lus avant l’appel original au décodeur. Aucun dump
   complet de corps ni seconde sérialisation n’est effectué.
4. Vérifier `rpc.response.transport_delivery_link=same_onEvent_stack` et son
   `transport_event_call`. Comparer `wire_status_code`/`wire_message` aux champs
   de la réponse décodée. Le code wire ne suppose pas la sélection d’un oneof
   ni la fusion de champs répétés : les cas ambigus restent explicites.
5. Conserver `origin_stack` et `callback_stack` : les noms de binaires et offsets
   permettent de rechercher les appelants natifs. Ces piles sont bornées et ne
   contiennent ni chemins complets ni adresses absolues.

| Résultat observé | Conclusion permise |
| --- | --- |
| Refus déjà présent dans l’événement lié | Le refus précède le décodage Janus et son affichage ; rechercher son producteur dans le transport et ses appelants. |
| Statut gRPC non nil, réponse protobuf nil | Le chemin d’erreur transport doit être étudié ; ne pas interpréter son entier comme un statut Janus. |
| Réponse décodée sans événement lié | Chemin non observé, callback différé, installation manquante ou production locale à départager ; aucune conclusion automatique. |
| Header absent ou empreinte différente | Anomalie observable de construction à examiner avant de conclure à un rejet d’intégrité. |
| Même refus dans les octets et dans le callback, sans motif supplémentaire | La catégorie est démontrée à ces frontières ; la cause interne ne peut pas être inventée. |

La présence de données à `onEvent:status:` n’est pas une capture de paquet :
le transport pourrait encore produire localement un événement. `network_origin`
reste `unverified`. La pile permet de poursuivre cette vérification dans le
code réel. Une règle uniquement évaluée côté serveur exige des informations
côté serveur pour être identifiée explicitement ; `server_rule=unknown` est
une limite de l’instrumentation, pas un champ renvoyé par Snapchat.

Les tests hôte couvrent l’identité des arguments, retours et exceptions, la
file des callbacks, les réponses hors ordre, les headers absents, deux numéros
de statut issus de schémas synthétiques, les messages wire tronqués, répétés,
malformés, trop grands et les échecs d’observation. Ils ne remplacent pas une
capture sur iOS. Le manifeste conserve `ios_runtime_tested=false`.

## Résultat des captures v7 et limite de la pile asynchrone

Les deux exports reçus le 8 octobre 2026 proviennent du même processus : le
premier est le préfixe exact du second. Ils ne sont pas deux expériences
indépendantes. Les captures privées et les valeurs de jetons ne sont pas
publiées.

| Appel | Événement avant décodage | Callback Janus |
| --- | --- | --- |
| LoginWithPassword | 252 octets, statut wire 16, message de restriction temporaire, aucun code SS dans le champ observé | Même statut et même message filtré, ErrBlocked |
| RegisterWithUsernamePassword | 187 octets, statut wire 20, message contenant SS03 | Même statut et même message filtré, ErrBlocked |

Les événements sont liés par le handler concret puis par `same_onEvent_stack`.
Le callback suit l'événement de 2 ms dans chaque cas. Le statut gRPC reçu est
nil, et aucun NSError de transport n'est observé. Les deux requêtes contiennent
une attestation de 1421 octets dont l'empreinte correspond à celle du générateur
et une chaîne DeviceCheck non vide de 3084 caractères, dans leur header propre.
Cela établit la présence de ces champs, pas leur acceptation.

Les piles des deux réponses préparatoires réussies et des deux refus sont
identiques à la frontière de réception. Le principal a pour base avant ASLR
`0x100000000`, d'après `analysis/binaries/Snapchat-thin/macho.json`.
Les offsets sont des adresses de retour :

| Offset principal | Fonction contenant l'appel | Rôle observable dans le pseudo-C |
| --- | --- | --- |
| `+0x837670` | `0x100837610` | Adaptation des arguments C++ et appel Objective-C |
| `+0x8375f4` | `0x1008375c8` | Appel indirect du travail mémorisé |
| `+0x5ef28c` | `0x1005ef1dc` | Retrait et exécution de tâches, libellé `shims.Dispatcher` |
| `+0x60a99c` | `-[SCNShimsDispatchTaskCppProxy run]`, `0x10060a980` | Invocation virtuelle d'une tâche C++ |
| `+0x7410c`, `+0x2a57c`, `+0x29e04` | `0x1000740cc`, `0x10002a560`, `0x100029df0` | Exécution et transmission de fonctions/blocs |

Sources : [adaptateurs](../decompiled/Snapchat-thin/shard-00/chunks/006/functions-000393.c),
[dispatcher](../decompiled/Snapchat-thin/shard-00/chunks/004/functions-000264.c),
[proxy](../decompiled/Snapchat-thin/shard-00/chunks/004/functions-000274.c),
[exécution](../decompiled/Snapchat-thin/shard-00/chunks/000/functions-000012.c)
et [fonctions de transmission](../decompiled/Snapchat-thin/shard-00/chunks/000/functions-000000.c).
La pile rejoint une file asynchrone ; elle ne conserve pas automatiquement la
pile qui a produit/enfilé les octets. Aucun de ces cadres ne démontre la règle
ayant décidé SS03. Le refus précède le décodeur et l'écran ; son origine réseau
indépendante et l'ordre des vérifications privées restent non établis.

## Point supplémentaire ciblé dans responses-v8

La classe [SCGrpcEventLogger](../objc/Snapchat-thin/64/SCGrpcEventLogger-112c72238.h)
expose `logUnaryBlizzard:` à `0x100bf6f68`, signature `v24@0:8@16`.
[SCNGrpcUnaryMetricsInfo](../objc/Snapchat-thin/cd/SCNGrpcUnaryMetricsInfo-112ce4b08.h)
porte notamment `authSuccess`, `argosSuccess`, leurs latences, `serverLatency`,
`taskId`, `requestId`, `statusCode`, `success` et les tailles de réponse.
Son [rpcInfo](../objc/Snapchat-thin/f4/SCNGrpcRPCInfo-112ce4a18.h) porte hôte,
protocole, tailles wire, temps de connexion et `cronetErrorCode`.

Le [constructeur et l'adaptateur C++](../decompiled/Snapchat-thin/shard-01/chunks/000/functions-000003.c)
`0x100bf6ce8` / `0x100bf6040` transmettent ces valeurs. Leur présence dans les
métadonnées et leur stockage ne suffisent pas à prouver qu'`argosSuccess`
signifie validation de l'attestation par le serveur. Les valeurs runtime
n'existent pas dans les captures v7 ; aucune cause n'est attribuée à partir
de ces noms.

V8 observe passivement cette méthode, sans activer le système de métriques ni
changer son delegate. Le signalement `metrics_observer installed=1` prouve
l'installation uniquement. Le filtre accepte exactement les chemins Janus
connus, avec ou sans slash initial. Les getters sont typés ; nil, false, true,
type incompatible et exception restent distincts. Le champ `statusCode` est
explicitement distinct du statut Janus. Les identifiants de tâche/requête
sont hachés et l'identifiant de suivi persistant n'est pas lu.

Aucun rapprochement asynchrone n'est inventé par dernier appel, chemin,
horodatage ou taille. Les métriques sans lien synchrone portent
`rpc_link=unverified`. Les valeurs observées pourront orienter une recherche
dans le producteur natif ; elles ne garantissent pas que la règle privée ayant
causé le refus soit exposée. Une absence de métrique n'est pas un résultat
négatif de réseau/Auth/Argos.
