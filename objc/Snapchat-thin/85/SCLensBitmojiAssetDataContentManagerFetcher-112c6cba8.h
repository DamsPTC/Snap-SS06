// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensBitmojiAssetDataContentManagerFetcher
// Superclass: NSObject
// Address: 0x112c6cba8

@interface SCLensBitmojiAssetDataContentManagerFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensBitmojiAssetDataContentManagerFetcher initWithContentManagerFetcher:fetchRanker:grapheneRegistry:bitmojiGLBFetcher:ttlDate:grapheneV2Logger:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100ba2eb0

// -[SCLensBitmojiAssetDataContentManagerFetcher fetchBitmojiDynamicAsset:lensId:cacheKey:cacheDomain:expirationDate:requestSettings:onProgress:completionQueue:completion:]
// Type encoding: @88@0:8@16@24@32@40@48@56@?64@72@?80
// Implementation: 0x10b0bcf58

// -[SCLensBitmojiAssetDataContentManagerFetcher boostRequest:setting:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0bd0c8

// -[SCLensBitmojiAssetDataContentManagerFetcher _fetchBitmojiDynamicAsset:lensId:contentKey:cacheDomain:expirationDate:requestSettings:startTime:onProgress:completionQueue:completion:]
// Type encoding: v96@0:8@16@24@32@40@48@56d64@?72@80@?88
// Implementation: 0x10b0bd154

// -[SCLensBitmojiAssetDataContentManagerFetcher _contentKeyForLensContentWithRequestKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0bd5ec

// -[SCLensBitmojiAssetDataContentManagerFetcher _requestContextForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0bd63c

// -[SCLensBitmojiAssetDataContentManagerFetcher _completeContentFetchWithContentPath:cacheDomain:isFallback:error:contentKey:fetchPolicy:startTime:fromCache:completionQueue:completion:]
// Type encoding: v88@0:8@16@24B32@36@44q52d60B68@72@?80
// Implementation: 0x10b0bd68c

// -[SCLensBitmojiAssetDataContentManagerFetcher _logRetrieveContentMetricsForCacheDomain:isFallback:fetchPolicy:fromCache:success:error:startTime:]
// Type encoding: v60@0:8@16B24q28B36B40@44d52
// Implementation: 0x10b0bd820

// -[SCLensBitmojiAssetDataContentManagerFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0bda9c

@end
