// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebViewPrefetchHintsDataSource
// Superclass: NSObject
// Address: 0x112a61d18

@interface SCAdWebViewPrefetchHintsDataSource


// -[SCAdWebViewPrefetchHintsDataSource initWithContentDelivery:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:grapheneRegistry:queuePerformer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105777504

// -[SCAdWebViewPrefetchHintsDataSource preparePrefetchHints:adSwipeUpLikely:isPrefetchOptIn:adType:metadata:completion:]
// Type encoding: v56@0:8@16B24B28q32@40@?48
// Implementation: 0x10577769c

// -[SCAdWebViewPrefetchHintsDataSource retrievePrefetchHints:]
// Type encoding: @24@0:8@16
// Implementation: 0x105777964

// -[SCAdWebViewPrefetchHintsDataSource _downloadPrefetchHints:prefetchMode:adType:completion:]
// Type encoding: v48@0:8@16Q24q32@?40
// Implementation: 0x105777b14

// -[SCAdWebViewPrefetchHintsDataSource performDownloadPrefetchHints:prefetchMode:adType:completion:]
// Type encoding: v48@0:8@16Q24q32@?40
// Implementation: 0x105777c68

// -[SCAdWebViewPrefetchHintsDataSource _loadPrefetchHintsHtmlIntoMemoryCache:cacheKey:prefetchMode:adType:completion:]
// Type encoding: v56@0:8@16@24Q32q40@?48
// Implementation: 0x105778130

// -[SCAdWebViewPrefetchHintsDataSource handleContentResult:prefetchHintsId:cacheKey:prefetchMode:adType:completion:]
// Type encoding: v64@0:8@16@24@32Q40q48@?56
// Implementation: 0x10577844c

// -[SCAdWebViewPrefetchHintsDataSource _loadCachedPrefetchHintsHtml:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057785e8

// -[SCAdWebViewPrefetchHintsDataSource _buildPrefetchHTML:prefetchHintsId:prefetchMode:prefetchResourceURLs:topConnectedOriginURLs:usesWebviewMetadata:]
// Type encoding: v60@0:8@16@24Q32@40@48B56
// Implementation: 0x105778714

// -[SCAdWebViewPrefetchHintsDataSource _logCachedPrefetchHintsGrapheneMetric:preconnectUrls:dnsPrefetchUrls:prefetchMode:usesWebviewMetadata:]
// Type encoding: v52@0:8@16@24@32Q40B48
// Implementation: 0x1057789c8

// -[SCAdWebViewPrefetchHintsDataSource _getPreconnectUrls:startIndex:preconnectCount:enablePreconnectForPrefetchOptIn:isPrefetchOptIn:]
// Type encoding: @48@0:8@16q24q32B40B44
// Implementation: 0x105778bf8

// -[SCAdWebViewPrefetchHintsDataSource _getTopOriginUrlsSubarray:startIndex:urlCount:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x105778c28

// -[SCAdWebViewPrefetchHintsDataSource _preparePrefetchHints:prefetchHintsProto:prefetchMode:adType:completion:]
// Type encoding: v56@0:8@16@24Q32q40@?48
// Implementation: 0x105778cb8

// -[SCAdWebViewPrefetchHintsDataSource _isGTMPrefetchEnabled:]
// Type encoding: B24@0:8q16
// Implementation: 0x10577915c

// -[SCAdWebViewPrefetchHintsDataSource _incrementMetric:prefetchMode:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1057791f0

// -[SCAdWebViewPrefetchHintsDataSource _incrementMetric:prefetchMode:usesWebviewMetadata:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1057792d4

// -[SCAdWebViewPrefetchHintsDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105779390

@end
