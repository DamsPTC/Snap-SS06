// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerAppInfosStore
// Superclass: NSObject
// Address: 0x112a94ee8

@interface SCComposerAppInfosStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerAppInfosStore initWithLogger:grapheneRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c5f650

// -[SCComposerAppInfosStore getAppInfosWithAppsInfos:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c5f6f4

// -[SCComposerAppInfosStore installAppWithAppInfo:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c5f704

// -[SCComposerAppInfosStore openAppWithAppInfo:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c5f7cc

// -[SCComposerAppInfosStore shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105c5f9f4

// -[SCComposerAppInfosStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105c5f9fc

// -[SCComposerAppInfosStore _reportClickEventWithAppName:isOpen:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105c5fa08

// -[SCComposerAppInfosStore _reportClickEventToGrapheneWithAppName:isOpen:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105c5faa0

// -[SCComposerAppInfosStore _canOpenApp:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c5fba0

// -[SCComposerAppInfosStore _getAppInstallationStatus:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c5fd24

// -[SCComposerAppInfosStore _installAppInfo:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c5ff40

// -[SCComposerAppInfosStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c60074

@end
