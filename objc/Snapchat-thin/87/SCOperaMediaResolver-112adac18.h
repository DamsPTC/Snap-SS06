// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaMediaResolver
// Superclass: NSObject
// Address: 0x112adac18

@interface SCOperaMediaResolver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaMediaResolver initWithPlaybackMediaResolver:mediaBundleProviders:assetRepository:operaAssetDataSource:operaConfigProvider:itemLoadStateTracker:singleSnapPlayerMediaService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1062e7334

// -[SCOperaMediaResolver initWithPlaybackMediaResolver:mediaBundleProviders:assetRepository:operaAssetDataSource:pagePropertiesRepository:operaConfigProvider:itemLoadStateTracker:singleSnapPlayerMediaService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1062e744c

// -[SCOperaMediaResolver resolvePlaylistItem:option:completion:]
// Type encoding: @40@0:8@16Q24@?32
// Implementation: 0x1062e795c

// -[SCOperaMediaResolver _observeMediaMetadataUpdatesForSingleSnapPlayerData:fromBundle:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062e7ff4

// -[SCOperaMediaResolver isBuiltInMediaResolverEnabledForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062e8610

// -[SCOperaMediaResolver setCurrentPlaylistItemIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e8690

// -[SCOperaMediaResolver teardown]
// Type encoding: v16@0:8
// Implementation: 0x1062e8800

// -[SCOperaMediaResolver prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1062e8a68

// -[SCOperaMediaResolver _fetchOptionForItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1062e8c94

// -[SCOperaMediaResolver removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e8cf8

// -[SCOperaMediaResolver isMediaLoadedForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062e8f58

// -[SCOperaMediaResolver loadMediaForPlaylistItemGroup:isFirstGroup:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1062e90cc

// -[SCOperaMediaResolver retrievePrefetchInfoForItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062e941c

// -[SCOperaMediaResolver _retrievePrefetchInfoForContentBundle:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062e9524

// -[SCOperaMediaResolver extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1062e96cc

// -[SCOperaMediaResolver dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1062e998c

// -[SCOperaMediaResolver _setAssetRepoErrorWithPlaybackError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e99d8

// -[SCOperaMediaResolver _cachePropertiesForBundle:newProperties:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062e9ab8

// -[SCOperaMediaResolver _resolveMediaBundle:playlistItemId:withOption:completion:]
// Type encoding: @48@0:8@16@24Q32@?40
// Implementation: 0x1062e9acc

// -[SCOperaMediaResolver _resolveUsingPlaybackServiceWithMediaBundle:playlistItemId:withOption:completion:]
// Type encoding: @48@0:8@16@24Q32@?40
// Implementation: 0x1062e9df4

// -[SCOperaMediaResolver _transformResult:fromBundle:enableClientGeneratedFirstFrame:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1062ea2b8

// -[SCOperaMediaResolver _setRequestHandle:forPlaylistItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062ea4e4

// -[SCOperaMediaResolver _getRequestHandleForPlaylistItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062ea578

// -[SCOperaMediaResolver _currentPlaylistItemIdDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062ea608

// -[SCOperaMediaResolver _didFinishResolvingMediaBundle:result:traceCookie:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1062ea648

// -[SCOperaMediaResolver _transformResultToLegacyMediaPreparationCompletion:result:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1062ea978

// -[SCOperaMediaResolver _mediaBundleProviderForPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062eaaa8

// -[SCOperaMediaResolver _transformSuccessResult:fromBundle:enableClientGeneratedFirstFrame:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1062eabf4

// -[SCOperaMediaResolver _loadIntoPropertiesForSingleResult:operaMediaAsset:mediaBundle:pageProperties:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1062eb19c

// -[SCOperaMediaResolver _tryTriggerFirstFrameGenerationForMediaBundle:baseMediaAsset:pageProperties:enableClientGeneratedFirstFrame:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x1062eb2bc

// -[SCOperaMediaResolver _extractFirstFrameAndLoadMediaMetadataForMediaBundle:fromOperaAsset:timeoutInterval:pageProperties:completion:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x1062eb384

// -[SCOperaMediaResolver _extractFirstFrameForMediaBundle:fromOperaAsset:timeoutInterval:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x1062eb694

// -[SCOperaMediaResolver _processAndCacheFirstFrame:forMediaBundle:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062eb9e0

// -[SCOperaMediaResolver _isMediaBundleEligibleForFirstFrameExtraction:baseMediaAsset:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1062ebabc

// -[SCOperaMediaResolver _loadMediaMetadataForMediaBundle:toResult:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1062ebb54

// -[SCOperaMediaResolver _generatePagePropertiesForMediaBundle:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062ebe98

// -[SCOperaMediaResolver _generatePagePropertiesForAsset:containerLayerType:fromMediaBundle:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1062ec020

// -[SCOperaMediaResolver _recordContentKeys:onBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062ec104

// -[SCOperaMediaResolver _generateRemixPagePropertiesFromMediaBundle:singleResult:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062ec328

// -[SCOperaMediaResolver _createAndCacheAssetFromMediaBundle:singleResult:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062ec9a8

// -[SCOperaMediaResolver _asyncCeateAndCacheAssetFromMediaBundle:resolutionResult:singleResult:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1062ecb78

// -[SCOperaMediaResolver _handleCompositionAsset:mediaBundle:cacheKey:error:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1062ecf60

// -[SCOperaMediaResolver _createAssetFromMediaBundle:singleResult:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062ed21c

// -[SCOperaMediaResolver _createAssetFromSingleResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062ed668

// -[SCOperaMediaResolver _isRequestCancelledForMediaBundle:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062ed720

// -[SCOperaMediaResolver _didStartResolvingMediaBundle:cancelable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062ed7fc

// -[SCOperaMediaResolver _didCancelResolvingMediaBundle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062ed8b0

// -[SCOperaMediaResolver _didUpdateResolverStageTo:mediaBundle:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1062ed9b8

// -[SCOperaMediaResolver _didEncounterError:mediaBundle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062ed9cc

// -[SCOperaMediaResolver _updateResolverStageForMediaBundle:stage:error:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1062ed9dc

// -[SCOperaMediaResolver _resolveStageForKey:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062edb3c

// -[SCOperaMediaResolver _assetsCachedForMediaBundle:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062edb7c

// -[SCOperaMediaResolver _mediaBytesCachedForMediaBundle:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062edc0c

// -[SCOperaMediaResolver _cancelableGroupForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062edcfc

// -[SCOperaMediaResolver _handleSingleSnapPlayerDateOnReady:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062ede00

// -[SCOperaMediaResolver _handleSingleSnapPlayerDateOnError:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062ede84

// -[SCOperaMediaResolver _prefetchInfoArrayFromResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062edef4

// -[SCOperaMediaResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062ee038

@end
