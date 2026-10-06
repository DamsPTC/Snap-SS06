// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureBatchCaptureImpl
// Superclass: NSObject
// Address: 0x112a9c468

@interface SCPreviewFeatureBatchCaptureImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewFeatureBatchCaptureDelegate><SCPreviewFeatureParentViewControllerAccessing>",W,N,V_delegate
// Property: batchCaptureViewController; attributes: T@"SCBatchCaptureCollectionViewController",R,N,V_batchCaptureViewController
// Property: batchCaptureStateHandler; attributes: T@"SCBatchCaptureStateHandler",R,N,V_batchCaptureStateHandler
// Property: savingConfiguration; attributes: T@"SCBatchCaptureSavingConfiguration",R,N,V_savingConfiguration
// Property: galleryConfiguration; attributes: T@"SCPreviewSnapchatGalleryConfiguration",&,N,V_galleryConfiguration

// -[SCPreviewFeatureBatchCaptureImpl initWithAutoCaptions:previewScopeServices:caption:circumstanceEngine:commonLoggingParamsBuilder:configuration:drawing:ephemeralMediaFactory:featureSettingsService:galleryStorySaver:genericAssetsRegistry:imageProcessCommandProvider:legacyCameraActiveVideoPath:overlayFormatServices:previewCameraSourceOverlayService:previewTooltipsServices:snapCrop:snapVideoFilterFactory:snapVideoFilterCoordinator:stickerContainer:filterMetadataProvider:videoFilterStateController:timer:userInfoServices:userSession:userTagging:viewportController:videoPlayback:videoThumbnailGenerator:videoTrackingServices:webAttachment:stickerInjector:ctpItemViewService:previewLoggingServices:previewABProvider:snapEditorTweaks:]
// Type encoding: @304@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296
// Implementation: 0x105d2b4d4

// -[SCPreviewFeatureBatchCaptureImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d2bd98

// -[SCPreviewFeatureBatchCaptureImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d2bf6c

// -[SCPreviewFeatureBatchCaptureImpl setupBatchCaptureWithPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2bf74

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureFirstFrameRenderedForFrameSourceAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d2c15c

// -[SCPreviewFeatureBatchCaptureImpl _updateThumbnailsForSegmentAtIndex:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105d2c374

// -[SCPreviewFeatureBatchCaptureImpl _batchCaptureEditedThumbnailsAtSegmentIndex:snapIndex:completion:]
// Type encoding: v40@0:8q16q24@?32
// Implementation: 0x105d2c600

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureSaveCurrentOverlayItemsToSourceAtIndex:multiSnapIndex:shouldUpdateThumbnails:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x105d2d824

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureDidPlayFromSourceAtIndex:multiSnapIndex:toSourceAtIndex:multiSnapIndex:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x105d2ddf0

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureUpdateImageSegmentDuration:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d2e6cc

// -[SCPreviewFeatureBatchCaptureImpl setVideoSegmentInfiniteDuration:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d2e84c

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureSegmentAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x105d2e8ec

// -[SCPreviewFeatureBatchCaptureImpl isEditingVideoSegment]
// Type encoding: B16@0:8
// Implementation: 0x105d2e978

// -[SCPreviewFeatureBatchCaptureImpl saveBatchCaptureSegmentsToCameraRollWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d2e9c4

// -[SCPreviewFeatureBatchCaptureImpl exportBatchCaptureSegmentsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d2e9c8

// -[SCPreviewFeatureBatchCaptureImpl _logPreviewImageMediaExport]
// Type encoding: v16@0:8
// Implementation: 0x105d2ee0c

// -[SCPreviewFeatureBatchCaptureImpl _initializeEphemeralMediaListForSaving]
// Type encoding: @16@0:8
// Implementation: 0x105d2efb0

// -[SCPreviewFeatureBatchCaptureImpl finalizeSavingConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x105d2f158

// -[SCPreviewFeatureBatchCaptureImpl deselectSelectedSegmentIfAny]
// Type encoding: v16@0:8
// Implementation: 0x105d2f230

// -[SCPreviewFeatureBatchCaptureImpl galleryConfigurationForSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d2f260

// -[SCPreviewFeatureBatchCaptureImpl setGalleryConfiguration:forSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d2f2c8

// -[SCPreviewFeatureBatchCaptureImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2f340

// -[SCPreviewFeatureBatchCaptureImpl _realSetupBatchCaptureWithController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2f380

// -[SCPreviewFeatureBatchCaptureImpl finishTouchControl:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2fad8

// -[SCPreviewFeatureBatchCaptureImpl finishRewindingWithTrackableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2fb04

// -[SCPreviewFeatureBatchCaptureImpl snapEditStateChangeShouldUpdateThumbnails:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d2fb0c

// -[SCPreviewFeatureBatchCaptureImpl previewThumbnailsController]
// Type encoding: @16@0:8
// Implementation: 0x105d2fbf0

// -[SCPreviewFeatureBatchCaptureImpl preparePreviewEphemeralMediaList:destinationInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d2fc18

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureCollectionViewController:didUpdateSegmentStatesAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d2ffa4

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureCollectionViewController:didSplitTrimOrDeleteSegmentAtIndexPath:shouldUpdateThumbnails:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105d30074

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureCollectionViewController:didPressDeleteForSegmentAtIndexPath:deleteBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105d3016c

// -[SCPreviewFeatureBatchCaptureImpl _onDeleteSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d30550

// -[SCPreviewFeatureBatchCaptureImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d3067c

// -[SCPreviewFeatureBatchCaptureImpl _batchCaptureConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d306b8

// -[SCPreviewFeatureBatchCaptureImpl _batchCaptureSegments]
// Type encoding: @16@0:8
// Implementation: 0x105d306f8

// -[SCPreviewFeatureBatchCaptureImpl _editingSegment]
// Type encoding: @16@0:8
// Implementation: 0x105d3073c

// -[SCPreviewFeatureBatchCaptureImpl _isEditingSegment]
// Type encoding: B16@0:8
// Implementation: 0x105d30784

// -[SCPreviewFeatureBatchCaptureImpl _outputOverlaySize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105d307a8

// -[SCPreviewFeatureBatchCaptureImpl _updateCurrentSegmentThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x105d3081c

// -[SCPreviewFeatureBatchCaptureImpl _didDeleteSegmentAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d30a78

// -[SCPreviewFeatureBatchCaptureImpl _showTryonFailTooltipIfNeededForSegmentIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d30b48

// -[SCPreviewFeatureBatchCaptureImpl _updateSaveButtonState]
// Type encoding: v16@0:8
// Implementation: 0x105d30c48

// -[SCPreviewFeatureBatchCaptureImpl _hasSavedGallerySnapsForSegment:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d30d9c

// -[SCPreviewFeatureBatchCaptureImpl _getCurrentEditingState]
// Type encoding: @16@0:8
// Implementation: 0x105d30dfc

// -[SCPreviewFeatureBatchCaptureImpl _editingStateForPlayingSegment]
// Type encoding: @16@0:8
// Implementation: 0x105d30e98

// -[SCPreviewFeatureBatchCaptureImpl _updateFilterStackingToolButtonWithSnapState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d30f30

// -[SCPreviewFeatureBatchCaptureImpl _shouldShowTimerForVideo]
// Type encoding: B16@0:8
// Implementation: 0x105d31060

// -[SCPreviewFeatureBatchCaptureImpl _toggleTimerToolButton]
// Type encoding: v16@0:8
// Implementation: 0x105d31168

// -[SCPreviewFeatureBatchCaptureImpl _setTimerButtonItem:forSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d31360

// -[SCPreviewFeatureBatchCaptureImpl _toggleAttachmentToolButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d31584

// -[SCPreviewFeatureBatchCaptureImpl _toolbarButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d31724

// -[SCPreviewFeatureBatchCaptureImpl deleteAllSegments]
// Type encoding: v16@0:8
// Implementation: 0x105d31774

// -[SCPreviewFeatureBatchCaptureImpl _deleteAllSegmentsWithDiscardMethod:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d3177c

// -[SCPreviewFeatureBatchCaptureImpl shouldShowDiscardWarning]
// Type encoding: B16@0:8
// Implementation: 0x105d317ec

// -[SCPreviewFeatureBatchCaptureImpl showDiscardWarningWithPreviewExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d31878

// -[SCPreviewFeatureBatchCaptureImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d31bd4

// -[SCPreviewFeatureBatchCaptureImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d31bec

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureViewController]
// Type encoding: @16@0:8
// Implementation: 0x105d31bf8

// -[SCPreviewFeatureBatchCaptureImpl batchCaptureStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x105d31c00

// -[SCPreviewFeatureBatchCaptureImpl savingConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d31c08

// -[SCPreviewFeatureBatchCaptureImpl galleryConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d31c10

// -[SCPreviewFeatureBatchCaptureImpl setGalleryConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d31c18

// -[SCPreviewFeatureBatchCaptureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d31c48

@end
