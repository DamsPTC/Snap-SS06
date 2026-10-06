// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdServeLoggingContext
// Superclass: NSObject
// Address: 0x1129d97f8

@interface SCAdServeLoggingContext

// Property: storySessionId; attributes: T@"NSString",N,R
// Property: viewSource; attributes: Tq,N,R,VviewSource
// Property: isCached; attributes: TB,N,R,VisCached
// Property: prefetchRequest; attributes: TB,N,R,VprefetchRequest
// Property: earlyFetch; attributes: TB,N,R,VearlyFetch
// Property: requestOrigin; attributes: Tq,N,R,VrequestOrigin
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdServeLoggingContext withIsCached:]
// Type encoding: @20@0:8B16
// Implementation: 0x1047596a0

// -[SCAdServeLoggingContext withRequestOrigin:]
// Type encoding: @24@0:8q16
// Implementation: 0x1047597ec

// -[SCAdServeLoggingContext initWithStorySessionId:viewSource:isCached:prefetchRequest:]
// Type encoding: @40@0:8@16q24B32B36
// Implementation: 0x1047598ac

// -[SCAdServeLoggingContext initWithStorySessionId:viewSource:isCached:prefetchRequest:earlyFetch:]
// Type encoding: @44@0:8@16q24B32B36B40
// Implementation: 0x1047599c0

// -[SCAdServeLoggingContext storySessionId]
// Type encoding: @16@0:8
// Implementation: 0x10481b930

// -[SCAdServeLoggingContext viewSource]
// Type encoding: q16@0:8
// Implementation: 0x10481b98c

// -[SCAdServeLoggingContext isCached]
// Type encoding: B16@0:8
// Implementation: 0x10481b99c

// -[SCAdServeLoggingContext prefetchRequest]
// Type encoding: B16@0:8
// Implementation: 0x10481b9ac

// -[SCAdServeLoggingContext earlyFetch]
// Type encoding: B16@0:8
// Implementation: 0x10481b9bc

// -[SCAdServeLoggingContext requestOrigin]
// Type encoding: q16@0:8
// Implementation: 0x10481b9cc

// -[SCAdServeLoggingContext initWithStorySessionId:viewSource:isCached:prefetchRequest:earlyFetch:requestOrigin:]
// Type encoding: @52@0:8@16q24B32B36B40q44
// Implementation: 0x10481ba98

// -[SCAdServeLoggingContext hash]
// Type encoding: q16@0:8
// Implementation: 0x10481bc0c

// -[SCAdServeLoggingContext isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10481bc40

// -[SCAdServeLoggingContext copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10481bcc0

// -[SCAdServeLoggingContext encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10481beb0

// -[SCAdServeLoggingContext initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10481c1f0

// -[SCAdServeLoggingContext description]
// Type encoding: @16@0:8
// Implementation: 0x10481c218

// -[SCAdServeLoggingContext init]
// Type encoding: @16@0:8
// Implementation: 0x10481c24c

// -[SCAdServeLoggingContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10481c2c8

@end
