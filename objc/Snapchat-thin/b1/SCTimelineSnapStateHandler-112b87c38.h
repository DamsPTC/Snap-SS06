// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineSnapStateHandler
// Superclass: NSObject
// Address: 0x112b87c38

@interface SCTimelineSnapStateHandler

// Property: configuration; attributes: T@"<SCTimelineConfiguration>",W,N,V_configuration
// Property: indexProvider; attributes: T@"<SCMultiSnapIndexProvider>",W,N,V_indexProvider
// Property: snapDocEditor; attributes: T@"<SCSnapDocEditor>",W,N,V_snapDocEditor
// Property: previewConfiguration; attributes: T@"SCPreviewConfiguration",W,N,V_previewConfiguration
// Property: localStates; attributes: T@"NSArray",R,N,V_localStates
// Property: globalState; attributes: T@"SCMultiSnapIndividualEditingState",R,N,V_globalState
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimelineSnapStateHandler initWithTimelineConfiguration:previewConfiguration:indexProvider:overlaySize:userSession:userInfoServices:previewCameraSourceOverlayService:overlayFormatServices:userTaggingFeature:previewABProvider:previewBlizzardLogger:targetTrajectoryFactory:snapDocEditor:snapDocManager:circumstanceEngine:stickerInjector:ctpItemViewService:snapDocConverterServices:snapDocEditorFactory:snapchatterFetcher:previewScopeServices:]
// Type encoding: @192@0:8@16@24@32{CGSize=dd}40@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184
// Implementation: 0x107e4d9bc

// -[SCTimelineSnapStateHandler setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4de80

// -[SCTimelineSnapStateHandler restoreEditingStatesFromGalleryWithGlobalState:localStates:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e4e638

// -[SCTimelineSnapStateHandler maxUniqueStickerId]
// Type encoding: q16@0:8
// Implementation: 0x107e4e6b4

// -[SCTimelineSnapStateHandler maxDrawingStrokeUniqueId]
// Type encoding: q16@0:8
// Implementation: 0x107e4e900

// -[SCTimelineSnapStateHandler editingStatesForTimeRanges:withGlobalAndLocalStateResolved:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107e4eb4c

// -[SCTimelineSnapStateHandler editingStateAtIndex:withGlobalAndLocalStateResolved:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x107e4ecf0

// -[SCTimelineSnapStateHandler editingStateToSaveAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x107e4ee94

// -[SCTimelineSnapStateHandler hasEditsAtIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107e4ee9c

// -[SCTimelineSnapStateHandler resolvedClipEditingStateAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107e4ef18

// -[SCTimelineSnapStateHandler hasEditAtClipIndex:editType:uniqueId:]
// Type encoding: B40@0:8Q16Q24q32
// Implementation: 0x107e4f4f4

// -[SCTimelineSnapStateHandler moveEditToGlobalAtClipIndex:editType:uniqueId:]
// Type encoding: v40@0:8Q16Q24q32
// Implementation: 0x107e4f514

// -[SCTimelineSnapStateHandler _findIndexOfEditAtClipIndex:editType:uniqueId:]
// Type encoding: q40@0:8Q16Q24q32
// Implementation: 0x107e4f6b0

// -[SCTimelineSnapStateHandler drawingStrokeHistoryForDrawItemSelected:clipsStateEditingType:forSegmentIndex:]
// Type encoding: @36@0:8B16Q20q28
// Implementation: 0x107e4f8e0

// -[SCTimelineSnapStateHandler didChangeStaticCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e4faa4

// -[SCTimelineSnapStateHandler didChangeTrackingCaption:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107e4fda8

// -[SCTimelineSnapStateHandler didChangeAutoCaptionsState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e50034

// -[SCTimelineSnapStateHandler didChangeStaticStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e500f0

// -[SCTimelineSnapStateHandler didUpdateMetadataOfStickerView:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107e50510

// -[SCTimelineSnapStateHandler drawingView:addedStroke:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e50a98

// -[SCTimelineSnapStateHandler drawingView:removedStroke:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e50bd8

// -[SCTimelineSnapStateHandler updateAvailableFiltersWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e50ce8

// -[SCTimelineSnapStateHandler setOverlaySize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107e50d88

// -[SCTimelineSnapStateHandler didChangeFiltersState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e50d90

// -[SCTimelineSnapStateHandler didChangeVenueFilterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e51374

// -[SCTimelineSnapStateHandler didChangeCroppingState:isInitialState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107e514ac

// -[SCTimelineSnapStateHandler didChangeAudioFilter:audioEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107e515e4

// -[SCTimelineSnapStateHandler didChangeAttachmentURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e516ec

// -[SCTimelineSnapStateHandler didChangeGenericAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e517a8

// -[SCTimelineSnapStateHandler didChangeMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e51864

// -[SCTimelineSnapStateHandler didChangeBaseMediaMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e51ac8

// -[SCTimelineSnapStateHandler didChangeVoiceoverAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e51b58

// -[SCTimelineSnapStateHandler didChangeMixedAudioTracks:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e51ccc

// -[SCTimelineSnapStateHandler didChangeMixedBaseAudioVolume:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e51e24

// -[SCTimelineSnapStateHandler didChangeTextToSpeechAudioAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e51f7c

// -[SCTimelineSnapStateHandler didChangeLiveCameraLensConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e520d4

// -[SCTimelineSnapStateHandler didChangePreviewLensConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e52164

// -[SCTimelineSnapStateHandler statesContainAudioVisualEdits]
// Type encoding: B16@0:8
// Implementation: 0x107e521f4

// -[SCTimelineSnapStateHandler statesContainInfoStickerOfType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107e522f4

// -[SCTimelineSnapStateHandler _globalOnlyEditingOfType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107e524bc

// -[SCTimelineSnapStateHandler _isStickerGlobalOnlyWithType:infoStickerType:]
// Type encoding: B32@0:8Q16Q24
// Implementation: 0x107e524d4

// -[SCTimelineSnapStateHandler _localOverrideEditingOfType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107e524f4

// -[SCTimelineSnapStateHandler _updateEditingStateWithBlock:globalOnlyEditing:localOverrideEditing:]
// Type encoding: v32@0:8@?16B24B28
// Implementation: 0x107e52504

// -[SCTimelineSnapStateHandler _updateSelectedLocalStateWithBlock:atIndex:]
// Type encoding: v32@0:8@?16Q24
// Implementation: 0x107e525c0

// -[SCTimelineSnapStateHandler _updateGlobalStateWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e52638

// -[SCTimelineSnapStateHandler _updateAllSegmentsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e52650

// -[SCTimelineSnapStateHandler _iterateStatesWithTimeRanges:dataProcessBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107e5272c

// -[SCTimelineSnapStateHandler overlayAndVideoTrackedImagesForIndex:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:]
// Type encoding: v72@0:8q16{CGSize=dd}24B40B44@48Q56@?64
// Implementation: 0x107e528bc

// -[SCTimelineSnapStateHandler globalOverlaysForThumbnailWithOutputSize:useOutputSizeForStaticOverlay:multiSnapDrawingCache:completion:]
// Type encoding: v52@0:8{CGSize=dd}16B32@36@?44
// Implementation: 0x107e52994

// -[SCTimelineSnapStateHandler gallerySnapOverlaysWithTimeRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e52a8c

// -[SCTimelineSnapStateHandler globalOverlayForGalleryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e52d34

// -[SCTimelineSnapStateHandler overlaysForGalleryWithTimeRanges:multiSnapDrawingCache:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e53128

// -[SCTimelineSnapStateHandler sendingStatesForTimeRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e53850

// -[SCTimelineSnapStateHandler savingStatesForTimeRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e53858

// -[SCTimelineSnapStateHandler configureEphemeralMedias:configuration:timeRanges:multiSnapDrawingCache:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107e53860

// -[SCTimelineSnapStateHandler configureEphemeralMedia:withEditingState:index:timeRange:multiSnapDrawingCache:]
// Type encoding: v96@0:8@16@24Q32{?={?=qiIq}{?=qiIq}}40@88
// Implementation: 0x107e53bbc

// -[SCTimelineSnapStateHandler _configureSnapVideoFilter:forState:index:multiSnapDrawingCache:timeRange:]
// Type encoding: v96@0:8@16@24Q32@40{?={?=qiIq}{?=qiIq}}48
// Implementation: 0x107e541c4

// -[SCTimelineSnapStateHandler _configureSnapVideoFilterForClipEditing:multiSnapDrawingCache:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e54890

// -[SCTimelineSnapStateHandler _generateOverlaysWithEditingState:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:]
// Type encoding: v72@0:8@16{CGSize=dd}24B40B44@48Q56@?64
// Implementation: 0x107e54e20

// -[SCTimelineSnapStateHandler _updateIndividualEditingLoggingParamsBuilder:from:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e550b8

// -[SCTimelineSnapStateHandler hasIndividualCreativeTools]
// Type encoding: B16@0:8
// Implementation: 0x107e55424

// -[SCTimelineSnapStateHandler _hasIdenticalCreativeToolsInState:toState:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e554e4

// -[SCTimelineSnapStateHandler _localStateWithSegment:timelineConfiguration:inoutNextStickerUniqueId:atIndex:]
// Type encoding: @48@0:8@16@24^q32Q40
// Implementation: 0x107e5595c

// -[SCTimelineSnapStateHandler _localStateWithTrimmedTimeRange:contentTimeRange:memoriesImportSnapDoc:inoutNextStickerUniqueId:atIndex:]
// Type encoding: @136@0:8{?={?=qiIq}{?=qiIq}}16{?={?=qiIq}{?=qiIq}}64@112^q120Q128
// Implementation: 0x107e55a98

// -[SCTimelineSnapStateHandler _moveTrackingEditsFromLocalState:toGlobalState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e56644

// -[SCTimelineSnapStateHandler _trimImportTrajectory:importContentTimeRange:]
// Type encoding: @72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107e567c0

// -[SCTimelineSnapStateHandler _hidingTransformAtTime:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x107e56be4

// -[SCTimelineSnapStateHandler timelineConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e56c68

// -[SCTimelineSnapStateHandler timelineConfiguration:didAddSegments:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e56ccc

// -[SCTimelineSnapStateHandler timelineConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107e56d90

// -[SCTimelineSnapStateHandler timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x107e56f5c

// -[SCTimelineSnapStateHandler _logDirectSegmentReorderWithSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e571a0

// -[SCTimelineSnapStateHandler timelineConfigurationDidEnterReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e57248

// -[SCTimelineSnapStateHandler timelineConfigurationDidExitReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e57278

// -[SCTimelineSnapStateHandler timelineConfigurationDidRestoreToInitialState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e57288

// -[SCTimelineSnapStateHandler timelineConfiguration:didUpdateSegmentTrim:atIndex:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24q72
// Implementation: 0x107e573e0

// -[SCTimelineSnapStateHandler timelineConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e573e4

// -[SCTimelineSnapStateHandler timelineConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e573e8

// -[SCTimelineSnapStateHandler timelineConfigurationDidUpdateThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e573ec

// -[SCTimelineSnapStateHandler timelineConfiguration:didUpdateThumbnailsForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e573f0

// -[SCTimelineSnapStateHandler didDeleteSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e573f4

// -[SCTimelineSnapStateHandler didFinishTouchWithTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e5746c

// -[SCTimelineSnapStateHandler _handleConfiguration:didAddSegment:atIndex:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x107e57534

// -[SCTimelineSnapStateHandler _translateEditingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e57628

// -[SCTimelineSnapStateHandler _trimTrajectory:withTrimmedTimeRanges:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e57d00

// -[SCTimelineSnapStateHandler _localEditingStateForSegmentAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107e5814c

// -[SCTimelineSnapStateHandler localStates]
// Type encoding: @16@0:8
// Implementation: 0x107e581ac

// -[SCTimelineSnapStateHandler globalState]
// Type encoding: @16@0:8
// Implementation: 0x107e581b4

// -[SCTimelineSnapStateHandler previewConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107e581bc

// -[SCTimelineSnapStateHandler setPreviewConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e581d4

// -[SCTimelineSnapStateHandler configuration]
// Type encoding: @16@0:8
// Implementation: 0x107e581e0

// -[SCTimelineSnapStateHandler indexProvider]
// Type encoding: @16@0:8
// Implementation: 0x107e581f8

// -[SCTimelineSnapStateHandler setIndexProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e58210

// -[SCTimelineSnapStateHandler snapDocEditor]
// Type encoding: @16@0:8
// Implementation: 0x107e5821c

// -[SCTimelineSnapStateHandler setSnapDocEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e58234

// -[SCTimelineSnapStateHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e58240

// +[SCTimelineSnapStateHandler overlayAndVideoTrackedImagesForOverlayState:overlaySize:outputSize:durationMs:useOutputSizeForStaticOverlay:spectaclesTranscodingConfig:userSession:previewCameraSourceOverlayService:multiSnapDrawingCache:videoPlaybackSpeed:targetTrajectoryFactory:stickerInjector:ctpItemViewService:overlayGenerationType:disposableBag:completion:]
// Type encoding: v156@0:8@16{CGSize=dd}24{CGSize=dd}40@56B64@68@76@84@92d100@108@116@124Q132@140@?148
// Implementation: 0x107e526d8

// +[SCTimelineSnapStateHandler containsTrackedImagesForOverlayState:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e52720

@end
