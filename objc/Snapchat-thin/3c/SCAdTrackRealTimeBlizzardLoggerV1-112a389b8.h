// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackRealTimeBlizzardLoggerV1
// Superclass: NSObject
// Address: 0x112a389b8

@interface SCAdTrackRealTimeBlizzardLoggerV1

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdTrackRealTimeBlizzardLoggerV1 initWithBlizzardLogger:performer:adCrashLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105428250

// -[SCAdTrackRealTimeBlizzardLoggerV1 logRealTimeAdTrackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10542831c

// -[SCAdTrackRealTimeBlizzardLoggerV1 _logAttachmentInteractionEventWithTrackEventIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x105428428

// -[SCAdTrackRealTimeBlizzardLoggerV1 _logWithAttachmentInteractionType:isTapInteraction:timestamp:adServeItemId:swipeFailReason:adId:]
// Type encoding: v60@0:8q16B24d28@36q44@52
// Implementation: 0x105428b00

// -[SCAdTrackRealTimeBlizzardLoggerV1 _failureTypeFromSwipeFailReason:]
// Type encoding: q24@0:8q16
// Implementation: 0x105428d04

// -[SCAdTrackRealTimeBlizzardLoggerV1 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105428d14

@end
