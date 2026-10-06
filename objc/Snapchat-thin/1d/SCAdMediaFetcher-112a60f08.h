// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdMediaFetcher
// Superclass: NSObject
// Address: 0x112a60f08

@interface SCAdMediaFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdMediaFetcher initWithAdContentDelivery:snapAdsMediaCoordinator:promotedStoryStateProvider:adLifecycleWatermarkEventsTracker:grapheneRegistry:adConfigProvider:adConfigProviderV2:mediaMetricsManager:webViewHtmlPrefetcher:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10575bd08

// -[SCAdMediaFetcher fetchMediaV2:adSnapIndex:contexts:isPromotedStory:forceFullDownload:adProductType:completion:]
// Type encoding: v64@0:8@16q24@32B40B44Q48@?56
// Implementation: 0x10575bf98

// -[SCAdMediaFetcher prefetchPromotedStoryMedia:numberOfSnapsToFetch:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x10575c2cc

// -[SCAdMediaFetcher prefetchScriptWithAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10575c838

// -[SCAdMediaFetcher _prefetchAssetForPromotedStoryIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10575c8f8

// -[SCAdMediaFetcher _fetchMediaV2IfNeeded:profileInfo:endpoint:mediaId:isTopSnapStreamingVideo:adClientRequestId:contexts:index:forceFullDownload:preferredDownloadMethod:adProductType:adId:adServeItemId:adType:completion:]
// Type encoding: v128@0:8@16@24@32@40B48@52@60q68B76q80Q88@96@104q112@?120
// Implementation: 0x10575c9b8

// -[SCAdMediaFetcher _didDownloadAdMediaOnContentDeliveryWithMediaId:adMedia:isFromCache:payloadSize:downloadStartTimestamp:adRequestClientId:adServeItemId:preferredDownloadMethod:usedVideoDeliveryMethod:completion:]
// Type encoding: v92@0:8@16@24B32q36d44@52@60q68q76@?84
// Implementation: 0x10575cee8

// -[SCAdMediaFetcher _didFailToDownloadAdMediaOnContentDeliveryWithMediaId:adMedia:errorCode:downloadStartTimestamp:adRequestClientId:adServeItemId:preferredDownloadMethod:usedVideoDeliveryMethod:completion:]
// Type encoding: v88@0:8@16@24q32d40@48@56q64q72@?80
// Implementation: 0x10575d11c

// -[SCAdMediaFetcher _updateMetricsForMediaDownloadingCompletionWithSuccess:errorCode:downloadMethod:preferredDownloadMethod:isPromotedStories:isCached:payloadSize:adMediaType:adMediaLocationType:isStreaming:adRequestClientId:adServeItemId:mediaURL:downloadStartTimestamp:]
// Type encoding: v112@0:8B16q20q28q36B44B48q52q60q68B76@80@88@96d104
// Implementation: 0x10575d36c

// -[SCAdMediaFetcher _getAdMediaLocationTypeForAdMediaType:]
// Type encoding: q24@0:8@16
// Implementation: 0x10575d9e8

// -[SCAdMediaFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10575db18

@end
