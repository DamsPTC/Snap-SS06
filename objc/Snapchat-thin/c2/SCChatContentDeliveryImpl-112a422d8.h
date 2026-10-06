// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatContentDeliveryImpl
// Superclass: NSObject
// Address: 0x112a422d8

@interface SCChatContentDeliveryImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatContentDeliveryImpl initWithContentDelivery:bufferedContentFetcher:messagingExperimentService:grapheneRegistry:configProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1054ee390

// -[SCChatContentDeliveryImpl mediaFileManager]
// Type encoding: @16@0:8
// Implementation: 0x1054ee6f8

// -[SCChatContentDeliveryImpl localMediaSavedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1054ee720

// -[SCChatContentDeliveryImpl registerChatMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054ee748

// -[SCChatContentDeliveryImpl _registerOverlayIfNecessaryForMedia:messageBodyType:encodedKey:encodedIv:completion:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x1054eeb4c

// -[SCChatContentDeliveryImpl _isMediaEligibleForStreaming:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054eed94

// -[SCChatContentDeliveryImpl _buildRequestContextForContentKey:pageInfo:trackingId:fetchPriorityOverride:messageBodyType:requestSource:]
// Type encoding: @64@0:8@16@24@32@40q48q56
// Implementation: 0x1054eee2c

// -[SCChatContentDeliveryImpl _isCodecBlockedFetchForMediaId:shouldBlockDownload:requestSource:]
// Type encoding: B36@0:8@16B24q28
// Implementation: 0x1054eefbc

// -[SCChatContentDeliveryImpl downloadContentForConversationId:messageId:media:mediaId:analyticsMessageId:contentObject:messageBodyType:userInitiated:requestSource:completionBlock:]
// Type encoding: v92@0:8@16@24@32@40@48@56q64B72q76@?84
// Implementation: 0x1054eefdc

// -[SCChatContentDeliveryImpl postProcessStoryMediaId:mediaType:requestSource:completionBlock:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x1054ef78c

// -[SCChatContentDeliveryImpl postProcessChatMedia:requestSource:completionBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1054ef92c

// -[SCChatContentDeliveryImpl saveLocalContent:dedupeKey:expirationDate:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1054efac4

// -[SCChatContentDeliveryImpl _saveLocalContent:dedupeKey:expirationDate:serializedFeatureMetadata:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1054efad0

// -[SCChatContentDeliveryImpl removeContentForBundleMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054efd98

// -[SCChatContentDeliveryImpl contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054effb0

// -[SCChatContentDeliveryImpl contains:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054f0438

// -[SCChatContentDeliveryImpl _containedInBufferedContentFetcher:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054f07cc

// -[SCChatContentDeliveryImpl retrieveContentForDedupeKey:mediaType:requestSource:completion:]
// Type encoding: @48@0:8@16q24q32@?40
// Implementation: 0x1054f08fc

// -[SCChatContentDeliveryImpl retrieveContentForMedia:analyticsMessageId:requestSource:completion:]
// Type encoding: @48@0:8@16@24q32@?40
// Implementation: 0x1054f0b88

// -[SCChatContentDeliveryImpl retrieveContentForMedia:analyticsMessageId:messageType:requestSource:fetchPriority:completion:]
// Type encoding: @64@0:8@16@24q32q40q48@?56
// Implementation: 0x1054f0ef4

// -[SCChatContentDeliveryImpl retrieveImageForMedia:analyticsMessageId:requestSource:fetchPriority:completion:]
// Type encoding: @56@0:8@16@24q32q40@?48
// Implementation: 0x1054f11a8

// -[SCChatContentDeliveryImpl videoExistsOnDiskForMediaId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054f1350

// -[SCChatContentDeliveryImpl videoUrlForMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054f139c

// -[SCChatContentDeliveryImpl logItemObservable]
// Type encoding: @16@0:8
// Implementation: 0x1054f13f0

// -[SCChatContentDeliveryImpl _postProcessStoryMediaId:mediaType:requestSource:completionBlock:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x1054f1418

// -[SCChatContentDeliveryImpl _postProcessChatMedia:requestSource:completionBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1054f17e0

// -[SCChatContentDeliveryImpl _retrieveContentForDedupeKey:mediaType:messageBodyType:shouldBlockDownload:messageTimestamp:trackingId:requestSource:completion:]
// Type encoding: @76@0:8@16q24q32B40@44@52q60@?68
// Implementation: 0x1054f1c20

// -[SCChatContentDeliveryImpl _retrieveContentForMedia:analyticsMessageId:messageType:requestSource:fetchPriority:completion:]
// Type encoding: @64@0:8@16@24q32q40q48@?56
// Implementation: 0x1054f2a54

// -[SCChatContentDeliveryImpl _logDownloadContentForMediaId:mediaType:messageTimestamp:requestSource:loadSource:success:prefetch:]
// Type encoding: v64@0:8@16q24@32q40q48B56B60
// Implementation: 0x1054f3004

// -[SCChatContentDeliveryImpl _logRetrieveContentForMediaId:mediaType:messageTimestamp:requestSource:loadSource:success:error:message:]
// Type encoding: v76@0:8@16q24@32q40q48B56q60@68
// Implementation: 0x1054f3184

// -[SCChatContentDeliveryImpl _generateThumbnailAndSaveWithMediaIfVideoForChatMedia:result:bundleContentKey:publisher:requestSource:completionBlock:]
// Type encoding: v64@0:8@16@24@32@40q48@?56
// Implementation: 0x1054f3438

// -[SCChatContentDeliveryImpl _generateThumbnailAndSaveWithMediaIfVideoForStoryMediaId:mediaType:result:bundleContentKey:publisher:requestSource:completionBlock:]
// Type encoding: v72@0:8@16q24@32@40@48q56@?64
// Implementation: 0x1054f38b4

// -[SCChatContentDeliveryImpl _generateThumbnailAndSaveWithMediaIfVideoForResult:mediaId:contentCacheId:overlayCacheId:overlayContent:lensAssetCacheId:thumbnailCacheId:containsVideo:isEligibleForStreaming:mediaType:bundleContentKey:publisher:videoFileName:requestSource:completionBlock:]
// Type encoding: v128@0:8@16@24@32@40@48@56@64B72B76q80@88@96@104q112@?120
// Implementation: 0x1054f3bd4

// -[SCChatContentDeliveryImpl _saveToDiskAndGenerateThumbnailIfVideoForNonZipContent:mediaId:contentCacheId:overlayCacheId:overlayData:lensAssetCacheId:thumbnailCacheId:containsVideo:mediaType:bundleContentKey:publisher:videoFileName:completionBlock:]
// Type encoding: v116@0:8@16@24@32@40@48@56@64B72q76@84@92@100@?108
// Implementation: 0x1054f478c

// -[SCChatContentDeliveryImpl _handleFetchedStreamingContent:success:mediaId:contentCacheId:overlayCacheId:overlayContent:lensAssetCacheId:thumbnailCacheId:containsVideo:mediaType:bundleContentKey:publisher:videoFileName:requestSource:completionBlock:]
// Type encoding: v128@0:8@16B24@28@36@44@52@60@68B76q80@88@96@104q112@?120
// Implementation: 0x1054f4b84

// -[SCChatContentDeliveryImpl _handleFetchedOverlayForVideoContent:overlayData:mediaId:contentCacheId:overlayCacheId:lensAssetCacheId:thumbnailCacheId:containsVideo:mediaType:bundleContentKey:publisher:videoFileName:completionBlock:]
// Type encoding: v116@0:8@16@24@32@40@48@56@64B72q76@84@92@100@?108
// Implementation: 0x1054f4f38

// -[SCChatContentDeliveryImpl _saveToDiskAndGenerateAndSaveThumbnailIfVideoForContentData:overlayData:metadataDict:mediaId:containsVideo:thumbnailCacheId:mediaType:videoFileName:publisher:withCompletionHandler:]
// Type encoding: v92@0:8@16@24@32@40B48@52q60@68@76@?84
// Implementation: 0x1054f50bc

// -[SCChatContentDeliveryImpl _queueForContentRetrieval:]
// Type encoding: @24@0:8q16
// Implementation: 0x1054f57dc

// -[SCChatContentDeliveryImpl _generateAndSaveThumbnailForSpectaclesImageForMediaId:mediaType:contentData:overlayData:metadataDict:thumbnailCacheId:publisher:withCompletionHandler:]
// Type encoding: v80@0:8@16q24@32@40@48@56@64@?72
// Implementation: 0x1054f582c

// -[SCChatContentDeliveryImpl imageForContentObject:key:iv:mediaId:localMediaId:conversationId:requestSource:completion:]
// Type encoding: @80@0:8@16@24@32@40@48@56q64@?72
// Implementation: 0x1054f5b68

// -[SCChatContentDeliveryImpl _remoteImageForContentKey:contentObject:key:iv:requestContext:serializedFeatureMetadata:completion:]
// Type encoding: @72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x1054f6050

// -[SCChatContentDeliveryImpl saveContentFromExtension:media:boltContentId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1054f6364

// -[SCChatContentDeliveryImpl logConsumedForMediaId:useCase:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1054f64cc

// -[SCChatContentDeliveryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054f6560

// +[SCChatContentDeliveryImpl _chatMediaContentErrorToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x1054f3bac

@end
