// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesContentDeliveryApiImpl2
// Superclass: NSObject
// Address: 0x112b78be8

@interface SCStoriesContentDeliveryApiImpl2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesContentDeliveryApiImpl2 _contentDeliveryUsingPlaybackService]
// Type encoding: @16@0:8
// Implementation: 0x107cbcae4

// -[SCStoriesContentDeliveryApiImpl2 initWithContentDelivery:mediaResolver:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10093858c

// -[SCStoriesContentDeliveryApiImpl2 downloadContentForMedia:userInitiated:request:contexts:trigger:expirationDate:completePrefetch:successBlock:failureBlock:]
// Type encoding: @80@0:8@16B24@28@36q44@52B60@?64@?72
// Implementation: 0x107cbcb64

// -[SCStoriesContentDeliveryApiImpl2 retrieveContentForMedia:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbd01c

// -[SCStoriesContentDeliveryApiImpl2 queryContentStatusForMedia:]
// Type encoding: q24@0:8@16
// Implementation: 0x107cbd230

// -[SCStoriesContentDeliveryApiImpl2 queryContentStatusForMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cbd630

// -[SCStoriesContentDeliveryApiImpl2 removeContentForMedias:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cbd7c4

// -[SCStoriesContentDeliveryApiImpl2 removeAllContentWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107cbdbd8

// -[SCStoriesContentDeliveryApiImpl2 saveLocalContentForMedia:data:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbddb0

// -[SCStoriesContentDeliveryApiImpl2 releaseLocalAuthoritativeContentForCacheKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cbdf14

// -[SCStoriesContentDeliveryApiImpl2 retrieveLocalContentToUpload:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cbe054

// -[SCStoriesContentDeliveryApiImpl2 retrieveNonStreamingContentForMedia:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbe2c0

// -[SCStoriesContentDeliveryApiImpl2 _retrieveNonStreamingContentForMediaWithNewAPI:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbe5e0

// -[SCStoriesContentDeliveryApiImpl2 _handleFetchingCompleteStreamingContentForMedia:streamingContent:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbec0c

// -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForBoltMedia:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbee04

// -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForBoltVideoAndOverlayMedia:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbf05c

// -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForBoltVideoAndOverlayMediaUsingVideoResult:mediaInfo:pageInfo:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107cbf258

// -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentUsingVideoResult:overlayResult:mediaInfo:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107cbf448

// -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForContentKey:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbf740

// -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForContentResult:contentKey:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cbfa80

// -[SCStoriesContentDeliveryApiImpl2 _logDownloadForMedia:success:prefetch:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x107cbfc98

// -[SCStoriesContentDeliveryApiImpl2 _logRetrieveContentForContentKey:IsStreaming:isZipped:success:]
// Type encoding: v36@0:8@16B24B28B32
// Implementation: 0x107cbfca8

// -[SCStoriesContentDeliveryApiImpl2 _zipContentsFromContentResult:contentKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107cbfe20

// -[SCStoriesContentDeliveryApiImpl2 _retrieveContentForMedia:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc003c

// -[SCStoriesContentDeliveryApiImpl2 _retrieveContentForMediaWithNewAPI:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc0254

// -[SCStoriesContentDeliveryApiImpl2 _maybeAddFirstFrameToStoriesContent:media:contexts:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107cc0950

// -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusForUseBoltContentMedia:]
// Type encoding: q24@0:8@16
// Implementation: 0x107cc0ccc

// -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusForUseBoltContentMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc0fc8

// -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusAsyncForVideoAndOverlayMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc1104

// -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusAsyncForSingleMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc1488

// -[SCStoriesContentDeliveryApiImpl2 _isStoriesMediaInfoValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x107cc1518

// -[SCStoriesContentDeliveryApiImpl2 _resolveAndDownloadMedia:mediaDownloadConfigList:requestContext:userInitiated:expirationDate:completePrefetch:successBlock:failureBlock:]
// Type encoding: @72@0:8@16@24@32B40@44B52@?56@?64
// Implementation: 0x107cc159c

// -[SCStoriesContentDeliveryApiImpl2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cc16a8

@end
