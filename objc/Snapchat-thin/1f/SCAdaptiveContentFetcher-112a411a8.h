// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdaptiveContentFetcher
// Superclass: NSObject
// Address: 0x112a411a8

@interface SCAdaptiveContentFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdaptiveContentFetcher initWithCircumstanceEngine:experimentReader:acfConfigKey:defaultAcfConfig:featureProvidedSignals:contentDeliveryLazy:simpleContentFetcherLazy:externalFetchersList:queue:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1054d9384

// -[SCAdaptiveContentFetcher fetchContentResultForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054d9624

// -[SCAdaptiveContentFetcher fetchContentResultForRemoteAssetContentKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054d9764

// -[SCAdaptiveContentFetcher fetchContentStatusForRemoteAssetContentKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054d97f4

// -[SCAdaptiveContentFetcher resolveNewAssetListForACFItemId:remoteAssetList:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054d9884

// -[SCAdaptiveContentFetcher setFeatureState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054d9a14

// -[SCAdaptiveContentFetcher setFeatureProvidedSignals:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d9b00

// -[SCAdaptiveContentFetcher setItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054d9c54

// -[SCAdaptiveContentFetcher setVisibleIndicesWithStartIndex:endIndex:selectedIndexList:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x1054d9db8

// -[SCAdaptiveContentFetcher _loadConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d9ee0

// -[SCAdaptiveContentFetcher _initCollections]
// Type encoding: v16@0:8
// Implementation: 0x1054da154

// -[SCAdaptiveContentFetcher _setItems:setItemsPromise:resolveNewAssetsPromise:itemIdForNewAssets:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1054da248

// -[SCAdaptiveContentFetcher _completeSetItemsPromise:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054da7d4

// -[SCAdaptiveContentFetcher _completeResolveNewAssetsPromise:itemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054da9f0

// -[SCAdaptiveContentFetcher _handleItemUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054daaec

// -[SCAdaptiveContentFetcher _setVisibleIndicesWithStartIndex:endIndex:selectedIndexList:enableDebounce:]
// Type encoding: v44@0:8Q16Q24@32B40
// Implementation: 0x1054db1e8

// -[SCAdaptiveContentFetcher _setFeatureState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054db880

// -[SCAdaptiveContentFetcher _applyPrefetchWindowFilterForItemsIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054db8bc

// -[SCAdaptiveContentFetcher _resolveNewAssetListForACFItemId:remoteAssetList:promise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054dbc28

// -[SCAdaptiveContentFetcher _submitOrUpdateRequestWithItemId:remoteAsset:importance:fetchPriority:]
// Type encoding: v48@0:8@16@24Q32q40
// Implementation: 0x1054dbdc4

// -[SCAdaptiveContentFetcher _submitNewRequestWithItemId:remoteAsset:requestContext:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054dc0b4

// -[SCAdaptiveContentFetcher _submitExternalFetchRequestWithItemId:remoteAsset:requestContext:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054dc448

// -[SCAdaptiveContentFetcher _handleContentResult:forItemId:remoteAsset:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054dc97c

// -[SCAdaptiveContentFetcher _completeFutureForItemId:remoteAsset:result:allRemoteAssetsFetchedForItem:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1054dcda0

// -[SCAdaptiveContentFetcher _clearStateForItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054dcfa4

// -[SCAdaptiveContentFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054dd314

@end
