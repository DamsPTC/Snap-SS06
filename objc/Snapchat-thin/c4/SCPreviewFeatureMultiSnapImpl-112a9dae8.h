// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureMultiSnapImpl
// Superclass: NSObject
// Address: 0x112a9dae8

@interface SCPreviewFeatureMultiSnapImpl

// Property: delegate; attributes: T@"<SCPreviewFeatureMultiSnapDelegate><SCPreviewFeatureParentViewControllerAccessing>",W,N,V_delegate
// Property: multiSnapV2ViewController; attributes: T@"SCMultiSnapV2CollectionViewController",R,N,V_multiSnapV2ViewController
// Property: multiSnapStateHandler; attributes: T@"SCMultiSnapStateHandlerImpl",R,N,V_multiSnapStateHandler
// Property: multiSnapConfigurationFuture; attributes: T@"SCFuture",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureMultiSnapImpl initWithUserSession:previewConfiguration:previewScopeServices:creativeToolsABServices:drawing:autoCaptions:imageProcessCommandProvider:userPreferenceTimeProviderServices:previewTooltipsServices:featureSettingServices:voiceoverFeature:webAttachment:userTagging:targetTrajectoryFactory:genericAssetsServices:circumstanceEngine:stickerInjector:ctpItemViewService:previewCameraSourceOverlayService:userInfoServices:overlayFormatServices:captionFeature:stickerContainer:snapCrop:music:previewLegacyServices:galleryStorySaver:filterMetadataProvider:videoFilterStateController:snapVideoFilterFactory:snapVideoFilterCoordinator:overlayComposition:commonLoggingServices:previewLoggingServices:viewportController:videoPlayback:timer:snapchatterFetcher:memoriesExperimentService:snapEditorTweaks:watermarkingServices:genAIDreamsService:]
// Type encoding: @352@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344
// Implementation: 0x105d7db0c

// -[SCPreviewFeatureMultiSnapImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d7e59c

// -[SCPreviewFeatureMultiSnapImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d7e8c0

// -[SCPreviewFeatureMultiSnapImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d7e900

// -[SCPreviewFeatureMultiSnapImpl multiSnapConfigurationFuture]
// Type encoding: @16@0:8
// Implementation: 0x105d7e908

// -[SCPreviewFeatureMultiSnapImpl displayTapToTrimTooltipIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105d7e910

// -[SCPreviewFeatureMultiSnapImpl updateMultiSnapCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d7ea58

// -[SCPreviewFeatureMultiSnapImpl setupMultiSnapV2WithPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d7ebf8

// -[SCPreviewFeatureMultiSnapImpl _createMultiSnapV2CollectionViewControllerWithPlayerHandler:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d7ee28

// -[SCPreviewFeatureMultiSnapImpl _realSetupMultiSnapV2WithController:PlayerHandler:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d7ef28

// -[SCPreviewFeatureMultiSnapImpl _outputOverlaySize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105d7fdf0

// -[SCPreviewFeatureMultiSnapImpl exportBakedInEffectsToURLWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d7fe74

// -[SCPreviewFeatureMultiSnapImpl exportBakedInUCOToURLWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d7fe80

// -[SCPreviewFeatureMultiSnapImpl exportBakedInUCOToURLWithProgressHandler:completion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x105d7fe8c

// -[SCPreviewFeatureMultiSnapImpl exportBakedInEffectsToURLWithProgressHandler:completion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x105d7fe9c

// -[SCPreviewFeatureMultiSnapImpl cancelOngoingTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x105d7feac

// -[SCPreviewFeatureMultiSnapImpl _exportToURLWithJustUCOBackedIn:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x105d7ff68

// -[SCPreviewFeatureMultiSnapImpl _exportToURLWithJustUCOBackedIn:progressHandler:completion:]
// Type encoding: v36@0:8B16@?20@?28
// Implementation: 0x105d7ff74

// -[SCPreviewFeatureMultiSnapImpl _initializeEphemeralMediaListForSaving]
// Type encoding: @16@0:8
// Implementation: 0x105d802d0

// -[SCPreviewFeatureMultiSnapImpl _applyWatermarkProfileToSnapVideoFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d80538

// -[SCPreviewFeatureMultiSnapImpl saveToCameraRollWithExportCompletion:saveToSnapAlbumCompletion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x105d8085c

// -[SCPreviewFeatureMultiSnapImpl exportBakedInUCOToCameraRollWithDeleteAfterSaving:exportCompletion:saveToSnapAlbumCompletion:]
// Type encoding: v36@0:8B16@?20@?28
// Implementation: 0x105d8086c

// -[SCPreviewFeatureMultiSnapImpl _saveToCameraRollWithDeleteAfterSaving:exportCompletion:saveToSnapAlbumCompletion:]
// Type encoding: v36@0:8B16@?20@?28
// Implementation: 0x105d80870

// -[SCPreviewFeatureMultiSnapImpl updateThumbnailsForV2]
// Type encoding: v16@0:8
// Implementation: 0x105d80b84

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2EditedThumbnailsAtIndex:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x105d80dc4

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2HasAudioVisualEdits]
// Type encoding: B16@0:8
// Implementation: 0x105d817fc

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2HasTrimOrSplit]
// Type encoding: B16@0:8
// Implementation: 0x105d81838

// -[SCPreviewFeatureMultiSnapImpl _setGeofilterAttachmentUrlIfNeededToEphemeralMediaList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8190c

// -[SCPreviewFeatureMultiSnapImpl saveCurrentOverlayItemsToMultiSnapV2AtIndex:shouldUpdateThumbnails:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105d819e4

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2DidPlayToVideoIndex:lastIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105d81e4c

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2FirstFrameRendered]
// Type encoding: v16@0:8
// Implementation: 0x105d82ac4

// -[SCPreviewFeatureMultiSnapImpl finishTouchControl:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d82bc4

// -[SCPreviewFeatureMultiSnapImpl finishRewindingWithTrackableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d82bf0

// -[SCPreviewFeatureMultiSnapImpl snapEditStateChangeShouldUpdateThumbnails:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d82bf8

// -[SCPreviewFeatureMultiSnapImpl previewThumbnailsController]
// Type encoding: @16@0:8
// Implementation: 0x105d82cb4

// -[SCPreviewFeatureMultiSnapImpl preparePreviewEphemeralMediaList:destinationInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d82cdc

// -[SCPreviewFeatureMultiSnapImpl _preparePreviewEphemeralMediaList:bakedInJustUCOFilters:destinationInfo:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105d82ce8

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewControllerDidTapToSelectSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d83064

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewControllerDidUpdateSegmentStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8313c

// -[SCPreviewFeatureMultiSnapImpl updateMultiSnapToolbarButtons]
// Type encoding: v16@0:8
// Implementation: 0x105d83184

// -[SCPreviewFeatureMultiSnapImpl _toggleAttachmentToolButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d83224

// -[SCPreviewFeatureMultiSnapImpl _toggleFilterStackingToolButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d833c0

// -[SCPreviewFeatureMultiSnapImpl _toggleTimerToolButton]
// Type encoding: v16@0:8
// Implementation: 0x105d8350c

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewController:didPerformOperationOnSegment:shouldUpdateThumbnails:]
// Type encoding: v32@0:8@16C24B28
// Implementation: 0x105d8376c

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2CollectionViewControllerDidPressDelete:deleteBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d838c0

// -[SCPreviewFeatureMultiSnapImpl _toolbarButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d83bd4

// -[SCPreviewFeatureMultiSnapImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d83c24

// -[SCPreviewFeatureMultiSnapImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d83c70

// -[SCPreviewFeatureMultiSnapImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d83c88

// -[SCPreviewFeatureMultiSnapImpl multiSnapV2ViewController]
// Type encoding: @16@0:8
// Implementation: 0x105d83c94

// -[SCPreviewFeatureMultiSnapImpl multiSnapStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x105d83c9c

// -[SCPreviewFeatureMultiSnapImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d83ca4

@end
