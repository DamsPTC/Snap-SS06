# Snap SS06

Archive du projet de laboratoire iOS, version **14.25.0.48**.

L’IPA de référence est conservée sans modification dans la [release 14.25.0.48](https://github.com/DamsPTC/Snap-SS06/releases/tag/v14.25.0.48).

**[Télécharger le fichier IPA](https://github.com/DamsPTC/Snap-SS06/releases/download/v14.25.0.48/com.toyopagroup.picaboo_14.25.0.48_und3fined.ipa)** · **[Parcourir le code décompilé](decompiled/)**

## Inventaire des informations d’appareil

Le [rapport d’inventaire](docs/device-inventory.md) et son [index JSON](docs/device-inventory.json) recoupent les API, adresses de fonctions, sélecteurs, chaînes et niveaux de preuve du binaire principal et des composants de notification. Les extraits complémentaires sont dans [analysis/device-inventory/pseudocode](analysis/device-inventory/pseudocode).

## Contenu

| Dossier | Contenu |
| --- | --- |
| `extracted/` | Les 3 572 fichiers de l’IPA, avec leur arborescence et leurs octets d’origine. |
| `readable/` | Copies XML des listes de propriétés convertibles, pour lecture sur GitHub. |
| [`decompiled/`](decompiled/) | Pseudo-C Ghidra, index par adresse et rapports de couverture pour les 13 architectures/binaires analysés. |
| `objc/` | Un fichier `.h` par classe récupérée : nom, héritage, propriétés, sélecteurs, encodages de types et adresses. |
| `analysis/binaries/` | Rapports Mach-O, classes en JSONL, méthodes en TSV et chaînes Objective-C, par binaire et architecture. |
| `analysis/files.json` | Inventaire de chaque fichier original : taille, SHA-256, CRC et mode ZIP. |
| `analysis/summary.json` | Couverture de l’extraction et des métadonnées récupérées. |
| [`analysis/decompilation/summary.json`](analysis/decompilation/summary.json) | Bilan complet de la décompilation : 1 039 518 fonctions récupérées et 544 échecs consignés. |
| `scripts/` | Scripts reproductibles d’extraction, d’analyse statique, de décompilation et de vérification. |

## État réel du code récupéré

Les fichiers `.h` sous `objc/` sont des **exports de métadonnées runtime**, et non les
fichiers source Objective-C/Swift originaux. Ils ne contiennent pas les corps
des fonctions et ne constituent pas un projet Xcode recompilable.

Les implémentations récupérées en **pseudo-C** sont disponibles dans [`decompiled/`](decompiled/). Ghidra a exporté **1 039 518 fonctions** sur 1 040 062 entrées candidates. Les 544 échecs sont documentés. Les types et limites de fonctions restent approximatifs ; les fonctions non répertoriées dans les tables exploitées peuvent manquer.

Les binaires originaux restent présents dans `extracted/` pour approfondir l’analyse.

## IPA source

- Fichier : `com.toyopagroup.picaboo_14.25.0.48_und3fined.ipa`
- Taille : 176 542 204 octets.
- [Release source](https://github.com/DamsPTC/sandbox-fictif-snapchat/releases/tag/nouvelle-version-14.25.0.48).
- SHA-256 : `008086080f7e0e1a0c9dda4d5bfa092b20f9192d3b1897bae33dec0c5e0acef1`.

## Reproduire l’extraction

Python 3.10 ou plus, sans dépendance externe :

```sh
python3 scripts/extract_ipa.py /chemin/vers/com.toyopagroup.picaboo_14.25.0.48_und3fined.ipa --output .
```

Le script vérifie l’empreinte attendue, contrôle les chemins ZIP, extrait les
fichiers avec vérification CRC, interprète les fixups Mach-O et exporte les
métadonnées Objective-C. Les erreurs sont consignées dans les rapports.

Le binaire principal dépasse la limite des fichiers Git classiques. Le
workflow d’import utilise Git LFS pour le conserver intact. Après un clonage,
exécuter `git lfs pull` pour récupérer aussi ce binaire.

## Références des formats

- [Apple : fixup-chains.h](https://github.com/apple-oss-distributions/dyld/blob/main/include/mach-o/fixup-chains.h).
- [Apple : objc-runtime-new.h](https://github.com/apple-oss-distributions/objc4/blob/main/runtime/objc-runtime-new.h).

L’analyse est statique : aucun code de l’application n’est exécuté pendant
l’import et aucune fonctionnalité SS06 n’est testée par ce dépôt d’archive.
