// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureVoiceoverImpl
// Superclass: NSObject
// Address: 0x112a9b248

@interface SCPreviewFeatureVoiceoverImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: forceDisableAudioMixing; attributes: TB,R,N
// Property: voiceoverPresentationObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentPlaybackTimeObservable; attributes: T@"SCObservable",R,N
// Property: muteSnapAudioSubject; attributes: T@"SCBehaviorSubject",R,N
// Property: mediaDuration; attributes: T{?=qiIq},R,N,V_mediaDuration
// Property: isCurrentlyOpened; attributes: TB,R,N,V_isCurrentlyOpened
// Property: isAppliedVoiceoverMixed; attributes: TB,R,N
// Property: appliedVoiceoverAudio; attributes: T@"SCVoiceoverAudio",R,N,V_appliedVoiceoverAudio
// Property: delegate; attributes: T@"<SCPreviewFeatureVoiceoverDelegate><SCPreviewPlaybackControlDelegate>",W,N,V_delegate
// Property: toolbarItemConfiguration; attributes: T@"SCPreviewToolBarItemConfiguration",R,N
// Property: muteSnapAudioObservable; attributes: T@"SCObservable",R,N
// Property: voiceoverAppliedTrackObservable; attributes: T@"SCObservable",R,N
// Property: voiceoverFeaturePresentationObservable; attributes: T@"SCObservable",R,N
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N
// Property: parentViewControllerDelegate; attributes: T@"<SCPreviewFeatureParentViewControllerAccessing>",W,N,V_parentViewControllerDelegate

// -[SCPreviewFeatureVoiceoverImpl initWithVoiceoverScopeExposer:previewScope:previewConfiguration:videoPlayback:thumbnailGenerator:voiceoverServices:dialogCoordinator:previewScopeServices:previewABServices:userInteractionStateLogger:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105d0c344

// -[SCPreviewFeatureVoiceoverImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d0c724

// -[SCPreviewFeatureVoiceoverImpl toolbarItemConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d0c72c

// -[SCPreviewFeatureVoiceoverImpl muteSnapAudioObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d0c87c

// -[SCPreviewFeatureVoiceoverImpl voiceoverAppliedTrackObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d0c8a4

// -[SCPreviewFeatureVoiceoverImpl voiceoverFeaturePresentationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d0c8cc

// -[SCPreviewFeatureVoiceoverImpl enterVoiceoverModeWithAudioMixingInitialValue:musicDisabledMicCapture:mixingProportionValue:]
// Type encoding: v28@0:8B16B20f24
// Implementation: 0x105d0c8f4

// -[SCPreviewFeatureVoiceoverImpl isVoiceoverSupported]
// Type encoding: B16@0:8
// Implementation: 0x105d0ca70

// -[SCPreviewFeatureVoiceoverImpl removeVoiceoverAudio]
// Type encoding: v16@0:8
// Implementation: 0x105d0cbbc

// -[SCPreviewFeatureVoiceoverImpl handleSegmentSelectionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d0cbc8

// -[SCPreviewFeatureVoiceoverImpl updateVoiceoverForVideoSegmentChanges]
// Type encoding: v16@0:8
// Implementation: 0x105d0ced8

// -[SCPreviewFeatureVoiceoverImpl isAppliedVoiceoverMixed]
// Type encoding: B16@0:8
// Implementation: 0x105d0cf18

// -[SCPreviewFeatureVoiceoverImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105d0cf64

// -[SCPreviewFeatureVoiceoverImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0d194

// -[SCPreviewFeatureVoiceoverImpl snapEditor:didChangeState:oldState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d0d1a0

// -[SCPreviewFeatureVoiceoverImpl _exposeVoiceoverScope]
// Type encoding: v16@0:8
// Implementation: 0x105d0d3dc

// -[SCPreviewFeatureVoiceoverImpl _presentVoiceoverVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0d690

// -[SCPreviewFeatureVoiceoverImpl handleExitButton]
// Type encoding: v16@0:8
// Implementation: 0x105d0d8bc

// -[SCPreviewFeatureVoiceoverImpl _dismissVoiceoverVC]
// Type encoding: v16@0:8
// Implementation: 0x105d0d8cc

// -[SCPreviewFeatureVoiceoverImpl videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105d0da7c

// -[SCPreviewFeatureVoiceoverImpl voiceoverPresentationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d0db44

// -[SCPreviewFeatureVoiceoverImpl voiceoverPlaybackControlsThumbnailFutures]
// Type encoding: @16@0:8
// Implementation: 0x105d0db6c

// -[SCPreviewFeatureVoiceoverImpl voiceoverDidSaveWithVoiceoverAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0dba4

// -[SCPreviewFeatureVoiceoverImpl forceDisableAudioMixing]
// Type encoding: B16@0:8
// Implementation: 0x105d0dbac

// -[SCPreviewFeatureVoiceoverImpl muteSnapAudioSubject]
// Type encoding: @16@0:8
// Implementation: 0x105d0dc8c

// -[SCPreviewFeatureVoiceoverImpl currentPlaybackTimeObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d0dcb4

// -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackSeekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x105d0dcdc

// -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackPause]
// Type encoding: v16@0:8
// Implementation: 0x105d0ddc4

// -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackResumeWithAudio:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d0ddc8

// -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackSetAudio:audioMixingProportion:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d0ddcc

// -[SCPreviewFeatureVoiceoverImpl voiceoverWillExitByCancelling:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d0e374

// -[SCPreviewFeatureVoiceoverImpl _pauseVideo]
// Type encoding: v16@0:8
// Implementation: 0x105d0e3b8

// -[SCPreviewFeatureVoiceoverImpl _resumeVideoWithAudio:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d0e414

// -[SCPreviewFeatureVoiceoverImpl _createPlaybackControlsThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x105d0e47c

// -[SCPreviewFeatureVoiceoverImpl _createPlaybackControlsThumbnailsForVideoAsset:videoComposition:withTimeRange:thumbnailOverrides:thumbnailOverrideTimeRanges:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105d0e7c0

// -[SCPreviewFeatureVoiceoverImpl _voiceoverSeekTimeForVideoPlaybackTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x105d0e954

// -[SCPreviewFeatureVoiceoverImpl _mediaPlaybackTimeForVoiceoverSeekTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x105d0eb58

// -[SCPreviewFeatureVoiceoverImpl _memoriesVoiceoverAudioWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d0ecec

// -[SCPreviewFeatureVoiceoverImpl _updateSnapDocWithVoiceoverAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0ee84

// -[SCPreviewFeatureVoiceoverImpl _addSnapDocPlaybackLayerWithVoiceoverAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0eed4

// -[SCPreviewFeatureVoiceoverImpl _addSnapDocPlaybackLayerWithGenericAssetData:audioMixingRenderEffect:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d0f0b8

// -[SCPreviewFeatureVoiceoverImpl _removeSnapDocPlaybackLayer]
// Type encoding: v16@0:8
// Implementation: 0x105d0f330

// -[SCPreviewFeatureVoiceoverImpl _retrieveVoiceoverFromSnapDocWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d0f370

// -[SCPreviewFeatureVoiceoverImpl _mixedSnapDocVoiceoverAudioWithDecryptedData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d0f670

// -[SCPreviewFeatureVoiceoverImpl _updateVoiceoverWithAudio:userUpdated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d0f998

// -[SCPreviewFeatureVoiceoverImpl _updateAppliedVoiceoverAudio:userUpdated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d0fa04

// -[SCPreviewFeatureVoiceoverImpl _videoDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x105d0fb28

// -[SCPreviewFeatureVoiceoverImpl _audioMixingRenderEffectForVoiceoverAudio:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d0fc20

// -[SCPreviewFeatureVoiceoverImpl _updateVoiceoverPlaybackForEditingSegmentIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d0fcf8

// -[SCPreviewFeatureVoiceoverImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0fff8

// -[SCPreviewFeatureVoiceoverImpl _reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105d10098

// -[SCPreviewFeatureVoiceoverImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d1013c

// -[SCPreviewFeatureVoiceoverImpl parentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d10164

// -[SCPreviewFeatureVoiceoverImpl setParentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d1017c

// -[SCPreviewFeatureVoiceoverImpl isCurrentlyOpened]
// Type encoding: B16@0:8
// Implementation: 0x105d10188

// -[SCPreviewFeatureVoiceoverImpl appliedVoiceoverAudio]
// Type encoding: @16@0:8
// Implementation: 0x105d10190

// -[SCPreviewFeatureVoiceoverImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d10198

// -[SCPreviewFeatureVoiceoverImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d101b0

// -[SCPreviewFeatureVoiceoverImpl mediaDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x105d101bc

// -[SCPreviewFeatureVoiceoverImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105d101d0

// -[SCPreviewFeatureVoiceoverImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d101d8

@end
