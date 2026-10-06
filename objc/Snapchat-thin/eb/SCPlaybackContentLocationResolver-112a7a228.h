// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackContentLocationResolver
// Superclass: NSObject
// Address: 0x112a7a228

@interface SCPlaybackContentLocationResolver

// Property: enableNewContentManagerForStories; attributes: TB,R,N,V_enableNewContentManagerForStories
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackContentLocationResolver initWithBoltContentResolver:contentFetcher:bufferedContentFetcher:cachePolicyManager:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1058f4c14

// -[SCPlaybackContentLocationResolver shouldResolveWithRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058f4dac

// -[SCPlaybackContentLocationResolver resolveRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f4e24

// -[SCPlaybackContentLocationResolver retrieveCacheStatusForRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058f555c

// -[SCPlaybackContentLocationResolver _doMaybeFulldownload:contentBundle:requestContext:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1058f5690

// -[SCPlaybackContentLocationResolver _doFullDownload:contentBundle:requestContext:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1058f5eb8

// -[SCPlaybackContentLocationResolver _retrieveCacheStatusForRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058f61f8

// -[SCPlaybackContentLocationResolver _loadRequestDidCompleteWithResolvedContentBundle:contentBundleMetadata:request:data:fetchRatio:error:completion:]
// Type encoding: v72@0:8@16@24@32@40d48@56@?64
// Implementation: 0x1058f64a0

// -[SCPlaybackContentLocationResolver _setCachePolicyForRequest:contentBundle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058f672c

// -[SCPlaybackContentLocationResolver enableNewContentManagerForStories]
// Type encoding: B16@0:8
// Implementation: 0x1058f6844

// -[SCPlaybackContentLocationResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058f684c

@end
