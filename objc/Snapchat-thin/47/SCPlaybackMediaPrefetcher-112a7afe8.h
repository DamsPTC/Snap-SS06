// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackMediaPrefetcher
// Superclass: NSObject
// Address: 0x112a7afe8

@interface SCPlaybackMediaPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackMediaPrefetcher initWithStreamingMediaFetcher:circumstanceEngine:playbackResolver:manifestRewriter:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1058ffdc4

// -[SCPlaybackMediaPrefetcher submitRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058ffed0

// -[SCPlaybackMediaPrefetcher cancelRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059000e4

// -[SCPlaybackMediaPrefetcher getPrefetchStateForMediaKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105900164

// -[SCPlaybackMediaPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10590031c

@end
