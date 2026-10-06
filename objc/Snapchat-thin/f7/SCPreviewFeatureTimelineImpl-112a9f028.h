// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureTimelineImpl
// Superclass: NSObject
// Address: 0x112a9f028

@interface SCPreviewFeatureTimelineImpl

// Property: delegate; attributes: T@"<SCPreviewFeatureMultiSnapDelegate><SCPreviewFeatureParentViewControllerAccessing>",W,N,V_delegate
// Property: thumbnailsViewController; attributes: T@"SCTimelineThumbnailsCollectionViewController",R,N,V_thumbnailsViewController
// Property: timelineSnapStateHandler; attributes: T@"SCTimelineSnapStateHandler",R,N,V_timelineSnapStateHandler
// Property: addSnapConfigurationFuture; attributes: T@"SCFuture",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureTimelineImpl initWithUserSession:previewConfiguration:previewABServices:creativeToolsABServices:cameraConfigurationServices:drawing:autoCaptions:imageProcessCommandProvider:genericAssetMetadataProvider:renderingMetadataProvider:dialogCoordinator:videoThumbnailGenerator:circumstanceEngine:videoTranscoder:voiceoverFeature:webAttachment:userTagging:targetTrajectoryFactory:previewScopeServices:genericAssetsServices:stickerInjector:ctpItemViewService:previewLoggingServices:snapCrop:stickerContainer:viewportController:videoPlayback:captionFeature:tooltipPresenter:cameraFeatureLoggingServices:userInfoServices:previewCameraSourceOverlayService:overlayFormatServices:music:previewLegacyServices:galleryStorySaver:snapVideoFilterFactory:snapVideoFilterCoordinator:videoPlaybackLogger:bounceFeature:ucoInMemories:commonLoggingParamsBuilder:snapDocManager:snapDocConverterServices:snapDocEditorFactory:previewURLVideoProvider:commandMapper:snapchatterFetcher:watermarkServices:filterMetadataProvider:filterProcessCommandProvider:geoFilterProvider:venueFilterController:videoFilterStateController:]
// Type encoding: @448@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440
// Implementation: 0x105dbed7c

// -[SCPreviewFeatureTimelineImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dbfb50

// -[SCPreviewFeatureTimelineImpl snapEditor:didChangeToolBarButtonItemType:selected:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x105dbfbb0

// -[SCPreviewFeatureTimelineImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dbfc10

// -[SCPreviewFeatureTimelineImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105dbfc50

// -[SCPreviewFeatureTimelineImpl addSnapConfigurationFuture]
// Type encoding: @16@0:8
// Implementation: 0x105dbfc58

// -[SCPreviewFeatureTimelineImpl setupPreviewUIWithPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dbfc60

// -[SCPreviewFeatureTimelineImpl setTimelineConfiguration:andPlayerHandler:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dbfd8c

// -[SCPreviewFeatureTimelineImpl timelineDidPlayToVideoIndex:lastIndex:shouldRestoreFiltersState:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x105dbfddc

// -[SCPreviewFeatureTimelineImpl exportToMultipleVideosForGallerySavingWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dc081c

// -[SCPreviewFeatureTimelineImpl _imageProcessDataForIndex:editingState:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x105dc1250

// -[SCPreviewFeatureTimelineImpl saveToCameraRollWithExportCompletion:saveToSnapAlbumCompletion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x105dc171c

// -[SCPreviewFeatureTimelineImpl _attachWatermarkIfNeededForVideoUrl:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105dc1b6c

// -[SCPreviewFeatureTimelineImpl exportBakedInEffectsToURLWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dc1f5c

// -[SCPreviewFeatureTimelineImpl prepareEphemeralMediaListWithSegmentation:destinationInfo:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x105dc20e4

// -[SCPreviewFeatureTimelineImpl showDiscardWarningWithPreviewExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105dc2500

// -[SCPreviewFeatureTimelineImpl tryToShowRecordMoreTooltipBalloon]
// Type encoding: B16@0:8
// Implementation: 0x105dc2808

// -[SCPreviewFeatureTimelineImpl tryToShowAddMoreSnapsTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105dc293c

// -[SCPreviewFeatureTimelineImpl tryToShowTimelineDraftEditFromMemoriesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105dc29ac

// -[SCPreviewFeatureTimelineImpl showApplyVideoEffectTooltip]
// Type encoding: v16@0:8
// Implementation: 0x105dc2a88

// -[SCPreviewFeatureTimelineImpl _showTootipAboveCollapsedThumbnailWithText:]
// Type encoding: B24@0:8@16
// Implementation: 0x105dc2ac4

// -[SCPreviewFeatureTimelineImpl deselectSelectedSegmentIfAny]
// Type encoding: v16@0:8
// Implementation: 0x105dc2b84

// -[SCPreviewFeatureTimelineImpl discardAllSegments]
// Type encoding: v16@0:8
// Implementation: 0x105dc2b8c

// -[SCPreviewFeatureTimelineImpl setMusicPickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc2fa0

// -[SCPreviewFeatureTimelineImpl globalEditingState]
// Type encoding: @16@0:8
// Implementation: 0x105dc2fe8

// -[SCPreviewFeatureTimelineImpl getOutputVideoTimeRangeForGallerySaving]
// Type encoding: @16@0:8
// Implementation: 0x105dc3070

// -[SCPreviewFeatureTimelineImpl saveFilterDataWithInfoStickerDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc310c

// -[SCPreviewFeatureTimelineImpl updateSnapCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc32ec

// -[SCPreviewFeatureTimelineImpl _overrideSnapSourceIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc345c

// -[SCPreviewFeatureTimelineImpl _mergedSegmentLoggingParamsFromExistingSegmentLoggingParamsArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dc3598

// -[SCPreviewFeatureTimelineImpl prepareAddSnapConfiguration:withVideoFuture:captureSessionID:lensSessionID:activeLensID:activeLensMusicTrackMetadata:activeCameraModes:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x105dc397c

// -[SCPreviewFeatureTimelineImpl setAddSnapThumbnailsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dc41d8

// -[SCPreviewFeatureTimelineImpl updateAddSnapTrimmedTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x105dc41ec

// -[SCPreviewFeatureTimelineImpl removeThumbnailsView]
// Type encoding: v16@0:8
// Implementation: 0x105dc4294

// -[SCPreviewFeatureTimelineImpl handleAddToSnap]
// Type encoding: v16@0:8
// Implementation: 0x105dc42d8

// -[SCPreviewFeatureTimelineImpl clipsStateEditingType]
// Type encoding: Q16@0:8
// Implementation: 0x105dc4438

// -[SCPreviewFeatureTimelineImpl currentPlayingSnapIndex]
// Type encoding: q16@0:8
// Implementation: 0x105dc44a8

// -[SCPreviewFeatureTimelineImpl finishTouchControl:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc44b0

// -[SCPreviewFeatureTimelineImpl finishRewindingWithTrackableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc44dc

// -[SCPreviewFeatureTimelineImpl snapEditStateChangeShouldUpdateThumbnails:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dc451c

// -[SCPreviewFeatureTimelineImpl previewThumbnailsController]
// Type encoding: @16@0:8
// Implementation: 0x105dc464c

// -[SCPreviewFeatureTimelineImpl preparePreviewEphemeralMediaList:destinationInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dc4674

// -[SCPreviewFeatureTimelineImpl _logPreviewMediaExport]
// Type encoding: v16@0:8
// Implementation: 0x105dc48d0

// -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidSelectSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc4a80

// -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidDeselectSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc4cd0

// -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidUpdateSegmentStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc4e3c

// -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidPressDelete:deleteBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105dc4e90

// -[SCPreviewFeatureTimelineImpl timelineThumbnailsControllerDidSelectAddMore:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc5174

// -[SCPreviewFeatureTimelineImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105dc5178

// -[SCPreviewFeatureTimelineImpl snapEditor:willExportSnapDocInEditor:exportType:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x105dc51b4

// -[SCPreviewFeatureTimelineImpl setupSnapStateHandlerWithMultiSnapIndexProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc54b0

// -[SCPreviewFeatureTimelineImpl generateEditedThumbnailsForSegmentIndex:thumbnailCount:thumbnailSize:]
// Type encoding: @48@0:8q16Q24{CGSize=dd}32
// Implementation: 0x105dc6288

// -[SCPreviewFeatureTimelineImpl _setupThumbnailsView]
// Type encoding: v16@0:8
// Implementation: 0x105dc6428

// -[SCPreviewFeatureTimelineImpl _updateThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x105dc6938

// -[SCPreviewFeatureTimelineImpl _getTimelineEditedThumbnailsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dc6b20

// -[SCPreviewFeatureTimelineImpl _updateOverlayStateForSegments:videoAsset:videoComposition:images:imageTimeRanges:thumbnailSize:]
// Type encoding: v72@0:8@16@24@32@40@48{CGSize=dd}56
// Implementation: 0x105dc6e30

// -[SCPreviewFeatureTimelineImpl _generateThumbnailsForSegmentIndex:thumbnailCount:thumbnailSize:videoAsset:videoComposition:images:imageTimeRanges:]
// Type encoding: @80@0:8q16Q24{CGSize=dd}32@48@56@64@72
// Implementation: 0x105dc7184

// -[SCPreviewFeatureTimelineImpl _generateImagesAndTimeRangesFromSegments:images:imageTimeRanges:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105dc76ac

// -[SCPreviewFeatureTimelineImpl _getVideoAssetForTimelineConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dc7944

// -[SCPreviewFeatureTimelineImpl _getVideoCompositionForTimelineConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dc79ac

// -[SCPreviewFeatureTimelineImpl _outputOverlaySize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105dc7a08

// -[SCPreviewFeatureTimelineImpl _generateThumbnailSampleTimesForVideoDuration:thumbnailCount:]
// Type encoding: @48@0:8{?=qiIq}16Q40
// Implementation: 0x105dc7a7c

// -[SCPreviewFeatureTimelineImpl _generateEditedThumbnailsWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dc7bd4

// -[SCPreviewFeatureTimelineImpl _postProcessThumbnail:targetSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x105dc7fd0

// -[SCPreviewFeatureTimelineImpl _applyOverlayState:toSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dc81dc

// -[SCPreviewFeatureTimelineImpl _thumbnailGenerationRequestWithVideoAsset:videoComposition:sampleTimes:thumbnailSize:overlay:videoTrackedImages:images:imageTimeRanges:]
// Type encoding: @88@0:8@16@24@32{CGSize=dd}40@56@64@72@80
// Implementation: 0x105dc86b8

// -[SCPreviewFeatureTimelineImpl _thumbnailGenerationOverlayStateWithOverlay:videoTrackedImages:sampleTimes:thumbnailSize:]
// Type encoding: @56@0:8@16@24@32{CGSize=dd}40
// Implementation: 0x105dc889c

// -[SCPreviewFeatureTimelineImpl _setGeofilterAttachmentUrlIfNeededToEphemeralMediaList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dc901c

// -[SCPreviewFeatureTimelineImpl _showDiscardUnsupporttedEditsWarningWithPreviewExitType:]
// Type encoding: B24@0:8q16
// Implementation: 0x105dc90f4

// -[SCPreviewFeatureTimelineImpl _validatePreviewEdits]
// Type encoding: v16@0:8
// Implementation: 0x105dc952c

// -[SCPreviewFeatureTimelineImpl _isTimelineDraftFromMemories]
// Type encoding: B16@0:8
// Implementation: 0x105dc99bc

// -[SCPreviewFeatureTimelineImpl _exportVideosForTimelineDraftSavingWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dc9a60

// -[SCPreviewFeatureTimelineImpl _shouldTrimVideoBeforeSaveForSegment:]
// Type encoding: B24@0:8@16
// Implementation: 0x105dca240

// -[SCPreviewFeatureTimelineImpl _computeHardTrimTimeRangeForSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dca308

// -[SCPreviewFeatureTimelineImpl _saveUcoRawMediaInEditor:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105dca430

// -[SCPreviewFeatureTimelineImpl _saveExportedMediaInEditor:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105dcb2c4

// -[SCPreviewFeatureTimelineImpl _saveExportedMediaInEditor:startFromIndex:errors:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x105dcb4cc

// -[SCPreviewFeatureTimelineImpl _saveExportedImageInEditor:atIndex:mediaSegment:mediaMetadata:ucoFilterIDs:completion:]
// Type encoding: v64@0:8@16Q24@32@40@48@?56
// Implementation: 0x105dcb91c

// -[SCPreviewFeatureTimelineImpl _saveExportedVideoInEditor:atIndex:mediaSegment:mediaMetadata:ucoFilterIDs:completion:]
// Type encoding: v64@0:8@16Q24@32@40@48@?56
// Implementation: 0x105dcbf0c

// -[SCPreviewFeatureTimelineImpl _transcodeImageWithURL:ucoFilterIDs:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105dcc86c

// -[SCPreviewFeatureTimelineImpl _transcodeVideoWithURL:ucoFilterIDs:trimTimeRange:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105dccbd4

// -[SCPreviewFeatureTimelineImpl _updateSnapDocWithEditor:atIndex:videoUrl:trimTimeRange:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x105dccf58

// -[SCPreviewFeatureTimelineImpl _updateSnapDocBaseMediaInEditor:atIndex:mediaType:mediaInput:mediaMetadata:trimTimeRange:completion:]
// Type encoding: v68@0:8@16Q24i32@36@44@52@?60
// Implementation: 0x105dcd188

// -[SCPreviewFeatureTimelineImpl timelineSnapStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x105dcd780

// -[SCPreviewFeatureTimelineImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105dcd788

// -[SCPreviewFeatureTimelineImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dcd7a0

// -[SCPreviewFeatureTimelineImpl thumbnailsViewController]
// Type encoding: @16@0:8
// Implementation: 0x105dcd7ac

// -[SCPreviewFeatureTimelineImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dcd7b4

@end
