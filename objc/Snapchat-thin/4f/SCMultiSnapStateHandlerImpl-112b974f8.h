// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSnapStateHandlerImpl
// Superclass: NSObject
// Address: 0x112b974f8

@interface SCMultiSnapStateHandlerImpl

// Property: localStates; attributes: T@"NSArray",R,N,V_localStates
// Property: globalState; attributes: T@"SCMultiSnapIndividualEditingState",R,N,V_globalState
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMultiSnapStateHandlerImpl initWithMultiSnapIndexProvider:timeRanges:overlaySize:userSession:previewCameraSourceOverlayService:userInfoServices:overlayFormatServices:userTaggingFeature:targetTrajectoryFactory:stickerInjector:ctpItemViewService:snapEditorTweaks:isBatchCapture:]
// Type encoding: @124@0:8@16@24{CGSize=dd}32@48@56@64@72@80@88@96@104@112B120
// Implementation: 0x10807ec9c

// -[SCMultiSnapStateHandlerImpl didChangeStaticCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807f088

// -[SCMultiSnapStateHandlerImpl didChangeTrackingCaption:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10807f2c4

// -[SCMultiSnapStateHandlerImpl didChangeAutoCaptionsState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807f454

// -[SCMultiSnapStateHandlerImpl didChangeStaticStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807f4e4

// -[SCMultiSnapStateHandlerImpl didUpdateMetadataOfStickerView:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10807f714

// -[SCMultiSnapStateHandlerImpl didChangeAttachmentURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807f898

// -[SCMultiSnapStateHandlerImpl updateAvailableFiltersWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807f928

// -[SCMultiSnapStateHandlerImpl setOverlaySize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10807f9b8

// -[SCMultiSnapStateHandlerImpl didChangeFiltersState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807f9c0

// -[SCMultiSnapStateHandlerImpl didChangeVenueFilterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807fa90

// -[SCMultiSnapStateHandlerImpl didChangeCroppingState:isInitialState:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10807fb9c

// -[SCMultiSnapStateHandlerImpl didChangeGenericAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10807fcb0

// -[SCMultiSnapStateHandlerImpl drawingView:addedStroke:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10807fd40

// -[SCMultiSnapStateHandlerImpl drawingView:removedStroke:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10807fe5c

// -[SCMultiSnapStateHandlerImpl drawingStrokeHistoryForDrawItemSelected:clipsStateEditingType:forSegmentIndex:]
// Type encoding: @36@0:8B16Q20q28
// Implementation: 0x10807ff1c

// -[SCMultiSnapStateHandlerImpl didChangeAudioFilter:audioEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10807ff24

// -[SCMultiSnapStateHandlerImpl didChangeMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x108080008

// -[SCMultiSnapStateHandlerImpl didChangeBaseMediaMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10808020c

// -[SCMultiSnapStateHandlerImpl didChangeVoiceoverAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10808029c

// -[SCMultiSnapStateHandlerImpl didChangeMixedAudioTracks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080803ec

// -[SCMultiSnapStateHandlerImpl didChangeMixedBaseAudioVolume:]
// Type encoding: v24@0:8@16
// Implementation: 0x108080520

// -[SCMultiSnapStateHandlerImpl didChangeTextToSpeechAudioAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108080654

// -[SCMultiSnapStateHandlerImpl didChangeLiveCameraLensConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108080788

// -[SCMultiSnapStateHandlerImpl didChangePreviewLensConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108080818

// -[SCMultiSnapStateHandlerImpl statesContainAudioVisualEdits]
// Type encoding: B16@0:8
// Implementation: 0x1080808a8

// -[SCMultiSnapStateHandlerImpl statesContainInfoStickerOfType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1080809a8

// -[SCMultiSnapStateHandlerImpl _updateSelectedSegmentsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108080b70

// -[SCMultiSnapStateHandlerImpl _updateAllSegmentsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108080bfc

// -[SCMultiSnapStateHandlerImpl _iterateStatesWithTimeRanges:dataProcessBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108080cd8

// -[SCMultiSnapStateHandlerImpl overlayAndVideoTrackedImagesForIndex:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:]
// Type encoding: v72@0:8q16{CGSize=dd}24B40B44@48Q56@?64
// Implementation: 0x108080e68

// -[SCMultiSnapStateHandlerImpl _overlayAndVideoTrackedImagesForState:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:]
// Type encoding: v72@0:8@16{CGSize=dd}24B40B44@48Q56@?64
// Implementation: 0x108080f2c

// -[SCMultiSnapStateHandlerImpl _getDurationMsFromTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108081120

// -[SCMultiSnapStateHandlerImpl gallerySnapOverlaysWithTimeRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x108081310

// -[SCMultiSnapStateHandlerImpl gallerySnapshotForTimeRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080815b8

// -[SCMultiSnapStateHandlerImpl overlaysForGalleryWithTimeRanges:multiSnapDrawingCache:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108081800

// -[SCMultiSnapStateHandlerImpl overlaysForGalleryWithSnapshot:multiSnapDrawingCache:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108081880

// -[SCMultiSnapStateHandlerImpl globalOverlayForGalleryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108081dd0

// -[SCMultiSnapStateHandlerImpl sendingStatesForTimeRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x108081de4

// -[SCMultiSnapStateHandlerImpl savingStatesForTimeRanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x108081f7c

// -[SCMultiSnapStateHandlerImpl editingStateToSaveAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x108081f80

// -[SCMultiSnapStateHandlerImpl editingStateAtIndex:withGlobalAndLocalStateResolved:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x108081fc0

// -[SCMultiSnapStateHandlerImpl resolvedClipEditingStateAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108082000

// -[SCMultiSnapStateHandlerImpl hasEditsAtIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x108082040

// -[SCMultiSnapStateHandlerImpl hasEditAtClipIndex:editType:uniqueId:]
// Type encoding: B40@0:8Q16Q24q32
// Implementation: 0x108082080

// -[SCMultiSnapStateHandlerImpl moveEditToGlobalAtClipIndex:editType:uniqueId:]
// Type encoding: v40@0:8Q16Q24q32
// Implementation: 0x108082088

// -[SCMultiSnapStateHandlerImpl restoreEditingStatesFromGalleryWithGlobalState:localStates:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10808208c

// -[SCMultiSnapStateHandlerImpl configureEphemeralMedias:configuration:timeRanges:multiSnapDrawingCache:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x108082090

// -[SCMultiSnapStateHandlerImpl configureEphemeralMedia:withEditingState:index:timeRange:multiSnapDrawingCache:]
// Type encoding: v96@0:8@16@24Q32{?={?=qiIq}{?=qiIq}}40@88
// Implementation: 0x10808257c

// -[SCMultiSnapStateHandlerImpl _configureSnapVideoFilter:forState:multiSnapDrawingCache:timeRange:]
// Type encoding: v88@0:8@16@24@32{?={?=qiIq}{?=qiIq}}40
// Implementation: 0x108082b50

// -[SCMultiSnapStateHandlerImpl _updateIndividualEditingLoggingParamsBuilder:timeRange:from:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24@72
// Implementation: 0x108083040

// -[SCMultiSnapStateHandlerImpl hasIndividualCreativeTools]
// Type encoding: B16@0:8
// Implementation: 0x1080830d8

// -[SCMultiSnapStateHandlerImpl _hasIdenticalCreativeToolsInState:toState:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10808318c

// -[SCMultiSnapStateHandlerImpl didDeleteSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108083498

// -[SCMultiSnapStateHandlerImpl didFinishTouchWithTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x108083510

// -[SCMultiSnapStateHandlerImpl localStates]
// Type encoding: @16@0:8
// Implementation: 0x1080835d8

// -[SCMultiSnapStateHandlerImpl globalState]
// Type encoding: @16@0:8
// Implementation: 0x1080835e0

// -[SCMultiSnapStateHandlerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080835e8

// +[SCMultiSnapStateHandlerImpl overlayAndVideoTrackedImagesForOverlayState:overlaySize:outputSize:durationMs:useOutputSizeForStaticOverlay:spectaclesTranscodingConfig:userSession:previewCameraSourceOverlayService:multiSnapDrawingCache:videoPlaybackSpeed:targetTrajectoryFactory:stickerInjector:ctpItemViewService:overlayGenerationType:disposableBag:completion:]
// Type encoding: v156@0:8@16{CGSize=dd}24{CGSize=dd}40@56B64@68@76@84@92d100@108@116@124Q132@140@?148
// Implementation: 0x108080c84

// +[SCMultiSnapStateHandlerImpl containsTrackedImagesForOverlayState:]
// Type encoding: B24@0:8@16
// Implementation: 0x108080ccc

@end
