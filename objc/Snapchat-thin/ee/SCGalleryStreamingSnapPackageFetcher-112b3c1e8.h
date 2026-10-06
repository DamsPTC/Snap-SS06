// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryStreamingSnapPackageFetcher
// Superclass: NSObject
// Address: 0x112b3c1e8

@interface SCGalleryStreamingSnapPackageFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryStreamingSnapPackageFetcher initWithPerformer:circumstanceEngine:cloudFS:networker:dataObjectContext:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106e3b288

// -[SCGalleryStreamingSnapPackageFetcher fetchStreamingPackageForSnap:snapDetail:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106e3b3ac

// -[SCGalleryStreamingSnapPackageFetcher _fetchOverlayIfNeededForSnap:snapDetail:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e3b6a0

// -[SCGalleryStreamingSnapPackageFetcher _fetchMediaURLIfNeededForSnap:snapDetail:overlayFile:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106e3ba6c

// -[SCGalleryStreamingSnapPackageFetcher _fetchMediaURLIfNeededForSnap:snapDetail:overlayFile:allowCodecRenewal:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x106e3ba78

// -[SCGalleryStreamingSnapPackageFetcher _processFetchMediaURLWithServerSnap:snap:overlayFile:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106e3c168

// -[SCGalleryStreamingSnapPackageFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e3c5ec

@end
