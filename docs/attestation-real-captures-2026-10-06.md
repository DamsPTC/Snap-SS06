# Deux captures réelles logonly : structure protobuf et comparaison

Analyse du 6 octobre 2026. Les captures ont été fournies par l'utilisateur ;
leur provenance login/inscription et leurs chemins sont ses indications.
L'analyse porte sur les **octets effectivement fournis**, sans nouvelle
exécution de l'app ni envoi au serveur.

## Résultat

Les deux base64 canoniques se décodent en **1421 octets chacune**. Google
`protoc --decode_raw` et `UnknownFieldSet` acceptent les deux messages entiers.
Le découpage est identique : **champ 1 de 9 octets, champ 2 de 204 octets,
champ 6 de 1200 octets**, plus 8 octets de tags et longueurs.

Les captures **ne sont pas identiques** : **1400 positions différentes sur
1421 (98,52 %)**, 21 positions identiques. Le champ 1 finit par **`02` pour A
et `03` pour B**, et non `01` pour B. Les deux grands champs sont opaques à
cette analyse ; leur chiffrement n'est pas établi.

| Capture | Provenance déclarée | `requestType` interne déclaré | Taille vérifiée |
| --- | --- | --- | --- |
| A / login | `/snapchat.janus.api.LoginService/LoginWithPassword` | 1 | 1421 octets |
| B / inscription | `/snapchat.janus.api.RegistrationService/RegisterWithUsernamePassword` | 2 | 1421 octets |

Chaque entrée contient 1896 caractères base64, hors blanc de fin de ligne.
Empreintes SHA-256 calculées **sur les octets décodés** :

```text
A  91394c7c9f7a3514d825d4d4de0f15901dd166a70540b6975ef6380ee5e0a1e2
B  2f1ca1b33adcf6b458571ae278222fa3425512f7c80891b8bbb17ee0e91e559a
```

Le [résultat JSON de l'analyseur](attestation-real-captures-2026-10-06.json)
est publié avec ce rapport. Il contient la structure, les empreintes et les
plages de différences, sans les base64 ni les valeurs des blocs opaques.

## Découpage complet de l'enveloppe

Offsets décimaux, base zéro ; toutes les plages sont `[début inclus, fin exclue]`.
Le tableau vaut pour **A et B**, dont les tags et longueurs sont identiques.

| Champ | Wire type | Offset du tag | Tag hex | Longueur hex | Plage de la valeur | Octets de valeur | Taille avec tag/longueur |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | 2, length-delimited | 0 | `0a` | `09` | `[2, 11)` | 9 | 11 |
| 2 | 2, length-delimited | 11 | `12` | `cc 01` | `[14, 218)` | 204 | 207 |
| 6 | 2, length-delimited | 218 | `32` | `b0 09` | `[221, 1421)` | 1200 | 1203 |

Contrôle : `11 + 207 + 1203 = 1421`. Les messages se terminent exactement à
l'offset 1421 : aucun octet restant, champ supplémentaire ou padding externe
n'est ignoré. Les champs 3, 4 et 5 ne sont pas présents dans ces captures.

La longueur `cc 01` est un **varint à deux octets** :
`(0xcc & 0x7f) + (0x01 << 7) = 76 + 128 = 204`.
Le nombre 76 correspond seulement aux sept bits utiles du premier octet ;
le bit de continuation impose de lire le second. Pour le champ 6,
`(0xb0 & 0x7f) + (0x09 << 7) = 48 + 1152 = 1200`.
La longueur 118 n'apparaît pas dans le découpage externe de B.

## Champ 1 : sous-message décodable de 9 octets

Voici le petit en-tête complet, seul bloc brut reproduit ici :

```text
A : 15 41 32 be 70 08 0c 40 02
B : 15 41 32 be 70 08 0c 40 03
```

Il est entièrement accepté comme un message protobuf indépendant, composé
de trois champs dans l'ordre **2, 1, 8**. Cet ordre d'encodage est conservé
ci-dessous ; il n'est pas nécessairement l'ordre d'une déclaration `.proto`.

| Sous-champ | Tag hex | Wire type | Plage globale de valeur | A | B |
| --- | --- | --- | --- | --- | --- |
| `1.2` | `15` | 5, entier de 32 bits affiché en fixed32 | `[3, 7)` | `0x70be3241` = 1891512897 | Identique |
| `1.1` | `08` | 0, varint brut non signé | `[8, 9)` | 12 | 12 |
| `1.8` | `40` | 0, varint brut non signé | `[10, 11)` | 2 | 3 |

Représentation structurelle, avec les blocs opaques remplacés par leurs tailles
**après** le décodage complet :

```text
A                                 B
1 {                               1 {
  2: 0x70be3241                      2: 0x70be3241
  1: 12                             1: 12
  8: 2                              8: 3
}                                 }
2: <204 octets opaques>            2: <204 octets opaques>
6: <1200 octets opaques>           6: <1200 octets opaques>
```

**Établi :** tags, longueurs, valeurs wire, compatibilité de ces 9 octets avec
un sous-message, et différence unique à l'offset global 10. Les noms métier
des champs et leurs types déclarés ne sont pas fournis par un décodage raw.
Le wire type 5 ne distingue pas à lui seul `fixed32`, `sfixed32` et `float` ;
le wire type 0 ne détermine pas à lui seul le type signé, enum ou autre.

**Plausible :** `1.8` reflète le type de requête. Les valeurs 2/3 concordent
avec la normalisation `internalType == 1 ? 2 : 3` du wrapper pré-login
`0x105389030`, décrite dans [l'analyse statique](attestation-payload-analysis.md)
et visible dans le [pseudo-C du wrapper](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L430).
Deux captures et cette correspondance ne suffisent pas à attribuer un nom
de descripteur certain à `1.8`. La constante 12 n'est pas identifiée comme une
version de protocole ou d'application ; le sens de `0x70be3241` reste inconnu.

Le constructeur natif `0x104bc02d0` transmet les constantes 1, 2 et 6 au
sérialiseur étudié précédemment. Leur correspondance avec les numéros observés
ici est cohérente avec cette piste statique, sans démontrer à elle seule
l'association de chaque tampon natif à un champ ni sa sémantique.

## Champs 2 et 6 : binaires opaques

Chaque valeur a été présentée séparément, depuis son **premier octet**,
aux parseurs protobuf. Les quatre blocs sont rejetés comme messages complets
autonomes. Ils ne sont pas non plus des chaînes UTF-8 valides dans leur ensemble.
Aucun sous-message protobuf supplémentaire n'est donc établi à ce niveau.

| Capture / champ | Taille | Entropie empirique, bits/octet | Octets distincts | Séquences ASCII imprimables d'au moins 4 caractères | Longueur maximale de ces séquences |
| --- | --- | --- | --- | --- | --- |
| A / 2 | 204 | 7,0522 | 145 | 0 | — |
| B / 2 | 204 | 6,9884 | 140 | 4 | 6 |
| A / 6 | 1200 | 7,8279 | 253 | 21 | 8 |
| B / 6 | 1200 | 7,8320 | 254 | 18 | 9 |

L'entropie est calculée par `H = -sum(p * log2(p))` sur la distribution
empirique des octets. La petite taille du champ 2 limite ce qu'on peut en
déduire ; ces valeurs ne constituent pas un test cryptographique.
Les séquences imprimables observées sont courtes et ne correspondent à aucun
identifiant recherché. Leur seule présence ne prouve pas du texte métier.

**Établi :** 1404 octets de valeurs binaires opaques dans chaque capture
(`204 + 1200`), distincts de l'en-tête de 9 octets et des 8 octets de framing.
**Plausible seulement :** données chiffrées, compressées, enveloppées ou dans
un format binaire propriétaire. Le rejet par protobuf et une entropie élevée
ne permettent pas de choisir entre ces possibilités, d'identifier un
algorithme, ni de localiser un nonce, une signature ou un hash.
L'analyse n'a pas interprété arbitrairement chaque sous-plage du bruit binaire
comme un message ni tenté de déchiffrement.

## Recherche d'identifiants, versions et horodatages

Recherche littérale sur les 1421 octets de chaque bloc en UTF-8/ASCII,
UTF-16LE et UTF-16BE, sans décodage supplémentaire du contenu opaque :

- `com.toyopagroup.picaboo`, `com.snapchat`, `snapchat`, `Snapchat` ;
- `14.25.0.48`, `14.25`, `2026-10-06` ;
- `LoginWithPassword`, `RegisterWithUsernamePassword` ;
- `TeamIdentifier`, `application-identifier`.

**Aucune occurrence**, pour les deux captures et les trois encodages.
La recherche ASCII de motifs génériques n'a trouvé ni nom ressemblant à un
bundle `com/org/net/io.…`, ni Team ID candidat de 10 caractères `[A-Z0-9]`,
ni version numérique à 3/4 composantes, ni date `20xx-mm-dd`, ni horodatage
décimal candidat de 10/13 chiffres commençant par 1 ou 2. Aucun Team ID connu
n'a été fourni pour une comparaison littérale exacte. Aucune séquence de
4 caractères ASCII encodés en UTF-16LE/BE n'a été trouvée, quel que soit
l'alignement testé par la recherche.

Si l'on force l'interprétation de `0x70be3241` en secondes Unix, on obtient
**2029-12-09 12:14:57 UTC**, et non la date de collecte déclarée. Cette
conversion arithmétique est établie ; l'interprétation comme timestamp
**ne l'est pas**. Aucun horodatage de collecte n'est identifié dans les champs
décodés. Les nombres 12, 2 et 3 ne sont pas, à eux seuls, des versions ou dates.

Ces recherches établissent une **absence de représentation textuelle trouvée**,
pas l'absence de telles informations dans les blocs opaques ou sous une
représentation numérique différente. Le `requestPath` indiqué dans les logs
est une métadonnée de capture ; sa chaîne ne figure pas en clair ici.

## Comparaison exhaustive, octet par octet

| Zone comparée | Taille | Octets identiques à la même position | Octets différents |
| --- | --- | --- | --- |
| Tags et longueurs de l'enveloppe | 8 | 8 | 0 |
| Valeur du champ 1 | 9 | 8 | 1 |
| Valeur du champ 2 | 204 | 2 | 202 |
| Valeur du champ 6 | 1200 | 3 | 1197 |
| **Total** | **1421** | **21** | **1400** |

Premier écart : offset **10 / `0x0a`**, A=`02`, B=`03`. Le préfixe commun
fait 10 octets. Il n'y a aucun suffixe commun, le dernier octet diffère aussi.

Toutes les plages de différences, sans troncature :

| Plage globale `[début, fin)` | Nombre de positions différentes |
| --- | --- |
| `[10, 11)` | 1 |
| `[14, 88)` | 74 |
| `[89, 136)` | 47 |
| `[137, 218)` | 81 |
| `[221, 348)` | 127 |
| `[349, 485)` | 136 |
| `[486, 630)` | 144 |
| `[631, 1421)` | 790 |

Dans les blocs opaques, les seules égalités à position identique sont aux
offsets globaux **88, 136, 348, 485, 630**. Elles ne constituent pas des
sous-champs constants démontrés. Cette comparaison ne réaligne pas les données :
elle compare exactement chaque position de deux enveloppes de même découpage.

L'écart de contenu est établi pour **ces deux captures**. Il ne démontre pas
que le parcours login/inscription explique à lui seul tous les écarts : un
aléa, un état ou d'autres entrées peuvent varier entre les deux exécutions.
Aucune de ces causes n'est identifiée par la seule comparaison.

## Méthodologie et reproduction

1. Conserver les deux base64 fournies dans des fichiers privés `login.base64`
   et `registration.base64`, sans les publier dans le dépôt.
2. Vérifier le décodage strict, sa forme base64 canonique par réencodage,
   la taille et les SHA-256 ci-dessus. Aucune réparation des données, découpe
   de préfixe ou hypothèse de longueur n'est appliquée.
3. Exécuter **sans modification**
   [`spoof/analyze_attestation.py` au commit `bab3d6310d6bf3246b4860df2ff77da33c7d869b`](https://github.com/DamsPTC/Snap-SS06/blob/bab3d6310d6bf3246b4860df2ff77da33c7d869b/spoof/analyze_attestation.py).
   La copie locale a été comparée au contenu GitHub de ce commit avant exécution.
   Dépendances : `grpcio-tools==1.84.0`, `grpcio==1.84.0`, `protobuf==7.36.2` ;
   version retournée par le compilateur : **`libprotoc 35.1`**.
4. Le parseur standard `protoc --decode_raw` valide chaque message entier.
   `UnknownFieldSet` donne les numéros/types/valeurs et vérifie la consommation
   complète. La récursion sur les valeurs length-delimited retrouve le champ 1.
   Les valeurs 2 et 6 sont également testées comme messages autonomes entiers.
5. Pour les offsets exacts et les scalaires, lire les tags/longueurs avec
   `google.protobuf.internal.decoder._DecodeVarint`, avancer de la longueur
   déclarée pour LEN et de 4 octets pour wire 5. Chaque tag, valeur et fin de
   tampon est contrôlé contre `UnknownFieldSet`. Il s'agit d'un relevé d'offsets
   complémentaire ; le JSON original de bab3d63 reste inchangé.
6. Examiner les séquences ASCII `[\x20-\x7e]{4,}` et leurs équivalents UTF-16
   avec un octet nul intercalé, puis les littéraux et motifs détaillés plus haut.
   Calculer l'entropie sur chaque valeur opaque, sans afficher ses octets.
7. Comparer `A[i]` et `B[i]` à toutes les positions avec l'analyseur, puis
   recompter séparément les différences dans les trois valeurs. La somme
   indépendante `1 + 202 + 1197 = 1400` concorde avec le résultat global.

Commandes, depuis un checkout **de bab3d63**, avec les captures hors du dépôt :

```bash
python3 -m venv /tmp/ss06-analysis-venv
/tmp/ss06-analysis-venv/bin/python -m pip install -r spoof/requirements-analysis.txt
/tmp/ss06-analysis-venv/bin/python spoof/analyze_attestation.py \
  --login /chemin/prive/login.base64 \
  --registration /chemin/prive/registration.base64 \
  --output /chemin/prive/resultat.json
```

Le JSON conserve `format_confirmed=false` par choix de l'analyseur :
l'acceptation du **format wire** est constatée, mais un nom de message, un
schéma métier et le sens des blocs opaques ne sont pas confirmés. Aucun
descripteur `GetAttestationPayloadResponse` n'est découvert par cette opération.
Le décodage est complet au niveau du framing protobuf accessible ; il ne
constitue pas un décodage du contenu interne des champs 2 et 6.

Références techniques : [format wire protobuf et varints](https://protobuf.dev/programming-guides/encoding/),
[API UnknownFieldSet](https://googleapis.dev/python/protobuf/latest/google/protobuf/unknown_fields.html).
Les nombres et résultats de ce rapport proviennent des deux captures, pas
des exemples de ces documentations.

## Vérification des hypothèses initiales

| Hypothèse | Verdict sur les octets fournis |
| --- | --- |
| Champ 1 : 9 octets quasi identiques | **Confirmé**, 8 octets identiques sur 9 |
| Dernier octet : A=`02`, B=`01` | **Corrigé : A=`02`, B=`03`** |
| Champ 2 : 76 octets A / 118 octets B | **Corrigé : 204 octets dans les deux** |
| Reste d'environ 1300 octets opaque | Le champ 6 fait **1200 octets** ; champ 2 compris, **1404 octets opaques** |
| Les deux blocs sont identiques | **Non**, 1400 positions différentes |
| Les blocs opaques sont chiffrés | **Non établi** par le décodage et les statistiques |
