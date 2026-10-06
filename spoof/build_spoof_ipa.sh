#!/usr/bin/env bash
# Assemble une copie instrumentée depuis extracted/, sur macOS avec Xcode.
set -euo pipefail

BUILD_VARIANT="${BUILD_VARIANT:-full}"
case "$BUILD_VARIANT" in
    none|swizzle|full|dccheckoff|noattest|logonly) ;;
    *) echo "BUILD_VARIANT invalide : $BUILD_VARIANT (none, swizzle, full, dccheckoff, noattest ou logonly)." >&2; exit 2 ;;
esac
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="$ROOT/build"
WORK="$OUT/spoof-work-$BUILD_VARIANT"
IPA_NAME="Snap-SS06-14.25.0.48-$BUILD_VARIANT.ipa"
MANIFEST="$OUT/Snap-SS06-14.25.0.48-$BUILD_VARIANT.manifest.json"
SOURCE_APP="$ROOT/extracted/Payload/Snapchat.app"
INSERT_REV="eb7278162af8fcc372e7f2946a2dee6a386b17d8"

[[ "$(uname -s)" == Darwin ]] || { echo "macOS et Xcode sont requis." >&2; exit 1; }
[[ -f "$SOURCE_APP/Snapchat" ]] || { echo "Binaire source absent." >&2; exit 1; }
if head -c 128 "$SOURCE_APP/Snapchat" | grep -q 'version https://git-lfs.github.com/spec/v1'; then
    echo "Le binaire est un pointeur Git LFS : exécuter git lfs pull." >&2
    exit 1
fi
mkdir -p "$OUT"
rm -rf "$WORK"
mkdir -p "$WORK"
trap 'rm -rf "$WORK"' EXIT
rm -f "$OUT/$IPA_NAME" "$MANIFEST"
echo "BUILD_VARIANT=$BUILD_VARIANT"

# 1) dylib ARM64 iPhoneOS. logonly est une unité séparée, Foundation + UIKit.
if [[ "$BUILD_VARIANT" != none ]]; then
    SDK="$(xcrun --sdk iphoneos --show-sdk-path)"
    INTERPOSE=0
    DISABLE_DEVICECHECK=0
    DISABLE_LOGIN_ATTESTATION=0
    DYLIB_SOURCE="$ROOT/spoof/SS06Spoof.m"
    FRAMEWORK_FLAGS=(-framework Foundation -framework UIKit -framework AdSupport)
    if [[ "$BUILD_VARIANT" == logonly ]]; then
        DYLIB_SOURCE="$ROOT/spoof/SS06LogOnly.m"
        FRAMEWORK_FLAGS=(-framework Foundation -framework UIKit)
        # Vérifie sur le runtime macOS les appels originaux, _cmd, objets,
        # exceptions, résolution dynamique, historique et copie simulée sur la
        # file principale. Le test hôte n'accède pas au presse-papiers du runner.
        xcrun --sdk macosx clang -fobjc-arc -fblocks -Wall -Wextra -Werror \
            -framework Foundation "$ROOT/spoof/tests/logonly_passthrough.m" \
            -o "$WORK/logonly-passthrough-test"
        "$WORK/logonly-passthrough-test" 2> "$WORK/logonly-test.log"
        cat "$WORK/logonly-test.log"
        grep -Fq 'clientAttestationPayload state=nonempty bytes=26' "$WORK/logonly-test.log"
        grep -Fq 'clientAttestationPayload state=empty bytes=0' "$WORK/logonly-test.log"
        grep -Fq 'clientAttestationPayload state=nil bytes=0' "$WORK/logonly-test.log"
        grep -Fq 'iosDeviceCheckToken state=nonempty chars=1 utf8_bytes=2' "$WORK/logonly-test.log"
        if grep -Fq 'SS06_PRIVATE_TEST_SENTINEL' "$WORK/logonly-test.log"; then
            echo "Contenu de test exposé dans les logs logonly." >&2; exit 1
        fi
    fi
    if [[ "$BUILD_VARIANT" == full ]]; then
        INTERPOSE=1
        FRAMEWORK_FLAGS+=(-framework Security)
    fi
    if [[ "$BUILD_VARIANT" == dccheckoff || "$BUILD_VARIANT" == noattest ]]; then
        DISABLE_DEVICECHECK=1
        FRAMEWORK_FLAGS+=(-framework DeviceCheck)
    fi
    if [[ "$BUILD_VARIANT" == noattest ]]; then
        DISABLE_LOGIN_ATTESTATION=1
    fi
    xcrun --sdk iphoneos clang -target arm64-apple-ios14.0 -dynamiclib \
        -isysroot "$SDK" -fobjc-arc -fblocks \
        -DSS06_ENABLE_KEYCHAIN_INTERPOSE="$INTERPOSE" \
        -DSS06_DISABLE_DEVICECHECK="$DISABLE_DEVICECHECK" \
        -DSS06_DISABLE_LOGIN_ATTESTATION="$DISABLE_LOGIN_ATTESTATION" \
        "${FRAMEWORK_FLAGS[@]}" -lobjc \
        -Wl,-install_name,@executable_path/SS06Spoof.dylib \
        "$DYLIB_SOURCE" -o "$WORK/SS06Spoof.dylib"
    codesign --force --sign - --timestamp=none "$WORK/SS06Spoof.dylib"

# 2) insert_dylib, source fixé à une révision connue ; compilation hôte macOS.
    INSERT_DIR="$WORK/insert_dylib"
    git init -q "$INSERT_DIR"
    git -C "$INSERT_DIR" remote add origin https://github.com/tyilo/insert_dylib.git
    git -C "$INSERT_DIR" fetch --depth 1 origin "$INSERT_REV"
    git -C "$INSERT_DIR" checkout -q --detach FETCH_HEAD
    xcrun --sdk macosx clang -O2 "$INSERT_DIR/insert_dylib/main.c" -o "$WORK/insert_dylib-tool"
fi

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

# Évite une confirmation automatique qui écraserait du code faute de place.
python3 - "$APP/Snapchat" "$BUILD_VARIANT" <<'PY'
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
    if sys.argv[2] != 'none':
        name = b'@executable_path/SS06Spoof.dylib'
        required = 24 + ((len(name) // 8 + 1) * 8)
        padding = f.read(required)
        if len(padding) != required or any(padding):
            raise SystemExit('Espace insuffisant pour la commande de chargement.')
PY

# L'outil attend dylib_path AVANT binary_path ; il traite les architectures lui-même.
if [[ "$BUILD_VARIANT" != none ]]; then
    cp "$WORK/SS06Spoof.dylib" "$APP/SS06Spoof.dylib"
    "$WORK/insert_dylib-tool" --inplace --weak --strip-codesig --all-yes \
        "@executable_path/SS06Spoof.dylib" "$APP/Snapchat"
    chmod 755 "$APP/SS06Spoof.dylib"
fi
chmod 755 "$APP/Snapchat"
codesign --force --sign - --timestamp=none "$APP/Snapchat"

# 4) Vérifications statiques avant archivage. Aucun lancement iOS n'est effectué.
otool -L "$APP/Snapchat" > "$WORK/dependencies.txt"
if [[ "$BUILD_VARIANT" == none ]]; then
    [[ ! -e "$APP/SS06Spoof.dylib" ]] || { echo "Dylib inattendue dans none." >&2; exit 1; }
    if grep -Fq 'SS06Spoof.dylib' "$WORK/dependencies.txt"; then
        echo "Dépendance injectée inattendue dans none." >&2; exit 1
    fi
else
    grep -Fq '@executable_path/SS06Spoof.dylib' "$WORK/dependencies.txt"
    otool -l "$APP/SS06Spoof.dylib" > "$WORK/dylib-load-commands.txt"
    nm -u "$APP/SS06Spoof.dylib" > "$WORK/dylib-imports.txt"
    nm "$APP/SS06Spoof.dylib" > "$WORK/dylib-symbols.txt"
    if [[ "$BUILD_VARIANT" == full ]]; then
        grep -Fq '__interpose' "$WORK/dylib-load-commands.txt"
        grep -Fq '_SecItemCopyMatching' "$WORK/dylib-imports.txt"
    elif grep -Fq '__interpose' "$WORK/dylib-load-commands.txt" || \
         grep -Fq '_SecItemCopyMatching' "$WORK/dylib-imports.txt"; then
        echo "Interposition Keychain inattendue dans $BUILD_VARIANT." >&2; exit 1
    fi
    # Confirme l'inclusion/exclusion des fonctions de remplacement compilées.
    for hook in SS06_identifierForVendor SS06_advertisingIdentifier \
                SS06_deviceCheckIsSupported SS06_appLoginClientAttestationPayload \
                SS06LogOnly_appLoginClientAttestationPayload SS06LogOnly_setIosDeviceCheckToken; do
        expected=0
        if [[ "$BUILD_VARIANT" != logonly && ( "$hook" == SS06_identifierForVendor || "$hook" == SS06_advertisingIdentifier ) ]] || \
           [[ "$hook" == SS06_deviceCheckIsSupported && "$DISABLE_DEVICECHECK" == 1 ]] || \
           [[ "$hook" == SS06_appLoginClientAttestationPayload && "$DISABLE_LOGIN_ATTESTATION" == 1 ]] || \
           [[ "$BUILD_VARIANT" == logonly && "$hook" == SS06LogOnly_* ]]; then
            expected=1
        fi
        present=0
        if grep -Eq "[[:space:]]_${hook}$" "$WORK/dylib-symbols.txt"; then
            present=1
        fi
        if [[ "$present" != "$expected" ]]; then
            echo "Hook $hook incohérent pour $BUILD_VARIANT (présent=$present, attendu=$expected)." >&2
            exit 1
        fi
    done
    if [[ "$BUILD_VARIANT" == logonly ]]; then
        grep -Fq '_method_exchangeImplementations' "$WORK/dylib-imports.txt"
        grep -Fq '_OBJC_CLASS_$_UIPasteboard' "$WORK/dylib-imports.txt"
        grep -Fq '_UIPasteboardOptionLocalOnly' "$WORK/dylib-imports.txt"
        otool -L "$APP/SS06Spoof.dylib" > "$WORK/dylib-dependencies.txt"
        grep -Fq 'UIKit.framework/UIKit' "$WORK/dylib-dependencies.txt"
        if grep -Eq 'SS06StoredUUID|NSUserDefaults|NSUUID' "$WORK/dylib-symbols.txt" || \
           grep -Eq '_SecItem|_dlsym' "$WORK/dylib-imports.txt"; then
            echo "Code de remplacement inattendu dans logonly." >&2; exit 1
        fi
    fi
    if [[ "$DISABLE_DEVICECHECK" == 1 ]]; then
        otool -L "$APP/SS06Spoof.dylib" > "$WORK/dylib-dependencies.txt"
        grep -Fq 'DeviceCheck.framework/DeviceCheck' "$WORK/dylib-dependencies.txt"
    fi
    codesign --verify --verbose=2 "$APP/SS06Spoof.dylib"
fi
codesign --verify --verbose=2 "$APP/Snapchat"
for component in PlugIns Extensions Watch; do
    [[ ! -e "$APP/$component" ]] || { echo "Composant encore présent : $component" >&2; exit 1; }
done
(
    cd "$WORK"
    COPYFILE_DISABLE=1 zip -qry "$OUT/$IPA_NAME" Payload
)
unzip -tq "$OUT/$IPA_NAME"

# Trace de provenance et des contrôles, publiée avec chaque IPA.
python3 - "$BUILD_VARIANT" "$OUT/$IPA_NAME" "$MANIFEST" "$SOURCE_APP/Snapchat" "$APP" "$INSERT_REV" <<'PY'
import hashlib, json, os, pathlib, sys
variant, ipa_name, manifest_name, source, app_name, insert_rev = sys.argv[1:]
def sha256(path):
    digest = hashlib.sha256()
    with open(path, 'rb') as file:
        for block in iter(lambda: file.read(1024 * 1024), b''):
            digest.update(block)
    return digest.hexdigest()
ipa, app = pathlib.Path(ipa_name), pathlib.Path(app_name)
dylib = app / 'SS06Spoof.dylib'
manifest = {
    'variant': variant, 'ipa': ipa.name, 'ipa_bytes': ipa.stat().st_size,
    'ipa_sha256': sha256(ipa), 'source_main_sha256': sha256(source),
    'repacked_main_sha256': sha256(app / 'Snapchat'),
    'dylib_present': dylib.exists(), 'keychain_interposition_compiled': variant == 'full',
    'idfv_idfa_swizzles_compiled': variant not in ('none', 'logonly'),
    'devicecheck_is_supported_no_compiled': variant in ('dccheckoff', 'noattest'),
    'login_attestation_nil_compiled': variant == 'noattest',
    'logonly_observers_compiled': variant == 'logonly',
    'logonly_host_tests_passed': variant == 'logonly',
    'logonly_timestamped_history_compiled': variant == 'logonly',
    'logonly_automatic_clipboard_compiled': variant == 'logonly',
    'logonly_clipboard_host_tests_passed': variant == 'logonly',
    'logonly_observes': ['clientAttestationPayload.length', 'iosDeviceCheckToken.length',
                        'iosDeviceCheckToken.utf8_bytes'] if variant == 'logonly' else [],
    'dylib_sha256': sha256(dylib) if dylib.exists() else None,
    'removed_components': ['PlugIns', 'Extensions', 'Watch'],
    'signature': 'ad-hoc', 'static_checks_passed': True, 'ios_runtime_tested': False,
    'insert_dylib_revision': insert_rev if variant != 'none' else None,
    'github_sha': os.environ.get('GITHUB_SHA'), 'github_run_id': os.environ.get('GITHUB_RUN_ID'),
}
pathlib.Path(manifest_name).write_text(json.dumps(manifest, indent=2) + '\n')
print(json.dumps(manifest, indent=2))
PY
echo "OK : $OUT/$IPA_NAME"
