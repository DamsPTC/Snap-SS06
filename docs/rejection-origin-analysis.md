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
