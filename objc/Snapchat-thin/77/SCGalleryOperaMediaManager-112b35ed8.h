// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryOperaMediaManager
// Superclass: NSObject
// Address: 0x112b35ed8

@interface SCGalleryOperaMediaManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: loadingProgressProvider; attributes: T@"SCGalleryOperaLoadingProgressProvider",R,N,V_loadingProgressProvider

// -[SCGalleryOperaMediaManager initWithDataObjectContext:userSession:musicMediaLoader:spectaclesAuxiliaryContentServices:userTrackedLogger:circumstanceEngine:previewAssetVideoProviderFactory:spectaclesContentDataSource:ngsmePlayerFactory:snapDocOperaParser:memoriesStreamingManager:memoriesMergedDataSource:snapDocManager:encryptedContentManager:voiceoverMediaLoader:memoriesCloudFS:memoriesCachingMediaHelper:galleryLogger:cachingMediaManager:gallerySearchIndexer:memoriesTrackingImageProcessCommandScopeExposer:audioProcessingSessionFactory:reverseAudioCache:snapDocDownloadingService:memoriesSnapDocEncryptionManager:memoriesExperimentService:creativeToolsMemoriesResources:grapheneRegistry:cameraConfig:coreConfigProvider:musicServices:cloudFSServices:genAIDreamsService:previewABProvider:]
// Type encoding: @288@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280
// Implementation: 0x106d318c8

// -[SCGalleryOperaMediaManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106d321f0

// -[SCGalleryOperaMediaManager startToLoadThumbnailForSnap:snapDetail:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106d3223c

// -[SCGalleryOperaMediaManager startToLoadGallerySnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:entryInfo:completion:]
// Type encoding: v60@0:8@16B24B28B32@36@44@?52
// Implementation: 0x106d32240

// -[SCGalleryOperaMediaManager _startToLoadSnapDocBasedOperaSnap:snap:entryInfo:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:completionQueue:]
// Type encoding: v72@0:8@16@24@32@40B48B52@?56@64
// Implementation: 0x106d32244

// -[SCGalleryOperaMediaManager _startToLoadTimelineSnap:snaps:entryInfo:entryAssets:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:]
// Type encoding: v72@0:8@16@24@32@40@48B56B60@?64
// Implementation: 0x106d325e8

// -[SCGalleryOperaMediaManager startToLoadMemoriesOperaSnap:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x106d32924

// -[SCGalleryOperaMediaManager _startToLoadMemoriesOperaSnap:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x106d32928

// -[SCGalleryOperaMediaManager fetchSnapDetailForSnap:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x106d32bd0

// -[SCGalleryOperaMediaManager unloadGallerySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d32e58

// -[SCGalleryOperaMediaManager _requiredLensMediaCloudFileForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d32e9c

// -[SCGalleryOperaMediaManager mediaExistLocallyForGallerySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d32f0c

// -[SCGalleryOperaMediaManager mediaExistLocallyForMemoriesOperaSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d32f74

// -[SCGalleryOperaMediaManager _mediaExistLocallyForEntryAsset:entryId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106d332a0

// -[SCGalleryOperaMediaManager _requireDirectAccessToCloudFileForSnap:snapDetail:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106d3338c

// -[SCGalleryOperaMediaManager _loadUIImage:forSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:completion:]
// Type encoding: B68@0:8@16@24B32B36B40@44Q52@?60
// Implementation: 0x106d334a4

// -[SCGalleryOperaMediaManager _loadAVAsset:forSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:completion:]
// Type encoding: B68@0:8@16@24B32B36B40@44Q52@?60
// Implementation: 0x106d33690

// -[SCGalleryOperaMediaManager _startToLoadGallerySnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:entryInfo:completion:]
// Type encoding: v60@0:8@16B24B28B32@36@44@?52
// Implementation: 0x106d338e8

// -[SCGalleryOperaMediaManager _fetchStreamingPackageForSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v68@0:8@16B24B28B32@36Q44@52@?60
// Implementation: 0x106d33ac0

// -[SCGalleryOperaMediaManager _fullCloudFSMediaDownloadForTimelineSnap:snaps:entryId:entryAssets:snapDoc:entryClientProcessingBitMaskType:shouldShowSoundPill:isFromMiniCarousel:entryInfo:completion:]
// Type encoding: v88@0:8@16@24@32@40@48Q56B64B68@72@?80
// Implementation: 0x106d33e2c

// -[SCGalleryOperaMediaManager _fullSnapdocMediaDownloadForSnapDocOperaSnap:snap:snapDocKey:snapDoc:isPrivate:isFromMiniCarousel:shouldShowSoundPill:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v84@0:8@16@24@32@40B48B52B56Q60@68@?76
// Implementation: 0x106d34670

// -[SCGalleryOperaMediaManager _canSkipDownloadingSnapDoc:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d34c8c

// -[SCGalleryOperaMediaManager _snapDocHasCodecDownloadBlockedVideoLayer:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d34cbc

// -[SCGalleryOperaMediaManager _downloadRequestIdForOperaSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d34fc0

// -[SCGalleryOperaMediaManager _fullyMediaDownloadWithCloudFSForRegularSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v68@0:8@16B24B28B32@36Q44@52@?60
// Implementation: 0x106d351d0

// -[SCGalleryOperaMediaManager _loadGallerySnapStreamingVideo:shouldShowSoundPill:snapDetail:streamingPackage:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x106d35884

// -[SCGalleryOperaMediaManager _loadMetaDataForGallerySnap:isPrivateSnap:isFromMiniCarousel:snapDetail:shouldLoadContext:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v68@0:8@16B24B28@32B40Q44@52@?60
// Implementation: 0x106d36418

// -[SCGalleryOperaMediaManager _loadContextPropertiesForSnap:isPrivateSnap:isFromMiniCarousel:snapDetail:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v64@0:8@16B24B28@32Q40@48@?56
// Implementation: 0x106d364ec

// -[SCGalleryOperaMediaManager _loadContextPropertiesForSnap:contextClientInfo:isPrivateSnap:isFromMiniCarousel:snapDetailId:overlay:clientProcessingBitMaskType:ctItems:lensId:entryInfo:completion:]
// Type encoding: v96@0:8@16@24B32B36@40@48Q56@64@72@80@?88
// Implementation: 0x106d3673c

// -[SCGalleryOperaMediaManager _fillContextPropertiesForSnap:contextClientInfo:isPrivateSnap:isFromMiniCarousel:snapDetailId:overlay:clientProcessingBitMaskType:ctItems:lensId:pageProperties:entryInfo:completion:]
// Type encoding: v104@0:8@16@24B32B36@40@48Q56@64@72@80@88@?96
// Implementation: 0x106d369ec

// -[SCGalleryOperaMediaManager _fillContextPropertiesForSnap:musicTrackId:contextClientInfo:isPrivateSnap:isFromMiniCarousel:snapDetailId:overlay:clientProcessingBitMaskType:ctItems:lensId:entryInfo:pageProperties:]
// Type encoding: v104@0:8@16@24@32B40B44@48@56Q64@72@80@88@96
// Implementation: 0x106d36d04

// -[SCGalleryOperaMediaManager _loadGallerySnapAddress:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106d36fb4

// -[SCGalleryOperaMediaManager _loadGallerySnapFirstFrame:snapDetail:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106d37218

// -[SCGalleryOperaMediaManager _loadGallerySnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v68@0:8@16B24B28B32@36Q44@52@?60
// Implementation: 0x106d37648

// -[SCGalleryOperaMediaManager _loadGalleryAnimatedImageSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v68@0:8@16B24B28B32@36Q44@52@?60
// Implementation: 0x106d3783c

// -[SCGalleryOperaMediaManager _loadGalleryImageSnap:snapDetail:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v68@0:8@16@24B32B36B40Q44@52@?60
// Implementation: 0x106d38364

// -[SCGalleryOperaMediaManager _loadedPropertyForImageSnap:snapDetail:image:spectaclesMetadataToken:outputCommands:midOutputGLCommand:isFullResolution:shouldLoadDecorativeLayers:isPrivateSnap:isFromMiniCarousel:mediaOverlay:screenOverlay:musicAssetProvider:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: @128@0:8@16@24@32@40@48@56B64B68B72B76@80@88@?96Q104@112@?120
// Implementation: 0x106d39c7c

// -[SCGalleryOperaMediaManager _loadGalleryVideoSnapFromLensMedia:lensMediaFile:originalCloudFile:shouldShowSoundPill:snapDetail:missingVideoTrackRetryCount:completion:]
// Type encoding: v68@0:8@16@24@32B40@44Q52@?60
// Implementation: 0x106d3a1ac

// -[SCGalleryOperaMediaManager _loadGalleryVideoSnap:shouldShowSoundPill:snapDetail:missingVideoTrackRetryCount:completion:]
// Type encoding: v52@0:8@16B24@28Q36@?44
// Implementation: 0x106d3af68

// -[SCGalleryOperaMediaManager _musicAssetProviderForSnap:]
// Type encoding: @?24@0:8@16
// Implementation: 0x106d3d924

// -[SCGalleryOperaMediaManager _musicSelectionForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d3dbd8

// -[SCGalleryOperaMediaManager _asyncMusicSelectionForSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106d3de40

// -[SCGalleryOperaMediaManager _loadSnapDocSnap:shouldShowSoundPill:isFromMiniCarousel:snapDoc:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v64@0:8@16B24B28@32Q40@48@?56
// Implementation: 0x106d3dffc

// -[SCGalleryOperaMediaManager _globalOverlayForSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d3e420

// -[SCGalleryOperaMediaManager _generateGLVideoPagePropertiesFromSnap:snapOverlay:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d3e508

// -[SCGalleryOperaMediaManager _cacheAudioMixAndGeneratePagePropertiesForSnap:audioProcessorMix:reverseAudioData:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106d3e6d0

// -[SCGalleryOperaMediaManager _cacheOverlayAndGeneratePagePropertiesForSnap:screenOverlayImage:mediaOverlayImage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106d3e84c

// -[SCGalleryOperaMediaManager _cacheGLCommandsAndGeneratePagePropertiesForSnap:midOutputGLCommand:outputGLCommands:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106d3e9c8

// -[SCGalleryOperaMediaManager _cancelPendingGallerySnapRequestsIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d3eba4

// -[SCGalleryOperaMediaManager _cancelAllPendingGallerySnapRequests]
// Type encoding: v16@0:8
// Implementation: 0x106d3ec54

// -[SCGalleryOperaMediaManager _removeExistingLoadedGallerySnapMedias:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d3ec9c

// -[SCGalleryOperaMediaManager startToLoadTransferringSpectaclesSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106d3f0f4

// -[SCGalleryOperaMediaManager _clearContentLoaders]
// Type encoding: v16@0:8
// Implementation: 0x106d3f5b4

// -[SCGalleryOperaMediaManager _refetchVideoSnapDetailIfNeeded:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:clientProcessingBitMaskType:entryInfo:completion:]
// Type encoding: v60@0:8@16B24B28B32Q36@44@?52
// Implementation: 0x106d3f6b0

// -[SCGalleryOperaMediaManager _checkMediaIsUnencrypted:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d3f998

// -[SCGalleryOperaMediaManager _extractUnlockableSnapInfo:snapDetail:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d3faa0

// -[SCGalleryOperaMediaManager imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106d40500

// -[SCGalleryOperaMediaManager videoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d4059c

// -[SCGalleryOperaMediaManager videoAssetFutureForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d40644

// -[SCGalleryOperaMediaManager resetVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d40694

// -[SCGalleryOperaMediaManager _audioOverrideAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d40698

// -[SCGalleryOperaMediaManager livePhotoForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106d40740

// -[SCGalleryOperaMediaManager glCommandsForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d407dc

// -[SCGalleryOperaMediaManager glAudioProcessorMixForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d4085c

// -[SCGalleryOperaMediaManager glReverseAudioDataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d408dc

// -[SCGalleryOperaMediaManager _updateSpectaclesTransferProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d4095c

// -[SCGalleryOperaMediaManager didReceiveDataForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106d40bf0

// -[SCGalleryOperaMediaManager didFinishDownloadForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106d40c40

// -[SCGalleryOperaMediaManager didPauseForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106d40c44

// -[SCGalleryOperaMediaManager didInterruptDownloadForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106d40c48

// -[SCGalleryOperaMediaManager didCancelDownloadForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106d40c4c

// -[SCGalleryOperaMediaManager didFinishWithScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d40c50

// -[SCGalleryOperaMediaManager _fetchLocalSnapDetailForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d40ca0

// -[SCGalleryOperaMediaManager _shouldDisplaySnapDocLoadingIndicator:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d40d20

// -[SCGalleryOperaMediaManager _loadAndAddMusicRecommendationsPropertiesWithSnap:shouldShowSoundPill:snapDetail:snapDoc:loadedProperties:completion:]
// Type encoding: v60@0:8@16B24@28@36@44@?52
// Implementation: 0x106d40fd8

// -[SCGalleryOperaMediaManager _getMediaRenderSizeForSnap:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x106d40ff4

// -[SCGalleryOperaMediaManager loadingProgressProvider]
// Type encoding: @16@0:8
// Implementation: 0x106d410b4

// -[SCGalleryOperaMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d410bc

// +[SCGalleryOperaMediaManager _downloadCloudFiles:isFeaturedSnap:progressQueue:progressHandler:resultQueue:resultHandler:]
// Type encoding: @60@0:8@16B24@28@?36@44@?52
// Implementation: 0x106d3fe4c

@end
