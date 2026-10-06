// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanSessionBlizzardSessionSnapcodeLifecycleLogger
// Superclass: NSObject
// Address: 0x112ab92e8

@interface SCScanSessionBlizzardSessionSnapcodeLifecycleLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger initWithUserTrackedLogger:lensDataConfigProvider:timeProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105ffe220

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanDidBeginWithSessionId:source:sourceId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105ffe2ec

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105ffe34c

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanAnalysisDidBeginWithQuery:categoryMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ffe378

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanAnalysisDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105ffe3d0

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanDidFinishSnapcodeDetectionForFrameNumber:identifier:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105ffe3d4

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanDidBeginSnapcodeMetadataFetchForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffe578

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanDidFinishSnapcodeMetadataFetchForIdentifier:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ffe630

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger scanCardDidDisplayWithViewModel:hasShareCTA:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ffe808

// -[SCScanSessionBlizzardSessionSnapcodeLifecycleLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ffe990

@end
