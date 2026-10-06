// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPageLauncherImpl
// Superclass: NSObject
// Address: 0x112a98138

@interface SCPageLauncherImpl

// Property: pluginSaberService; attributes: T@"_TtC28SCPageLauncherPluginRegistry32SCPageLauncherPluginSaberService",&,N,V_pluginSaberService
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPageLauncherImpl initWithPlugInScopeExposer:userTrackedLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1008f1f18

// -[SCPageLauncherImpl setPluginSaberService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008f2984

// -[SCPageLauncherImpl launchWithCommand:uiContainer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105c87c44

// -[SCPageLauncherImpl launchWithPayload:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c87f40

// -[SCPageLauncherImpl launchInteractivelyWithPayload:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x105c88084

// -[SCPageLauncherImpl launchForResultWithCommand:uiContainer:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x105c88274

// -[SCPageLauncherImpl launchPageWithComposerPageLaunchPayload:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c88644

// -[SCPageLauncherImpl launchWithPageLaunchCommand:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c889d4

// -[SCPageLauncherImpl launchForResultWithPageLaunchCommand:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c88b78

// -[SCPageLauncherImpl _exposePluginScopeIfRequiredAndLaunchBlock:forScreen:composerPageLaunchPayloadType:payload:]
// Type encoding: v40@0:8@?16i24i28@32
// Implementation: 0x105c88d8c

// -[SCPageLauncherImpl _processPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c89144

// -[SCPageLauncherImpl pluginSaberService]
// Type encoding: @16@0:8
// Implementation: 0x105c89964

// -[SCPageLauncherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c8996c

@end
