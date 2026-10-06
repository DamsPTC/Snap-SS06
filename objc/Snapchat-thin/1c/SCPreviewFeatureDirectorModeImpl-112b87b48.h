// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureDirectorModeImpl
// Superclass: NSObject
// Address: 0x112b87b48

@interface SCPreviewFeatureDirectorModeImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewFeatureMultiSnapDelegate><SCPreviewFeatureParentViewControllerAccessing><SCPreviewPlaybackControlDelegate>",W,N,V_delegate
// Property: thumbnailsFeature; attributes: T@"<SCFeatureDirectorModeThumbnails>",R,N,V_thumbnailsFeature
// Property: thumbnailsViewController; attributes: T@"UIViewController",R,N,V_thumbnailsViewController
// Property: timelineSnapStateHandler; attributes: T@"SCTimelineSnapStateHandler",R,N

// -[SCPreviewFeatureDirectorModeImpl initWithUserSession:previewConfiguration:timeline:dialogCoordinator:imageProcessCommandProvider:thumbnailGenerator:videoTrackingTargetTrajectoryFactory:snapCrop:lensExplorer:carouselOrderProvider:videoFilterStateController:previewScopeServices:previewABServices:smartTemplateService:tooltipPresenter:previewTooltipsServices:contentDelivery:circumstanceEngine:templateServices:viewportController:]
// Type encoding: @176@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x107e48478

// -[SCPreviewFeatureDirectorModeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4888c

// -[SCPreviewFeatureDirectorModeImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x107e488cc

// -[SCPreviewFeatureDirectorModeImpl finishRewindingWithTrackableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e488d4

// -[SCPreviewFeatureDirectorModeImpl finishTouchControl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e48938

// -[SCPreviewFeatureDirectorModeImpl preparePreviewEphemeralMediaList:destinationInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e48988

// -[SCPreviewFeatureDirectorModeImpl previewThumbnailsController]
// Type encoding: @16@0:8
// Implementation: 0x107e489f8

// -[SCPreviewFeatureDirectorModeImpl snapEditStateChangeShouldUpdateThumbnails:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e48a20

// -[SCPreviewFeatureDirectorModeImpl exportBakedInEffectsToURLWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e48a84

// -[SCPreviewFeatureDirectorModeImpl prepareEphemeralMediaListWithSegmentation:destinationInfo:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x107e48ad4

// -[SCPreviewFeatureDirectorModeImpl saveToCameraRollWithExportCompletion:saveToSnapAlbumCompletion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x107e48b48

// -[SCPreviewFeatureDirectorModeImpl clipsStateEditingType]
// Type encoding: Q16@0:8
// Implementation: 0x107e48bb8

// -[SCPreviewFeatureDirectorModeImpl deselectSelectedSegmentIfAny]
// Type encoding: v16@0:8
// Implementation: 0x107e48c34

// -[SCPreviewFeatureDirectorModeImpl exportToMultipleVideosForGallerySavingWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e48c3c

// -[SCPreviewFeatureDirectorModeImpl getOutputVideoTimeRangeForGallerySaving]
// Type encoding: @16@0:8
// Implementation: 0x107e48c8c

// -[SCPreviewFeatureDirectorModeImpl globalEditingState]
// Type encoding: @16@0:8
// Implementation: 0x107e48cd4

// -[SCPreviewFeatureDirectorModeImpl previewPlaybackDidPlayToVideoIndex:lastIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107e48d1c

// -[SCPreviewFeatureDirectorModeImpl saveFilterDataWithInfoStickerDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e48e4c

// -[SCPreviewFeatureDirectorModeImpl setMusicPickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e48e9c

// -[SCPreviewFeatureDirectorModeImpl timelineSnapStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x107e48eec

// -[SCPreviewFeatureDirectorModeImpl setupPreviewWithPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e48f34

// -[SCPreviewFeatureDirectorModeImpl _showDMTooltipsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107e4929c

// -[SCPreviewFeatureDirectorModeImpl _showClipLevelEditsTooltipIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107e492c0

// -[SCPreviewFeatureDirectorModeImpl _showClipsReorderingTooltipIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107e494b4

// -[SCPreviewFeatureDirectorModeImpl _dismissTooltipIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107e496b4

// -[SCPreviewFeatureDirectorModeImpl _isToolSupportedByClipLevelEditing:]
// Type encoding: B24@0:8q16
// Implementation: 0x107e49748

// -[SCPreviewFeatureDirectorModeImpl tryToShowTimelineDraftEditFromMemoriesTooltip]
// Type encoding: B16@0:8
// Implementation: 0x107e49768

// -[SCPreviewFeatureDirectorModeImpl onDismissPreview]
// Type encoding: v16@0:8
// Implementation: 0x107e497a8

// -[SCPreviewFeatureDirectorModeImpl shouldExitPreviewWithExitType:]
// Type encoding: B24@0:8q16
// Implementation: 0x107e4980c

// -[SCPreviewFeatureDirectorModeImpl isPlaybackManuallyPaused]
// Type encoding: B16@0:8
// Implementation: 0x107e4982c

// -[SCPreviewFeatureDirectorModeImpl updateSnapCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49834

// -[SCPreviewFeatureDirectorModeImpl multiSnapStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x107e49884

// -[SCPreviewFeatureDirectorModeImpl isTemplate]
// Type encoding: B16@0:8
// Implementation: 0x107e49888

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidTapAddMore:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49930

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:clipLevelEditEnabled:thumbnailsHidden:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x107e49978

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:updateEditedThumbnailForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e49a60

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:didChangeVisibility:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107e49c2c

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:isPlaybackManuallyPaused:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107e49c78

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107e49d8c

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidFinishSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49da8

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:didTrimSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e49db4

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidEnterReorderingMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49ddc

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidExitReorderingMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49e7c

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidStartUpdatingCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49f6c

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidFinishUpdatingCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49f78

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidDeleteSegmentInReorder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49f84

// -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidEndDroppingInReorder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e49fb0

// -[SCPreviewFeatureDirectorModeImpl _replaceNGSBottomActionBarWithQuickEditingBar]
// Type encoding: v16@0:8
// Implementation: 0x107e49fbc

// -[SCPreviewFeatureDirectorModeImpl _replaceQuickEditingBarWithNGSBottomActionBar]
// Type encoding: v16@0:8
// Implementation: 0x107e4a12c

// -[SCPreviewFeatureDirectorModeImpl videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107e4a37c

// -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidStartRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4a3b0

// -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidStopRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4a3b8

// -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidPauseRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4a3c0

// -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidResumeRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4a3c8

// -[SCPreviewFeatureDirectorModeImpl quickEditingBar]
// Type encoding: @16@0:8
// Implementation: 0x107e4a3d0

// -[SCPreviewFeatureDirectorModeImpl didTapPreviewQuickEditingCancelButton]
// Type encoding: v16@0:8
// Implementation: 0x107e4a5bc

// -[SCPreviewFeatureDirectorModeImpl didTapPreviewQuickEditingDeleteButton]
// Type encoding: v16@0:8
// Implementation: 0x107e4a5c4

// -[SCPreviewFeatureDirectorModeImpl didTapPreviewQuickEditingFinishButton]
// Type encoding: v16@0:8
// Implementation: 0x107e4a634

// -[SCPreviewFeatureDirectorModeImpl editingIndex]
// Type encoding: q16@0:8
// Implementation: 0x107e4a6d8

// -[SCPreviewFeatureDirectorModeImpl _updateSegmentEditedThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x107e4a784

// -[SCPreviewFeatureDirectorModeImpl _generateOverlayStateAtIndex:overlayImage:videoTrackedImages:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x107e4aa50

// -[SCPreviewFeatureDirectorModeImpl _generateOverlayState:segmentIndex:overlayImage:videoTrackedImages:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107e4ab2c

// -[SCPreviewFeatureDirectorModeImpl _applyOverlayState:toSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e4b2f4

// -[SCPreviewFeatureDirectorModeImpl cameraModeOnboardingDialogPresenter:presentDialog:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e4b7ac

// -[SCPreviewFeatureDirectorModeImpl _subscrideOnFilterCarouselOrderProvider]
// Type encoding: v16@0:8
// Implementation: 0x107e4b840

// -[SCPreviewFeatureDirectorModeImpl _handleCarouselOrderChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4ba54

// -[SCPreviewFeatureDirectorModeImpl _isDraftFromMemories]
// Type encoding: B16@0:8
// Implementation: 0x107e4bcfc

// -[SCPreviewFeatureDirectorModeImpl _showClipLevelEditsFTUEModalIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107e4bda0

// -[SCPreviewFeatureDirectorModeImpl _showDeleteDraftAlert]
// Type encoding: v16@0:8
// Implementation: 0x107e4bec4

// -[SCPreviewFeatureDirectorModeImpl _showDeleteSegmentAlert]
// Type encoding: v16@0:8
// Implementation: 0x107e4c390

// -[SCPreviewFeatureDirectorModeImpl _deleteSelectedSegment]
// Type encoding: v16@0:8
// Implementation: 0x107e4c6b8

// -[SCPreviewFeatureDirectorModeImpl _deleteDraftAndExitPreview]
// Type encoding: v16@0:8
// Implementation: 0x107e4c840

// -[SCPreviewFeatureDirectorModeImpl _configPreviewView]
// Type encoding: v16@0:8
// Implementation: 0x107e4c86c

// -[SCPreviewFeatureDirectorModeImpl _setPreviewCarouselViewEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e4cb60

// -[SCPreviewFeatureDirectorModeImpl _setAllOtherPreviewBottomComponentsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e4ccb0

// -[SCPreviewFeatureDirectorModeImpl _isClipLevelEditing]
// Type encoding: B16@0:8
// Implementation: 0x107e4cdf0

// -[SCPreviewFeatureDirectorModeImpl _updateSnapEditorStateForClipLevelEditEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e4ce28

// -[SCPreviewFeatureDirectorModeImpl _stopVideoAndShowVideoIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107e4d01c

// -[SCPreviewFeatureDirectorModeImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x107e4d070

// -[SCPreviewFeatureDirectorModeImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4d088

// -[SCPreviewFeatureDirectorModeImpl thumbnailsFeature]
// Type encoding: @16@0:8
// Implementation: 0x107e4d094

// -[SCPreviewFeatureDirectorModeImpl thumbnailsViewController]
// Type encoding: @16@0:8
// Implementation: 0x107e4d09c

// -[SCPreviewFeatureDirectorModeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e4d0a4

@end
