// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryStreamingManager
// Superclass: NSObject
// Address: 0x112b3c238

@interface SCGalleryStreamingManager

// Property: streamingPackageFetcher; attributes: T@"<SCGalleryStreamingSnapPackageFetching>",R,N,V_streamingPackageFetcher
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryStreamingManager initWithCircumstanceEngine:cloudFS:contentDelivery:dataObjectContext:encryptedContentManager:networker:snapTokenProvider:playbackAssetRepository:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106e3cac4

// -[SCGalleryStreamingManager contentManagerProxiedStreamingAVAssetForStreamingPackage:encryptionInfo:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106e3ce18

// -[SCGalleryStreamingManager preloadStreamingForSnap:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e3d084

// -[SCGalleryStreamingManager removePendingStreamingSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e3d4c0

// -[SCGalleryStreamingManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106e3d5c8

// -[SCGalleryStreamingManager didReceiveMediaServicesWereLostNotification]
// Type encoding: v16@0:8
// Implementation: 0x106e3d634

// -[SCGalleryStreamingManager didReceiveMediaServicesWereResetNotification]
// Type encoding: v16@0:8
// Implementation: 0x106e3d69c

// -[SCGalleryStreamingManager _fetchAccessTokenIfNeededWithSuccessBlock:failureBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106e3d754

// -[SCGalleryStreamingManager _streamingVideoAssetWithStreamingPackge:encryptionInfo:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e3d818

// -[SCGalleryStreamingManager _streamingVideoAssetWithStreamingPackge:encryptionInfo:accessToken:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106e3d99c

// -[SCGalleryStreamingManager _prefetchStreamingMediaForSnap:streamingPackge:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e3e304

// -[SCGalleryStreamingManager _prefetchMediaForStreamingPackge:encryptionInfo:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e3e5dc

// -[SCGalleryStreamingManager _prefetchMediaForStreamingPackge:encryptionInfo:accessToken:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106e3e758

// -[SCGalleryStreamingManager _retrieveContentForContentKey:encryptionInfo:requestContext:snapId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106e3eaf4

// -[SCGalleryStreamingManager _loadAVAssetFromContentResult:snapId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e3ed04

// -[SCGalleryStreamingManager streamingPackageFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106e3ee8c

// -[SCGalleryStreamingManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e3ee94

@end
