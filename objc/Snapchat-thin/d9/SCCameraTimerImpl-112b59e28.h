// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraTimerImpl
// Superclass: UIView
// Address: 0x112b59e28

@interface SCCameraTimerImpl

// Property: handsFreeRecordingStopButtonVisible; attributes: TB,N,V_handsFreeRecordingStopButtonVisible
// Property: lensImageView; attributes: T@"UIImageView",R,N,V_lensImageView
// Property: maximumRecordingLength; attributes: Td,N,V_maximumRecordingLength
// Property: shouldDisplayVideoHelp; attributes: TB,N,V_shouldDisplayVideoHelp
// Property: borderFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: continuousCaptureElapsedTime; attributes: Td,N,V_continuousCaptureElapsedTime
// Property: borderLineWidth; attributes: Td,R,N
// Property: tooltipManager; attributes: T@"<SCCameraTimerTooltipManaging>",R,N
// Property: recording; attributes: TB,N,V_recording
// Property: startRecordingAnimationTime; attributes: Td,N,V_startRecordingAnimationTime
// Property: handsFreeStopButtonColor; attributes: T@"UIColor",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: actionType; attributes: Tq,R
// Property: cameraUIItem; attributes: Tq,R

// -[SCCameraTimerImpl initWithFrame:maximumRecordingLength:cameraViewType:styleProvider:cameraTimerStyle:miniCarouselShouldUseLargeCoolRecordingCaptureButton:captureButtonScaleAnimationDisabled:cameraConfig:snapEditorTweakServices:circumstanceEngine:appStartExperimentReader:]
// Type encoding: @120@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48q56@64q72B80B84@88@96@104@112
// Implementation: 0x1007f5b94

// -[SCCameraTimerImpl _setupInitialAppearance]
// Type encoding: v16@0:8
// Implementation: 0x1007f5e24

// -[SCCameraTimerImpl _prepareCameraRing]
// Type encoding: v16@0:8
// Implementation: 0x1007f6480

// -[SCCameraTimerImpl _coolRecordingDiameter]
// Type encoding: d16@0:8
// Implementation: 0x1007f6988

// -[SCCameraTimerImpl _cameraTimerRingBaseDiameter]
// Type encoding: d16@0:8
// Implementation: 0x10701927c

// -[SCCameraTimerImpl _prepareLensImageView]
// Type encoding: v16@0:8
// Implementation: 0x1007f7ec8

// -[SCCameraTimerImpl _lensImageMaskForStyle:]
// Type encoding: @24@0:8q16
// Implementation: 0x1007f8044

// -[SCCameraTimerImpl _prepareRecordingSpinner]
// Type encoding: v16@0:8
// Implementation: 0x1070192ac

// -[SCCameraTimerImpl _coolRecordingStyleEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1007f6954

// -[SCCameraTimerImpl _shouldHideLensIconDuringCapture]
// Type encoding: B16@0:8
// Implementation: 0x1070193f0

// -[SCCameraTimerImpl startRecordingWithSpeedMultiplier:]
// Type encoding: v24@0:8d16
// Implementation: 0x107019420

// -[SCCameraTimerImpl onSpeedModeDidChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x10701946c

// -[SCCameraTimerImpl setCameraTimerState:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x100c29b04

// -[SCCameraTimerImpl setLensImage:style:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x100c2a8a0

// -[SCCameraTimerImpl onLensCarouselOpenStateChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701947c

// -[SCCameraTimerImpl onCaptureColorChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701949c

// -[SCCameraTimerImpl onRecordingRingStyleChanged:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107019504

// -[SCCameraTimerImpl onCustomCaptureButtonDataChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x107019514

// -[SCCameraTimerImpl showInnerCircleWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107019538

// -[SCCameraTimerImpl hideInnerCircleWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107019590

// -[SCCameraTimerImpl updateHandsFreeInterstitialFillForLensCarouselActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1070195e8

// -[SCCameraTimerImpl animateLensAssetToScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x107019640

// -[SCCameraTimerImpl removeOverlayIcon:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070197d8

// -[SCCameraTimerImpl setOverlayIcon:]
// Type encoding: v24@0:8@16
// Implementation: 0x107019824

// -[SCCameraTimerImpl prepareForDirectorModeTransitionIn]
// Type encoding: v16@0:8
// Implementation: 0x107019a0c

// -[SCCameraTimerImpl beginDirectorModeTransitionInWithInitialSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x107019a1c

// -[SCCameraTimerImpl prepareForDirectorModeTransitionOut]
// Type encoding: v16@0:8
// Implementation: 0x107019b0c

// -[SCCameraTimerImpl beginDirectorModeTransitionOutWithTargetSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x107019b1c

// -[SCCameraTimerImpl setContinuousCaptureCompletedSegmentsDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x107019c74

// -[SCCameraTimerImpl resetContinuousCaptureSpinnerToCompletedSegments]
// Type encoding: v16@0:8
// Implementation: 0x107019c84

// -[SCCameraTimerImpl discardLastCompletedContinuousCaptureSegment]
// Type encoding: v16@0:8
// Implementation: 0x107019ccc

// -[SCCameraTimerImpl continuousCaptureStateDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x107019d08

// -[SCCameraTimerImpl handsFreeViewStateDidChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107019f1c

// -[SCCameraTimerImpl setHandsFreeHoverPreview:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10701a080

// -[SCCameraTimerImpl animateToCameraTargetView:targetPosition:alongWithAnimation:completion:]
// Type encoding: v56@0:8@16{CGPoint=dd}24@?40@?48
// Implementation: 0x10701a0e8

// -[SCCameraTimerImpl animateToCapturePreviewToTargetView:targetPosition:alongWithAnimation:completion:]
// Type encoding: v56@0:8@16{CGPoint=dd}24@?40@?48
// Implementation: 0x10701a2c0

// -[SCCameraTimerImpl transitionToLockAppearance]
// Type encoding: v16@0:8
// Implementation: 0x10701a508

// -[SCCameraTimerImpl insertSnappablesPlayButtonIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10701a514

// -[SCCameraTimerImpl borderFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10701a59c

// -[SCCameraTimerImpl borderLineWidth]
// Type encoding: d16@0:8
// Implementation: 0x10701a658

// -[SCCameraTimerImpl tooltipManager]
// Type encoding: @16@0:8
// Implementation: 0x100c2a77c

// -[SCCameraTimerImpl setRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c29dcc

// -[SCCameraTimerImpl setHandsFreeRecordingStopButtonVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701a6a4

// -[SCCameraTimerImpl handsFreeStopButtonColor]
// Type encoding: @16@0:8
// Implementation: 0x10701a924

// -[SCCameraTimerImpl _setAppearanceType:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1007f8158

// -[SCCameraTimerImpl _handleDirectorModeRingAppearance:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701a974

// -[SCCameraTimerImpl _handleRegularRingAppearance:]
// Type encoding: v20@0:8B16
// Implementation: 0x10701ab3c

// -[SCCameraTimerImpl _createCameraRingBezierPathForAnimation:]
// Type encoding: @20@0:8B16
// Implementation: 0x10701b0c8

// -[SCCameraTimerImpl defaultTimingFunction]
// Type encoding: @16@0:8
// Implementation: 0x10701b1e4

// -[SCCameraTimerImpl _createAnimationWithKeyPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10701b210

// -[SCCameraTimerImpl sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10701b280

// -[SCCameraTimerImpl copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10701b2bc

// -[SCCameraTimerImpl actionType]
// Type encoding: q16@0:8
// Implementation: 0x10701b3d0

// -[SCCameraTimerImpl cameraUIItem]
// Type encoding: q16@0:8
// Implementation: 0x10701b3d8

// -[SCCameraTimerImpl setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008c6974

// -[SCCameraTimerImpl setAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x1008c6b30

// -[SCCameraTimerImpl accessibilityActivationPoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10701b3e0

// -[SCCameraTimerImpl accessibilityTraits]
// Type encoding: Q16@0:8
// Implementation: 0x100853d20

// -[SCCameraTimerImpl accessibilityElements]
// Type encoding: @16@0:8
// Implementation: 0x10701b3e4

// -[SCCameraTimerImpl _syncCoolRecordingPreviewForState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10701b584

// -[SCCameraTimerImpl _scheduleSyncCoolRecordingPreview:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10701b62c

// -[SCCameraTimerImpl _maxRecordingDuration]
// Type encoding: d16@0:8
// Implementation: 0x10701b76c

// -[SCCameraTimerImpl maximumRecordingLength]
// Type encoding: d16@0:8
// Implementation: 0x10701b7d4

// -[SCCameraTimerImpl setMaximumRecordingLength:]
// Type encoding: v24@0:8d16
// Implementation: 0x10701b7e4

// -[SCCameraTimerImpl shouldDisplayVideoHelp]
// Type encoding: B16@0:8
// Implementation: 0x1008c6d60

// -[SCCameraTimerImpl setShouldDisplayVideoHelp:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c2a724

// -[SCCameraTimerImpl recording]
// Type encoding: B16@0:8
// Implementation: 0x10701b7f4

// -[SCCameraTimerImpl startRecordingAnimationTime]
// Type encoding: d16@0:8
// Implementation: 0x10701b804

// -[SCCameraTimerImpl setStartRecordingAnimationTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10701b814

// -[SCCameraTimerImpl continuousCaptureElapsedTime]
// Type encoding: d16@0:8
// Implementation: 0x10701b824

// -[SCCameraTimerImpl setContinuousCaptureElapsedTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10701b834

// -[SCCameraTimerImpl handsFreeRecordingStopButtonVisible]
// Type encoding: B16@0:8
// Implementation: 0x10701b844

// -[SCCameraTimerImpl lensImageView]
// Type encoding: @16@0:8
// Implementation: 0x10701b854

// -[SCCameraTimerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10701b864

@end
