# SS03 — analyse statique ciblée, Snapchat iOS 14.25.0.48

Analyse du 6 octobre 2026, sur les binaires et exports présents dans le dépôt.

## Conclusion

**Aucun littéral `SS03` n'a été retrouvé dans le principal, les 13 tranches
Mach-O examinées ou les exports pseudo-C consultés. Aucun chemin visible
`échec de pré-attestation → fabrication locale de SS03` n'a été établi.**

En revanche, un chemin précis transmet un message de la réponse protobuf
d'authentification au résultat d'erreur :
`AppLoginResponse.errorData.humanReadableErrorMessage → SCAppLoginResultDetail.errorWithMessage:`.
Les erreurs de transport construites localement dans les chemins examinés
emploient des modèles de la famille `C…A` / `C…B`, pas `SS03`.

Ces observations favorisent l'hypothèse d'un **message fourni par la réponse
d'authentification**, sans prouver que le cas SS03 observé emprunte ce chemin.
L'origine du texte et la cause du refus sont deux questions distinctes : une
attestation absente ou incohérente peut contribuer à une décision serveur,
sans que le client construise lui-même le code affiché. Aucune réponse réseau
du cas SS03 ni exécution sur appareil n'a été capturée pour ce rapport.

## Périmètre et recherche du littéral

- Principal : `extracted/Payload/Snapchat.app/Snapchat`, tranche ARM64 thin,
  **332 106 544 octets**.
- SHA-256 : `a1f0ad6907587bee27f9700d05106da5beec4650acb0493e2409ff99cbfbf390`.
- Les adresses ci-dessous sont des **adresses virtuelles Mach-O non slidées**,
  base `0x100000000`. Sur appareil, ajouter le slide ASLR de l'image.
- Les extraits sont du **pseudo-C normalisé par l'analyse**, pas du source
  original. Les noms proviennent des métadonnées Objective-C, des stubs de
  sélecteurs, des fixups de pointeurs et des CFStrings. Les types et arguments
  produits automatiquement par le décompilateur ne sont pas tous fiables.

| Recherche | Résultat |
| --- | --- |
| Octets `SS03` ASCII, UTF-16 LE et UTF-16 BE dans le principal entier | 0 / 0 / 0 |
| Mêmes recherches dans les 13 tranches de principal, framework, extensions et Watch | Aucune occurrence |
| Littéral `SS03` dans les exports `.c`, index et textes de `decompiled/` | Aucune occurrence |
| Strings du principal, notamment `__cstring` et `__objc_methname` | Aucun littéral `SS03` |
| Recherche brute dans les fichiers extraits | Aucune occurrence exacte `SS03` |
| 42 ressources `.zst` décompressées, total 56 012 521 octets | Aucune occurrence ASCII / UTF-16 de `SS03` |

Une occurrence brute de `SS06` à `0x10e9dc012` se trouve dans
`__swift5_typeref`, à l'intérieur de
`SS8avatarId_SS06selfieB0So7UIColorC15backgroundColort` : c'est un fragment
de nom Swift, **pas un code d'erreur**. Une recherche approchée `SS0` peut
donc produire des faux positifs.

L'absence de littéral n'exclut ni une chaîne assemblée/déchiffrée à l'exécution,
ni une ressource distante, ni un message serveur. Les exports comprennent des
échecs et des fonctions à contrôle indirect ; ils ne constituent pas une
reconstruction complète du comportement.

## Pré-attestation avant AppLogin

| Adresse | Fonction / observation | Export |
| --- | --- | --- |
| `0x104d39410` | `-[SCLoginJanusService _appLoginClientAttestationPayload]` | [pseudo-C, L3863](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3863) |
| `0x105388f6c` | `generateAttestationPayloadForLogin:requestPath:` force le type interne à `1` | [L371](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L371) |
| `0x105388f7c` | `generateAttestationPayloadForLoginOrRegistration:requestPath:requestType:` | [L399](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L399) |
| `0x105389030` | `_getAttestationPayload:path:requestType:` sérialise `GetAttestationPayloadRequest` | [L430](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L430) |
| `0x104b30cdc` | Générateur natif appelé avec les données sérialisées ; contrôle indirect non reconstruit | [L2780](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000406.c#L2780) |
| `0x1053890f4` | `_logPayloadCreationEvent:requestCount:requestType:` | [L480](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L480) |

```c
// 0x104d39410, appels et CFString résolus dans le principal.
id clientAttestationPayload(void) {
    return [preLoginAttestation generateAttestationPayloadForLogin:timestampMillis
        requestPath:@"/snapchat.janus.api.LoginService/AppLogin"];
}

// 0x105388f7c : la valeur d'entrée du premier argument n'est pas transmise.
// ARM64 : mov x2, #0 à 0x105388fc4 ; appel à 0x105388fd0.
id generatePayload(id input, NSString *path, int requestType) {
    NSDate *start = [NSDate date];
    id payload = [self _getAttestationPayload:nil path:path requestType:requestType];
    [self _logPayloadCreationEvent:elapsed(start)
        requestCount:[self _getGeneratedPayloadCount] requestType:requestType];
    return payload;
}

// 0x105389030, appel natif à 0x1053890bc.
id getPayload(id token, NSString *path, int requestType) {
    GetAttestationPayloadRequest *req = [GetAttestationPayloadRequest new];
    req.requestToken = token;
    req.requestPath = path;
    req.requestType = requestType == 1 ? 2 : 3;
    return native_104b30cdc([req data]); // intérieur non reconstruit
}
```

Le wrapper visible retourne le résultat et enregistre la durée/le compteur.
Il n'expose pas de branche convertissant un résultat vide en `SS03` ou en
`NSError` utilisateur. **Cela ne prouve pas la réussite de l'attestation.**
Dans `0x104b30cdc`, Ghidra signale une table de sauts non récupérée à
`0x104b30d20` et un saut indirect traité comme un appel. Attribuer une décision
précise à ce corps natif dépasserait les éléments disponibles.

Le bloc de préparation de l'appel, à `0x104d36d6c`
([L2369](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L2369)),
appelle `_appLoginClientAttestationPayload` à `0x104d36e8c`, transmet le
résultat à `setClientAttestationPayload:` à `0x104d36ea4`, puis appelle
`appLoginWithRequest:callOptionsBuilder:handler:` à `0x104d3703c`.
Aucune branche visible sur la validité de ce payload ne court-circuite ces
trois opérations lorsque la génération retourne normalement.

## Fidelius et Blizzard : rôles observés

`-[SCLoginJanusService _prepareRequestConcurrentlytForEndpoint:networkRequestId:completion:]`
à `0x104d37f84` ([L3025](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3025))
prépare notamment un token device, le token de configuration et les informations
Fidelius (`clientInitInfo`, `tempIdentity`, `hashedKeys`, `deviceIDBytes`,
`setFideliusDeviceId:`). La présence de ces valeurs dans la préparation ne
démontre pas qu'une absence déclenche localement `SS03`.

Le chargement de l'identifiant persistant suit cet ordre :

```c
// -[SCFideliusDeviceIDManager _loadDeviceID], 0x1006e8d88
id loadDeviceID(void) {
    id uuid = [self _loadDeviceIDFromArchive]; // 0x1006e8e78
    if (uuid == nil) {
        uuid = [self _loadDeviceIDFromKeyChain]; // 0x10592ee6c
        if (uuid != nil) { /* planification de sauvegarde dans l'archive */ }
    }
    return uuid;
}
```

Sources : [chargement, L3881](../decompiled/Snapchat-thin/shard-00/chunks/005/functions-000330.c#L3881),
[Keychain, L1999](../decompiled/Snapchat-thin/shard-07/chunks/007/functions-000487.c#L1999).
Le chemin Keychain utilise `SCKeychainManager.dataForKey:` et attend 16 octets
avant `NSUUID.initWithUUIDBytes:`. Une archive valide peut éviter cette lecture.
Le filtre de la variante `full` ne supprime ni cette archive ni les entrées
Keychain : il masque les lectures correspondantes, y compris après écriture.

Blizzard intervient au moins de deux façons dans les chemins examinés :

- À `0x104d38ab4`, `_appLoginContext:...` copie `getClientId` vers
  `setBlizzardClientId:` dans le contexte de login ; le même contexte inclut
  `setPersistentAttestationDeviceId:`
  ([L3459](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3459)).
- À `0x1053890f4`, `SCAThirdPartyPayloadCreate`, `logUserNotTrackedEvent:` et
  les métriques Graphene `generateAttestationPayload` / `attestationGraphene`
  enregistrent des mesures de génération. Dans ce chemin, il s'agit de
  télémétrie ; aucune fabrication de texte `SS03` n'est démontrée.

Le bloc AppLogin comprend aussi `setIosDeviceCheckToken:`. Le retrait de
l'extension de notification ne justifie donc pas de déclarer toute la voie
DeviceCheck absente du principal.

## Réponse serveur et propagation du texte d'erreur

Le wrapper RPC `-[UNISCJanusLoginService appLoginWithRequest:callOptionsBuilder:handler:]`
à `0x10540ab64` sérialise la requête, choisit `SCJanusAppLoginResponse`
comme classe de réponse et appelle `unaryCall:request:callOptionsBuilder:handler:`
avec `/snapchat.janus.api.LoginService/AppLogin`
([L753](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000226.c#L753)).
Le chemin RPC est une route, pas une preuve du nom d'hôte utilisé à l'exécution.

Le descripteur protobuf `+[SCJanusErrorData descriptor]`, `0x10af481d8`,
déclare le message `ErrorData` du package `snapchat.janus.api` et le champ
`humanReadableErrorMessage` ; table de champs à `0x113332370`
([L417](../decompiled/Snapchat-thin/shard-14/chunks/000/functions-000039.c#L417)).

```c
// -[SCLoginJanusService _appLoginResultDetail:error:], 0x104d39698
// Extrait normalisé ; les autres branches métier sont omises.
id resultDetail(SCJanusAppLoginResponse *response, NSError *error) {
    if (response == nil) {
        NSString *format = isConnected()
            ? localize("default_error_try_again_later_with_code")
            : localize("connection_error_with_error_code");
        return [SCAppLoginResultDetail errorWithMessage:formatCode(format, error.code)];
    }
    switch (response.statusCode) {
        case 0: case 7: case 9: case 10: case 11: case 12: case 13: case 14:
        case (int)0xfbadbeef: // sentinelle d'énumération, pas un code SS03
            return [SCAppLoginResultDetail
                errorWithMessage:response.errorData.humanReadableErrorMessage];
        // Succès, challenge, compte verrouillé, réactivation, etc. : autres branches.
    }
}
```

Source : [L4031](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L4031).
La transmission est également vérifiée dans les instructions ARM64 :

| Adresse d'appel | Sélecteur | Sens |
| --- | --- | --- |
| `0x104d397fc` | `errorData` | Lecture depuis la réponse |
| `0x104d3980c` | `humanReadableErrorMessage` | Lecture du texte |
| `0x104d39824` | `errorWithMessage:` | Transmission du texte au résultat d'erreur |

`_appLoginResondWithResponse:error:submitRequestTime:networkRequestId:networkEndpoint:completion:`
(orthographe du binaire), `0x104d370cc`, assemble ensuite `SCAppLoginResult`
avec les statuts transport/protobuf et le détail, puis appelle la completion
([L2487](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L2487)).

Deux chemins voisins confirment le même mécanisme général :

- Réponse au challenge, `0x104d39aa8` : `errorData` à `0x104d39b18`,
  `humanReadableErrorMessage` à `0x104d39b28`
  ([L4226](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L4226)).
- Réponse au login par mot de passe, `0x104d32808` : lectures à `0x104d329c8`
  et `0x104d329d8`, conversion en détail puis `SCLogInError`
  ([L23](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L23)).

Il s'agit de chemins capables de transporter `SS03` si le serveur le fournit,
pas d'une occurrence statique ou d'une observation de cette valeur exacte.

## Messages d'erreur construits localement

`_computeLogInErrorMessageFromError:isEmptyResponse:` (`0x104d38664`),
`_computeLogInErrorFromError:isEmptyResponse:protoStatusCode:` (`0x104d38760`)
et `_computePasswordLogInErrorFromError:isEmptyResponse:protoStatusCode:`
(`0x104d38890`) traitent les erreurs de transport/réponses vides.
Sources : [L3260–3458](../decompiled/Snapchat-thin/shard-06/chunks/007/functions-000482.c#L3260).
Certaines branches utilisent aussi `NSError.localizedDescription` : son
contenu à l'exécution n'est pas déterminé par cette analyse.

Les petites fonctions ci-dessous ont été résolues directement en ARM64
(`adrp`/`add` vers des CFStrings, puis branche vers le localiseur) :

| Fonction | CFString de clé | Clé dans `SCAuthentication` | Format anglais fourni |
| --- | --- | --- | --- |
| `0x108b9aabc` | `0x110ee9538` | `connection_error_with_error_code` | `C%02dB` |
| `0x108b9aad4` | `0x110ee9558` | `default_error_try_again_later_with_code` | `C%02dA` |
| `0x108b9ab04` | `0x110ee9578` | `unavailable_error_with_error_code_and_link` | `C%02dA` |
| `0x108b9ab1c` | `0x110ee9598` | `connection_error_with_error_code_and_link` | `C%02dB` |
| `0x108b9ab34` | `0x110ee95b8` | `unauthenticated_error_with_error_code_and_link` | `C%02dA` |
| `0x108b9ab4c` | `0x110ee95d8` | `unknown_error_with_error_code_and_link` | `C%02A` tel quel |
| `0x108b9ab64` | `0x110ee95f8` | `default_error_try_again_later_with_front_code` | `C%02A` tel quel |

Ressource vérifiée : [en.lproj/SCAuthentication.strings](../extracted/Payload/Snapchat.app/en.lproj/SCAuthentication.strings),
lignes 20–21, 28–29 et 56–58. Les formats sans `d` sont retranscrits sans
correction. Aucun de ces modèles ne produit textuellement le préfixe `SS03`.

## Ce que les trois builds permettent de vérifier

Voir [spoof/README.md](../spoof/README.md) pour `BUILD_VARIANT` et les artefacts.
`none` conserve le repack et le retrait des extensions, sans injection ;
`swizzle` ajoute les seuls swizzles ; `full` ajoute le filtre Keychain.

Une différence `swizzle`/`full` peut mettre en cause l'effet du filtre sur les
identifiants ou l'état de préparation. Elle ne démontre pas que le texte SS03
est fabriqué localement. Un échec commun aux trois variantes ne prouve pas
non plus que la dylib n'a aucun effet dans d'autres conditions.

Pour trancher le cas exact dans l'environnement de test, corréler un même
identifiant de requête avec : retour/présence du payload d'attestation,
soumission effective du RPC, `NSError.domain/code`, statut protobuf et valeur
exacte de `errorData.humanReadableErrorMessage` (ou message de compte verrouillé).
Consigner seulement présence/longueur des jetons, sans leurs secrets.
Si le texte `SS03` est présent dans la réponse reçue, son origine serveur sera
établie ; sans requête soumise, il faudra identifier le producteur local exact.

## Reproduire la recherche de base

```bash
rg -n --fixed-strings 'SS03' decompiled -g '*.c' -g '*.tsv' -g '*.txt' -g '*.json'
strings -a extracted/Payload/Snapchat.app/Snapchat | rg --fixed-strings 'SS03'
python3 - <<'PY'
from pathlib import Path
import hashlib
b = Path('extracted/Payload/Snapchat.app/Snapchat').read_bytes()
print('sha256', hashlib.sha256(b).hexdigest())
for encoding in ('ascii', 'utf-16-le', 'utf-16-be'):
    print(encoding, b.count('SS03'.encode(encoding)))
PY
```

Une sortie vide de `rg` correspond ici à un littéral absent (code de retour 1),
pas à une preuve d'absence de logique liée à cette erreur.
