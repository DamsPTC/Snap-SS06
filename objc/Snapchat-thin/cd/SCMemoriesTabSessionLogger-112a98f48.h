// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesTabSessionLogger
// Superclass: NSObject
// Address: 0x112a98f48

@interface SCMemoriesTabSessionLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesTabSessionLogger initWithUserTrackedLogger:galleryLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105ccb09c

// -[SCMemoriesTabSessionLogger getMemTabSessionIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ccb1e8

// -[SCMemoriesTabSessionLogger startMemoriesTabSessionWithTabType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ccb210

// -[SCMemoriesTabSessionLogger endMemoriesTabSession]
// Type encoding: v16@0:8
// Implementation: 0x105ccb320

// -[SCMemoriesTabSessionLogger _logGalleryTabSessionEnd]
// Type encoding: v16@0:8
// Implementation: 0x105ccb3c0

// -[SCMemoriesTabSessionLogger _resetTabSession]
// Type encoding: v16@0:8
// Implementation: 0x105ccb528

// -[SCMemoriesTabSessionLogger _emitCurrentMemTabSessionId]
// Type encoding: v16@0:8
// Implementation: 0x105ccb5e8

// -[SCMemoriesTabSessionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ccb5f8

@end
