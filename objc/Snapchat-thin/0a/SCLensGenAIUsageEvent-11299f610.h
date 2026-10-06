// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensGenAIUsageEvent
// Superclass: NSObject
// Address: 0x11299f610

@interface SCLensGenAIUsageEvent

// Property: lensId; attributes: T@"NSString",N,R
// Property: state; attributes: Tq,N,R,Vstate
// Property: timestampMs; attributes: Tq,N,R,VtimestampMs

// -[SCLensGenAIUsageEvent lensId]
// Type encoding: @16@0:8
// Implementation: 0x104340170

// -[SCLensGenAIUsageEvent state]
// Type encoding: q16@0:8
// Implementation: 0x1043401bc

// -[SCLensGenAIUsageEvent timestampMs]
// Type encoding: q16@0:8
// Implementation: 0x1043401cc

// -[SCLensGenAIUsageEvent initWithLensId:state:timestampMs:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1043402e4

// -[SCLensGenAIUsageEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104340370

// -[SCLensGenAIUsageEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1043403d0

@end
