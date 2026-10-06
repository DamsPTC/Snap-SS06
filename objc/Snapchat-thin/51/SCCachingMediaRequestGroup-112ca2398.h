// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaRequestGroup
// Superclass: NSObject
// Address: 0x112ca2398

@interface SCCachingMediaRequestGroup

// Property: upstreamRequest; attributes: T@"<SCCachingMediaRequest>",&,N,V_upstreamRequest
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCachingMediaRequestGroup initWithQueue:completionHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b689ec0

// -[SCCachingMediaRequestGroup setUpstreamRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b689f8c

// -[SCCachingMediaRequestGroup performCacheMiss]
// Type encoding: v16@0:8
// Implementation: 0x10b68a038

// -[SCCachingMediaRequestGroup perform:fromCache:sourceLevel:final:]
// Type encoding: v40@0:8@16B24q28B36
// Implementation: 0x10b68a130

// -[SCCachingMediaRequestGroup addRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68a28c

// -[SCCachingMediaRequestGroup removeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68a2d8

// -[SCCachingMediaRequestGroup reporterWithIdentifier:didReportProgress:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b68a3f4

// -[SCCachingMediaRequestGroup upstreamRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b68a5c8

// -[SCCachingMediaRequestGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b68a5d0

@end
