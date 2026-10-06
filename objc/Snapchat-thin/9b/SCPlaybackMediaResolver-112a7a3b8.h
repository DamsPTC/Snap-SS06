// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackMediaResolver
// Superclass: NSObject
// Address: 0x112a7a3b8

@interface SCPlaybackMediaResolver

// Property: enableNewContentManagerForStories; attributes: TB,R,N,V_enableNewContentManagerForStories
// Property: mediaResolutionRequestFetchStatusObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackMediaResolver initWithContentDeliveryServices:contentManagerServices:contentManagerPlaybackServices:contentObjectResolver:circumstanceEngine:abrMediaServices:grapheneRegistry:webProxyServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1058f89d4

// -[SCPlaybackMediaResolver registerCustomSingleMediaResolvers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058f8c68

// -[SCPlaybackMediaResolver resolveRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f8cd0

// -[SCPlaybackMediaResolver resolveSingleMediaRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f9558

// -[SCPlaybackMediaResolver resolveZipMediaRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f9730

// -[SCPlaybackMediaResolver hasMediaBundleResolved:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058f995c

// -[SCPlaybackMediaResolver retrieveCacheStatusForRequest:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1058f9aa0

// -[SCPlaybackMediaResolver mediaResolutionRequestFetchStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x1058f9c08

// -[SCPlaybackMediaResolver hasDownloadStarted:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058f9d24

// -[SCPlaybackMediaResolver isDownloadComplete:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058f9d88

// -[SCPlaybackMediaResolver downloadContentBundle:mediaContextType:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1058f9dec

// -[SCPlaybackMediaResolver retrieveStreamingVariantCacheStatusForContentBundle:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058fa150

// -[SCPlaybackMediaResolver _retrieveCacheStatusForRequest:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1058fa284

// -[SCPlaybackMediaResolver _retrieveCacheStatusForContentBundle:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058fa648

// -[SCPlaybackMediaResolver downloadSingleMedia:range:loggedUseCase:completion:]
// Type encoding: @56@0:8@16{_NSRange=QQ}24@40@?48
// Implementation: 0x1058fa6f4

// -[SCPlaybackMediaResolver prefetchStreamingContentFrom:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058fafd4

// -[SCPlaybackMediaResolver enableNewContentManagerForStories]
// Type encoding: B16@0:8
// Implementation: 0x1058fb820

// -[SCPlaybackMediaResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058fb828

@end
