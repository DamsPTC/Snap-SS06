// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureTimerModeImpl
// Superclass: SCFeature
// Address: 0x112ad0448

@interface SCFeatureTimerModeImpl

// Property: delegate; attributes: T@"<SCFeatureTimerModeDelegate>",W,N,V_delegate
// Property: enabled; attributes: TB,N,V_enabled
// Property: isCountingDown; attributes: TB,R,N,V_isCountingDown
// Property: activeCaptureTrigger; attributes: TQ,R,N,V_activeCaptureTrigger
// Property: isVideoTimerModeOn; attributes: TB,R,N
// Property: videoRecordingDuration; attributes: Td,R,N
// Property: videoTimerTrayUIObservable; attributes: T@"SCObservable",R,N,V_videoTimerTrayUISubject
// Property: timerStateObservable; attributes: T@"SCObservable",R,N,V_timerStatePublishSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureTimerModeImpl initWithCameraUserActionLogger:captureComponent:featureUpdateEventSubject:legacyCameraTooltipsService:cameraHardwareServicesAPI:cameraConfiguration:speedModeFeature:directorModeActive:cameraModeActivationController:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64B72@76
// Implementation: 0x100c62a38

// -[SCFeatureTimerModeImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x1061a4a24

// -[SCFeatureTimerModeImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x1061a4a34

// -[SCFeatureTimerModeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c62db0

// -[SCFeatureTimerModeImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1061a4a58

// -[SCFeatureTimerModeImpl shortcutDisable]
// Type encoding: v16@0:8
// Implementation: 0x1061a4aec

// -[SCFeatureTimerModeImpl cameraShortcutFeatureType]
// Type encoding: Q16@0:8
// Implementation: 0x1061a4b58

// -[SCFeatureTimerModeImpl cameraShortcutFeatureOption]
// Type encoding: q16@0:8
// Implementation: 0x1061a4b60

// -[SCFeatureTimerModeImpl hasPendingContent]
// Type encoding: B16@0:8
// Implementation: 0x1061a4b68

// -[SCFeatureTimerModeImpl cameraShortcutFeatureName]
// Type encoding: @16@0:8
// Implementation: 0x1061a4b70

// -[SCFeatureTimerModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061a4b7c

// -[SCFeatureTimerModeImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1061a4d60

// -[SCFeatureTimerModeImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1061a4d7c

// -[SCFeatureTimerModeImpl detailedCameraModeLogInfo]
// Type encoding: @16@0:8
// Implementation: 0x1061a4e6c

// -[SCFeatureTimerModeImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a4f70

// -[SCFeatureTimerModeImpl turnOnVideoTimerModeWithRecordingDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061a4ff8

// -[SCFeatureTimerModeImpl startCountingDownWithCaptureTrigger:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061a5064

// -[SCFeatureTimerModeImpl abortCountingDown]
// Type encoding: v16@0:8
// Implementation: 0x1061a53cc

// -[SCFeatureTimerModeImpl toggleCountingDownWithCaptureTrigger:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061a54a4

// -[SCFeatureTimerModeImpl isVideoTimerModeOn]
// Type encoding: B16@0:8
// Implementation: 0x1061a5500

// -[SCFeatureTimerModeImpl onTimelineVideoTotalDurationChangedWithVideoTimerVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a5518

// -[SCFeatureTimerModeImpl turnOffVideoTimerModeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061a557c

// -[SCFeatureTimerModeImpl dismissVideoTimerTrayIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061a55bc

// -[SCFeatureTimerModeImpl onMusicPickerSelectionUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a5604

// -[SCFeatureTimerModeImpl _updateToolbarPinStateForMusicState]
// Type encoding: v16@0:8
// Implementation: 0x1061a5644

// -[SCFeatureTimerModeImpl setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a56b8

// -[SCFeatureTimerModeImpl videoRecordingDuration]
// Type encoding: d16@0:8
// Implementation: 0x1061a5868

// -[SCFeatureTimerModeImpl _createAndSetupView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c62e04

// -[SCFeatureTimerModeImpl _createToolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1061a5998

// -[SCFeatureTimerModeImpl _didScheduleVideoRecord]
// Type encoding: v16@0:8
// Implementation: 0x1061a5f14

// -[SCFeatureTimerModeImpl _setupCameraModeActivationInfoObserver]
// Type encoding: v16@0:8
// Implementation: 0x100c6302c

// -[SCFeatureTimerModeImpl _setToolbarItemVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a63b0

// -[SCFeatureTimerModeImpl _timerViewDidSetTimerWithRecordingDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061a6428

// -[SCFeatureTimerModeImpl _timerViewDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x1061a64a8

// -[SCFeatureTimerModeImpl _timerViewDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1061a64b0

// -[SCFeatureTimerModeImpl enhancedVideoTimerDurationSettingVC:didTapSetTimerButtonWithRecordingDuration:countdownOption:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x1061a651c

// -[SCFeatureTimerModeImpl enhancedVideoTimerDurationSettingVCDidCancel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a65c0

// -[SCFeatureTimerModeImpl enhancedVideoTimerDurationSettingVCDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a65c4

// -[SCFeatureTimerModeImpl _transitionToNextState]
// Type encoding: v16@0:8
// Implementation: 0x1061a65c8

// -[SCFeatureTimerModeImpl _presentTrayIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061a68ac

// -[SCFeatureTimerModeImpl _createDefaultV2Tray]
// Type encoding: @16@0:8
// Implementation: 0x1061a6a44

// -[SCFeatureTimerModeImpl _createDirectorModeV2Tray]
// Type encoding: @16@0:8
// Implementation: 0x1061a6eb8

// -[SCFeatureTimerModeImpl _dismissVideoTimerTray]
// Type encoding: v16@0:8
// Implementation: 0x1061a7204

// -[SCFeatureTimerModeImpl _setTimerModeState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061a723c

// -[SCFeatureTimerModeImpl _setTimerModeState:shouldPresentTray:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1061a7244

// -[SCFeatureTimerModeImpl _setupPhotoTimerSelectedTextWithButtonEventResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a7424

// -[SCFeatureTimerModeImpl _setSelectedTitleForToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a7648

// -[SCFeatureTimerModeImpl _prepareAudioPlayerWithPlaybackStartTimeIfNeeded:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061a767c

// -[SCFeatureTimerModeImpl modeEnabledStateChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a77d0

// -[SCFeatureTimerModeImpl disableMode]
// Type encoding: v16@0:8
// Implementation: 0x1061a7800

// -[SCFeatureTimerModeImpl incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x1061a784c

// -[SCFeatureTimerModeImpl modeType]
// Type encoding: i16@0:8
// Implementation: 0x1061a7858

// -[SCFeatureTimerModeImpl onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061a787c

// -[SCFeatureTimerModeImpl secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x1061a78b8

// -[SCFeatureTimerModeImpl state]
// Type encoding: i16@0:8
// Implementation: 0x1061a78bc

// -[SCFeatureTimerModeImpl isHidden]
// Type encoding: B16@0:8
// Implementation: 0x1061a78d4

// -[SCFeatureTimerModeImpl secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x1061a78dc

// -[SCFeatureTimerModeImpl toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a78e4

// -[SCFeatureTimerModeImpl _defaultTimerDuration]
// Type encoding: d16@0:8
// Implementation: 0x1061a78e8

// -[SCFeatureTimerModeImpl _sliderMinTimerDuration]
// Type encoding: d16@0:8
// Implementation: 0x1061a78f4

// -[SCFeatureTimerModeImpl _createMusicAssetIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x1061a78fc

// -[SCFeatureTimerModeImpl _calculateEnhancedTimerMaxDurationWithAsset:]
// Type encoding: d24@0:8@16
// Implementation: 0x1061a79cc

// -[SCFeatureTimerModeImpl _hasMusicPlayback]
// Type encoding: B16@0:8
// Implementation: 0x1061a7ad4

// -[SCFeatureTimerModeImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x1061a7b6c

// -[SCFeatureTimerModeImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1061a7b7c

// -[SCFeatureTimerModeImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c62d9c

// -[SCFeatureTimerModeImpl isCountingDown]
// Type encoding: B16@0:8
// Implementation: 0x1061a7b9c

// -[SCFeatureTimerModeImpl activeCaptureTrigger]
// Type encoding: Q16@0:8
// Implementation: 0x1061a7bac

// -[SCFeatureTimerModeImpl timerStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x100c632b4

// -[SCFeatureTimerModeImpl videoTimerTrayUIObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a7bbc

// -[SCFeatureTimerModeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061a7bcc

@end
