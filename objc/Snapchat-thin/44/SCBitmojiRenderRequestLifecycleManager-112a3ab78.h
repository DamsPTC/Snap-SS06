// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiRenderRequestLifecycleManager
// Superclass: NSObject
// Address: 0x112a3ab78

@interface SCBitmojiRenderRequestLifecycleManager

// Property: appBackgrounded; attributes: TB,V_appBackgrounded
// Property: idleCleanupEnabled; attributes: TB,R,N

// -[SCBitmojiRenderRequestLifecycleManager initWithConfigProvider:cleanupTargetQueue:applicationLifecycleEvents:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105498b6c

// -[SCBitmojiRenderRequestLifecycleManager idleCleanupEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105498e28

// -[SCBitmojiRenderRequestLifecycleManager start:]
// Type encoding: v24@0:8@16
// Implementation: 0x105498e38

// -[SCBitmojiRenderRequestLifecycleManager end:cleanupBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105498ec4

// -[SCBitmojiRenderRequestLifecycleManager cancelAll]
// Type encoding: v16@0:8
// Implementation: 0x105498fa8

// -[SCBitmojiRenderRequestLifecycleManager _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1054990d4

// -[SCBitmojiRenderRequestLifecycleManager _scheduleCleanup:afterDelay:]
// Type encoding: v32@0:8@?16d24
// Implementation: 0x105499144

// -[SCBitmojiRenderRequestLifecycleManager _runScheduledCleanup:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054992bc

// -[SCBitmojiRenderRequestLifecycleManager appBackgrounded]
// Type encoding: B16@0:8
// Implementation: 0x105499338

// -[SCBitmojiRenderRequestLifecycleManager setAppBackgrounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x105499344

// -[SCBitmojiRenderRequestLifecycleManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10549934c

@end
