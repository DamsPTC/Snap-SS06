// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanSnapcodeGrapheneLogger
// Superclass: NSObject
// Address: 0x112ab9428

@interface SCScanSnapcodeGrapheneLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanSnapcodeGrapheneLogger initWithGrapheneRegistry:timeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060019c0

// -[SCScanSnapcodeGrapheneLogger scanDidBeginWithSessionId:source:sourceId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106001a64

// -[SCScanSnapcodeGrapheneLogger scanDidBeginSnapcodeDetectionForFrameNumber:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106001aa4

// -[SCScanSnapcodeGrapheneLogger scanDidFinishSnapcodeDetectionForFrameNumber:identifier:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106001b58

// -[SCScanSnapcodeGrapheneLogger scanDidBeginSnapcodeMetadataFetchForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106001d24

// -[SCScanSnapcodeGrapheneLogger scanDidFinishSnapcodeMetadataFetchForIdentifier:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106001dd8

// -[SCScanSnapcodeGrapheneLogger scanCardDidDisplayWithViewModel:hasShareCTA:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106001f24

// -[SCScanSnapcodeGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106002064

@end
