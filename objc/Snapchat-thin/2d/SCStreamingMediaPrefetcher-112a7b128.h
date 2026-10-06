// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingMediaPrefetcher
// Superclass: NSObject
// Address: 0x112a7b128

@interface SCStreamingMediaPrefetcher

// Property: mediaFetcher; attributes: T@"<SCStreamingMediaFetching>",R,N,V_mediaFetcher

// -[SCStreamingMediaPrefetcher initWithMediaFetcher:playbackResolver:manifestRewriter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105902fb8

// -[SCStreamingMediaPrefetcher prefetchForRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x105903134

// -[SCStreamingMediaPrefetcher cancelPrefetchForMediaKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059033b8

// -[SCStreamingMediaPrefetcher _handleManifestRequestWithCM:startTime:duration:completion:]
// Type encoding: @48@0:8@16d24d32@?40
// Implementation: 0x105903490

// -[SCStreamingMediaPrefetcher _handleManifestRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1059036c8

// -[SCStreamingMediaPrefetcher _handleMediaRequest:startTime:duration:completion:]
// Type encoding: @48@0:8@16d24d32@?40
// Implementation: 0x105903aec

// -[SCStreamingMediaPrefetcher prefetchedMediaStateForMediaKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105903f18

// -[SCStreamingMediaPrefetcher mediaFetcher]
// Type encoding: @16@0:8
// Implementation: 0x105904128

// -[SCStreamingMediaPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105904130

@end
