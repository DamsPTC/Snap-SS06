#!/usr/bin/env bash
# Assemble une copie instrumentée depuis extracted/, sur macOS avec Xcode.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="$ROOT/build"
WORK="$OUT/spoof-work"
IPA_NAME="Snap-SS06-14.25.0.48-spoofed.ipa"
SOURCE_APP="$ROOT/extracted/Payload/Snapchat.app"
INSERT_REV="eb7278162af8fcc372e7f2946a2dee6a386b17d8"

[[ "$(uname -s)" == Darwin ]] || { echo "macOS et Xcode sont requis." >&2; exit 1; }
[[ -f "$SOURCE_APP/Snapchat" ]] || { echo "Binaire source absent." >&2; exit 1; }
if head -c 128 "$SOURCE_APP/Snapchat" | grep -q 'version https://git-lfs.github.com/spec/v1'; then
    echo "Le binaire est un pointeur Git LFS : exécuter git lfs pull." >&2
    exit 1
fi
SDK="$(xcrun --sdk iphoneos --show-sdk-path)"

mkdir -p "$OUT"
rm -rf "$WORK"
mkdir -p "$WORK"
trap 'rm -rf "$WORK"' EXIT
rm -f "$OUT/$IPA_NAME"

# 1) dylib ARM64 iPhoneOS. UIKit et AdSupport sont chargés comme dépendances.
xcrun --sdk iphoneos clang -target arm64-apple-ios14.0 -dynamiclib \
    -isysroot "$SDK" -fobjc-arc -fblocks \
    -framework Foundation -framework Security -framework UIKit -framework AdSupport -lobjc \
    -Wl,-install_name,@executable_path/SS06Spoof.dylib \
    "$ROOT/spoof/SS06Spoof.m" -o "$WORK/SS06Spoof.dylib"
codesign --force --sign - --timestamp=none "$WORK/SS06Spoof.dylib"

# 2) insert_dylib, source fixé à une révision connue ; compilation hôte macOS.
INSERT_DIR="$WORK/insert_dylib"
git init -q "$INSERT_DIR"
git -C "$INSERT_DIR" remote add origin https://github.com/tyilo/insert_dylib.git
git -C "$INSERT_DIR" fetch --depth 1 origin "$INSERT_REV"
git -C "$INSERT_DIR" checkout -q --detach FETCH_HEAD
xcrun --sdk macosx clang -O2 "$INSERT_DIR/insert_dylib/main.c" -o "$WORK/insert_dylib-tool"

# 3) Copie du payload. Les originaux du dépôt restent inchangés.
PAYLOAD="$WORK/Payload"
APP="$PAYLOAD/Snapchat.app"
mkdir -p "$PAYLOAD"
ditto "$SOURCE_APP" "$APP"
rm -rf "$APP/PlugIns" "$APP/Extensions" "$APP/Watch"
# Le retrait supprime ces composants et leurs fonctions associées.
# Il ne démontre pas l'absence de tout autre chemin DeviceCheck.
rm -rf "$APP/_CodeSignature"
rm -f "$APP/embedded.mobileprovision"
cp "$WORK/SS06Spoof.dylib" "$APP/SS06Spoof.dylib"

# Évite une confirmation automatique qui écraserait du code faute de place.
python3 - "$APP/Snapchat" <<'PY'
import struct, sys
with open(sys.argv[1], 'rb') as f:
    header = f.read(32)
    magic, cpu, subtype, kind, ncmds, sizeofcmds, flags, reserved = struct.unpack('<8I', header)
    if magic != 0xfeedfacf or cpu != 0x100000c:
        raise SystemExit('Le binaire source attendu est un Mach-O ARM64 thin.')
    commands = f.read(sizeofcmds)
    pos = 0
    for _ in range(ncmds):
        cmd, size = struct.unpack_from('<II', commands, pos)
        if size < 8 or pos + size > len(commands):
            raise SystemExit('Commande Mach-O invalide.')
        if cmd == 0x2c and struct.unpack_from('<I', commands, pos + 16)[0] != 0:
            raise SystemExit('Le binaire source déclare du chiffrement.')
        pos += size
    if pos != sizeofcmds:
        raise SystemExit('Taille de commandes Mach-O incohérente.')
    name = b'@executable_path/SS06Spoof.dylib'
    required = 24 + ((len(name) // 8 + 1) * 8)
    padding = f.read(required)
    if len(padding) != required or any(padding):
        raise SystemExit('Espace insuffisant pour la commande de chargement.')
PY

# L'outil attend dylib_path AVANT binary_path ; il traite les architectures lui-même.
"$WORK/insert_dylib-tool" --inplace --weak --strip-codesig --all-yes \
    "@executable_path/SS06Spoof.dylib" "$APP/Snapchat"
chmod 755 "$APP/Snapchat" "$APP/SS06Spoof.dylib"
codesign --force --sign - --timestamp=none "$APP/Snapchat"

# 4) Vérifications statiques avant archivage. Aucun lancement iOS n'est effectué.
otool -L "$APP/Snapchat" > "$WORK/dependencies.txt"
grep -Fq '@executable_path/SS06Spoof.dylib' "$WORK/dependencies.txt"
otool -l "$APP/SS06Spoof.dylib" > "$WORK/dylib-load-commands.txt"
grep -Fq '__interpose' "$WORK/dylib-load-commands.txt"
codesign --verify --verbose=2 "$APP/Snapchat"
codesign --verify --verbose=2 "$APP/SS06Spoof.dylib"
for component in PlugIns Extensions Watch; do
    [[ ! -e "$APP/$component" ]] || { echo "Composant encore présent : $component" >&2; exit 1; }
done
(
    cd "$WORK"
    COPYFILE_DISABLE=1 zip -qry "$OUT/$IPA_NAME" Payload
)
unzip -tq "$OUT/$IPA_NAME"
shasum -a 256 "$OUT/$IPA_NAME"
echo "OK : $OUT/$IPA_NAME"
