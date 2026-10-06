// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataContentManagerFetcher
// Superclass: NSObject
// Address: 0x112c6ce28

@interface SCLensDataContentManagerFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDataContentManagerFetcher initWithContentManagerFetcher:userContentManagerFetcher:fetchRanker:grapheneRegistry:grapheneV2Logger:lensDataFetcherConfig:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10b0c196c

// -[SCLensDataContentManagerFetcher fetchRanker]
// Type encoding: @16@0:8
// Implementation: 0x10b0c1b80

// -[SCLensDataContentManagerFetcher fetchImageWithURL:lensID:featureType:cacheDomain:expirationDate:requestSettings:completion:]
// Type encoding: @72@0:8@16@24q32@40@48@56@?64
// Implementation: 0x10b0c1ba8

// -[SCLensDataContentManagerFetcher fetchContentWithURLDataPath:lensID:featureType:resourceType:cacheDomain:expirationDate:requestSettings:completion:]
// Type encoding: @80@0:8@16@24q32q40@48@56@64@?72
// Implementation: 0x10b0c1d00

// -[SCLensDataContentManagerFetcher fetchContentWithLensResource:lensID:featureType:cacheDomain:expirationDate:requestSettings:onProgress:completion:]
// Type encoding: @80@0:8@16@24q32@40@48@56@?64@?72
// Implementation: 0x10b0c1e80

// -[SCLensDataContentManagerFetcher fetchCachedContentFilePathWithLensResource:featureType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0c200c

// -[SCLensDataContentManagerFetcher boostRequest:setting:featureType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10b0c20f0

// -[SCLensDataContentManagerFetcher markLocallyCachedContentUsageForURL:resourceType:lensID:checksum:domain:expirationDate:]
// Type encoding: v64@0:8@16q24@32@40@48@56
// Implementation: 0x10b0c219c

// -[SCLensDataContentManagerFetcher removeContentForURL:checksum:cacheKey:resourceType:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x10b0c21a0

// -[SCLensDataContentManagerFetcher removeExpiredContentWithCacheCondition:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10b0c21a4

// -[SCLensDataContentManagerFetcher resetCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0c2258

// -[SCLensDataContentManagerFetcher _fetchContentWithLensResource:lensID:contentKey:cacheDomain:expirationDate:requestSettings:startTime:onProgress:completion:]
// Type encoding: @88@0:8@16@24@32@40@48@56d64@?72@?80
// Implementation: 0x10b0c2330

// -[SCLensDataContentManagerFetcher _fetchImageWithURL:lensID:contentKey:cacheDomain:expirationDate:requestSettings:startTime:completion:]
// Type encoding: @80@0:8@16@24@32@40@48@56d64@?72
// Implementation: 0x10b0c26f4

// -[SCLensDataContentManagerFetcher _fetchContentWithUrlString:lensID:contentKey:resourceType:cacheDomain:expirationDate:requestSettings:lazyTransformParams:startTime:onProgress:completion:]
// Type encoding: @104@0:8@16@24@32q40@48@56@64@72d80@?88@?96
// Implementation: 0x10b0c29a8

// -[SCLensDataContentManagerFetcher _fetchWithUrlString:lensID:contentKey:cacheDomain:expirationDate:requestSettings:lazyTransformParams:shouldCacheContentResult:onProgress:completion:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64B72@?76@?84
// Implementation: 0x10b0c2cf0

// -[SCLensDataContentManagerFetcher _handleFetchCompletionForImagesWithContentResult:contentKey:fetchPolicy:fromCache:payloadSize:error:startTime:cacheDomain:completion:]
// Type encoding: v84@0:8@16@24q32B40Q44@52d60@68@?76
// Implementation: 0x10b0c3038

// -[SCLensDataContentManagerFetcher _requestContextForLensId:mediaContextType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0c332c

// -[SCLensDataContentManagerFetcher _completeContentFetchWithUIImage:fromCache:error:isFallback:startTime:cacheDomain:completion:]
// Type encoding: v64@0:8@16B24@28B36d40@48@?56
// Implementation: 0x10b0c3380

// -[SCLensDataContentManagerFetcher _completeContentFetchWithContentResult:resourceType:cacheKey:fromCache:payloadSize:error:isFallback:startTime:cacheDomain:boltContentId:statusCode:completion:]
// Type encoding: v104@0:8@16q24@32B40Q44@52B60d64@72@80q88@?96
// Implementation: 0x10b0c3444

// -[SCLensDataContentManagerFetcher _logRetrieveContentMetricsForCacheDomain:fromCache:isFallback:success:error:startTime:]
// Type encoding: v52@0:8@16B24B28B32@36d44
// Implementation: 0x10b0c3588

// -[SCLensDataContentManagerFetcher _transformParamsForResource:lensID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0c3804

// -[SCLensDataContentManagerFetcher _contentManagerFetcherForCommonMediaContextType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b0c38d4

// -[SCLensDataContentManagerFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0c407c

// +[SCLensDataContentManagerFetcher _requestForWithRequestKey:urlString:requestSettings:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b0c31ec

// +[SCLensDataContentManagerFetcher _addChecksumToTransformParams:resource:lensID:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0c390c

// +[SCLensDataContentManagerFetcher _maybeSetLensIDInTransformParams:lensID:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0c3a40

// +[SCLensDataContentManagerFetcher _mediaContextTypeFromFeatureType:]
// Type encoding: q24@0:8q16
// Implementation: 0x10b0c3ac8

// +[SCLensDataContentManagerFetcher _contentKeyForLensContentWithURLString:featureType:checksum:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10b0c3adc

// +[SCLensDataContentManagerFetcher _contentKeyForLensImageWithURLString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0c3c08

// +[SCLensDataContentManagerFetcher _contentKeyForLensContentWithRequestKey:featureType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0c3cfc

// +[SCLensDataContentManagerFetcher _lensIDIntegerFromString:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10b0c3d6c

// +[SCLensDataContentManagerFetcher _lazyLensSerializedFeatureMetadataFromCacheDomain:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0c3dc0

// +[SCLensDataContentManagerFetcher _lensContentAttributionFromCacheDomain:]
// Type encoding: i24@0:8@16
// Implementation: 0x10b0c3ec0

// +[SCLensDataContentManagerFetcher _contentKeyForLocalURI:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0c3f70

@end
