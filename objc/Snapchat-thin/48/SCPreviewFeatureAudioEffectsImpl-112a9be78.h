// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureAudioEffectsImpl
// Superclass: NSObject
// Address: 0x112a9be78

@interface SCPreviewFeatureAudioEffectsImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewPlaybackControlDelegate>",W,N,V_delegate
// Property: toolbarItemManager; attributes: T@"<SCPreviewFeatureAudioEffectsToolbarItemManaging>",R,N,V_toolbarItemManager
// Property: parentViewControllerDelegate; attributes: T@"<SCPreviewFeatureParentViewControllerAccessing>",W,N,V_parentViewControllerDelegate

// -[SCPreviewFeatureAudioEffectsImpl initWithPreviewConfiguration:bounceFeature:musicFeature:musicExperiments:voiceoverFeature:videoPlayback:audioEffectsScopeExposer:snapDocEditor:previewABServices:legacySnapEditor:ttsServices:snapEditor:audioEffectsMixingConfigProvider:notificationPool:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x105d1ffbc

// -[SCPreviewFeatureAudioEffectsImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105d204c0

// -[SCPreviewFeatureAudioEffectsImpl snapEditor:didTriggerLifecycle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d21144

// -[SCPreviewFeatureAudioEffectsImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d21170

// -[SCPreviewFeatureAudioEffectsImpl _updateContextClientInfoWithAudioMixArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d217ec

// -[SCPreviewFeatureAudioEffectsImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d218cc

// -[SCPreviewFeatureAudioEffectsImpl toolbarItemManager]
// Type encoding: @16@0:8
// Implementation: 0x105d21910

// -[SCPreviewFeatureAudioEffectsImpl openAudioEffectsTool]
// Type encoding: v16@0:8
// Implementation: 0x105d21938

// -[SCPreviewFeatureAudioEffectsImpl openVoiceover]
// Type encoding: v16@0:8
// Implementation: 0x105d21b90

// -[SCPreviewFeatureAudioEffectsImpl shouldOpenAudioEffectsTool]
// Type encoding: B16@0:8
// Implementation: 0x105d21b94

// -[SCPreviewFeatureAudioEffectsImpl updateAudioFunctionality]
// Type encoding: v16@0:8
// Implementation: 0x105d21c38

// -[SCPreviewFeatureAudioEffectsImpl setHardwareMuteSwitchActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d21e30

// -[SCPreviewFeatureAudioEffectsImpl updatePlaybackVolume]
// Type encoding: v16@0:8
// Implementation: 0x105d21e38

// -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolDidAdjustSnapVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d21eac

// -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolDidAdjustMusicVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d21fc4

// -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105d220dc

// -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolWantsToPresentMusicPicker]
// Type encoding: v16@0:8
// Implementation: 0x105d22124

// -[SCPreviewFeatureAudioEffectsImpl audioEffectsToolWantsToStartVoiceoverWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105d22288

// -[SCPreviewFeatureAudioEffectsImpl toolbarItemManagerDidToggleAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2228c

// -[SCPreviewFeatureAudioEffectsImpl _retrieveMusicAudioMixDataFromSnapDoc]
// Type encoding: v16@0:8
// Implementation: 0x105d2235c

// -[SCPreviewFeatureAudioEffectsImpl _retrieveBaseMediaAudioMixDataFromSnapDocWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d22518

// -[SCPreviewFeatureAudioEffectsImpl _shouldShowMissingSoundNotification]
// Type encoding: B16@0:8
// Implementation: 0x105d22664

// -[SCPreviewFeatureAudioEffectsImpl _allSegmentsAreImageSegments]
// Type encoding: B16@0:8
// Implementation: 0x105d226ec

// -[SCPreviewFeatureAudioEffectsImpl _presentMissingSoundNotification]
// Type encoding: v16@0:8
// Implementation: 0x105d22860

// -[SCPreviewFeatureAudioEffectsImpl _dismissMissingSoundNotification]
// Type encoding: v16@0:8
// Implementation: 0x105d22b1c

// -[SCPreviewFeatureAudioEffectsImpl _canMuteVideoAudioForMissingAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x105d22b24

// -[SCPreviewFeatureAudioEffectsImpl _isImportedMediaSnap]
// Type encoding: B16@0:8
// Implementation: 0x105d22c18

// -[SCPreviewFeatureAudioEffectsImpl _muteVideoAudioIfCaptureRecordedNoAudioTrack]
// Type encoding: v16@0:8
// Implementation: 0x105d22c60

// -[SCPreviewFeatureAudioEffectsImpl _audioMixingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105d22ef0

// -[SCPreviewFeatureAudioEffectsImpl _shouldForceDisableAudioMixing]
// Type encoding: B16@0:8
// Implementation: 0x105d22f24

// -[SCPreviewFeatureAudioEffectsImpl _canAudioMix]
// Type encoding: B16@0:8
// Implementation: 0x105d22f2c

// -[SCPreviewFeatureAudioEffectsImpl _handleBaseAudioVolumeForEditorAppearance]
// Type encoding: v16@0:8
// Implementation: 0x105d23000

// -[SCPreviewFeatureAudioEffectsImpl _handleBaseAudioVolumeForEditorExitWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d23040

// -[SCPreviewFeatureAudioEffectsImpl _handleMusicVolumeForEditorAppearance]
// Type encoding: v16@0:8
// Implementation: 0x105d23078

// -[SCPreviewFeatureAudioEffectsImpl _handleMusicVolumeForEditorExitWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d230e4

// -[SCPreviewFeatureAudioEffectsImpl _handleMusicSelectionUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2311c

// -[SCPreviewFeatureAudioEffectsImpl _handleVoiceoverTrackUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d235c0

// -[SCPreviewFeatureAudioEffectsImpl _updateTextToSpeechAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d23840

// -[SCPreviewFeatureAudioEffectsImpl _beginVoiceoverWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105d23c78

// -[SCPreviewFeatureAudioEffectsImpl _didAdjustMuteSnapAudioToggle:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d23eb4

// -[SCPreviewFeatureAudioEffectsImpl _updateMusicVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x105d23f08

// -[SCPreviewFeatureAudioEffectsImpl _updateBaseVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x105d24178

// -[SCPreviewFeatureAudioEffectsImpl _updateIsAudioMixed]
// Type encoding: v16@0:8
// Implementation: 0x105d243d4

// -[SCPreviewFeatureAudioEffectsImpl _canUseOverride]
// Type encoding: B16@0:8
// Implementation: 0x105d24448

// -[SCPreviewFeatureAudioEffectsImpl _updateMultiSnapState]
// Type encoding: v16@0:8
// Implementation: 0x105d2453c

// -[SCPreviewFeatureAudioEffectsImpl _logMixedAudioTracks]
// Type encoding: v16@0:8
// Implementation: 0x105d246f4

// -[SCPreviewFeatureAudioEffectsImpl _updateVideoPlaybackToBatchCapture]
// Type encoding: v16@0:8
// Implementation: 0x105d24850

// -[SCPreviewFeatureAudioEffectsImpl _musicDisabledMicCapture]
// Type encoding: B16@0:8
// Implementation: 0x105d24984

// -[SCPreviewFeatureAudioEffectsImpl _playbackLayerIdForAssetType:forSegment:]
// Type encoding: @28@0:8i16@20
// Implementation: 0x105d249bc

// -[SCPreviewFeatureAudioEffectsImpl _audioMixingRenderEffectWithVolume:]
// Type encoding: @20@0:8f16
// Implementation: 0x105d24bc4

// -[SCPreviewFeatureAudioEffectsImpl _rebalanceVolumes]
// Type encoding: v16@0:8
// Implementation: 0x105d24c48

// -[SCPreviewFeatureAudioEffectsImpl _currentNumberOfAudioSources]
// Type encoding: Q16@0:8
// Implementation: 0x105d24de0

// -[SCPreviewFeatureAudioEffectsImpl _scaledVolumeForVolume:]
// Type encoding: f20@0:8f16
// Implementation: 0x105d24e4c

// -[SCPreviewFeatureAudioEffectsImpl _hasLensMusicSelection]
// Type encoding: B16@0:8
// Implementation: 0x105d24e7c

// -[SCPreviewFeatureAudioEffectsImpl _videoAudioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105d24f1c

// -[SCPreviewFeatureAudioEffectsImpl _didSetTrack]
// Type encoding: B16@0:8
// Implementation: 0x105d24f60

// -[SCPreviewFeatureAudioEffectsImpl parentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d24f84

// -[SCPreviewFeatureAudioEffectsImpl setParentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d24f9c

// -[SCPreviewFeatureAudioEffectsImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d24fa8

// -[SCPreviewFeatureAudioEffectsImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d24fc0

// -[SCPreviewFeatureAudioEffectsImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d24fcc

@end
