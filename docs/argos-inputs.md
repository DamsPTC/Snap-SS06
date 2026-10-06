# Argos — entrées observables et limites des preuves

Revue du 6 octobre 2026, sur le commit
`681c53f3441f3cf6b3cda8912f566d68b89fd26a` de Snap-SS06.

## Résultat et périmètre

**Les éléments examinés ne permettent pas de dresser une liste exhaustive des
appels externes atteignables depuis le générateur, ni de relier une mesure de
signature ou du Mach-O à ses octets de sortie.** Cela ne démontre pas l’absence
de ces mesures.

Cette revue vérifie les exports pseudo-C cités dans le
[rapport précédent](attestation-payload-analysis.md), distingue les entrées
explicites des dépendances possibles et précise les ruptures de preuve. Elle
ne constitue pas une nouvelle reconstruction ARM64 complète, une trace sur
appareil ou une liste de points d’interposition permettant de falsifier une
attestation.

Les adresses ci-dessous sont les adresses virtuelles non slidées des entrées
ou des points signalés par Ghidra. Elles ne sont pas des adresses d’appel
externe reconstituées. Le fichier de référence identifié par le rapport
précédent est le principal ARM64 de 332 106 544 octets, SHA-256
`a1f0ad6907587bee27f9700d05106da5beec4650acb0493e2409ff99cbfbf390`.
Cette empreinte est une référence documentaire, non un nouveau calcul effectué
pendant cette revue.

Niveaux de preuve :

- **Établi dans l’export** : directement visible dans le pseudo-C consulté,
  avec les réserves de Ghidra sur les types et limites de fonctions.
- **Rapporté précédemment** : issu du recoupement des métadonnées et du
  désassemblage décrit dans le rapport précédent ; non recalculé ici.
- **Plausible** : compatible avec les observations, mais sans propagation
  de données démontrée jusqu’à la sortie.
- **Non établi** : les preuves examinées ne permettent pas de conclure ;
  ce terme ne signifie pas « absent ».

## 1. Entrée explicite du générateur

Le wrapper de pré-login crée un message neuf, renseigne trois setters,
sérialise ce message et appelle le pont natif. Le wrapper commun lui passe
zéro pour le premier argument applicatif. Ces opérations sont visibles dans
[l’export Objective-C, L371–495](../decompiled/Snapchat-thin/shard-07/chunks/003/functions-000193.c#L371).
La résolution des noms des setters et des champs est documentée dans les
sections 1 et 2 du rapport précédent.

| Champ de `GetAttestationPayloadRequest` | État dans le chemin pré-login étudié | Niveau de preuve |
| --- | --- | --- |
| `requestToken` | Setter alimenté par nil ; le timestamp préparé en amont n’est pas conservé comme cet argument | Passage de zéro établi dans l’export ; noms résolus dans le rapport précédent |
| `requestPath` | `/snapchat.janus.api.LoginService/AppLogin` | Rapporté précédemment |
| `requestType` | `2`, soit `PayloadTypeLogin` | Sélection numérique établie dans l’export ; nom d’enum rapporté précédemment |
| `argosConfig` | Aucun setter correspondant relevé dans ce constructeur | Rapporté précédemment ; ne prouve pas l’absence d’une configuration interne |
| `nonce` | Non renseigné dans ce constructeur | Rapporté précédemment |
| `requestParameters` | Non renseigné dans ce constructeur | Rapporté précédemment |
| `v10Only` | Non renseigné dans ce constructeur | Rapporté précédemment |

Pseudo-C normalisé, limité à l’interface et non au contenu natif :

```c
request = new GetAttestationPayloadRequest();
request.requestToken = nil;
request.requestPath = login_rpc_path;
request.requestType = PayloadTypeLogin;
opaque_result = native_generator(serialize(request));
```

Le message d’entrée n’est pas la payload d’attestation finale. Le rapport
précédent relie la sortie opaque au champ bytes `clientAttestationPayload`
d’`AppLoginRequest`. Il ne faut donc pas prendre la petite taille de l’entrée
explicite pour une borne sur toutes les informations consultées par le natif.

## 2. Couverture effective de la chaîne native

| Point demandé | Observation dans les sources consultées | Conséquence pour l’analyse |
| --- | --- | --- |
| Pont `0x104b30cdc` | Export réduit à un saut indirect ; table non reconstruite au point `0x104b30d20` | Le corps exporté n’expose pas ses dépendances complètes |
| Répartiteur `0x104b32b50` | Même avertissement au point `0x104b32bb4` | Le pseudo-C seul ne reconstitue pas les transitions ni les appels transitifs |
| États `62 → 94 → 136 → 192` | Parcours décrit par le désassemblage du rapport précédent | Chemin partiel, pas preuve d’exécution de tous les blocs suivants lors d’un login |
| Constructeur `0x104bbffac` | Table non reconstruite au point `0x104bc0008` | Contenu du constructeur incomplet |
| Constructeur `0x104bc02d0` | Table non reconstruite au point `0x104bc0318` | Sources et signification des données assemblées non restituées par cet export |
| Point `0x104bca080` | Pas d’entrée de fonction autonome dans l’export concerné ; inclus dans la plage déclarée `0x104bc9d50–0x104bcc097` | La frontière de fonction doit rester incertaine ; l’absence d’un nom `FUN_104bca080` ne prouve pas l’absence de code |
| Répartiteur `0x104bcc098` | Table non reconstruite au point `0x104bcc118` | Format complet de sortie non établi |
| Initialiseur `0x104b8cbcc` | Appels internes, traitement d’un état global et création d’un thread visibles | Une partie des dépendances peut se trouver hors du chemin synchrone immédiat |

Sources primaires : [pont et répartiteur](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000406.c#L2780),
[constructeurs](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000408.c#L1462),
[plage contenant le point de sérialisation et répartiteur suivant](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000409.c#L18),
[initialisation](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000407.c#L1579).

Extrait illustrant la limite de décompilation :

```c
void FUN_104b30cdc(void)
{
    /* WARNING: Could not recover jumptable at 0x000104b30d20.
       Too many branches */
    /* WARNING: Treating indirect jump as call */
    (*(code *)(undefined *)0x104b30d24)();
    return;
}
```

Ce pseudo-C représente un échec de reconstruction du contrôle. Il ne signifie
pas que la fonction réelle effectue un seul appel. De même, les valeurs
numériques `1`, `2` et `6` évoquées dans le rapport précédent ne deviennent
pas des numéros de champs protobuf établis tant que l’encodage n’est pas
résolu. Les constantes de sélection des répartiteurs ne sont pas, à elles
seules, des empreintes du binaire.

## 3. Initialisation et état extérieur à la requête

L’export de `0x104b8cbcc` montre deux appels internes, l’utilisation d’un
couple de valeurs globales, la libération puis la remise à zéro de ce stockage
et la création d’un thread. Les noms externes visibles dans ce corps sont
`free`, `pthread_attr_init`, `pthread_attr_set_qos_class_np`, `pthread_create`
et la garde de pile `__stack_chk_fail`.

Leur présence décrit de la gestion de mémoire, de thread et de pile ; elle
n’établit pas une mesure de signature. Cette liste est limitée au corps
exporté de l’initialiseur, sans adresse d’instruction d’appel et sans prétention
à couvrir les fonctions appelées indirectement ou par ses sous-fonctions.

Le point d’entrée du thread appelle un autre répartiteur dont Ghidra ne
reconstruit pas la table de sauts
([export du thread et de son répartiteur](../decompiled/Snapchat-thin/shard-06/chunks/006/functions-000407.c#L1533)).

**Plausible :** une initialisation ou une activité en arrière-plan peut
préparer un état ensuite consommé par le générateur. **Non établi :** la
nature de cet état, les données éventuellement collectées et leur contribution
aux octets d’attestation. Un pointeur global observé n’identifie ni un fichier,
ni une section exécutable, ni une empreinte.

## 4. État des hypothèses sur l’intégrité

Le tableau suivant est un bilan de preuve, **pas le résultat d’un nouveau
balayage exhaustif des imports, syscalls ou appels indirects**. Aucun appel
n’est attribué à cette chaîne uniquement parce que son nom figure dans la
demande ou dans une autre partie du binaire.

| Famille examinée dans la question | Conclusion permise par les preuves consultées |
| --- | --- |
| `csops` / `csops_audittoken` | Aucun résultat de ces API relié à la sortie native dans les sources examinées ; atteignabilité et usage non établis |
| `SecStaticCodeCheckValidity` / `SecCodeCopySigningInformation` | Ni appel dans la chaîne ni sérialisation d’un résultat démontrés |
| `SecTaskCopyValueForEntitlement` | Aucun nom d’entitlement et aucune valeur reliés à la sortie native démontrés |
| `_dyld_image_count` / `_dyld_get_image_name` | Aucune énumération d’images attribuée avec preuve à la génération de cette sortie |
| `getsectiondata`, tailles de `__TEXT` / `__TEXT_EXEC` | Le rapport précédent relève un accès aux sections ailleurs dans le principal ; il ne le relie pas au générateur |
| Lecture de `LC_ENCRYPTION_INFO` / `cryptid` | Valeur locale du fichier rapportée précédemment ; lecture par cette chaîne et transmission non établies |
| `proc_pidinfo` | Appel et propagation d’un résultat dans la payload non établis |
| Lecture de fichier ou hash des octets du Mach-O principal | Aucun enchaînement complet « objet lu → octets concernés → mesure → sortie sérialisée » démontré |

La présence globale d’une fonction de hash ne permet pas d’identifier les
octets hachés. La présence d’un accès à un fichier ne permet pas d’identifier
le Mach-O principal comme cible. Enfin, un appel atteignable dans un graphe
conservateur n’est pas forcément exécuté pour la requête de login étudiée.

## 5. Ce qui reste indéterminé

La revue ne fournit aucune liste exhaustive d’entrées implicites, aucun schéma
complet de réponse native et aucun lien prouvé entre les API d’intégrité
énumérées et le résultat envoyé. Elle ne conclut donc ni que le générateur
ignore l’état du binaire, ni qu’une modification de réponses locales produirait
une attestation authentique ou équivalente à celle de l’éditeur.

Pour une validation QA dans un composant et un backend que l’on contrôle,
les observations pertinentes sont les entrées réellement sérialisées,
la provenance des données collectées, la chronologie de l’initialisation,
les octets de sortie et le motif de validation ou de rejet côté serveur.
Sans ces observations, un échec de login ne peut pas être attribué à un
marqueur particulier à partir des seuls exports examinés.

## Sources et vérifications effectuées

- Consultation des sections utiles du rapport
  `docs/attestation-payload-analysis.md` et de ses références aux exports.
- Lecture des exports ciblés du pont, du répartiteur, des constructeurs,
  de l’initialiseur, du thread, du wrapper Objective-C et du getter AppLogin.
- Lecture de `functions-000409.c` pour situer la plage contenant
  `0x104bca080` et l’entrée `0x104bcc098`.
- Aucune nouvelle exécution du client, capture réseau, émulation de syscalls
  ou comparaison dynamique de versions signées n’a été effectuée.

Les liens vers les exports sont relatifs au dépôt. Pour reproduire cette
revue, utiliser le commit source indiqué en tête plutôt qu’une branche
susceptible d’évoluer.
