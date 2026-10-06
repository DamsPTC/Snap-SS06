#!/usr/bin/env bash
# Assemble une copie instrumentée depuis extracted/, sur macOS avec Xcode.
set -euo pipefail

BUILD_VARIANT="${BUILD_VARIANT:-full}"
case "$BUILD_VARIANT" in
    none|swizzle|full|dccheckoff|noattest|logonly|selfread) ;;
    *) echo "BUILD_VARIANT invalide : $BUILD_VARIANT (none, swizzle, full, dccheckoff, noattest, logonly ou selfread)." >&2; exit 2 ;;
esac
LOGONLY_FAMILY=0
SELFREAD=0
if [[ "$BUILD_VARIANT" == logonly || "$BUILD_VARIANT" == selfread ]]; then LOGONLY_FAMILY=1; fi
if [[ "$BUILD_VARIANT" == selfread ]]; then SELFREAD=1; fi
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
    if [[ "$LOGONLY_FAMILY" == 1 ]]; then
        DYLIB_SOURCE="$ROOT/spoof/SS06LogOnly.m"
        FRAMEWORK_FLAGS=(-framework Foundation -framework UIKit)
        # Vérifie sur le runtime macOS les appels originaux, _cmd, objets,
        # exceptions, résolution dynamique, historique et copie simulée sur la
        # file principale. Le test hôte n'accède pas au presse-papiers du runner.
        xcrun --sdk macosx clang -fobjc-arc -fblocks -Wall -Wextra -Werror \
            -DSS06_SELFREAD="$SELFREAD" \
            -framework Foundation "$ROOT/spoof/tests/logonly_passthrough.m" \
            -o "$WORK/logonly-passthrough-test"
        if ! "$WORK/logonly-passthrough-test" 2> "$WORK/logonly-test.log"; then
            cat "$WORK/logonly-test.log" >&2; exit 1
        fi
        cat "$WORK/logonly-test.log"
        grep -Fq 'clientAttestationPayload state=nonempty bytes=26' "$WORK/logonly-test.log"
        grep -Fq 'clientAttestationPayload state=empty bytes=0' "$WORK/logonly-test.log"
        grep -Fq 'clientAttestationPayload state=nil bytes=0' "$WORK/logonly-test.log"
        grep -Fq 'iosDeviceCheckToken state=nonempty chars=1 utf8_bytes=2' "$WORK/logonly-test.log"
        grep -Fq 'bytes=1421 base64=' "$WORK/logonly-test.log"
        grep -Fq 'source=devicecheck.callback' "$WORK/logonly-test.log"
        grep -Fq 'source=request.iosDeviceCheckToken' "$WORK/logonly-test.log"
        if grep -Fq 'SS06_PRIVATE_TEST_SENTINEL' "$WORK/logonly-test.log"; then
            echo "Description de requête ou exception exposée dans les logs logonly." >&2; exit 1
        fi
        # Parseurs protobuf standards, testés uniquement sur des données synthétiques.
        python3 -m venv "$WORK/analysis-venv"
        "$WORK/analysis-venv/bin/python" -m pip install --disable-pip-version-check \
            -r "$ROOT/spoof/requirements-analysis.txt"
        "$WORK/analysis-venv/bin/python" -m unittest discover \
            -s "$ROOT/spoof/tests" -p 'test_attestation_analysis.py' -v
    fi
    if [[ "$SELFREAD" == 1 ]]; then
        # Calls originate in another Mach-O image, exercising actual dyld bindings.
        xcrun --sdk macosx clang -dynamiclib -fobjc-arc -fblocks -Wall -Wextra -Werror \
            -framework Foundation "$ROOT/spoof/tests/selfread_interposer.m" \
            -Wl,-install_name,@rpath/libSS06SelfReadTest.dylib -o "$WORK/libSS06SelfReadTest.dylib"
        xcrun --sdk macosx clang -fobjc-arc -fblocks -Wall -Wextra -Werror \
            -framework Foundation "$ROOT/spoof/tests/selfread_host.m" \
            -L"$WORK" -lSS06SelfReadTest -Wl,-rpath,"$WORK" -o "$WORK/selfread-host-test"
        if ! "$WORK/selfread-host-test" 2> "$WORK/selfread-test.log"; then
            cat "$WORK/selfread-test.log" >&2; exit 1
        fi
        cat "$WORK/selfread-test.log"
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
        -DSS06_SELFREAD="$SELFREAD" \
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
    elif [[ "$SELFREAD" == 1 ]]; then
        grep -Fq '__interpose' "$WORK/dylib-load-commands.txt"
        if grep -Fq '_SecItemCopyMatching' "$WORK/dylib-imports.txt"; then
            echo "Interposition Keychain inattendue dans selfread." >&2; exit 1
        fi
        for function in open fopen read pread mmap; do
            grep -Eq "[[:space:]]_SS06SelfRead_${function}$" "$WORK/dylib-symbols.txt"
            grep -Eq "[[:space:]]_${function}$" "$WORK/dylib-imports.txt"
        done
        python3 - "$WORK/dylib-load-commands.txt" <<'PY'
import pathlib, re, sys
commands = pathlib.Path(sys.argv[1]).read_text()
match = re.search(r'sectname __interpose\s+segname __DATA\s+addr 0x[0-9a-fA-F]+\s+size (0x[0-9a-fA-F]+)', commands)
assert match and int(match.group(1), 16) == 5 * 2 * 8, 'Expected five ARM64 interpose pairs'
PY
    elif grep -Fq '__interpose' "$WORK/dylib-load-commands.txt" || \
         grep -Fq '_SecItemCopyMatching' "$WORK/dylib-imports.txt"; then
        echo "Interposition Keychain inattendue dans $BUILD_VARIANT." >&2; exit 1
    fi
    # Confirme l'inclusion/exclusion des fonctions de remplacement compilées.
    for hook in SS06_identifierForVendor SS06_advertisingIdentifier \
                SS06_deviceCheckIsSupported SS06_appLoginClientAttestationPayload \
                SS06LogOnly_appLoginClientAttestationPayload SS06LogOnly_setIosDeviceCheckToken; do
        expected=0
        if [[ "$LOGONLY_FAMILY" != 1 && ( "$hook" == SS06_identifierForVendor || "$hook" == SS06_advertisingIdentifier ) ]] || \
           [[ "$hook" == SS06_deviceCheckIsSupported && "$DISABLE_DEVICECHECK" == 1 ]] || \
           [[ "$hook" == SS06_appLoginClientAttestationPayload && "$DISABLE_LOGIN_ATTESTATION" == 1 ]] || \
           [[ "$LOGONLY_FAMILY" == 1 && "$hook" == SS06LogOnly_* ]]; then
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
    if [[ "$LOGONLY_FAMILY" == 1 ]]; then
        grep -Fq '_method_exchangeImplementations' "$WORK/dylib-imports.txt"
        grep -Fq '_imp_implementationWithBlock' "$WORK/dylib-imports.txt"
        grep -Eq '[[:space:]]_SS06LogOnlyInstallTransportObservers$' "$WORK/dylib-symbols.txt"
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
import hashlib, json, os, pathlib, struct, sys
variant, ipa_name, manifest_name, source, app_name, insert_rev = sys.argv[1:]
logonly_family = variant in ('logonly', 'selfread')
def sha256(path):
    digest = hashlib.sha256()
    with open(path, 'rb') as file:
        for block in iter(lambda: file.read(1024 * 1024), b''):
            digest.update(block)
    return digest.hexdigest()
ipa, app = pathlib.Path(ipa_name), pathlib.Path(app_name)
dylib = app / 'SS06Spoof.dylib'
def macho_landmarks(path):
    result = {}
    with path.open('rb') as stream:
        header = struct.unpack('<8I', stream.read(32))
        assert header[0] == 0xfeedfacf
        commands = stream.read(header[5])
    pos = 0
    for _ in range(header[4]):
        cmd, size = struct.unpack_from('<II', commands, pos)
        assert size >= 8 and pos + size <= len(commands)
        if cmd == 0x2c:
            cryptoff, cryptsize, cryptid = struct.unpack_from('<III', commands, pos + 8)
            result['encryption_info_64'] = {
                'cryptid_file_offset': 32 + pos + 16, 'cryptid_bytes': 4,
                'cryptid': cryptid, 'cryptoff': cryptoff, 'cryptsize': cryptsize,
            }
        elif cmd == 0x1d:
            dataoff, datasize = struct.unpack_from('<II', commands, pos + 8)
            result['code_signature'] = {'dataoff': dataoff, 'datasize': datasize}
        pos += size
    assert pos == len(commands)
    return result
manifest = {
    'variant': variant, 'ipa': ipa.name, 'ipa_bytes': ipa.stat().st_size,
    'ipa_sha256': sha256(ipa), 'source_main_sha256': sha256(source),
    'repacked_main_sha256': sha256(app / 'Snapchat'),
    'repacked_main_macho_landmarks': macho_landmarks(app / 'Snapchat'),
    'dylib_present': dylib.exists(), 'keychain_interposition_compiled': variant == 'full',
    'idfv_idfa_swizzles_compiled': variant not in ('none', 'logonly', 'selfread'),
    'devicecheck_is_supported_no_compiled': variant in ('dccheckoff', 'noattest'),
    'login_attestation_nil_compiled': variant == 'noattest',
    'logonly_observers_compiled': logonly_family,
    'logonly_host_tests_passed': logonly_family,
    'logonly_timestamped_history_compiled': logonly_family,
    'logonly_automatic_clipboard_compiled': logonly_family,
    'logonly_clipboard_host_tests_passed': logonly_family,
    'logonly_trace_version': 'selfread-v1' if variant == 'selfread' else ('values-v3' if logonly_family else None),
    'logonly_transport_targets_compiled': 34 if logonly_family else 0,
    'logonly_transport_host_tests_passed': logonly_family,
    'logonly_value_dumps_compiled': logonly_family,
    'logonly_value_dump_host_tests_passed': logonly_family,
    'logonly_offline_analysis_tests_passed': logonly_family,
    'selfread_posix_interposition_compiled': variant == 'selfread',
    'selfread_interposed_functions': ['open', 'fopen', 'read', 'pread', 'mmap'] if variant == 'selfread' else [],
    'selfread_dyld_host_tests_passed': variant == 'selfread',
    'selfread_exact_path_filter': 'Snapchat.app/Snapchat' if variant == 'selfread' else None,
    'logonly_observes': ['clientAttestationPayload.length', 'iosDeviceCheckToken.length',
                        'iosDeviceCheckToken.utf8_bytes', 'Janus.login_registration.rpc',
                        'SCNGrpcUnifiedGrpcService.unaryCall', 'SCDeviceCheckFeature.apple_request',
                        'SCPreLoginAttestationImpl.wrappers', 'SCArgosImpl.generateAttestationPayload',
                        'SCPreLoginAttestationImpl._getAttestationPayload.base64',
                        'SCDeviceCheckFeature.callback.token', 'iosDeviceCheckToken.value'] if logonly_family else [],
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
