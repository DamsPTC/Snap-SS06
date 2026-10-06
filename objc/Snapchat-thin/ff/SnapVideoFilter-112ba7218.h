// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SnapVideoFilter
// Superclass: NSObject
// Address: 0x112ba7218

@interface SnapVideoFilter

// Property: imageHasAnimatedContent; attributes: TB,N
// Property: GPUCommands; attributes: T@"NSArray",C,N,V_GPUCommands
// Property: CPUCommands; attributes: T@"NSArray",C,N,V_CPUCommands
// Property: backgroundCommand; attributes: T@"<SCImageProcessCommand>",&,N,V_backgroundCommand
// Property: transcodingTaskId; attributes: T@"NSString",R,C,N,V_transcodingTaskId
// Property: uuid; attributes: T@"NSString",R,C,N,V_uuid
// Property: mediaSource; attributes: TQ,R,N,V_mediaSource
// Property: mediaDestination; attributes: TQ,R,N
// Property: mediaDestinationInfo; attributes: T@"SCMediaTranscodingDestinationInfo",R,C,N,V_mediaDestinationInfo
// Property: mediaId; attributes: T@"NSString",C,N,V_mediaId
// Property: mediaOrchestrationId; attributes: T@"NSString",C,N,V_mediaOrchestrationId
// Property: adaptor; attributes: T@"<SCSnapVideoFilterAdaptor>",R,N,V_adaptor
// Property: videoProvider; attributes: T@"<SCPreviewVideoProvider>",&,N,V_videoProvider
// Property: snapImage; attributes: T@"UIImage",&,N,V_snapImage
// Property: imageDuration; attributes: Td,N,V_imageDuration
// Property: frameRate; attributes: Tq,N,V_frameRate
// Property: bitrate; attributes: Tq,N,V_bitrate
// Property: audioOverrideMixingProportion; attributes: T@"NSNumber",C,N,V_audioOverrideMixingProportion
// Property: baseAudioTrackMixingProportion; attributes: T@"NSNumber",C,N,V_baseAudioTrackMixingProportion
// Property: audioOverrideAssets; attributes: T@"NSArray",C,N,V_audioOverrideAssets
// Property: mixedAudioTracks; attributes: T@"NSArray",C,N,V_mixedAudioTracks
// Property: filterName; attributes: T@"NSString",C,N,V_filterName
// Property: lensCommand; attributes: T@"<SCImageProcessCommand>",&,N,V_lensCommand
// Property: selectedFilterConfigs; attributes: T@"NSArray",C,N,V_selectedFilterConfigs
// Property: ucoConfigs; attributes: T@"NSArray",C,N,V_ucoConfigs
// Property: lensCommandMetadata; attributes: T@"SCImageProcessLensCommandMetadata",&,N,V_lensCommandMetadata
// Property: spectaclesRectificationConfig; attributes: T@"SCSpectaclesRectificationConfiguration",&,N,V_spectaclesRectificationConfig
// Property: spectaclesStereoDisparity; attributes: Td,N,V_spectaclesStereoDisparity
// Property: overlayImage; attributes: T@"UIImage",&,N,V_overlayImage
// Property: overlayImageFileSizeBits; attributes: Tq,N,V_overlayImageFileSizeBits
// Property: overlayImageURL; attributes: T@"NSURL",&,N,V_overlayImageURL
// Property: overlayImagePNGData; attributes: T@"NSData",C,N,V_overlayImagePNGData
// Property: useOverlayImageAsMask; attributes: TB,N,V_useOverlayImageAsMask
// Property: overlayImageForThumbnail; attributes: T@"UIImage",&,N,V_overlayImageForThumbnail
// Property: qualityLevel; attributes: Tq,R,N,V_qualityLevel
// Property: highQuality; attributes: TB,N,V_highQuality
// Property: audioEnabled; attributes: TB,N,V_audioEnabled
// Property: createTimeUtc; attributes: T@"NSDate",&,N,V_createTimeUtc
// Property: spectaclesTranscodingConfig; attributes: T@"SCSpectaclesVideoTranscodingConfiguration",&,N,V_spectaclesTranscodingConfig
// Property: magicMomentFrameTime; attributes: T{?=qiIq},N,V_magicMomentFrameTime
// Property: videoPlaybackRate; attributes: Td,N,V_videoPlaybackRate
// Property: videoTargetAspectRatio; attributes: Td,N,V_videoTargetAspectRatio
// Property: videoTargetOrientation; attributes: Tq,N,V_videoTargetOrientation
// Property: thumbnailOrientation; attributes: Tq,N,V_thumbnailOrientation
// Property: timeRanges; attributes: T@"NSArray",C,N,V_timeRanges
// Property: croppingState; attributes: T@"<SCPreviewCroppingState>",&,N,V_croppingState
// Property: croppingAspectRatio; attributes: Td,N,V_croppingAspectRatio
// Property: multiSnapNumSegments; attributes: Tq,N,V_multiSnapNumSegments
// Property: multiSnapOriginalVideoDuration; attributes: Td,N,V_multiSnapOriginalVideoDuration
// Property: multiSnapTimeRange; attributes: T@"NSValue",&,N,V_multiSnapTimeRange
// Property: multiSnapSourceVideoProvider; attributes: T@"<SCPreviewVideoProvider>",&,N,V_multiSnapSourceVideoProvider
// Property: overlaySize; attributes: T{CGSize=dd},N,V_overlaySize
// Property: segmentIndex; attributes: TQ,N,V_segmentIndex
// Property: savesToCameraRoll; attributes: TB,N,V_savesToCameraRoll
// Property: audioState; attributes: T@"SCSnapVideoFilterAudioState",C,N,V_audioState
// Property: videoTargetSize; attributes: T{CGSize=dd},R,N,V_videoTargetSize
// Property: outputVideoCodec; attributes: Tq,R,N,V_outputVideoCodec
// Property: videoTrackedImages; attributes: T@"NSArray",C,N,V_videoTrackedImages
// Property: watermarkProfile; attributes: T@"SCLensWatermarkProfile",&,N,V_watermarkProfile
// Property: captureSessionID; attributes: T@"NSString",C,N,V_captureSessionID
// Property: snapSessionID; attributes: T@"NSString",C,N,V_snapSessionID
// Property: fileEmbeddedMetadata; attributes: T@"NSString",C,N,V_fileEmbeddedMetadata
// Property: progressBlock; attributes: T@?,C,N,V_progressBlock
// Property: statusBlock; attributes: T@?,C,N,V_statusBlock
// Property: frameHealthChecker; attributes: T@"<SCManagedFrameHealthChecker>",&,N,V_frameHealthChecker
// Property: snapSource; attributes: Tq,N,V_snapSource
// Property: spotlightModes; attributes: T@"NSArray",C,N,V_spotlightModes
// Property: shouldClearOverlayDataForMultisnap; attributes: TB,N,V_shouldClearOverlayDataForMultisnap
// Property: delegate; attributes: T@"<SCSnapVideoFilteringDelegate_Deprecated>",W,V_delegate
// Property: overlayFormat; attributes: T@"SCLazy",R,N,V_overlayFormat
// Property: snapDocManager; attributes: T@"SCLazy",R,N,V_snapDocManager
// Property: lensCrashLogger; attributes: T@"SCLazy",R,N,V_lensCrashLogger
// Property: cameraConfiguration; attributes: T@"<SCCameraConfiguration>",R,N,V_cameraConfiguration
// Property: backgroundColors; attributes: T@"NSArray",&,N,V_backgroundColors
// Property: watermarkGenerator; attributes: T@"SCLazy",&,N,V_watermarkGenerator
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SnapVideoFilter setImageHasAnimatedContent:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085536cc

// -[SnapVideoFilter imageHasAnimatedContent]
// Type encoding: B16@0:8
// Implementation: 0x108553728

// -[SnapVideoFilter filterImageCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10855376c

// -[SnapVideoFilter _generateCommandsForStaticImage]
// Type encoding: v16@0:8
// Implementation: 0x108553c14

// -[SnapVideoFilter filterVideoSnapWithSnapDoc:transcodeSnapInfo:reverseAudioCache:respectSnapOrientation:isExporting:userSession:previewAssetVideoProviderFactory:audioProcessingSessionFactory:musicMediaLoader:voiceoverMediaLoader:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:captionDataProvider:creativeToolsMemoriesResources:directorModeVideoOptimizationConfig:completionQueue:watermarkServices:watermarkProfile:completion:]
// Type encoding: v176@0:8@16@24@32B40B44@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@?168
// Implementation: 0x107da817c

// -[SnapVideoFilter _bakeWatermarkWithMediaUrl:watermarkProfile:previewAssetVideoProviderFactory:withCompletion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107daaa84

// -[SnapVideoFilter bakeWatermarkWithMediaUrl:snapDoc:watermarkProfile:previewAssetVideoProviderFactory:watermarkServices:withCompletion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x107daacac

// -[SnapVideoFilter snapInfoFromSnapDoc:overlayEdits:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107daaff0

// -[SnapVideoFilter _nonBaseAudioAssetsFromSnapDocParser:musicMediaLoader:voiceoverMediaLoader:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107dab174

// -[SnapVideoFilter filterVideoSnap:cloudFile:encryptedContentManager:reverseAudioCache:respectSnapOrientation:isExporting:userSession:previewAssetVideoProviderFactory:musicMediaLoader:voiceoverMediaLoader:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:dataObjectContext:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:watermarkServices:completionQueue:completion:]
// Type encoding: v160@0:8@16@24@32@40B48B52@56@64@72@80@88@96@104@112@120@128@136@144@?152
// Implementation: 0x107dabf00

// -[SnapVideoFilter filterVideoSnap:cloudFile:encryptedContentManager:reverseAudioCache:respectSnapOrientation:videoTargetSize:isExporting:spectaclesExportFormat:primaryCamera:userSession:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:musicMediaLoader:voiceoverMediaLoader:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:dataObjectContext:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:watermarkServices:completionQueue:completion:]
// Type encoding: v208@0:8@16@24@32@40B48{CGSize=dd}52B68q72Q80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@?200
// Implementation: 0x107dac14c

// -[SnapVideoFilter _configureTranscoderWithNonSpecVideoSnapInfo:overlay:overlayFormat:overrideAudioAsset:mixedAudioTracks:baseAudioVolumeProportion:reverseAudioCache:respectSnapOrientation:videoTargetSize:isExporting:userSession:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:captionDataProvider:creativeToolsMemoriesResources:]
// Type encoding: v136@0:8@16@24@32@40@48@56@64B72{CGSize=dd}76B92@96@104@112@120@128
// Implementation: 0x107dad0d4

// -[SnapVideoFilter _configureClipsEditingTranscoderWithSnapInfos:globalOverlay:localOverlays:globalOverlayImage:localOverlayImages:overrideAudioAsset:mixedAudioTracks:baseAudioVolumeProportion:respectSnapOrientation:isExporting:userSession:previewCameraSourceOverlayProvider:captionDataProvider:creativeToolsMemoriesResources:]
// Type encoding: v120@0:8@16@24@32@40@48@56@64@72B80B84@88@96@104@112
// Implementation: 0x107dad4d4

// -[SnapVideoFilter _configureTranscoderWithSpecVideoSnap:overlay:overlayFormat:overrideAudioAsset:reverseAudioCache:respectSnapOrientation:videoTargetSize:isExporting:spectaclesExportFormat:primaryCamera:userSession:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:audioProcessingSessionFactory:previewCameraSourceOverlayProvider:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:]
// Type encoding: {CGSize=dd}160@0:8@16@24@32@40@48B56{CGSize=dd}60B76q80Q88@96@104@112@120@128@136@144@152
// Implementation: 0x107dada58

// -[SnapVideoFilter _configureTranscoderWithSnapInfo:overlay:overrideAudioAsset:mixedAudioTracks:baseAudioVolumeProportion:reverseAudioCache:isExporting:audioProcessingSessionFactory:]
// Type encoding: v76@0:8@16@24@32@40@48@56B64@68
// Implementation: 0x107dadcc0

// -[SnapVideoFilter _checkIfUrlIsValidForAVAsset:forVideoSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107dae38c

// -[SnapVideoFilter _prepareSpectaclesMedia:snap:snapOverlay:isExporting:userSession:videoTargetSize:respectSnapOrientation:spectaclesExportFormat:primaryCamera:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:previewCameraSourceOverlayProvider:memoriesTranscodingHelper:captionDataProvider:creativeToolsMemoriesResources:]
// Type encoding: {CGSize=dd}136@0:8@16@24@32B40@44{CGSize=dd}52B68q72Q80@88@96@104@112@120@128
// Implementation: 0x107db02c8

// -[SnapVideoFilter _basicVideoCheckForAVAsset:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107db0b40

// -[SnapVideoFilter _dataFromContentResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x107db0f30

// -[SnapVideoFilter _audioGenericAssetsFromSnapDocParser:queue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107db0f38

// -[SnapVideoFilter _isImportedContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x107db1900

// -[SnapVideoFilter initWithMediaSource:mediaDestinationInfo:transcoder:parameterProvider:adaptor:cameraConfiguration:previewURLVideoProvider:logger:backgroundTaskWrapper:audioProcessingSessionFactory:videoTrackingTargetTrajectoryFactory:grapheneRegistry:circumstanceEngine:lensProcessingTranscodingProvider:crashLogger:overlayFormat:snapDocManager:spectaclesImageProcessCommandFactory:lensCrashLogger:creativeToolsABProvider:watermarkGenerator:skipController:contentDelivery:uploadMediaQualityController:qualityLevelSelector:]
// Type encoding: @216@0:8Q16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208
// Implementation: 0x10855400c

// -[SnapVideoFilter initFromSnapVideoFilterState:transcoder:parameterProvider:adaptor:cameraConfiguration:previewURLVideoProvider:logger:backgroundTaskWrapper:audioProcessingSessionFactory:videoTrackingTargetTrajectoryFactory:grapheneRegistry:circumstanceEngine:lensProcessingTranscodingProvider:crashLogger:overlayFormat:snapDocManager:spectaclesImageProcessCommandFactory:lensCrashLogger:creativeToolsABProvider:skipController:contentDelivery:uploadMediaQualityController:qualityLevelSelector:]
// Type encoding: @200@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192
// Implementation: 0x1085545fc

// -[SnapVideoFilter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108555348

// -[SnapVideoFilter backgroundPerformer]
// Type encoding: @16@0:8
// Implementation: 0x108555460

// -[SnapVideoFilter _createBackgroundPerformer]
// Type encoding: @16@0:8
// Implementation: 0x108555488

// -[SnapVideoFilter disposableBag]
// Type encoding: @16@0:8
// Implementation: 0x1085554f8

// -[SnapVideoFilter transcodingTaskId]
// Type encoding: @16@0:8
// Implementation: 0x108555548

// -[SnapVideoFilter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108555560

// -[SnapVideoFilter snapVideoFilterState]
// Type encoding: @16@0:8
// Implementation: 0x1085555b0

// -[SnapVideoFilter isRestorable]
// Type encoding: B16@0:8
// Implementation: 0x108555c20

// -[SnapVideoFilter tempFileURL]
// Type encoding: @16@0:8
// Implementation: 0x108555c58

// -[SnapVideoFilter tempReverseFileURL]
// Type encoding: @16@0:8
// Implementation: 0x108555cfc

// -[SnapVideoFilter _filterVideoWithMediaId:fixedOutputSize:skipTranscodingIfPossible:completion:]
// Type encoding: v52@0:8@16{CGSize=dd}24B40@?44
// Implementation: 0x108555d90

// -[SnapVideoFilter _invokeCompletionAndGenerateThumbnailWithUrl:retriable:error:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x108555f54

// -[SnapVideoFilter mediaDestination]
// Type encoding: Q16@0:8
// Implementation: 0x10855616c

// -[SnapVideoFilter filterVideoAndCreateThumbnailWithMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108556174

// -[SnapVideoFilter filterVideoAndCreateThumbnailWithMediaId:skipTranscodingIfPossible:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108556180

// -[SnapVideoFilter convertOverlayImageToPNGData]
// Type encoding: v16@0:8
// Implementation: 0x108556190

// -[SnapVideoFilter cleanupRetainedFiles]
// Type encoding: v16@0:8
// Implementation: 0x1085561e4

// -[SnapVideoFilter _generateCommandsForVideoWithVideoSourceSize:ucoConfigs:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x10855629c

// -[SnapVideoFilter _consistentWatermarkDrawCommandTransformProvidersWithType:]
// Type encoding: @24@0:8q16
// Implementation: 0x108556fd8

// -[SnapVideoFilter _watermarkDrawCommandTransformProviders]
// Type encoding: @16@0:8
// Implementation: 0x1085571ac

// -[SnapVideoFilter _watermarkImageWithLayout:]
// Type encoding: @24@0:8q16
// Implementation: 0x10855741c

// -[SnapVideoFilter _leftWatermarkImage]
// Type encoding: @16@0:8
// Implementation: 0x1085574cc

// -[SnapVideoFilter _rightWatermarkImage]
// Type encoding: @16@0:8
// Implementation: 0x10855755c

// -[SnapVideoFilter _generateCommandsForAnimatedImage]
// Type encoding: v16@0:8
// Implementation: 0x1085575ec

// -[SnapVideoFilter _prepareOutputURL]
// Type encoding: @16@0:8
// Implementation: 0x108557ce0

// -[SnapVideoFilter _prepareOutputURLFromTempFileURL:addToActivePath:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108557d34

// -[SnapVideoFilter _transcodeVideoWithOutputBitrate:videoTargetSize:skipTranscodingIfPossible:]
// Type encoding: v44@0:8q16{CGSize=dd}24B40
// Implementation: 0x108557e40

// -[SnapVideoFilter _transcodeInputAnimatedImageWithOutputBitrate:videoTargetSize:]
// Type encoding: v40@0:8q16{CGSize=dd}24
// Implementation: 0x1085585c0

// -[SnapVideoFilter transcodeVideoURLs:withTimeRanges:videoSourceRenderSize:videoTargetSize:outputURLProviderBlock:completion:]
// Type encoding: v80@0:8@16@24{CGSize=dd}32{CGSize=dd}48@?64@?72
// Implementation: 0x108559bc4

// -[SnapVideoFilter transcodeSegmentMedias:withTimeRanges:videoSourceRenderSize:outputURLProviderBlock:completion:]
// Type encoding: v64@0:8@16@24{CGSize=dd}32@?48@?56
// Implementation: 0x108559ddc

// -[SnapVideoFilter _transcodingRequestInputWithSourceMedias:timeRanges:expectedOutputBitrate:audioTargetBitrate:videoSourceRenderSize:videoTargetSize:]
// Type encoding: @80@0:8@16@24q32q40{CGSize=dd}48{CGSize=dd}64
// Implementation: 0x108559fc4

// -[SnapVideoFilter _transcodeMediaCompositionTrackSegmentsWithSourceMedias:timeRanges:outputURLProviderBlock:expectedOutputBitrate:audioTargetBitrate:videoSourceRenderSize:videoTargetSize:completion:]
// Type encoding: v96@0:8@16@24@?32q40q48{CGSize=dd}56{CGSize=dd}72@?88
// Implementation: 0x10855adb0

// -[SnapVideoFilter _transcodeInputVideoWithOutputBitrate:audioTargetBitrate:videoTargetSize:skipTranscodingIfPossible:]
// Type encoding: v52@0:8q16q24{CGSize=dd}32B48
// Implementation: 0x10855b5ec

// -[SnapVideoFilter reasonForTranscodingWithConfigProviderInput:inputOriginalAsset:outputConfig:]
// Type encoding: Q40@0:8@16@24@32
// Implementation: 0x10855e774

// -[SnapVideoFilter _isForMultiSnapExportWithConfigProviderInput:]
// Type encoding: B24@0:8@16
// Implementation: 0x10855e964

// -[SnapVideoFilter _logCameraVideoTranscodingSuccessWithTaskId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputFrameRate:]
// Type encoding: v120@0:8@16Q24@32Q40Q48Q56@64{CGSize=dd}72q88Q96C104q108f116
// Implementation: 0x10855e9ec

// -[SnapVideoFilter _canExportRawSpectaclesVideoTrack:outputBitrate:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x10855eb38

// -[SnapVideoFilter _isCustomVideoTargetSizeDifferentFromVideoTrackSize:]
// Type encoding: B24@0:8@16
// Implementation: 0x10855ebe8

// -[SnapVideoFilter _sizeOfVideoTrack:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x10855ec48

// -[SnapVideoFilter filterVideoWithOutputBitrate:videoTargetSize:completion:]
// Type encoding: v48@0:8q16{CGSize=dd}24@?40
// Implementation: 0x10855ecd8

// -[SnapVideoFilter filterVideoWithOutputBitrate:videoTargetSize:skipTranscodingIfPossible:completion:]
// Type encoding: v52@0:8q16{CGSize=dd}24B40@?44
// Implementation: 0x10855ece4

// -[SnapVideoFilter filterVideoCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10855ed58

// -[SnapVideoFilter filterVideoFragmentedWithOutputBitrate:videoTargetSize:segmentOutputBlock:completion:]
// Type encoding: v56@0:8q16{CGSize=dd}24@?40@?48
// Implementation: 0x10855ee1c

// -[SnapVideoFilter generateStaticImageAtTime:completion:]
// Type encoding: v48@0:8{?=qiIq}16@?40
// Implementation: 0x10855eecc

// -[SnapVideoFilter configureAsAnimatableImagePreview]
// Type encoding: v16@0:8
// Implementation: 0x10855f050

// -[SnapVideoFilter configureClipEditingConfigurationAtIndex:filterName:lensCommand:videoPlaybackRate:croppingState:croppingAspectRatio:targetAspectRatio:overlayImage:videoTrackedImages:]
// Type encoding: v88@0:8Q16@24@32d40@48d56d64@72@80
// Implementation: 0x10855f0f0

// -[SnapVideoFilter cancelProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10855f658

// -[SnapVideoFilter hasEdits]
// Type encoding: B16@0:8
// Implementation: 0x10855f694

// -[SnapVideoFilter _croppingStateForVideoTrackedImages]
// Type encoding: @16@0:8
// Implementation: 0x10855f82c

// -[SnapVideoFilter needsVideoCircleRendererOrCropping]
// Type encoding: B16@0:8
// Implementation: 0x10855f868

// -[SnapVideoFilter needsVideoCircleRenderer]
// Type encoding: B16@0:8
// Implementation: 0x10855f8cc

// -[SnapVideoFilter _emitTranscodeStatusWithPhase:progress:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x10855f950

// -[SnapVideoFilter _sessionStatusBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10855fa24

// -[SnapVideoFilter _videoProcessingDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x10855fb40

// -[SnapVideoFilter _propagateNonRetriableEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10855fc58

// -[SnapVideoFilter _retriableForTranscodingSessionError:]
// Type encoding: B24@0:8@16
// Implementation: 0x10855fc70

// -[SnapVideoFilter _markFrameStatisticsForTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10855fcd0

// -[SnapVideoFilter _videoProcessingDidFailWithError:retriable:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10855fda8

// -[SnapVideoFilter _completeWithURL:retriable:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10855fed4

// -[SnapVideoFilter _completeExportWithAsset:contentCreateTimeUtc:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108560084

// -[SnapVideoFilter _shouldEnableContentAdaptiveVideoExportWithVideoAsset:rawDataURL:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108560304

// -[SnapVideoFilter _createdShiftedImageProcessProviderWithDisparityXOffset:forVideoTrackedImage:staticTransform:]
// Type encoding: @36@0:8f16@20@28
// Implementation: 0x108560398

// -[SnapVideoFilter _reverseAssetWithOriginalAudio:outputURL:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108560498

// -[SnapVideoFilter _finishWritingWithAsset:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108560c60

// -[SnapVideoFilter _setupWriterVideoInputForAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108560e0c

// -[SnapVideoFilter _numberOfAudioChannels]
// Type encoding: @16@0:8
// Implementation: 0x108561218

// -[SnapVideoFilter _setupWriterAudioInputForAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856125c

// -[SnapVideoFilter _retrieveAudioBitrate]
// Type encoding: q16@0:8
// Implementation: 0x1085613dc

// -[SnapVideoFilter _hasTimedEdits]
// Type encoding: B16@0:8
// Implementation: 0x108561414

// -[SnapVideoFilter _retrieveMediaUploadQuality:captureMode:completion:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x108561638

// -[SnapVideoFilter _audioAssetFromData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10856191c

// -[SnapVideoFilter _compositedAVAssetForSVFAudioAssets:]
// Type encoding: @24@0:8@16
// Implementation: 0x108561974

// -[SnapVideoFilter _imageProcessCommandsInfo]
// Type encoding: @16@0:8
// Implementation: 0x108561de0

// -[SnapVideoFilter _audioRenderEffectDagForComposition:mixedTracks:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108561f88

// -[SnapVideoFilter _generateImageProcessData]
// Type encoding: @16@0:8
// Implementation: 0x108562220

// -[SnapVideoFilter _newMp4UrlForCachedInputVideo]
// Type encoding: @16@0:8
// Implementation: 0x108562398

// -[SnapVideoFilter _persistMediaToCM:]
// Type encoding: @24@0:8@16
// Implementation: 0x10856248c

// -[SnapVideoFilter _validateMediaURLandLogError:]
// Type encoding: B24@0:8@16
// Implementation: 0x108562658

// -[SnapVideoFilter _logPersistToCMError:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562720

// -[SnapVideoFilter _retrieveMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085627d8

// -[SnapVideoFilter isSpectaclesMedia]
// Type encoding: B16@0:8
// Implementation: 0x1085629f8

// -[SnapVideoFilter setAudioOverrideAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562a0c

// -[SnapVideoFilter delegate]
// Type encoding: @16@0:8
// Implementation: 0x108562ac0

// -[SnapVideoFilter adaptor]
// Type encoding: @16@0:8
// Implementation: 0x108562ad8

// -[SnapVideoFilter uuid]
// Type encoding: @16@0:8
// Implementation: 0x108562ae0

// -[SnapVideoFilter mediaSource]
// Type encoding: Q16@0:8
// Implementation: 0x108562ae8

// -[SnapVideoFilter mediaDestinationInfo]
// Type encoding: @16@0:8
// Implementation: 0x108562af0

// -[SnapVideoFilter videoProvider]
// Type encoding: @16@0:8
// Implementation: 0x108562af8

// -[SnapVideoFilter setVideoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562b00

// -[SnapVideoFilter snapImage]
// Type encoding: @16@0:8
// Implementation: 0x108562b30

// -[SnapVideoFilter setSnapImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562b38

// -[SnapVideoFilter imageDuration]
// Type encoding: d16@0:8
// Implementation: 0x108562b68

// -[SnapVideoFilter setImageDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x108562b70

// -[SnapVideoFilter frameRate]
// Type encoding: q16@0:8
// Implementation: 0x108562b78

// -[SnapVideoFilter setFrameRate:]
// Type encoding: v24@0:8q16
// Implementation: 0x108562b80

// -[SnapVideoFilter bitrate]
// Type encoding: q16@0:8
// Implementation: 0x108562b88

// -[SnapVideoFilter setBitrate:]
// Type encoding: v24@0:8q16
// Implementation: 0x108562b90

// -[SnapVideoFilter audioState]
// Type encoding: @16@0:8
// Implementation: 0x108562b98

// -[SnapVideoFilter setAudioState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562ba0

// -[SnapVideoFilter audioOverrideMixingProportion]
// Type encoding: @16@0:8
// Implementation: 0x108562ba8

// -[SnapVideoFilter setAudioOverrideMixingProportion:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562bb0

// -[SnapVideoFilter baseAudioTrackMixingProportion]
// Type encoding: @16@0:8
// Implementation: 0x108562bb8

// -[SnapVideoFilter setBaseAudioTrackMixingProportion:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562bc0

// -[SnapVideoFilter audioOverrideAssets]
// Type encoding: @16@0:8
// Implementation: 0x108562bc8

// -[SnapVideoFilter mixedAudioTracks]
// Type encoding: @16@0:8
// Implementation: 0x108562bd0

// -[SnapVideoFilter setMixedAudioTracks:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562bd8

// -[SnapVideoFilter filterName]
// Type encoding: @16@0:8
// Implementation: 0x108562be0

// -[SnapVideoFilter setFilterName:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562be8

// -[SnapVideoFilter lensCommand]
// Type encoding: @16@0:8
// Implementation: 0x108562bf0

// -[SnapVideoFilter setLensCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562bf8

// -[SnapVideoFilter selectedFilterConfigs]
// Type encoding: @16@0:8
// Implementation: 0x108562c28

// -[SnapVideoFilter setSelectedFilterConfigs:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562c30

// -[SnapVideoFilter ucoConfigs]
// Type encoding: @16@0:8
// Implementation: 0x108562c38

// -[SnapVideoFilter setUcoConfigs:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562c40

// -[SnapVideoFilter lensCommandMetadata]
// Type encoding: @16@0:8
// Implementation: 0x108562c48

// -[SnapVideoFilter setLensCommandMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562c50

// -[SnapVideoFilter spectaclesRectificationConfig]
// Type encoding: @16@0:8
// Implementation: 0x108562c80

// -[SnapVideoFilter setSpectaclesRectificationConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562c88

// -[SnapVideoFilter spectaclesStereoDisparity]
// Type encoding: d16@0:8
// Implementation: 0x108562cb8

// -[SnapVideoFilter setSpectaclesStereoDisparity:]
// Type encoding: v24@0:8d16
// Implementation: 0x108562cc0

// -[SnapVideoFilter overlayImageFileSizeBits]
// Type encoding: q16@0:8
// Implementation: 0x108562cc8

// -[SnapVideoFilter setOverlayImageFileSizeBits:]
// Type encoding: v24@0:8q16
// Implementation: 0x108562cd0

// -[SnapVideoFilter overlayImageURL]
// Type encoding: @16@0:8
// Implementation: 0x108562cd8

// -[SnapVideoFilter setOverlayImageURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562ce0

// -[SnapVideoFilter overlayImage]
// Type encoding: @16@0:8
// Implementation: 0x108562d10

// -[SnapVideoFilter setOverlayImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562d18

// -[SnapVideoFilter overlayImagePNGData]
// Type encoding: @16@0:8
// Implementation: 0x108562d48

// -[SnapVideoFilter setOverlayImagePNGData:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562d50

// -[SnapVideoFilter useOverlayImageAsMask]
// Type encoding: B16@0:8
// Implementation: 0x108562d58

// -[SnapVideoFilter setUseOverlayImageAsMask:]
// Type encoding: v20@0:8B16
// Implementation: 0x108562d60

// -[SnapVideoFilter overlayImageForThumbnail]
// Type encoding: @16@0:8
// Implementation: 0x108562d68

// -[SnapVideoFilter setOverlayImageForThumbnail:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562d70

// -[SnapVideoFilter qualityLevel]
// Type encoding: q16@0:8
// Implementation: 0x108562da0

// -[SnapVideoFilter highQuality]
// Type encoding: B16@0:8
// Implementation: 0x108562da8

// -[SnapVideoFilter setHighQuality:]
// Type encoding: v20@0:8B16
// Implementation: 0x108562db0

// -[SnapVideoFilter audioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108562db8

// -[SnapVideoFilter setAudioEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108562dc0

// -[SnapVideoFilter createTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x108562dc8

// -[SnapVideoFilter setCreateTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562dd0

// -[SnapVideoFilter spectaclesTranscodingConfig]
// Type encoding: @16@0:8
// Implementation: 0x108562e00

// -[SnapVideoFilter setSpectaclesTranscodingConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562e08

// -[SnapVideoFilter magicMomentFrameTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108562e38

// -[SnapVideoFilter setMagicMomentFrameTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108562e50

// -[SnapVideoFilter videoPlaybackRate]
// Type encoding: d16@0:8
// Implementation: 0x108562e68

// -[SnapVideoFilter setVideoPlaybackRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108562e70

// -[SnapVideoFilter videoTargetAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x108562e78

// -[SnapVideoFilter setVideoTargetAspectRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x108562e80

// -[SnapVideoFilter videoTargetOrientation]
// Type encoding: q16@0:8
// Implementation: 0x108562e88

// -[SnapVideoFilter setVideoTargetOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x108562e90

// -[SnapVideoFilter thumbnailOrientation]
// Type encoding: q16@0:8
// Implementation: 0x108562e98

// -[SnapVideoFilter setThumbnailOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x108562ea0

// -[SnapVideoFilter timeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108562ea8

// -[SnapVideoFilter setTimeRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562eb0

// -[SnapVideoFilter croppingState]
// Type encoding: @16@0:8
// Implementation: 0x108562eb8

// -[SnapVideoFilter setCroppingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562ec0

// -[SnapVideoFilter croppingAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x108562ef0

// -[SnapVideoFilter setCroppingAspectRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x108562ef8

// -[SnapVideoFilter multiSnapNumSegments]
// Type encoding: q16@0:8
// Implementation: 0x108562f00

// -[SnapVideoFilter setMultiSnapNumSegments:]
// Type encoding: v24@0:8q16
// Implementation: 0x108562f08

// -[SnapVideoFilter multiSnapOriginalVideoDuration]
// Type encoding: d16@0:8
// Implementation: 0x108562f10

// -[SnapVideoFilter setMultiSnapOriginalVideoDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x108562f18

// -[SnapVideoFilter multiSnapTimeRange]
// Type encoding: @16@0:8
// Implementation: 0x108562f20

// -[SnapVideoFilter setMultiSnapTimeRange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562f28

// -[SnapVideoFilter multiSnapSourceVideoProvider]
// Type encoding: @16@0:8
// Implementation: 0x108562f58

// -[SnapVideoFilter setMultiSnapSourceVideoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562f60

// -[SnapVideoFilter overlaySize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108562f90

// -[SnapVideoFilter setOverlaySize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108562f9c

// -[SnapVideoFilter savesToCameraRoll]
// Type encoding: B16@0:8
// Implementation: 0x108562fa8

// -[SnapVideoFilter setSavesToCameraRoll:]
// Type encoding: v20@0:8B16
// Implementation: 0x108562fb0

// -[SnapVideoFilter videoTargetSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108562fb8

// -[SnapVideoFilter outputVideoCodec]
// Type encoding: q16@0:8
// Implementation: 0x108562fc4

// -[SnapVideoFilter videoTrackedImages]
// Type encoding: @16@0:8
// Implementation: 0x108562fcc

// -[SnapVideoFilter setVideoTrackedImages:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562fd4

// -[SnapVideoFilter captureSessionID]
// Type encoding: @16@0:8
// Implementation: 0x108562fdc

// -[SnapVideoFilter setCaptureSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562fe4

// -[SnapVideoFilter snapSessionID]
// Type encoding: @16@0:8
// Implementation: 0x108562fec

// -[SnapVideoFilter setSnapSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x108562ff4

// -[SnapVideoFilter segmentIndex]
// Type encoding: Q16@0:8
// Implementation: 0x108562ffc

// -[SnapVideoFilter setSegmentIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108563004

// -[SnapVideoFilter progressBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10856300c

// -[SnapVideoFilter setProgressBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108563014

// -[SnapVideoFilter statusBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10856301c

// -[SnapVideoFilter setStatusBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108563024

// -[SnapVideoFilter frameHealthChecker]
// Type encoding: @16@0:8
// Implementation: 0x10856302c

// -[SnapVideoFilter setFrameHealthChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108563034

// -[SnapVideoFilter snapSource]
// Type encoding: q16@0:8
// Implementation: 0x108563064

// -[SnapVideoFilter setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10856306c

// -[SnapVideoFilter shouldClearOverlayDataForMultisnap]
// Type encoding: B16@0:8
// Implementation: 0x108563074

// -[SnapVideoFilter setShouldClearOverlayDataForMultisnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10856307c

// -[SnapVideoFilter spotlightModes]
// Type encoding: @16@0:8
// Implementation: 0x108563084

// -[SnapVideoFilter setSpotlightModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856308c

// -[SnapVideoFilter mediaId]
// Type encoding: @16@0:8
// Implementation: 0x108563094

// -[SnapVideoFilter setMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856309c

// -[SnapVideoFilter mediaOrchestrationId]
// Type encoding: @16@0:8
// Implementation: 0x1085630a4

// -[SnapVideoFilter setMediaOrchestrationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085630ac

// -[SnapVideoFilter overlayFormat]
// Type encoding: @16@0:8
// Implementation: 0x1085630b4

// -[SnapVideoFilter snapDocManager]
// Type encoding: @16@0:8
// Implementation: 0x1085630bc

// -[SnapVideoFilter lensCrashLogger]
// Type encoding: @16@0:8
// Implementation: 0x1085630c4

// -[SnapVideoFilter cameraConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1085630cc

// -[SnapVideoFilter watermarkProfile]
// Type encoding: @16@0:8
// Implementation: 0x1085630d4

// -[SnapVideoFilter setWatermarkProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085630dc

// -[SnapVideoFilter fileEmbeddedMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10856310c

// -[SnapVideoFilter setFileEmbeddedMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x108563114

// -[SnapVideoFilter backgroundColors]
// Type encoding: @16@0:8
// Implementation: 0x10856311c

// -[SnapVideoFilter setBackgroundColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x108563124

// -[SnapVideoFilter watermarkGenerator]
// Type encoding: @16@0:8
// Implementation: 0x108563154

// -[SnapVideoFilter setWatermarkGenerator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856315c

// -[SnapVideoFilter GPUCommands]
// Type encoding: @16@0:8
// Implementation: 0x10856318c

// -[SnapVideoFilter setGPUCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x108563194

// -[SnapVideoFilter CPUCommands]
// Type encoding: @16@0:8
// Implementation: 0x10856319c

// -[SnapVideoFilter setCPUCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085631a4

// -[SnapVideoFilter backgroundCommand]
// Type encoding: @16@0:8
// Implementation: 0x1085631ac

// -[SnapVideoFilter setBackgroundCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085631b4

// -[SnapVideoFilter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085631e4

// +[SnapVideoFilter videoTrackedImagesFromSnapOverlay:snapInfo:videoTargetSize:isRectangularCustomExport:userSession:previewCameraSourceOverlayProvider:captionDataProvider:creativeToolsMemoriesResources:disposableBag:]
// Type encoding: @92@0:8@16@24{CGSize=dd}32B48@52@60@68@76@84
// Implementation: 0x107dae390

// +[SnapVideoFilter _videoTrackedImageForGeoFilterWithOverlay:snapSize:hasAnimatedSticker:semaphore:belowStickers:userSession:]
// Type encoding: @68@0:8@16{CGSize=dd}24B40@44^B52@60
// Implementation: 0x107dafa1c

// +[SnapVideoFilter baseVideoPath]
// Type encoding: @16@0:8
// Implementation: 0x108555c54

@end
