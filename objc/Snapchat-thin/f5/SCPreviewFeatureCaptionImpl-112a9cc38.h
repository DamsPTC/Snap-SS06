// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureCaptionImpl
// Superclass: NSObject
// Address: 0x112a9cc38

@interface SCPreviewFeatureCaptionImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewCaptionFeatureDelegate>",W,N,V_delegate
// Property: multiSnapDelegate; attributes: T@"<SCCaptionMultiSnapDelegate>",W,N,V_multiSnapDelegate
// Property: staticCaptionsContainerView; attributes: T@"UIView",R,N
// Property: trackingCaptionsContainerView; attributes: T@"UIView",R,N
// Property: captionMenuOpened; attributes: TB,R,N,V_captionMenuOpened
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N
// Property: parentViewControllerDelegate; attributes: T@"<SCPreviewFeatureParentViewControllerAccessing>",W,N,V_parentViewControllerDelegate

// -[SCPreviewFeatureCaptionImpl initWithUserSession:previewConfiguration:captionDataProvider:captionLogger:latencyLogger:tooltipsProvider:userInteractionStateLogger:userTaggingFeature:userTaggingFriendsProvider:remixSettingsService:filterUIContainer:circumstanceEngine:valdiRuntimeProvider:creativeExpressionsManager:videoTracking:previewABServices:creativeToolsABServices:textToSpeechFeature:snapchatterFetcher:magicCaptionProvider:videoPlayback:videoObjectTracker:asyncQueueProvider:networkingClient:featureSettingsServices:previewScopeServices:imageLensCaptionFeature:customojiServices:stickerContainer:captionStickerSuggestionsServices:aiFontsEnabled:]
// Type encoding: @260@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248B256
// Implementation: 0x105d49c50

// -[SCPreviewFeatureCaptionImpl _keyboardDidShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4a484

// -[SCPreviewFeatureCaptionImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105d4a48c

// -[SCPreviewFeatureCaptionImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4a514

// -[SCPreviewFeatureCaptionImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105d4a7dc

// -[SCPreviewFeatureCaptionImpl _setupCaptionEditingManager]
// Type encoding: v16@0:8
// Implementation: 0x105d4ab9c

// -[SCPreviewFeatureCaptionImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4ad98

// -[SCPreviewFeatureCaptionImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d4ae38

// -[SCPreviewFeatureCaptionImpl createCaptionToolBarButtonItemWithTarget:selector:]
// Type encoding: @32@0:8@16:24
// Implementation: 0x105d4ae60

// -[SCPreviewFeatureCaptionImpl _snapEditorCaptionsState]
// Type encoding: @16@0:8
// Implementation: 0x105d4aef8

// -[SCPreviewFeatureCaptionImpl setCaptionsWithState:shouldLoadStyles:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d4b048

// -[SCPreviewFeatureCaptionImpl _setCaptionsWithState:shouldLoadStyles:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x105d4b050

// -[SCPreviewFeatureCaptionImpl _loadCaptionsFromState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4b884

// -[SCPreviewFeatureCaptionImpl viewDidLayoutSubviewsWithSuperviewBounds:superviewContentBounds:superviewEdgeInsets:]
// Type encoding: v112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48{UIEdgeInsets=dddd}80
// Implementation: 0x105d4bca4

// -[SCPreviewFeatureCaptionImpl _tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4be4c

// -[SCPreviewFeatureCaptionImpl currentEditingCaption]
// Type encoding: @16@0:8
// Implementation: 0x105d4be54

// -[SCPreviewFeatureCaptionImpl allCaptions]
// Type encoding: @16@0:8
// Implementation: 0x105d4be5c

// -[SCPreviewFeatureCaptionImpl allStaticCaptions]
// Type encoding: @16@0:8
// Implementation: 0x105d4be64

// -[SCPreviewFeatureCaptionImpl allTrackingCaptions]
// Type encoding: @16@0:8
// Implementation: 0x105d4be70

// -[SCPreviewFeatureCaptionImpl captionWithGesture:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d4bf34

// -[SCPreviewFeatureCaptionImpl captionOfTrackableView:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d4c08c

// -[SCPreviewFeatureCaptionImpl deleteCaption:deleteType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d4c1d8

// -[SCPreviewFeatureCaptionImpl captionButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x105d4c294

// -[SCPreviewFeatureCaptionImpl allCaptionTexts]
// Type encoding: @16@0:8
// Implementation: 0x105d4c29c

// -[SCPreviewFeatureCaptionImpl videoTrackedImagesWithCroppingAspectRatio:]
// Type encoding: @24@0:8d16
// Implementation: 0x105d4c2fc

// -[SCPreviewFeatureCaptionImpl captionsState]
// Type encoding: @16@0:8
// Implementation: 0x105d4c76c

// -[SCPreviewFeatureCaptionImpl freezeCaptionsState]
// Type encoding: v16@0:8
// Implementation: 0x105d4c904

// -[SCPreviewFeatureCaptionImpl frozenCaptionsState]
// Type encoding: @16@0:8
// Implementation: 0x105d4c970

// -[SCPreviewFeatureCaptionImpl captionCount]
// Type encoding: q16@0:8
// Implementation: 0x105d4c998

// -[SCPreviewFeatureCaptionImpl magicCaptionCount]
// Type encoding: q16@0:8
// Implementation: 0x105d4c9a0

// -[SCPreviewFeatureCaptionImpl staticCaptionCount]
// Type encoding: q16@0:8
// Implementation: 0x105d4ca40

// -[SCPreviewFeatureCaptionImpl trackingCaptionCount]
// Type encoding: q16@0:8
// Implementation: 0x105d4ca8c

// -[SCPreviewFeatureCaptionImpl timedCaptionCount]
// Type encoding: q16@0:8
// Implementation: 0x105d4ca94

// -[SCPreviewFeatureCaptionImpl pinnedCaptionCount]
// Type encoding: q16@0:8
// Implementation: 0x105d4cb90

// -[SCPreviewFeatureCaptionImpl captionScrollCount]
// Type encoding: q16@0:8
// Implementation: 0x105d4cc98

// -[SCPreviewFeatureCaptionImpl staticScreenshot]
// Type encoding: @16@0:8
// Implementation: 0x105d4cca0

// -[SCPreviewFeatureCaptionImpl setTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x105d4cf68

// -[SCPreviewFeatureCaptionImpl staticCaptionPositions]
// Type encoding: @16@0:8
// Implementation: 0x105d4cf9c

// -[SCPreviewFeatureCaptionImpl captionScales]
// Type encoding: @16@0:8
// Implementation: 0x105d4d1b4

// -[SCPreviewFeatureCaptionImpl captionStyleList]
// Type encoding: @16@0:8
// Implementation: 0x105d4d3c0

// -[SCPreviewFeatureCaptionImpl captionStyleListFromTap]
// Type encoding: @16@0:8
// Implementation: 0x105d4d56c

// -[SCPreviewFeatureCaptionImpl captionStyleListFromScroll]
// Type encoding: @16@0:8
// Implementation: 0x105d4d574

// -[SCPreviewFeatureCaptionImpl captionStyleExploredListFromTap]
// Type encoding: @16@0:8
// Implementation: 0x105d4d57c

// -[SCPreviewFeatureCaptionImpl captionStyleExploredListFromScroll]
// Type encoding: @16@0:8
// Implementation: 0x105d4d584

// -[SCPreviewFeatureCaptionImpl captionStyleLoadingTime]
// Type encoding: q16@0:8
// Implementation: 0x105d4d58c

// -[SCPreviewFeatureCaptionImpl captionToolIsOpened]
// Type encoding: B16@0:8
// Implementation: 0x105d4d5bc

// -[SCPreviewFeatureCaptionImpl hasBackgroundCaptions]
// Type encoding: B16@0:8
// Implementation: 0x105d4d5c4

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerCanStartEditingCaption:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d4d748

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerWillStartEditingCaption:fromOpenAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4d7d8

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerWillConstructCaptionCarousel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4d908

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerDidPrepareCaptionEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4d91c

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didDeleteCaption:deleteType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105d4db88

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:getCaptionWithGesture:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d4dcb0

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didAddNewCaption:fromGesture:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105d4dcb8

// -[SCPreviewFeatureCaptionImpl updateContainerViewForCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4dd5c

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didChangeStaticCaptionText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4df24

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didChangeStaticCaption:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4dfcc

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:willStopEditingCaption:withState:withNewCaptionAdded:withCaptionDeleted:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x105d4e014

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:stoppedEditingCaption:withState:withNewCaptionAdded:withCaptionDeleted:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x105d4e090

// -[SCPreviewFeatureCaptionImpl _tagPresent:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d4ea10

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerStartedEditingCaption:captionStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4eb74

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didUpdateColor:isHidden:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105d4ec28

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerResetEditingCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4ecc4

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didApplyStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4ed3c

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerSelectedStyleTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4ed94

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:shouldDefaultToAlternateStyleForCaptionStyle:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105d4ed9c

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didReceivePastedImageData:isAnimated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105d4ee78

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerDidMoveCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f05c

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:canStopEditingCaption:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105d4f098

// -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didTagUser:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4f0a0

// -[SCPreviewFeatureCaptionImpl captionToolBarButtonItem:didChangeColor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4f0a4

// -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidUpdateAlignment:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f0fc

// -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapDuration:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f164

// -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemBackgroundButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f258

// -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapTextToSpeech:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f260

// -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapMagicCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f4b0

// -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapCustomoji:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f52c

// -[SCPreviewFeatureCaptionImpl rectForCreativeToolsMenuSourceView:inView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8@16@24
// Implementation: 0x105d4f534

// -[SCPreviewFeatureCaptionImpl rotationForCreativeToolsMenuSourceView:]
// Type encoding: d24@0:8@16
// Implementation: 0x105d4f668

// -[SCPreviewFeatureCaptionImpl creativeToolsMenuMetricsInfo]
// Type encoding: @16@0:8
// Implementation: 0x105d4f6c4

// -[SCPreviewFeatureCaptionImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d4f764

// -[SCPreviewFeatureCaptionImpl didProcessTapInPreviewContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d4f840

// -[SCPreviewFeatureCaptionImpl didBeginLongPressInPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d4f8f4

// -[SCPreviewFeatureCaptionImpl shouldBlockGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d4fb00

// -[SCPreviewFeatureCaptionImpl staticCaptionsContainerView]
// Type encoding: @16@0:8
// Implementation: 0x105d4fbe0

// -[SCPreviewFeatureCaptionImpl trackingCaptionsContainerView]
// Type encoding: @16@0:8
// Implementation: 0x105d4fc08

// -[SCPreviewFeatureCaptionImpl featureType]
// Type encoding: Q16@0:8
// Implementation: 0x105d4fc30

// -[SCPreviewFeatureCaptionImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d4fc38

// -[SCPreviewFeatureCaptionImpl snapEditor:didTapBackFromTool:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x105d50054

// -[SCPreviewFeatureCaptionImpl snapEditor:willInitiateExportWithType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d5015c

// -[SCPreviewFeatureCaptionImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d501c0

// -[SCPreviewFeatureCaptionImpl hasOnlyPrePreviewEdits]
// Type encoding: B16@0:8
// Implementation: 0x105d501c8

// -[SCPreviewFeatureCaptionImpl editCount]
// Type encoding: q16@0:8
// Implementation: 0x105d5021c

// -[SCPreviewFeatureCaptionImpl _canStopEditingCaption:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d50260

// -[SCPreviewFeatureCaptionImpl _assertCaptionOfTrackableView:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d502dc

// -[SCPreviewFeatureCaptionImpl _captionsIncludingStatic:tracking:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x105d502e0

// -[SCPreviewFeatureCaptionImpl _multiSnapV2Applied]
// Type encoding: B16@0:8
// Implementation: 0x105d5050c

// -[SCPreviewFeatureCaptionImpl _updateCaptionStylesFromMemoriesWithArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5053c

// -[SCPreviewFeatureCaptionImpl _resetNonEditingCaption]
// Type encoding: v16@0:8
// Implementation: 0x105d50580

// -[SCPreviewFeatureCaptionImpl _updateAlignmentButtonVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105d5069c

// -[SCPreviewFeatureCaptionImpl _updateDurationButtonVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105d50700

// -[SCPreviewFeatureCaptionImpl _updateDurationButtonAlphaWithCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d507bc

// -[SCPreviewFeatureCaptionImpl _updateTextToSpeechButtonAppearance]
// Type encoding: v16@0:8
// Implementation: 0x105d507fc

// -[SCPreviewFeatureCaptionImpl _updateTextToSpeechButtonAlphaWithCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d508f0

// -[SCPreviewFeatureCaptionImpl _updateBackgroundButtonVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105d50930

// -[SCPreviewFeatureCaptionImpl _updateBackgroundButtonAlphaWithCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d50a44

// -[SCPreviewFeatureCaptionImpl _updateMagicCaptionButtonVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d50a84

// -[SCPreviewFeatureCaptionImpl _creativeToolsMenuActionsForCaption:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d50bd4

// -[SCPreviewFeatureCaptionImpl _logUserInteraction]
// Type encoding: v16@0:8
// Implementation: 0x105d50d84

// -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d50d8c

// -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:openAction:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105d50d98

// -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:mentionUserIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105d50da0

// -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:openAction:mentionUserIds:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x105d50dac

// -[SCPreviewFeatureCaptionImpl _removeCaptionFromPlaybackLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d50fb4

// -[SCPreviewFeatureCaptionImpl _updateCaptionFromPlaybackLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5106c

// -[SCPreviewFeatureCaptionImpl _addPlaybackLayerWithCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5122c

// -[SCPreviewFeatureCaptionImpl featureVideoTracking:willTrackView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d51370

// -[SCPreviewFeatureCaptionImpl featureVideoTracking:didTrackView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d51374

// -[SCPreviewFeatureCaptionImpl featureVideoTracking:didDisableTrackingForView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d513b8

// -[SCPreviewFeatureCaptionImpl didUpdateLoadingState:isLoading:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d513fc

// -[SCPreviewFeatureCaptionImpl didGenerateCaptionWithProvider:caption:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d51408

// -[SCPreviewFeatureCaptionImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d51470

// -[SCPreviewFeatureCaptionImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d51488

// -[SCPreviewFeatureCaptionImpl multiSnapDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d51494

// -[SCPreviewFeatureCaptionImpl setMultiSnapDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d514ac

// -[SCPreviewFeatureCaptionImpl captionMenuOpened]
// Type encoding: B16@0:8
// Implementation: 0x105d514b8

// -[SCPreviewFeatureCaptionImpl parentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d514c0

// -[SCPreviewFeatureCaptionImpl setParentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d514d8

// -[SCPreviewFeatureCaptionImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105d514e4

// -[SCPreviewFeatureCaptionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d514ec

@end
