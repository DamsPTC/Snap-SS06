// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaFetcher
// Superclass: NSObject
// Address: 0x112a42558

@interface SCChatMediaFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatMediaFetcher initWithChatContentDelivery:messagingExperimentService:loadMessageLogger:grapheneRegistry:timeProvider:userInitiatedQueue:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1054f8f90

// -[SCChatMediaFetcher bundleForMediaId:mediaType:requestSource:completion:]
// Type encoding: @48@0:8@16q24q32@?40
// Implementation: 0x1054f90e4

// -[SCChatMediaFetcher contentForMediaId:mediaType:requestSource:completion:]
// Type encoding: @48@0:8@16q24q32@?40
// Implementation: 0x1054f91ac

// -[SCChatMediaFetcher imageForKey:requestSource:completion:]
// Type encoding: @40@0:8@16q24@?32
// Implementation: 0x1054f9274

// -[SCChatMediaFetcher overlayImageForMediaContent:requestSource:completion:]
// Type encoding: @40@0:8@16q24@?32
// Implementation: 0x1054f9310

// -[SCChatMediaFetcher overlayImageForMediaContent:scaledToSize:blendSpectaclesOverlays:isCircular:requestSource:completion:]
// Type encoding: @64@0:8@16{CGSize=dd}24B40B44q48@?56
// Implementation: 0x1054f935c

// -[SCChatMediaFetcher registerAndFetchThumbnailImageForMediaContent:cacheOnly:requestSource:completion:]
// Type encoding: @44@0:8@16B24q28@?36
// Implementation: 0x1054f9498

// -[SCChatMediaFetcher thumbnailImageForMediaContent:cacheOnly:requestSource:completion:]
// Type encoding: @44@0:8@16B24q28@?36
// Implementation: 0x1054f97e8

// -[SCChatMediaFetcher thumbnailImageForMediaContent:scaledToSize:requestSource:completion:]
// Type encoding: @56@0:8@16{CGSize=dd}24q40@?48
// Implementation: 0x1054f9a40

// -[SCChatMediaFetcher thumbnailImageForMediaContent:scale:maximumSize:requestSource:completion:]
// Type encoding: @64@0:8@16d24{CGSize=dd}32q48@?56
// Implementation: 0x1054f9af4

// -[SCChatMediaFetcher profileThumbnailImageForMediaContent:requestSource:completion:]
// Type encoding: @40@0:8@16q24@?32
// Implementation: 0x1054f9bb8

// -[SCChatMediaFetcher gifDataForMediaId:requestSource:completion:]
// Type encoding: @40@0:8@16q24@?32
// Implementation: 0x1054f9e2c

// -[SCChatMediaFetcher storyThumbnailImageForMediaId:mediaType:scaledToSize:isCircular:requestSource:completion:]
// Type encoding: @68@0:8@16q24{CGSize=dd}32B48q52@?60
// Implementation: 0x1054fa064

// -[SCChatMediaFetcher storyOverlayImageForMediaId:requestSource:completion:]
// Type encoding: @40@0:8@16q24@?32
// Implementation: 0x1054fa32c

// -[SCChatMediaFetcher storyOverlayImageForMediaId:scaledToSize:requestSource:completion:]
// Type encoding: @56@0:8@16{CGSize=dd}24q40@?48
// Implementation: 0x1054fa368

// -[SCChatMediaFetcher isMediaContentReadyForDisplay:thumbnailOptional:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1054fa458

// -[SCChatMediaFetcher isStoryMediaContentReadyForDisplay:mediaType:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x1054fa468

// -[SCChatMediaFetcher isProfileThumbnailAvailable:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054fa478

// -[SCChatMediaFetcher saveableModelForMediaContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054fa530

// -[SCChatMediaFetcher videoUrlForMediaContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054fa590

// -[SCChatMediaFetcher logConsumedForMediaId:useCase:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1054fa610

// -[SCChatMediaFetcher _imageForDedupeKey:requestSource:completion:]
// Type encoding: @40@0:8@16q24@?32
// Implementation: 0x1054fa670

// -[SCChatMediaFetcher _dataForDedupeKey:mediaType:requestSource:completion:]
// Type encoding: @48@0:8@16q24q32@?40
// Implementation: 0x1054fa70c

// -[SCChatMediaFetcher _thumbnailImageForMediaContent:startTimestamp:requestSource:completion:]
// Type encoding: @48@0:8@16d24q32@?40
// Implementation: 0x1054fa81c

// -[SCChatMediaFetcher _unarchiveMediaContent:requestSource:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1054fab00

// -[SCChatMediaFetcher _mediaThumbnailIsReadyForDisplayForMediaContent:thumbnailOptional:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1054fabdc

// -[SCChatMediaFetcher _unarchiveStoryMediaId:mediaType:requestSource:completion:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x1054fadb4

// -[SCChatMediaFetcher _storyThumbnailIsReadyForDisplay:mediaType:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x1054fae3c

// -[SCChatMediaFetcher _storyThumbnailImageForMediaId:mediaType:startTimestamp:requestSource:completion:]
// Type encoding: @56@0:8@16q24d32q40@?48
// Implementation: 0x1054faee8

// -[SCChatMediaFetcher _scaleImage:toSize:cropCircularly:]
// Type encoding: @?44@0:8@?16{CGSize=dd}24B40
// Implementation: 0x1054fb18c

// -[SCChatMediaFetcher _scaleImage:scale:maximumSize:]
// Type encoding: @?48@0:8@?16d24{CGSize=dd}32
// Implementation: 0x1054fb35c

// -[SCChatMediaFetcher _scaleImage:toSize:]
// Type encoding: @?40@0:8@?16{CGSize=dd}24
// Implementation: 0x1054fb56c

// -[SCChatMediaFetcher _blendOverlayImage:toSize:isCircular:]
// Type encoding: @?44@0:8@?16{CGSize=dd}24B40
// Implementation: 0x1054fb710

// -[SCChatMediaFetcher _scaleOrBlend:image:toSize:isCircular:]
// Type encoding: @?48@0:8B16@?20{CGSize=dd}28B44
// Implementation: 0x1054fb870

// -[SCChatMediaFetcher _validateGifData:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1054fb8cc

// -[SCChatMediaFetcher _mapDataToImage:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1054fb9e8

// -[SCChatMediaFetcher _mapDataToImageWithLatency:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1054fbaf4

// -[SCChatMediaFetcher _mapToDataWithMetrics:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1054fbc38

// -[SCChatMediaFetcher _mapToImageWithMetrics:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1054fbccc

// -[SCChatMediaFetcher _fetchThumbnailFromUnarchivedMediaWithKey:requestSource:cancelableGroup:completion:]
// Type encoding: @?48@0:8@16q24@32@?40
// Implementation: 0x1054fbd60

// -[SCChatMediaFetcher profileThumbnailCacheKeyForMediaContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054fbf2c

// -[SCChatMediaFetcher _logFetchCachedMediaCompletedForMediaId:mediaType:loadMessageResult:error:startTimestamp:]
// Type encoding: v56@0:8@16q24q32q40d48
// Implementation: 0x1054fbf7c

// -[SCChatMediaFetcher _logLoadMessageStepForMediaId:startTimestamp:endTimestamp:result:]
// Type encoding: v48@0:8@16d24d32q40
// Implementation: 0x1054fc010

// -[SCChatMediaFetcher _logDisplayError:mediaType:startTimestamp:endTimestamp:]
// Type encoding: v48@0:8q16q24d32d40
// Implementation: 0x1054fc08c

// -[SCChatMediaFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054fc218

@end
