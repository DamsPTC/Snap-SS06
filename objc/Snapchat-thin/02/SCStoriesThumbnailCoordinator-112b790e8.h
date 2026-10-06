// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesThumbnailCoordinator
// Superclass: NSObject
// Address: 0x112b790e8

@interface SCStoriesThumbnailCoordinator

// Property: thumbnailGenerator; attributes: T@"SCMyStoriesMediaThumbnailGenerator",&,N,V_thumbnailGenerator
// Property: mediaDownloader; attributes: T@"SCStoriesMediaDownloader",&,N,V_mediaDownloader
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesThumbnailCoordinator initWithStoriesMediaStore:sessionRequestManager:contentDelivery:grapheneMetricsEmitter:crashLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10044b634

// -[SCStoriesThumbnailCoordinator updateWithMediaProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10044c900

// -[SCStoriesThumbnailCoordinator addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10081f0d8

// -[SCStoriesThumbnailCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ccc850

// -[SCStoriesThumbnailCoordinator queryThumbnailForThumbnailInfo:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107ccc858

// -[SCStoriesThumbnailCoordinator _handleMissingThumbnail:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cccda0

// -[SCStoriesThumbnailCoordinator _retrieveThumbnailFromContentDeliveryIfNeeded:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ccd01c

// -[SCStoriesThumbnailCoordinator retrieveThumbnailFromContentDelivery:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107ccd340

// -[SCStoriesThumbnailCoordinator _retrieveThumbnailUsingUrlFromContentDelivery:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107ccd410

// -[SCStoriesThumbnailCoordinator _retrieveThumbnailUsingContentObjectFromContentDelivery:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107ccd6a0

// -[SCStoriesThumbnailCoordinator _retrieveContentDataForThumbnailInfo:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ccd940

// -[SCStoriesThumbnailCoordinator removeThumbnailsForSnapMediaCacheKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ccdbb8

// -[SCStoriesThumbnailCoordinator removeAllThumbnailsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ccde94

// -[SCStoriesThumbnailCoordinator _removeAllThumbnailContentWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ccdfc8

// -[SCStoriesThumbnailCoordinator _handleRemovedAllMediaFromCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107cce16c

// -[SCStoriesThumbnailCoordinator _boltContentDeliveryDownloadCallback:completion:]
// Type encoding: @?32@0:8@16@?24
// Implementation: 0x107cce1cc

// -[SCStoriesThumbnailCoordinator _contentDeliveryRetrieveCallback:completion:]
// Type encoding: @?32@0:8@16@?24
// Implementation: 0x107cce2f8

// -[SCStoriesThumbnailCoordinator _performContentDeliveryRetrieveCallbackForThumbnailInfo:data:success:isFromCache:completion:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x107cce444

// -[SCStoriesThumbnailCoordinator _handleContentDeliveryFailureCallbackForThumbnailInfo:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cce468

// -[SCStoriesThumbnailCoordinator _mediaDownloadCallback:]
// Type encoding: @?24@0:8@16
// Implementation: 0x107cce47c

// -[SCStoriesThumbnailCoordinator _handleSuccessCallbackForThumbnailInfo:responseData:serverExpirationTime:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x107cce5bc

// -[SCStoriesThumbnailCoordinator _handlePutThumbnailResponse:thumbnailData:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107cce918

// -[SCStoriesThumbnailCoordinator _handleFailureCallbackForThumbnailInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cce9c4

// -[SCStoriesThumbnailCoordinator _invokeCompletionBlocksForThumbnailURL:thumbnailData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ccea50

// -[SCStoriesThumbnailCoordinator _createThumbnailsIfMissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cceb70

// -[SCStoriesThumbnailCoordinator _shouldGenerateThumbnailForMedia:thumbnailType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x107ccedb4

// -[SCStoriesThumbnailCoordinator addThumbnail:thumbnailMedia:expirationDate:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ccee34

// -[SCStoriesThumbnailCoordinator addThumbnailFromImage:thumbnailInfo:expirationDate:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ccf088

// -[SCStoriesThumbnailCoordinator addThumbnailContent:thumbnailMedia:expirationDate:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ccf278

// -[SCStoriesThumbnailCoordinator _updateMediaStateForThumbnail:mediaState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107ccf4c8

// -[SCStoriesThumbnailCoordinator _updateMediaStateForMediaCacheKey:thumbnailType:mediaState:]
// Type encoding: v40@0:8@16Q24q32
// Implementation: 0x107ccf544

// -[SCStoriesThumbnailCoordinator _announceMediaStateForMediaCacheKey:thumbnailType:mediaState:]
// Type encoding: v40@0:8@16Q24q32
// Implementation: 0x107ccf634

// -[SCStoriesThumbnailCoordinator didUpdateStoriesMediaAddedRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ccf780

// -[SCStoriesThumbnailCoordinator thumbnailGenerator]
// Type encoding: @16@0:8
// Implementation: 0x107ccf7e8

// -[SCStoriesThumbnailCoordinator setThumbnailGenerator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ccf7f0

// -[SCStoriesThumbnailCoordinator mediaDownloader]
// Type encoding: @16@0:8
// Implementation: 0x107ccf820

// -[SCStoriesThumbnailCoordinator setMediaDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ccf828

// -[SCStoriesThumbnailCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ccf858

@end
