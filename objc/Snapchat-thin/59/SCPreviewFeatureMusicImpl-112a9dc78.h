// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureMusicImpl
// Superclass: NSObject
// Address: 0x112a9dc78

@interface SCPreviewFeatureMusicImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: selection; attributes: T@"SCMusicSelection",R,N
// Property: selectionInfo; attributes: T@"SCMusicTrackInfo",R,N
// Property: toolbarItemConfiguration; attributes: T@"SCPreviewToolBarItemConfiguration",R,N
// Property: delegate; attributes: T@"<SCPreviewFeatureMusicDelegate><SCPreviewPlaybackControlDelegate>",W,N,V_delegate
// Property: timelineMusicSelectionObservable; attributes: T@"SCObservable",R,N
// Property: pickerSelectionObservable; attributes: T@"SCObservable",R,N
// Property: musicSelectionObservable; attributes: T@"SCObservable",R,N
// Property: muteSnapAudioObservable; attributes: T@"SCObservable",R,N
// Property: memoriesAssetObservable; attributes: T@"SCObservable",R,N
// Property: hasUnavailableMusic; attributes: T@"SCFuture",R,N
// Property: musicEditorPresentationObservable; attributes: T@"SCObservable",R,N
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N
// Property: parentViewControllerDelegate; attributes: T@"<SCPreviewFeatureParentViewControllerAccessing>",W,N,V_parentViewControllerDelegate

// -[SCPreviewFeatureMusicImpl initWithObjcMusicServices:musicServices:previewScopeServices:previewConfiguration:videoPlayback:audioPlayback:timerFeature:stickerContainer:timelineModeConfig:snapProProfilesProvider:musicPickerScopeExposer:musicEditorScopeExposer:musicPickerListScopeExposer:applicationLifecycleEvents:circumstanceEngine:musicSyncServices:smartTemplate:itemViewService:ctRecommendation:templateServices:addSoundPillScopeExposer:carouselController:previewABServices:videoTracking:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x105d865e0

// -[SCPreviewFeatureMusicImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105d86ddc

// -[SCPreviewFeatureMusicImpl shouldBlockGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d86e24

// -[SCPreviewFeatureMusicImpl didProcessFinishLongPressInPreviewContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d86e88

// -[SCPreviewFeatureMusicImpl snapEditor:didChangeState:oldState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d86ed8

// -[SCPreviewFeatureMusicImpl snapEditorWillDiscard:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d87008

// -[SCPreviewFeatureMusicImpl snapEditorWillStartSending:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d87010

// -[SCPreviewFeatureMusicImpl snapEditor:willInitiateExportWithType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d87018

// -[SCPreviewFeatureMusicImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d87028

// -[SCPreviewFeatureMusicImpl snapEditor:didChangeToolBarButtonItemType:selected:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x105d872d0

// -[SCPreviewFeatureMusicImpl snapEditor:didTriggerLifecycle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d87394

// -[SCPreviewFeatureMusicImpl hasOnlyPrePreviewEdits]
// Type encoding: B16@0:8
// Implementation: 0x105d87558

// -[SCPreviewFeatureMusicImpl editCount]
// Type encoding: q16@0:8
// Implementation: 0x105d87570

// -[SCPreviewFeatureMusicImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d875d0

// -[SCPreviewFeatureMusicImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105d87610

// -[SCPreviewFeatureMusicImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d8839c

// -[SCPreviewFeatureMusicImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d883a4

// -[SCPreviewFeatureMusicImpl hasUnavailableMusic]
// Type encoding: @16@0:8
// Implementation: 0x105d883cc

// -[SCPreviewFeatureMusicImpl shouldBlockBrandAccountMusicSnapWithBusinessProfileIds:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d8841c

// -[SCPreviewFeatureMusicImpl selection]
// Type encoding: @16@0:8
// Implementation: 0x105d88438

// -[SCPreviewFeatureMusicImpl selectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x105d88440

// -[SCPreviewFeatureMusicImpl presentPickerWithSourcePageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105d88448

// -[SCPreviewFeatureMusicImpl clearSelectionUserInitiated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d88904

// -[SCPreviewFeatureMusicImpl dismissPickerAndEditor]
// Type encoding: v16@0:8
// Implementation: 0x105d88a04

// -[SCPreviewFeatureMusicImpl updateSelection:multiSnapTimeRange:multiSnapIndex:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24q72
// Implementation: 0x105d88a28

// -[SCPreviewFeatureMusicImpl updateSelectionAndStickerViewWithPickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d88ba4

// -[SCPreviewFeatureMusicImpl toolbarItemConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d88c60

// -[SCPreviewFeatureMusicImpl pauseAudioPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105d88de0

// -[SCPreviewFeatureMusicImpl resumeAudioPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105d88de8

// -[SCPreviewFeatureMusicImpl timelineMusicSelectionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d88df0

// -[SCPreviewFeatureMusicImpl muteSnapAudioObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d88e18

// -[SCPreviewFeatureMusicImpl musicSelectionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d88e40

// -[SCPreviewFeatureMusicImpl pickerSelectionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d88f10

// -[SCPreviewFeatureMusicImpl memoriesAssetObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d88f38

// -[SCPreviewFeatureMusicImpl musicEditorPresentationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d88f60

// -[SCPreviewFeatureMusicImpl isMusicSupported]
// Type encoding: B16@0:8
// Implementation: 0x105d88f88

// -[SCPreviewFeatureMusicImpl setAddSoundPillHiddenForPreviewOverlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d89024

// -[SCPreviewFeatureMusicImpl musicPickerDidUpdateSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8907c

// -[SCPreviewFeatureMusicImpl musicPickerDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105d89168

// -[SCPreviewFeatureMusicImpl musicPickerDidPreviewTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d891c4

// -[SCPreviewFeatureMusicImpl musicPickerDidDownloadTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d891c8

// -[SCPreviewFeatureMusicImpl musicPickerDidDismissAndPresentEditor]
// Type encoding: v16@0:8
// Implementation: 0x105d89398

// -[SCPreviewFeatureMusicImpl musicPickerRequestsPausePlayback:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d893dc

// -[SCPreviewFeatureMusicImpl musicPickerListDidSelectTrackId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d8944c

// -[SCPreviewFeatureMusicImpl musicPickerListDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105d89450

// -[SCPreviewFeatureMusicImpl musicEditorDidConfirmSelection:selectedMusicStickerData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d894b0

// -[SCPreviewFeatureMusicImpl musicEditorWillUpdateStartOffset]
// Type encoding: v16@0:8
// Implementation: 0x105d89554

// -[SCPreviewFeatureMusicImpl musicEditorDidChangeMuteSnapAudioToggle:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d89594

// -[SCPreviewFeatureMusicImpl musicEditorDidUpdateStartOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d895d8

// -[SCPreviewFeatureMusicImpl musicEditorDidTapChangeMusicButton]
// Type encoding: v16@0:8
// Implementation: 0x105d89788

// -[SCPreviewFeatureMusicImpl musicEditorCurrentTimeObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d897a0

// -[SCPreviewFeatureMusicImpl addSoundPillScopeDidSelectRemoveTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d897c8

// -[SCPreviewFeatureMusicImpl addSoundPillScope:didSelectAppliedTrack:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d89820

// -[SCPreviewFeatureMusicImpl addSoundPillScopeDidSelectAddSound:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d89f74

// -[SCPreviewFeatureMusicImpl addSoundPillScope:didSelectRecommendedTrack:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d89fb0

// -[SCPreviewFeatureMusicImpl videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105d8a7fc

// -[SCPreviewFeatureMusicImpl secretFeatureChecker:didCheckSecretFeatureMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105d8a890

// -[SCPreviewFeatureMusicImpl _clearMusicSelection]
// Type encoding: v16@0:8
// Implementation: 0x105d8a928

// -[SCPreviewFeatureMusicImpl _confirmMusicSelection:selectedMusicStickerData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d8a950

// -[SCPreviewFeatureMusicImpl _startListeningToMuteSwitchUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105d8aab0

// -[SCPreviewFeatureMusicImpl _stopListeningToMuteSwitchUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105d8aaf8

// -[SCPreviewFeatureMusicImpl _setMuteSwitchIsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d8ab40

// -[SCPreviewFeatureMusicImpl _handleAppBackground]
// Type encoding: v16@0:8
// Implementation: 0x105d8ab48

// -[SCPreviewFeatureMusicImpl _checkUnavailableMusicIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d8ab4c

// -[SCPreviewFeatureMusicImpl _userConfirmedSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8ad30

// -[SCPreviewFeatureMusicImpl _updatePickerSelectionForPreviewFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8addc

// -[SCPreviewFeatureMusicImpl _updatePickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8ae90

// -[SCPreviewFeatureMusicImpl _updateSelection:shouldUpdateMotionFilters:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d8afc4

// -[SCPreviewFeatureMusicImpl _setSelection:shouldUpdateMotionFilters:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d8b080

// -[SCPreviewFeatureMusicImpl _updateSnapDocWithPickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8b264

// -[SCPreviewFeatureMusicImpl _canDeleteCurrentSelectionWithUpdatedSelection:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d8b8e4

// -[SCPreviewFeatureMusicImpl _canReplaceCurrentSelectionWithUpdatedSelection:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d8b94c

// -[SCPreviewFeatureMusicImpl _restartPlaybackAndUpdateSelection:shouldUpdateMotionFilters:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d8b9b4

// -[SCPreviewFeatureMusicImpl _updateAudioPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105d8ba8c

// -[SCPreviewFeatureMusicImpl _handleMusicSelection:shouldSkipScrubber:shouldUpdateMotionFilters:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x105d8bd18

// -[SCPreviewFeatureMusicImpl _presentMusicEditorForSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8bda4

// -[SCPreviewFeatureMusicImpl _dismissPickerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d8c138

// -[SCPreviewFeatureMusicImpl _dismissEditorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d8c1c8

// -[SCPreviewFeatureMusicImpl _didAttachEditorViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8c230

// -[SCPreviewFeatureMusicImpl _didDetachEditorViewController]
// Type encoding: v16@0:8
// Implementation: 0x105d8c340

// -[SCPreviewFeatureMusicImpl _updateCurrentTimeObserving]
// Type encoding: v16@0:8
// Implementation: 0x105d8c458

// -[SCPreviewFeatureMusicImpl _updatePreviewUIHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d8c5fc

// -[SCPreviewFeatureMusicImpl _didReceiveMediaServicesWereResetNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8c664

// -[SCPreviewFeatureMusicImpl _showMusicSyncTooltipIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d8c668

// -[SCPreviewFeatureMusicImpl _loadMusicSyncSelectionWithTrackId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d8c800

// -[SCPreviewFeatureMusicImpl _presentLoadingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d8cc88

// -[SCPreviewFeatureMusicImpl _dismissLoadingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d8ce88

// -[SCPreviewFeatureMusicImpl _downloadAndSelectMusicTrack:ctContext:sourcePageType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105d8ceec

// -[SCPreviewFeatureMusicImpl _editorSelectionForPickerSelection:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d8d2ec

// -[SCPreviewFeatureMusicImpl _initializeUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x105d8d3f0

// -[SCPreviewFeatureMusicImpl _calculateSegmentDuration]
// Type encoding: d16@0:8
// Implementation: 0x105d8d59c

// -[SCPreviewFeatureMusicImpl _shouldDisableMusicFeature]
// Type encoding: B16@0:8
// Implementation: 0x105d8d680

// -[SCPreviewFeatureMusicImpl _setupAddSoundPillScope]
// Type encoding: v16@0:8
// Implementation: 0x105d8d72c

// -[SCPreviewFeatureMusicImpl _addSoundPillRecommendedStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d8d9b8

// -[SCPreviewFeatureMusicImpl _defaultRecsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d8dc00

// -[SCPreviewFeatureMusicImpl _contentBasedRecsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d8dd68

// -[SCPreviewFeatureMusicImpl _contentBasedRecommendationImage]
// Type encoding: @16@0:8
// Implementation: 0x105d8e08c

// -[SCPreviewFeatureMusicImpl _musicContentBasedRecommendationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105d8e160

// -[SCPreviewFeatureMusicImpl _autoApplyRecsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d8e1c0

// -[SCPreviewFeatureMusicImpl _handlePillStateForAutoApply:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d8e66c

// -[SCPreviewFeatureMusicImpl _currentSelectionWasAutoApplied]
// Type encoding: B16@0:8
// Implementation: 0x105d8ea2c

// -[SCPreviewFeatureMusicImpl _addSoundPillMusicSelectionStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d8eac8

// -[SCPreviewFeatureMusicImpl _makeSoundPillViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x105d8ee84

// -[SCPreviewFeatureMusicImpl _attachSoundPillView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8f0d8

// -[SCPreviewFeatureMusicImpl _detachSoundPillView]
// Type encoding: v16@0:8
// Implementation: 0x105d8f18c

// -[SCPreviewFeatureMusicImpl _constrainSoundPillView]
// Type encoding: v16@0:8
// Implementation: 0x105d8f1c0

// -[SCPreviewFeatureMusicImpl previewViewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105d8f4e4

// -[SCPreviewFeatureMusicImpl _setAddSoundPillHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d8f588

// -[SCPreviewFeatureMusicImpl _isMusicStickerRemovable]
// Type encoding: B16@0:8
// Implementation: 0x105d8f6e8

// -[SCPreviewFeatureMusicImpl _updateAutoapplyModifierIfNeededWithAction:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d8f738

// -[SCPreviewFeatureMusicImpl _handleMemoriesAsset:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d8f7b8

// -[SCPreviewFeatureMusicImpl _removeMusicStickerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105d8fd5c

// -[SCPreviewFeatureMusicImpl _setupMusicSyncWithTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d8fefc

// -[SCPreviewFeatureMusicImpl _memoriesAssetWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d90060

// -[SCPreviewFeatureMusicImpl _musicSelectionFromSnapDocWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d90224

// -[SCPreviewFeatureMusicImpl _musicPlaybackLayerFromSnapDocEditor:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d90980

// -[SCPreviewFeatureMusicImpl _unifiedMusicPlaybackLayerFromSnapDocEditor:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d90a80

// -[SCPreviewFeatureMusicImpl _isMusicPlaybackLayerEditable]
// Type encoding: B16@0:8
// Implementation: 0x105d90b4c

// -[SCPreviewFeatureMusicImpl _currentFilterIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d90bec

// -[SCPreviewFeatureMusicImpl _currentMusicPlaybackTimeObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d90cc8

// -[SCPreviewFeatureMusicImpl _blocklistCTContextIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d90d34

// -[SCPreviewFeatureMusicImpl _selectionWasFromAutoPlayInCamera:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d90da4

// -[SCPreviewFeatureMusicImpl _applyMiniPickerSelectionIfChanged]
// Type encoding: v16@0:8
// Implementation: 0x105d90e68

// -[SCPreviewFeatureMusicImpl _removeMusicPickerScopeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105d90f6c

// -[SCPreviewFeatureMusicImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d90fd8

// -[SCPreviewFeatureMusicImpl reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105d91078

// -[SCPreviewFeatureMusicImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d9124c

// -[SCPreviewFeatureMusicImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d91264

// -[SCPreviewFeatureMusicImpl parentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d91270

// -[SCPreviewFeatureMusicImpl setParentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d91288

// -[SCPreviewFeatureMusicImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105d91294

// -[SCPreviewFeatureMusicImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d9129c

@end
