// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesOperaMediaManager
// Superclass: NSObject
// Address: 0x112b6e468

@interface SCStoriesOperaMediaManager

// Property: preparedStoryPageProperties; attributes: T@"NSMutableDictionary",R,N,V_preparedStoryPageProperties
// Property: loadingBackgroundImagePreparedStoryPageProperties; attributes: T@"NSMutableDictionary",R,N,V_loadingBackgroundImagePreparedStoryPageProperties
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesOperaMediaManager initWithUserSession:storiesMediaCoordinator:playbackAssetRepository:shakePromptHelper:circumstanceEngine:viewLocation:grapheneRegistry:imageDownloader:]
// Type encoding: @80@0:8@16@24@32^?40@48q56@64@72
// Implementation: 0x107a8dd6c

// -[SCStoriesOperaMediaManager didReceiveMediaServicesWereLostNotification]
// Type encoding: v16@0:8
// Implementation: 0x107a8e09c

// -[SCStoriesOperaMediaManager didReceiveMediaServicesWereResetNotification]
// Type encoding: v16@0:8
// Implementation: 0x107a8e0a8

// -[SCStoriesOperaMediaManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107a8e0fc

// -[SCStoriesOperaMediaManager operaPageDidClose]
// Type encoding: v16@0:8
// Implementation: 0x107a8e15c

// -[SCStoriesOperaMediaManager prepareToViewStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a8e164

// -[SCStoriesOperaMediaManager _prepareFanPassPlaceholderForStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a8e394

// -[SCStoriesOperaMediaManager _prepareVideoMediaForStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a8e454

// -[SCStoriesOperaMediaManager _imageFromData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a8e610

// -[SCStoriesOperaMediaManager _eligibleForNativeWebPDecoder:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107a8e6b8

// -[SCStoriesOperaMediaManager _eligibleForAsyncImageDecoder:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107a8e6d4

// -[SCStoriesOperaMediaManager _prepareOperaPropertiesForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a8e6e4

// -[SCStoriesOperaMediaManager _createNonStreamingAssetAndExtractFirstFrameForStoriesContent:storySnap:loadedPropertiesPromise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a8eb4c

// -[SCStoriesOperaMediaManager _loadAdditionalPagePropertiesForStorySnap:usingLoadedPageProperties:loadedVideoAsset:firstFrameImage:overlayImage:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107a8ee70

// -[SCStoriesOperaMediaManager _handleLoadedVideoAsset:storySnap:storiesContent:useInMemoryDataForAVAsset:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x107a8efbc

// -[SCStoriesOperaMediaManager _handleFirstFrameExtractionCompletionForStorySnap:storiesContent:firstFrameImage:loadedVideoAsset:useInMemoryDataForAVAsset:error:completion:]
// Type encoding: v68@0:8@16@24@32@40B48@52@?60
// Implementation: 0x107a8f39c

// -[SCStoriesOperaMediaManager _loadPagePropertiesIfNeededForStorySnap:baseMediaResult:videoAsset:firstFrameImage:overlayImage:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x107a8f9b4

// -[SCStoriesOperaMediaManager _loadSpectaclesPagePropertiesIfNeededForStorySnap:loadedAsset:pageProperties:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a8fdb4

// -[SCStoriesOperaMediaManager _videoAssetFutureForStoriesContent:storySnap:useInMemoryDataForStorySnap:]
// Type encoding: @40@0:8@16@24^B32
// Implementation: 0x107a901a0

// -[SCStoriesOperaMediaManager _videoAssetFutureForData:storySnap:storiesContent:useInMemoryDataForStorySnap:]
// Type encoding: @48@0:8@16@24@32^B40
// Implementation: 0x107a902d0

// -[SCStoriesOperaMediaManager _queryMediaCoordinatorForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a903d8

// -[SCStoriesOperaMediaManager _loadPagePropertiesForStreamingStorySnap:baseMediaResult:videoAsset:firstFrameImage:overlayImage:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107a905f8

// -[SCStoriesOperaMediaManager _prepareVideoAssetAfterWritingVideoToDisk:data:storiesContent:useInMemoryDataForStorySnap:]
// Type encoding: @48@0:8@16@24@32^B40
// Implementation: 0x107a90bb4

// -[SCStoriesOperaMediaManager _handleWriteVideoDataCompletionForVideoURL:data:success:storiesContent:error:useInMemoryDataForStorySnap:promise:]
// Type encoding: v68@0:8@16@24B32@36@44^B52@60
// Implementation: 0x107a90dbc

// -[SCStoriesOperaMediaManager _prepareVideoAssetFutureForInMemoryPlaybackUsingData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a90f0c

// -[SCStoriesOperaMediaManager _prepareVideoAssetForInMemoryPlaybackUsingData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a90f5c

// -[SCStoriesOperaMediaManager _prepareImageMediaForStorySnapMaybeWithoutThreadHop:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a90fe4

// -[SCStoriesOperaMediaManager _prepareImageMediaForStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a91128

// -[SCStoriesOperaMediaManager _handlePreparedImageForStorySnap:image:overlayImage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a915ac

// -[SCStoriesOperaMediaManager updateStoryLoadingLayerImageForStorySnap:loadedImageKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a9188c

// -[SCStoriesOperaMediaManager removeStoryLoadingLayerImageForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91b1c

// -[SCStoriesOperaMediaManager setError:forStorySnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a91c3c

// -[SCStoriesOperaMediaManager errorForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91cd0

// -[SCStoriesOperaMediaManager _preparedPagePropertiesForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91f4c

// -[SCStoriesOperaMediaManager _setPreparedPageProperties:forStorySnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a91fe4

// -[SCStoriesOperaMediaManager removePreparedStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a92078

// -[SCStoriesOperaMediaManager setImage:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a922d4

// -[SCStoriesOperaMediaManager removeImageForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a922dc

// -[SCStoriesOperaMediaManager imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a922e4

// -[SCStoriesOperaMediaManager setVideoAsset:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a924ec

// -[SCStoriesOperaMediaManager removeVideoForStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a924f4

// -[SCStoriesOperaMediaManager videoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a9267c

// -[SCStoriesOperaMediaManager videoAssetFutureForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a926dc

// -[SCStoriesOperaMediaManager resetVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a9272c

// -[SCStoriesOperaMediaManager _videoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a92730

// -[SCStoriesOperaMediaManager _writeVideoData:toURL:storiesContent:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a92858

// -[SCStoriesOperaMediaManager _cleanupVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a928fc

// -[SCStoriesOperaMediaManager _logDiskWriteFailure]
// Type encoding: v16@0:8
// Implementation: 0x107a92988

// -[SCStoriesOperaMediaManager _logFirstFrameGenerationIsServerSide:storyType:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x107a92994

// -[SCStoriesOperaMediaManager _resolveFuture:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a92a2c

// -[SCStoriesOperaMediaManager _tempVideoURLForClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a92ac0

// -[SCStoriesOperaMediaManager _createAssetWithContent:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a92b3c

// -[SCStoriesOperaMediaManager preparedStoryPageProperties]
// Type encoding: @16@0:8
// Implementation: 0x107a92e20

// -[SCStoriesOperaMediaManager loadingBackgroundImagePreparedStoryPageProperties]
// Type encoding: @16@0:8
// Implementation: 0x107a92e28

// -[SCStoriesOperaMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a92e30

// +[SCStoriesOperaMediaManager clientIdFromVideoAssetKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91d68

// +[SCStoriesOperaMediaManager videoAssetKeyForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91dbc

// +[SCStoriesOperaMediaManager firstFrameKeyForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91e0c

// +[SCStoriesOperaMediaManager overlayImageKeyForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91e5c

// +[SCStoriesOperaMediaManager imageKeyForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91eac

// +[SCStoriesOperaMediaManager loadingScreenImageKeyForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a91efc

@end
