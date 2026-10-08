# Captures logonly et analyse sans schéma

> Mise à jour du 8 octobre 2026 : `responses-v4` ajoute des réponses Janus
> corrélées par `call`, des codes d’erreur extraits et les empreintes des
> payloads. Voir [les réponses corrélées](logonly-transport-observers.md#réponses-corrélées-responses-v4).
> Le protocole et les deux captures décrits ci-dessous restent historiques
> (`values-v3`) ; ils ne constituent pas une capture de réponse SS06.

État au 6 octobre 2026, trace `values-v3`, Snapchat 14.25.0.48.

## Résultat sur les captures reçues

Deux captures réelles ont ensuite été fournies le 6 octobre 2026 et analysées
avec l'analyseur **inchangé** de `bab3d63`. Leur taille de **1421 octets** est
maintenant vérifiée pour chacune. Le [rapport des résultats réels](attestation-real-captures-2026-10-06.md)
donne les offsets, valeurs décodées, recherches de chaînes et limites ; le
[JSON de l'analyseur](attestation-real-captures-2026-10-06.json) conserve la
structure et la comparaison sans les dumps bruts.

| Question sur les captures réelles | Conclusion actuelle |
| --- | --- |
| Taille login / inscription | **1421 / 1421 octets** |
| Payload acceptée par `protoc --decode_raw` | **Oui**, pour les deux captures entières |
| Numéros et tailles des champs réels | **1 : 9 ; 2 : 204 ; 6 : 1200 octets** |
| Sous-champs texte, binaires ou messages | Champ 1 décodable en sous-message ; champs 2 et 6 opaques |
| Login et inscription identiques octet par octet | **Non : 1400 positions différentes**, 21 identiques |

Les descripteurs de `GetAttestationPayloadRequest`/`Response` et d'AppLogin
restent documentés dans [l'analyse statique](attestation-payload-analysis.md).
Ils ne suffisent pas à attribuer un schéma au retour opaque capturé. Une
longueur commune ne prouve pas une égalité de contenu. Le sens des champs
opaques et leur éventuel chiffrement restent non établis.

## Points de capture et preuves

Les adresses sont les VA du principal analysé, avant ASLR. Les observateurs
utilisent le runtime Objective-C, pas des adresses codées en dur.

| Point | Valeur capturée | Chemin du dump |
| --- | --- | --- |
| `-[SCPreLoginAttestationImpl _getAttestationPayload:path:requestType:]`, `0x105389030` | Intégralité du `NSData` original, en base64 sans retour à la ligne | Argument `path`, filtré comme les traces existantes |
| `-[SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:]`, `0x1053087b8` ; callback interne `0x1053088c8` | Intégralité de l'unique chaîne transmise au callback, token ou sentinelle | `unknown`, aucun chemin dans cette signature |
| `-[SCJanusAppLoginRequest setIosDeviceCheckToken:]`, setter protobuf résolu au runtime | Chaîne affectée au champ, après retour réussi du setter original | `unknown`, aucun chemin dans cette signature |

Sources : [wrapper pré-login](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L430),
[DeviceCheck et callback](../decompiled/Snapchat-thin/shard-07/chunks/002/functions-000166.c#L2392),
[table des signatures](logonly-transport-observers.md).

Pseudo-C normalisé, branches utiles seulement :

```objc
// 0x105389030 ; appel du pont natif à 0x1053890bc.
request.requestToken = token;
request.requestPath = path;
request.requestType = internalType == 1 ? 2 : 3;
return native_104b30cdc([request data]);

// 0x1053087b8, méthode void ; le résultat arrive dans completion(NSString *).
if (device && [device isSupported]) {
    [device generateTokenWithCompletionHandler:^(NSData *token, NSError *error) {
        // Corps du callback interne 0x1053088c8.
        completion(token ? [token base64EncodedStringWithOptions:0]
                         : @"DEVICE_CHECK_TOKEN_NOT_AVAILABLE_GTE_IOS11");
    }];
} else {
    completion(@"DEVICE_CHECK_NOT_SUPPORTED_GTE_IOS11");
}
```

L'observateur DeviceCheck enveloppe le callback de **SCDeviceCheckFeature**,
qui reçoit une chaîne, et non le callback Apple à deux arguments. Chaque
invocation transmet exactement le même objet au callback original sur la
même file, après la capture. Un callback nil reste nil. Les exceptions du
callback original sont propagées. L'identité du bloc enveloppé change ; les
autres handlers ne sont pas enveloppés. Un token servi par un autre cache
peut ne pas passer par cette méthode ; le setter constitue une observation
complémentaire, sans nouvelle demande de token.

`requestType` est l'argument interne observé, pas nécessairement la valeur
normalisée du protobuf. `call=N` identifie un appel, pas toute une tentative.
L'absence de chemin sur DeviceCheck ou le setter ne permet pas de leur
attribuer avec certitude le dernier RPC vu, notamment en cas de concurrence.

## Lire les captures sur l'appareil

1. Lancer la nouvelle IPA `logonly` et vérifier `trace=values-v3`.
2. Tenter le login ou l'inscription, attendre l'erreur et laisser l'app
   active un court instant pour la copie sur la file principale.
3. Ouvrir Notes et coller. Conserver séparément la capture de chaque parcours
   si le processus est relancé : l'historique mémoire repart alors à zéro.
4. Repérer les lignes `dump=attestation_payload` et leur `requestPath`.

Format des lignes, **gabarit seulement** ; les points de suspension ne sont
pas des données décodables :

```text
[SS06LogOnly] <UTC> dump=attestation_payload call=N requestPath=/snapchat.janus.api.LoginService/AppLogin pathSource=argument requestType=1 bytes=L base64=...
[SS06LogOnly] <UTC> dump=devicecheck_token source=devicecheck.callback call=N requestPath=unknown pathSource=unavailable chars=L value={"token":"..."}
[SS06LogOnly] <UTC> dump=devicecheck_token source=request.iosDeviceCheckToken call=N requestPath=unknown pathSource=unavailable chars=L value={"token":"..."}
```

La base64 couvre tous les octets, quelle que soit leur taille. La chaîne
DeviceCheck complète est la valeur JSON `token` ; les échappements JSON
préservent les caractères spéciaux tout en gardant une seule ligne de log.
Une chaîne non vide peut être une sentinelle d'indisponibilité. `nil`, type
inattendu et erreur de capture ont des états distincts, sans valeur inventée.

Chaque ligne porte le préfixe et l'horodatage du logger commun. Elle rejoint
l'historique complet et déclenche sa copie dans le presse-papiers local ; elle
est aussi émise par `NSLog`. Pour récupérer l'intégralité, utiliser l'historique
copié : l'affichage des logs système peut avoir ses propres limites. La copie
écrase le presse-papiers courant. Les tokens et payloads sont sensibles : ne
pas publier l'historique brut dans un commit, une issue ou une release.
La dylib n'ajoute ni fichier de capture ni envoi réseau.

## Décodage et comparaison hors ligne

L'outil [analyze_attestation.py](../spoof/analyze_attestation.py) utilise
**Google `protoc --decode_raw`**, fourni par `grpcio-tools`, puis
`google.protobuf.unknown_fields.UnknownFieldSet` sur un message sans schéma
pour construire un rapport structurel. Ce n'est pas un décodeur protobuf
maison. La version de `protoc` est inscrite dans le rapport.

Depuis la racine du dépôt, préparer l'environnement, puis analyser des
fichiers conservés hors du dépôt :

```bash
python3 -m venv /tmp/ss06-analysis-venv
/tmp/ss06-analysis-venv/bin/python -m pip install -r spoof/requirements-analysis.txt
/tmp/ss06-analysis-venv/bin/python spoof/analyze_attestation.py \
  --history /chemin/prive/historique.txt \
  --output /chemin/prive/structure-comparaison.json
```

`--history` sélectionne par défaut la dernière ligne valide de chaque service
LoginService/RegistrationService et conserve chemin, numéro d'appel et numéro
de ligne dans le rapport. Examiner ces métadonnées : un service peut avoir
plusieurs méthodes. `--login-index 0 --registration-index 0` choisit la première
capture de chacun, et d'autres indices permettent une sélection explicite.
L'outil ne suppose pas que deux événements appartiennent à la même tentative.

Autre entrée possible : deux fichiers contenant **uniquement** la base64,
copiée après `base64=` dans les lignes choisies, sans token DeviceCheck :

```bash
/tmp/ss06-analysis-venv/bin/python spoof/analyze_attestation.py \
  --login /chemin/prive/login.base64 \
  --registration /chemin/prive/inscription.base64 \
  --output /chemin/prive/structure-comparaison.json
```

Les base64 doivent être complètes et canoniques. L'import d'historique vérifie
aussi la taille annoncée ; une capture manquante ou tronquée arrête l'analyse.
Le rapport ne remplace jamais un fichier existant ni une entrée. Il est créé
avec des droits locaux `0600`. Aucun accès réseau n'est effectué par l'analyseur
après l'installation des dépendances. Les captures brutes et la sortie textuelle
de `protoc` ne sont pas incluses dans le rapport ni publiées automatiquement.

Le rapport contient, pour chaque capture :

- taille totale, SHA-256, version de `protoc` et succès/échec des deux parseurs ;
- numéro, type wire et ordre de chaque occurrence de champ ;
- taille minimale d'un varint et nombre de bits, taille des fixed32/fixed64 ;
- taille des octets length-delimited, validité UTF-8 et apparence textuelle ;
- sous-champs candidats lorsqu'un bloc length-delimited est lui-même parsable,
  avec un maximum de 8 niveaux et 20 000 occurrences analysées.

La comparaison parcourt **chaque position des deux captures**, y compris
les octets supplémentaires si leurs tailles diffèrent. Elle fournit
`identical`, le nombre de positions différentes, le premier offset différent
et les plages `[début inclus, fin exclue]`. La liste des plages est limitée à
4096 ; le verdict d'égalité et le décompte couvrent toujours tous les octets.
Le rapport ne révèle pas leurs valeurs. Limites d'entrée : 2 Mio par payload,
32 Mio par historique.

## Interprétation : établi et plausible

Un parseur qui accepte les octets établit leur compatibilité avec le format
wire protobuf, **pas leur schéma métier**. Un échec peut aussi venir d'un
autre format, d'une enveloppe, d'une compression ou de données tronquées ;
il ne prouve pas un chiffrement. Un champ length-delimited peut contenir des
octets, une chaîne, un message ou des éléments numériques packed. Le rapport
marque donc les interprétations comme candidates, même si le texte est
imprimable ou si une seconde analyse protobuf réussit.

La longueur minimale d'un varint ne donne pas sa longueur wire exacte dans
un encodage non minimal. L'outil ne prétend pas fournir des offsets de champs
que le parseur standard ne conserve pas. Les offsets de **différence entre
captures**, eux, sont calculés directement sur les octets.

Deux captures identiques établiront uniquement l'égalité de ces deux retours.
Deux captures différentes ne permettront pas, à elles seules, d'attribuer la
différence au parcours : heure, aléa ou état peuvent être des hypothèses à
tester, sans être affirmés ici.

Références : [format wire protobuf](https://protobuf.dev/programming-guides/encoding/),
[API UnknownFieldSet](https://googleapis.dev/python/protobuf/latest/google/protobuf/unknown_fields.html).

## Validation sur données synthétiques

Les tests Python utilisent un message fabriqué avec les champs suivants.
**Ce tableau ne décrit pas la payload Snapchat.**

| Champ synthétique | Wire type | Taille/structure attendue |
| --- | --- | --- |
| 1 | varint | Valeur sur 8 bits, encodage minimal de 2 octets |
| 2 | length-delimited | 2 octets UTF-8 imprimables |
| 3 | length-delimited | 2 octets, message candidat contenant un champ varint nº 1 |
| 4 | length-delimited | 2 octets binaires, UTF-8 invalide |
| 5 | fixed32 | 4 octets |
| 6 | group | Groupe contenant un champ varint nº 7 |

Ils couvrent également les protobuf invalides/tronqués, le contrôle de taille
des captures et la comparaison de données identiques, de même taille mais
différentes, et de tailles différentes. Le test Objective-C sur macOS vérifie
une capture synthétique de 1421 octets intégralement présente en base64 dans
le presse-papiers simulé, les valeurs setter/callback et la transmission
asynchrone inchangée. Ces tests ne démontrent ni le fonctionnement sur iPhone
ni la structure des captures réelles ; `ios_runtime_tested=false`.
