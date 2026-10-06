// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchContentFetcher
// Superclass: NSObject
// Address: 0x112a41298

@interface SCBatchContentFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBatchContentFetcher initWithCircumstanceEngine:contentDeliveryLazy:simpleContentFetcherLazy:externalFetchersList:queue:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1054ddbfc

// -[SCBatchContentFetcher passiveFetchItems:feature:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1054ddd40

// -[SCBatchContentFetcher fetchContentStatusForRemoteAssetContentKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054dde88

// -[SCBatchContentFetcher _passiveFetchItems:feature:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1054ddfc0

// -[SCBatchContentFetcher _fetchAssets:dispatchGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054de184

// -[SCBatchContentFetcher _submitNewRequestWithRemoteAsset:dispatchGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054de2cc

// -[SCBatchContentFetcher _submitExternalFetchRequestWithRemoteAsset:requestContext:dispatchGroup:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054de6ec

// -[SCBatchContentFetcher _handleContentResult:remoteAssetContentKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054dec88

// -[SCBatchContentFetcher _getPrefetchLimitForFeature:]
// Type encoding: q24@0:8q16
// Implementation: 0x1054ded60

// -[SCBatchContentFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054deda4

@end
