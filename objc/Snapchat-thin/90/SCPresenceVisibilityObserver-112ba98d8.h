// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPresenceVisibilityObserver
// Superclass: NSObject
// Address: 0x112ba98d8

@interface SCPresenceVisibilityObserver

// Property: visibilityEventObservable; attributes: T@"SCObservable",R,N

// -[SCPresenceVisibilityObserver initWithCurrentPageTracker:applicationLifecycleEvents:configProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1085da8ac

// -[SCPresenceVisibilityObserver visibilityEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1085da998

// -[SCPresenceVisibilityObserver _subscribeToPageTracker:appLifecycleEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085da9a0

// -[SCPresenceVisibilityObserver _handleNewPage:isForeground:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1085dae68

// -[SCPresenceVisibilityObserver _isCameraPage:]
// Type encoding: B24@0:8q16
// Implementation: 0x1085daf3c

// -[SCPresenceVisibilityObserver _isChatPage:]
// Type encoding: B24@0:8q16
// Implementation: 0x1085dafa4

// -[SCPresenceVisibilityObserver _isChatMediaPage:]
// Type encoding: B24@0:8q16
// Implementation: 0x1085dafb0

// -[SCPresenceVisibilityObserver _isExtendChatMediaPage:]
// Type encoding: B24@0:8q16
// Implementation: 0x1085dafbc

// -[SCPresenceVisibilityObserver _extendChatMediaEventForPage:]
// Type encoding: @24@0:8q16
// Implementation: 0x1085db06c

// -[SCPresenceVisibilityObserver _extendChatMediaSendMode]
// Type encoding: q16@0:8
// Implementation: 0x1085db0c0

// -[SCPresenceVisibilityObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085db0ec

@end
