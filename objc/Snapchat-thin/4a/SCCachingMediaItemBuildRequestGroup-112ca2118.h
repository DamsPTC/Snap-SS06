// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaItemBuildRequestGroup
// Superclass: NSObject
// Address: 0x112ca2118

@interface SCCachingMediaItemBuildRequestGroup

// Property: sourceLevel; attributes: Tq,N,V_sourceLevel
// Property: upstreamRequest; attributes: T@"<SCCachingMediaRequest>",&,N,V_upstreamRequest
// Property: persistsGeneration; attributes: TB,N,V_persistsGeneration
// Property: didReportCacheMiss; attributes: TB,N,V_didReportCacheMiss
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCachingMediaItemBuildRequestGroup initWithPerformer:sourceLevel:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b67f10c

// -[SCCachingMediaItemBuildRequestGroup dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b67f1d0

// -[SCCachingMediaItemBuildRequestGroup setUpstreamRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67f3ac

// -[SCCachingMediaItemBuildRequestGroup addRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67f45c

// -[SCCachingMediaItemBuildRequestGroup invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10b67f464

// -[SCCachingMediaItemBuildRequestGroup isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x10b67f58c

// -[SCCachingMediaItemBuildRequestGroup removeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67f5ac

// -[SCCachingMediaItemBuildRequestGroup performWithItem:count:isFinal:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x10b67f6c8

// -[SCCachingMediaItemBuildRequestGroup reporterWithIdentifier:didReportProgress:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b67f804

// -[SCCachingMediaItemBuildRequestGroup sourceLevel]
// Type encoding: q16@0:8
// Implementation: 0x10b67f9d8

// -[SCCachingMediaItemBuildRequestGroup setSourceLevel:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b67f9e0

// -[SCCachingMediaItemBuildRequestGroup upstreamRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b67f9e8

// -[SCCachingMediaItemBuildRequestGroup persistsGeneration]
// Type encoding: B16@0:8
// Implementation: 0x10b67f9f0

// -[SCCachingMediaItemBuildRequestGroup setPersistsGeneration:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b67f9f8

// -[SCCachingMediaItemBuildRequestGroup didReportCacheMiss]
// Type encoding: B16@0:8
// Implementation: 0x10b67fa00

// -[SCCachingMediaItemBuildRequestGroup setDidReportCacheMiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b67fa08

// -[SCCachingMediaItemBuildRequestGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b67fa10

@end
