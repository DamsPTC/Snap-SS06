# Snap SS06

Archive du projet de laboratoire iOS, version **14.25.0.48**.

L’IPA de référence est conservée sans modification dans le dépôt
`DamsPTC/Snap-SS06`.

## Contenu

| Dossier | Contenu |
| --- | --- |
| `extracted/` | Les 3 572 fichiers de l’IPA, avec leur arborescence et leurs octets d’origine. |
| `readable/` | Copies XML des listes de propriétés convertibles, pour lecture sur GitHub. |
| `objc/` | Un fichier `.h` par classe récupérée : nom, héritage, propriétés, sélecteurs, encodages de types et adresses. |
| `analysis/binaries/` | Rapports Mach-O, classes en JSONL, méthodes en TSV et chaînes Objective-C, par binaire et architecture. |
| `analysis/files.json` | Inventaire de chaque fichier original : taille, SHA-256, CRC et mode ZIP. |
| `analysis/summary.json` | Couverture précise de l’extraction, erreurs éventuelles et état de la décompilation. |
| `scripts/` | Script Python reproductible d’extraction et d’analyse statique. |

## État réel du code récupéré

Les fichiers `objc/*.h` sont des **exports de métadonnées runtime**, et non les
fichiers source Objective-C/Swift originaux. Ils ne contiennent pas les corps
des fonctions et ne constituent pas un projet Xcode recompilable.

La décompilation des implémentations en pseudo-C reste à effectuer avec un
décompilateur adapté. Aucun corps de fonction n’a été inventé. Les binaires
originaux sont tous présents dans `extracted/` pour poursuivre cette analyse.

## IPA source

- Fichier : `com.toyopagroup.picaboo_14.25.0.48_und3fined.ipa`
- Taille : 176 542 204 octets.
- [Release source](https://github.com/DamsPTC/sandbox-fictif-snapchat/releases/tag/nouvelle-version-14.25.0.48).
- SHA-256 : `008086080f7e0e1a0c9dda4d5bfa092b20f9192d3b1897bae33dec0c5e0acef1`.

L’IPA doit être publiée comme fichier `.ipa` directement téléchargeable dans
la release du nouveau dépôt. Le ZIP de préparation n’est pas son substitut.

## Reproduire l’extraction

Python 3.10 ou plus, sans dépendance externe :

```sh
python3 scripts/extract_ipa.py /chemin/vers/com.toyopagroup.picaboo_14.25.0.48_und3fined.ipa --output .
```

Le script vérifie l’empreinte attendue, contrôle les chemins ZIP, extrait les
fichiers avec vérification CRC, interprète les fixups Mach-O et exporte les
métadonnées Objective-C. Les erreurs sont consignées dans les rapports.

Le binaire principal dépasse la limite des fichiers Git classiques. Le
workflow d’import utilise Git LFS pour le conserver intact.

## Références des formats

- [Apple : fixup-chains.h](https://github.com/apple-oss-distributions/dyld/blob/main/include/mach-o/fixup-chains.h).
- [Apple : objc-runtime-new.h](https://github.com/apple-oss-distributions/objc4/blob/main/runtime/objc-runtime-new.h).

L’analyse est statique : aucun code de l’application n’est exécuté pendant
l’import et aucune fonctionnalité SS06 n’est testée par ce dépôt d’archive.
