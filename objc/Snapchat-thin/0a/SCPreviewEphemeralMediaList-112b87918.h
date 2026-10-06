// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewEphemeralMediaList
// Superclass: NSObject
// Address: 0x112b87918

@interface SCPreviewEphemeralMediaList

// Property: count; attributes: TQ,N,V_count
// Property: timeRanges; attributes: T@"NSArray",C,N,V_timeRanges
// Property: ephemeralMediaList; attributes: T@"NSArray",C,N,V_ephemeralMediaList
// Property: cancelTranscodingSentinel; attributes: T@"SCSentinel",&,N,V_cancelTranscodingSentinel
// Property: videoExportFinished; attributes: TB,N,V_videoExportFinished
// Property: cameraRollSaveHandler; attributes: T@?,C,N,V_cameraRollSaveHandler
// Property: chatSendingCombineHandler; attributes: T@?,C,N,V_chatSendingCombineHandler
// Property: multiMediaSegmentExportedVideoURLs; attributes: T@"NSMutableArray",&,N,V_multiMediaSegmentExportedVideoURLs
// Property: captureSessionID; attributes: T@"NSString",C,N,V_captureSessionID
// Property: snapSessionID; attributes: T@"NSString",C,N,V_snapSessionID
// Property: batchCaptureConfiguration; attributes: T@"<SCBatchCaptureConfiguration>",&,N,V_batchCaptureConfiguration
// Property: batchCaptureSegmentExportSession; attributes: T@"SCBatchCaptureSegmentExportSession",&,N,V_batchCaptureSegmentExportSession
// Property: batchCaptureSavingError; attributes: T@"NSError",&,N,V_batchCaptureSavingError
// Property: batchCaptureSegmentsToTranscode; attributes: T@"NSArray",C,N,V_batchCaptureSegmentsToTranscode
// Property: snap; attributes: T@"<SCGallerySnap>",&,N,V_snap
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: overlayFormatServices; attributes: T@"SCOverlayFormatServices",&,N,V_overlayFormatServices
// Property: timelineConfiguration; attributes: T@"<SCTimelineConfiguration>",&,N,V_timelineConfiguration
// Property: shouldCacheSnapsToGalleryStore; attributes: TB,N,V_shouldCacheSnapsToGalleryStore
// Property: gallerySnapOverlays; attributes: T@"NSArray",&,N,V_gallerySnapOverlays
// Property: galleryStorySaver; attributes: T@"SCLazy",&,N,V_galleryStorySaver
// Property: snapVideoFilterFactory; attributes: T@"<SCSnapVideoFilterFactoryProtocol>",&,N,V_snapVideoFilterFactory
// Property: snapVideoFilterCoordinator; attributes: T@"SCLazy",&,N,V_snapVideoFilterCoordinator
// Property: videoAsset; attributes: T@"AVAsset",R,N,V_videoAsset
// Property: isFromCamera; attributes: TB,N,V_isFromCamera
// Property: transcodingMediaDestinationInfo; attributes: T@"SCMediaTranscodingDestinationInfo",C,N,V_transcodingMediaDestinationInfo
// Property: videoTargetSize; attributes: T{CGSize=dd},N,V_videoTargetSize
// Property: inputVideoOverrideSize; attributes: T{CGSize=dd},N,V_inputVideoOverrideSize
// Property: backgroundColors; attributes: T@"NSArray",&,N,V_backgroundColors
// Property: snapVideoFilterList; attributes: T@"NSArray",C,N,V_snapVideoFilterList
// Property: progressHandler; attributes: T@?,C,N,V_progressHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewEphemeralMediaList initWithBatchCaptureConfiguration:galleryStorySaver:snapVideoFilterFactory:snapVideoFilterCoordinator:captureSessionID:snap:overlayFormatServices:circumstanceEngine:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107e3a4e0

// -[SCPreviewEphemeralMediaList isMultiMedia]
// Type encoding: B16@0:8
// Implementation: 0x107e3a720

// -[SCPreviewEphemeralMediaList _setIsBatchCapture:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e3a764

// -[SCPreviewEphemeralMediaList isBatchCapture]
// Type encoding: B16@0:8
// Implementation: 0x107e3a7c0

// -[SCPreviewEphemeralMediaList setBatchCaptureSavingConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a804

// -[SCPreviewEphemeralMediaList batchCaptureSavingConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107e3a890

// -[SCPreviewEphemeralMediaList startBatchCaptureTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e3a8f4

// -[SCPreviewEphemeralMediaList cancelBatchCaptureTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e3a9a0

// -[SCPreviewEphemeralMediaList configureBatchCaptureWithStateHandler:configuration:drawingCache:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e3aafc

// -[SCPreviewEphemeralMediaList generateBatchCaptureSnapVideoFilterList]
// Type encoding: v16@0:8
// Implementation: 0x107e3ac00

// -[SCPreviewEphemeralMediaList enableCachingToGalleryStoryForBatchCaptureWithGallerySnapOverlays:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3ae2c

// -[SCPreviewEphemeralMediaList _exportBatchCaptureMediaAtIndex:totalCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107e3ae74

// -[SCPreviewEphemeralMediaList _exportImageMediaAtIndex:totalCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107e3b0e8

// -[SCPreviewEphemeralMediaList _exportBatchCaptureSegment:toVideoMediaAtIndex:totalCount:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x107e3b4a0

// -[SCPreviewEphemeralMediaList _transcodeBatchCaptureSegment:toMediaAtIndex:count:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x107e3b810

// -[SCPreviewEphemeralMediaList _shouldSaveVideoAfterTranscodingSegment:toMediaAtIndex:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x107e3bd6c

// -[SCPreviewEphemeralMediaList _saveInputVideosToCameraRoll:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e3be98

// -[SCPreviewEphemeralMediaList _generateSnapVideoFilterList:atIndex:forBatchCaptureSegment:]
// Type encoding: q40@0:8@16q24@32
// Implementation: 0x107e3c394

// -[SCPreviewEphemeralMediaList _cacheBatchCaptureStorySnapsToGalleryStore]
// Type encoding: v16@0:8
// Implementation: 0x107e3c958

// -[SCPreviewEphemeralMediaList forEachContextSetters:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e39784

// -[SCPreviewEphemeralMediaList setAppMetadataWithAppAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39864

// -[SCPreviewEphemeralMediaList setTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e398f4

// -[SCPreviewEphemeralMediaList setCameosStickersIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39984

// -[SCPreviewEphemeralMediaList setAuraProfileInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39a14

// -[SCPreviewEphemeralMediaList setMusicTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39aa4

// -[SCPreviewEphemeralMediaList setMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39b34

// -[SCPreviewEphemeralMediaList setMusicStickerStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39bc4

// -[SCPreviewEphemeralMediaList setRemixSourceSnapId:remixSourceUserId:remixLaunchSource:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x107e39c54

// -[SCPreviewEphemeralMediaList setRepostSourceSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39d1c

// -[SCPreviewEphemeralMediaList setUserDisabledMentionRemixing:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e39dac

// -[SCPreviewEphemeralMediaList setSnapKitOAuthClientId:providedAppName:attachmentUrl:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e39e08

// -[SCPreviewEphemeralMediaList setTimelineMetadataWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39ef0

// -[SCPreviewEphemeralMediaList setDirectorModeMetadataWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e39f80

// -[SCPreviewEphemeralMediaList setMultiCamModeMetadataWithContextInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a010

// -[SCPreviewEphemeralMediaList setCommerceAttachmentV2DataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a0a0

// -[SCPreviewEphemeralMediaList setShoppingLensProductIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a130

// -[SCPreviewEphemeralMediaList setCTItemInstances:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a1c0

// -[SCPreviewEphemeralMediaList setIsCheeriosVideo]
// Type encoding: v16@0:8
// Implementation: 0x107e3a250

// -[SCPreviewEphemeralMediaList setLensConfigInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a264

// -[SCPreviewEphemeralMediaList setLensMusicInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a2f4

// -[SCPreviewEphemeralMediaList setAIModeTextToImageInfo]
// Type encoding: v16@0:8
// Implementation: 0x107e3a384

// -[SCPreviewEphemeralMediaList setPostCaptureAIInfo]
// Type encoding: v16@0:8
// Implementation: 0x107e3a398

// -[SCPreviewEphemeralMediaList setTemplateInfoWithTemplateId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a3ac

// -[SCPreviewEphemeralMediaList setTextModeInfo]
// Type encoding: v16@0:8
// Implementation: 0x107e3a43c

// -[SCPreviewEphemeralMediaList overrideContextClientInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3a450

// -[SCPreviewEphemeralMediaList initWithGalleryStorySaver:snapVideoFilterFactory:snapVideoFilterCoordinator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107e3d004

// -[SCPreviewEphemeralMediaList initWithCount:galleryStorySaver:snapVideoFilterFactory:snapVideoFilterCoordinator:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x107e3d018

// -[SCPreviewEphemeralMediaList initWithEphemeralMediaList:galleryStorySaver:snapVideoFilterFactory:snapVideoFilterCoordinator:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107e3d134

// -[SCPreviewEphemeralMediaList initMultiSnapWithVideoProvider:timeRanges:galleryStorySaver:snapVideoFilterFactory:snapVideoFilterCoordinator:captureSessionID:snapSessionID:multiSnapStateHandler:ucoConfigs:isSnapFromMemories:circumstanceEngine:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72@80B88@92
// Implementation: 0x107e3d208

// -[SCPreviewEphemeralMediaList initWithTimelineConfiguration:galleryStorySaver:lensCommandMetadataProvider:snapVideoFilterFactory:snapVideoFilterCoordinator:captureSessionID:snapSessionID:ucoConfigs:splitOutput:transcodingMediaSource:circumstanceEngine:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72B80Q84@92
// Implementation: 0x107e3d430

// -[SCPreviewEphemeralMediaList configureMultiSnapWithStateHandler:configuration:drawingCache:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e3d77c

// -[SCPreviewEphemeralMediaList configureTimelineSnapWithDrawingCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3d794

// -[SCPreviewEphemeralMediaList useOnlyForCameraRollExportTranscodingCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e3d918

// -[SCPreviewEphemeralMediaList isMultiSnap]
// Type encoding: B16@0:8
// Implementation: 0x107e3d948

// -[SCPreviewEphemeralMediaList dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107e3d950

// -[SCPreviewEphemeralMediaList generateEphemeralMediaListWithFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3db94

// -[SCPreviewEphemeralMediaList generateEphemeralMediaListWithGallerySnap:factory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e3dba0

// -[SCPreviewEphemeralMediaList ephemeralMediaList]
// Type encoding: @16@0:8
// Implementation: 0x107e3dd6c

// -[SCPreviewEphemeralMediaList firstEphemeralMedia]
// Type encoding: @16@0:8
// Implementation: 0x107e3dd94

// -[SCPreviewEphemeralMediaList ephemeraMediaAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107e3dd9c

// -[SCPreviewEphemeralMediaList generateTimelineSnapVideoFilterList]
// Type encoding: v16@0:8
// Implementation: 0x107e3dda4

// -[SCPreviewEphemeralMediaList generateSnapVideoFilterListWithShouldClearOverlayDataForMultisnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e3e02c

// -[SCPreviewEphemeralMediaList snapVideoFilterList]
// Type encoding: @16@0:8
// Implementation: 0x107e3e614

// -[SCPreviewEphemeralMediaList firstSnapVideoFilter]
// Type encoding: @16@0:8
// Implementation: 0x107e3e63c

// -[SCPreviewEphemeralMediaList snapVideoFilterAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107e3e644

// -[SCPreviewEphemeralMediaList addShareLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3e64c

// -[SCPreviewEphemeralMediaList setAttachmentUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3e758

// -[SCPreviewEphemeralMediaList setCameraFrontFacing:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e3e8a0

// -[SCPreviewEphemeralMediaList setCaptionText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3e998

// -[SCPreviewEphemeralMediaList setStoryCaptionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3eaa4

// -[SCPreviewEphemeralMediaList setUnlockablesSnapInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3ebd0

// -[SCPreviewEphemeralMediaList setAdsTracking:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3ecdc

// -[SCPreviewEphemeralMediaList setLensMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3ede8

// -[SCPreviewEphemeralMediaList setCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3eef4

// -[SCPreviewEphemeralMediaList setStorySnapClientMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3f094

// -[SCPreviewEphemeralMediaList setEncryptedGeoData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3f1a0

// -[SCPreviewEphemeralMediaList setVenueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3f2ac

// -[SCPreviewEphemeralMediaList setGeoFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3f3b8

// -[SCPreviewEphemeralMediaList setInfiniteDuration:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e3f4c4

// -[SCPreviewEphemeralMediaList setPostLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3f5bc

// -[SCPreviewEphemeralMediaList setCaptureLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3f6c8

// -[SCPreviewEphemeralMediaList setLoggingParameters:forEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e3f7d4

// -[SCPreviewEphemeralMediaList setOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e3f900

// -[SCPreviewEphemeralMediaList setOverlayDataToUpload:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3f9f8

// -[SCPreviewEphemeralMediaList setOverlayPresent:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e3fb24

// -[SCPreviewEphemeralMediaList setPlaceID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3fc3c

// -[SCPreviewEphemeralMediaList setShouldIncludeLocationData:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e3fd48

// -[SCPreviewEphemeralMediaList setTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e3fe40

// -[SCPreviewEphemeralMediaList setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e3ff40

// -[SCPreviewEphemeralMediaList setContextHint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40038

// -[SCPreviewEphemeralMediaList setNotifiedUsernames:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40144

// -[SCPreviewEphemeralMediaList setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e40250

// -[SCPreviewEphemeralMediaList setCameraDeepLinkMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40348

// -[SCPreviewEphemeralMediaList setRotationLocked:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e40454

// -[SCPreviewEphemeralMediaList setAudioEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e4054c

// -[SCPreviewEphemeralMediaList setAudioState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40644

// -[SCPreviewEphemeralMediaList setFilterName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40750

// -[SCPreviewEphemeralMediaList setFrameHealthChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4085c

// -[SCPreviewEphemeralMediaList setOverlayImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40968

// -[SCPreviewEphemeralMediaList setOverlayImageFileSizeBits:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e40a74

// -[SCPreviewEphemeralMediaList setOverlayImageForThumbnail:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40b6c

// -[SCPreviewEphemeralMediaList setAudioOverrideAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e40c78

// -[SCPreviewEphemeralMediaList setSavesToCameraRoll:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e40d84

// -[SCPreviewEphemeralMediaList setHighQuality:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e40e7c

// -[SCPreviewEphemeralMediaList setThumbnailOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e40f74

// -[SCPreviewEphemeralMediaList setUseOverlayImageAsMask:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e4106c

// -[SCPreviewEphemeralMediaList setCroppingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e41164

// -[SCPreviewEphemeralMediaList setVideoPlaybackRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e41270

// -[SCPreviewEphemeralMediaList setVideoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e41370

// -[SCPreviewEphemeralMediaList setVideoTargetAspectRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e4147c

// -[SCPreviewEphemeralMediaList setVideoTrackedImages:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4157c

// -[SCPreviewEphemeralMediaList setSnapPageSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e41688

// -[SCPreviewEphemeralMediaList setSpectaclesTranscodingConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e41780

// -[SCPreviewEphemeralMediaList setSpotlightModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4188c

// -[SCPreviewEphemeralMediaList configureMultiSnapWithVideoPlaybackRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e41998

// -[SCPreviewEphemeralMediaList enableCachingToGalleryStoryWithGallerySnapOverlays:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e41ab4

// -[SCPreviewEphemeralMediaList startTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e41b0c

// -[SCPreviewEphemeralMediaList cancelTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e41b60

// -[SCPreviewEphemeralMediaList multiSnapV2AnySnapTrimmed]
// Type encoding: B16@0:8
// Implementation: 0x107e41c00

// -[SCPreviewEphemeralMediaList _startMultiSnapTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e41cb0

// -[SCPreviewEphemeralMediaList _cancelMultiSnapTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e41e4c

// -[SCPreviewEphemeralMediaList _cacheAllSnapsToGalleryStore]
// Type encoding: v16@0:8
// Implementation: 0x107e41f54

// -[SCPreviewEphemeralMediaList _exportSegmentAtIndex:count:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107e42730

// -[SCPreviewEphemeralMediaList _transcodeSegmentAtIndex:count:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107e42860

// -[SCPreviewEphemeralMediaList _exportInputVideoToFileURL]
// Type encoding: @16@0:8
// Implementation: 0x107e4364c

// -[SCPreviewEphemeralMediaList _newMp4Url]
// Type encoding: @16@0:8
// Implementation: 0x107e43768

// -[SCPreviewEphemeralMediaList _usecase]
// Type encoding: @16@0:8
// Implementation: 0x107e43830

// -[SCPreviewEphemeralMediaList combineMultiSnapSegmentsForChatSendingWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e4386c

// -[SCPreviewEphemeralMediaList _combineMultiSnapSegmentsAndRunCompletionHandlersIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107e438bc

// -[SCPreviewEphemeralMediaList isTimelineOrDirectorModeSnap]
// Type encoding: B16@0:8
// Implementation: 0x107e43ab4

// -[SCPreviewEphemeralMediaList _startTimelineSnapTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e43abc

// -[SCPreviewEphemeralMediaList _cancelTimelineSnapTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x107e43b10

// -[SCPreviewEphemeralMediaList _transcodeTimelineSnap]
// Type encoding: v16@0:8
// Implementation: 0x107e43c34

// -[SCPreviewEphemeralMediaList _transcodeTimelineSnapVideoFilterIndex:videoURLs:timeRanges:inputSizeOverride:videoTargetSize:]
// Type encoding: v72@0:8q16@24@32{CGSize=dd}40{CGSize=dd}56
// Implementation: 0x107e43d4c

// -[SCPreviewEphemeralMediaList setPublisherId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44380

// -[SCPreviewEphemeralMediaList setMentionedUserIds:usernames:sources:textRanges:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107e444ec

// -[SCPreviewEphemeralMediaList setGenAIFeaturedStoryInfo:]
// Type encoding: v20@0:8i16
// Implementation: 0x107e44600

// -[SCPreviewEphemeralMediaList setTopicStickers:storyTopics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e4465c

// -[SCPreviewEphemeralMediaList setPoll:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44718

// -[SCPreviewEphemeralMediaList setQuestion:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e447a8

// -[SCPreviewEphemeralMediaList setSnapMeInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44838

// -[SCPreviewEphemeralMediaList setStoryInviteWithPublicationId:inviteId:storyName:storyType:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107e448c8

// -[SCPreviewEphemeralMediaList setSnapRequestMetadataWithPublicationId:inviteId:storyName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e449dc

// -[SCPreviewEphemeralMediaList setUserDisabledRemixing:leaveRemixSettingUnsetExperimentEnabled:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107e449e0

// -[SCPreviewEphemeralMediaList setDreamsInfoWithDreamId:dreamPackId:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e44a44

// -[SCPreviewEphemeralMediaList setSnapDocLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44b2c

// -[SCPreviewEphemeralMediaList setRankingSignalsBase64String:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44bbc

// -[SCPreviewEphemeralMediaList setExternalContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44c64

// -[SCPreviewEphemeralMediaList setLocalPlatformData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44db4

// -[SCPreviewEphemeralMediaList addMediaOrigins:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44e60

// -[SCPreviewEphemeralMediaList setBitmojiFashionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e44fd4

// -[SCPreviewEphemeralMediaList count]
// Type encoding: Q16@0:8
// Implementation: 0x107e45068

// -[SCPreviewEphemeralMediaList setCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107e45070

// -[SCPreviewEphemeralMediaList videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107e45078

// -[SCPreviewEphemeralMediaList timeRanges]
// Type encoding: @16@0:8
// Implementation: 0x107e45080

// -[SCPreviewEphemeralMediaList setTimeRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45088

// -[SCPreviewEphemeralMediaList isFromCamera]
// Type encoding: B16@0:8
// Implementation: 0x107e45090

// -[SCPreviewEphemeralMediaList setIsFromCamera:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e45098

// -[SCPreviewEphemeralMediaList transcodingMediaDestinationInfo]
// Type encoding: @16@0:8
// Implementation: 0x107e450a0

// -[SCPreviewEphemeralMediaList setTranscodingMediaDestinationInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e450a8

// -[SCPreviewEphemeralMediaList videoTargetSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107e450b0

// -[SCPreviewEphemeralMediaList setVideoTargetSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107e450b8

// -[SCPreviewEphemeralMediaList inputVideoOverrideSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107e450c0

// -[SCPreviewEphemeralMediaList setInputVideoOverrideSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107e450c8

// -[SCPreviewEphemeralMediaList backgroundColors]
// Type encoding: @16@0:8
// Implementation: 0x107e450d0

// -[SCPreviewEphemeralMediaList setBackgroundColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e450d8

// -[SCPreviewEphemeralMediaList setSnapVideoFilterList:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45108

// -[SCPreviewEphemeralMediaList progressHandler]
// Type encoding: @?16@0:8
// Implementation: 0x107e45110

// -[SCPreviewEphemeralMediaList setProgressHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e45118

// -[SCPreviewEphemeralMediaList setEphemeralMediaList:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45120

// -[SCPreviewEphemeralMediaList cancelTranscodingSentinel]
// Type encoding: @16@0:8
// Implementation: 0x107e45128

// -[SCPreviewEphemeralMediaList setCancelTranscodingSentinel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45130

// -[SCPreviewEphemeralMediaList videoExportFinished]
// Type encoding: B16@0:8
// Implementation: 0x107e45160

// -[SCPreviewEphemeralMediaList setVideoExportFinished:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e45168

// -[SCPreviewEphemeralMediaList cameraRollSaveHandler]
// Type encoding: @?16@0:8
// Implementation: 0x107e45170

// -[SCPreviewEphemeralMediaList setCameraRollSaveHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e45178

// -[SCPreviewEphemeralMediaList chatSendingCombineHandler]
// Type encoding: @?16@0:8
// Implementation: 0x107e45180

// -[SCPreviewEphemeralMediaList setChatSendingCombineHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e45188

// -[SCPreviewEphemeralMediaList multiMediaSegmentExportedVideoURLs]
// Type encoding: @16@0:8
// Implementation: 0x107e45190

// -[SCPreviewEphemeralMediaList setMultiMediaSegmentExportedVideoURLs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45198

// -[SCPreviewEphemeralMediaList captureSessionID]
// Type encoding: @16@0:8
// Implementation: 0x107e451c8

// -[SCPreviewEphemeralMediaList setCaptureSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e451d0

// -[SCPreviewEphemeralMediaList snapSessionID]
// Type encoding: @16@0:8
// Implementation: 0x107e451d8

// -[SCPreviewEphemeralMediaList setSnapSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e451e0

// -[SCPreviewEphemeralMediaList batchCaptureConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107e451e8

// -[SCPreviewEphemeralMediaList setBatchCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e451f0

// -[SCPreviewEphemeralMediaList batchCaptureSegmentExportSession]
// Type encoding: @16@0:8
// Implementation: 0x107e45220

// -[SCPreviewEphemeralMediaList setBatchCaptureSegmentExportSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45228

// -[SCPreviewEphemeralMediaList batchCaptureSavingError]
// Type encoding: @16@0:8
// Implementation: 0x107e45258

// -[SCPreviewEphemeralMediaList setBatchCaptureSavingError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45260

// -[SCPreviewEphemeralMediaList batchCaptureSegmentsToTranscode]
// Type encoding: @16@0:8
// Implementation: 0x107e45290

// -[SCPreviewEphemeralMediaList setBatchCaptureSegmentsToTranscode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45298

// -[SCPreviewEphemeralMediaList snap]
// Type encoding: @16@0:8
// Implementation: 0x107e452a0

// -[SCPreviewEphemeralMediaList setSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e452a8

// -[SCPreviewEphemeralMediaList circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x107e452d8

// -[SCPreviewEphemeralMediaList setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e452e0

// -[SCPreviewEphemeralMediaList overlayFormatServices]
// Type encoding: @16@0:8
// Implementation: 0x107e45310

// -[SCPreviewEphemeralMediaList setOverlayFormatServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45318

// -[SCPreviewEphemeralMediaList timelineConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107e45348

// -[SCPreviewEphemeralMediaList setTimelineConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45350

// -[SCPreviewEphemeralMediaList shouldCacheSnapsToGalleryStore]
// Type encoding: B16@0:8
// Implementation: 0x107e45380

// -[SCPreviewEphemeralMediaList setShouldCacheSnapsToGalleryStore:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e45388

// -[SCPreviewEphemeralMediaList gallerySnapOverlays]
// Type encoding: @16@0:8
// Implementation: 0x107e45390

// -[SCPreviewEphemeralMediaList setGallerySnapOverlays:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45398

// -[SCPreviewEphemeralMediaList galleryStorySaver]
// Type encoding: @16@0:8
// Implementation: 0x107e453c8

// -[SCPreviewEphemeralMediaList setGalleryStorySaver:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e453d0

// -[SCPreviewEphemeralMediaList snapVideoFilterFactory]
// Type encoding: @16@0:8
// Implementation: 0x107e45400

// -[SCPreviewEphemeralMediaList setSnapVideoFilterFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45408

// -[SCPreviewEphemeralMediaList snapVideoFilterCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x107e45438

// -[SCPreviewEphemeralMediaList setSnapVideoFilterCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e45440

// -[SCPreviewEphemeralMediaList .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e45470

@end
