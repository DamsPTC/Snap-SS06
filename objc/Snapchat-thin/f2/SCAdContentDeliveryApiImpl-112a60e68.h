// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdContentDeliveryApiImpl
// Superclass: NSObject
// Address: 0x112a60e68

@interface SCAdContentDeliveryApiImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdContentDeliveryApiImpl initWithContentDelivery:simpleContentFetcher:adConfigProviderV2:valdiRuntimeProvider:queuePerformer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105756f8c

// -[SCAdContentDeliveryApiImpl initWithContentDelivery:simpleContentFetcher:adConfigProviderV2:valdiRuntimeProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1057570b0

// -[SCAdContentDeliveryApiImpl downloadContentForAdMedia:profileInfo:mediaId:userInitiated:contexts:expirationDate:preferredVideoDeliveryMethod:forceFullDownload:successBlock:failureBlock:]
// Type encoding: v88@0:8@16@24@32B40@44@52q60B68@?72@?80
// Implementation: 0x105757184

// -[SCAdContentDeliveryApiImpl queryContentStatusForAdMedia:mediaId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1057574b0

// -[SCAdContentDeliveryApiImpl retrieveProfileIconForProfileInfo:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057576dc

// -[SCAdContentDeliveryApiImpl retrieveContentForAdMedia:profileInfo:mediaId:contexts:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1057577e4

// -[SCAdContentDeliveryApiImpl removeAllAdMedia]
// Type encoding: v16@0:8
// Implementation: 0x105757d64

// -[SCAdContentDeliveryApiImpl prefetchAdMedia:prefetchDurationMs:profileInfo:mediaId:contexts:completion:]
// Type encoding: v64@0:8@16q24@32@40@48@?56
// Implementation: 0x105757da0

// -[SCAdContentDeliveryApiImpl _retrieveProfileIcon:pageInfo:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057582a4

// -[SCAdContentDeliveryApiImpl _retrieveBottomContentForMedia:mediaId:pageInfo:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057585b4

// -[SCAdContentDeliveryApiImpl _retrieveAppInstallContentForMedia:pageInfo:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105758f7c

// -[SCAdContentDeliveryApiImpl _retrieveTopContentForMedia:mediaId:pageInfo:prefetchDurationMs:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x105759150

// -[SCAdContentDeliveryApiImpl _fetchCompleteContentIfNecessary:metrics:cacheKey:isVideo:preferredVideoDeliveryMethod:pageInfo:forceFullDownload:completion:]
// Type encoding: v72@0:8q16@24@32B40q44@52B60@?64
// Implementation: 0x105759ea4

// -[SCAdContentDeliveryApiImpl _fetchCompleteStreamingContentIfNecessaryForContentResult:preferredVideoDeliveryMethod:contentKey:forceFullDownload:completion:]
// Type encoding: v52@0:8@16q24@32B40@?44
// Implementation: 0x10575a184

// -[SCAdContentDeliveryApiImpl _callMediaDownloadCompletionWithFullPrefetchResult:success:contentResult:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x10575a470

// -[SCAdContentDeliveryApiImpl _downloadContentForAdMedia:cacheKeyToUrls:optionalDownloadableCacheKey:videoCacheKey:mediaId:contexts:expirationDate:preferredVideoDeliveryMethod:forceFullDownload:successBlock:failureBlock:]
// Type encoding: v100@0:8@16@24@32@40@48@56@64q72B80@?84@?92
// Implementation: 0x10575a674

// -[SCAdContentDeliveryApiImpl monitorDownloadProgressWithMediaItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10575b704

// -[SCAdContentDeliveryApiImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10575b940

@end
