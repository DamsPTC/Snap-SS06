// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextStateHandler
// Superclass: NSObject
// Address: 0xadf850

@interface SCContextStateHandler


// -[SCContextStateHandler init]
// Type encoding: @16@0:8
// Implementation: 0x612584

// -[SCContextStateHandler transitionToContextState:]
// Type encoding: v24@0:8q16
// Implementation: 0x61260c

// -[SCContextStateHandler currentContextState]
// Type encoding: q16@0:8
// Implementation: 0x6126f8

// -[SCContextStateHandler previousContextState]
// Type encoding: q16@0:8
// Implementation: 0x612700

// -[SCContextStateHandler _handleStateTransitionFrom:to:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x612708

// -[SCContextStateHandler _transitionToContextState:]
// Type encoding: v24@0:8q16
// Implementation: 0x612714

// -[SCContextStateHandler _transitToPendingState]
// Type encoding: v16@0:8
// Implementation: 0x61275c

// -[SCContextStateHandler _startTimer]
// Type encoding: v16@0:8
// Implementation: 0x6127a8

// -[SCContextStateHandler _resetTimer]
// Type encoding: v16@0:8
// Implementation: 0x6128a4

// -[SCContextStateHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x6128e0

// +[SCContextStateHandler sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x6124d4

@end
