// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureZoomFactorsImpl
// Superclass: SCFeature
// Address: 0x112acecd8

@interface SCFeatureZoomFactorsImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureZoomFactorsImpl initWithZoomFactorsConfig:valdiRuntimeProvider:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:featureSettingsService:lensCarouselManager:cameraUserActionLogger:musicMode:isBatchCaptureActivatedObservable:cameraViewType:cameraZoomIndicatorVisibilityBehaviorSubject:timerModeFeature:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88q96@104@112
// Implementation: 0x100c5e560

// -[SCFeatureZoomFactorsImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10619957c

// -[SCFeatureZoomFactorsImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c632c4

// -[SCFeatureZoomFactorsImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x106199580

// -[SCFeatureZoomFactorsImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1061995d0

// -[SCFeatureZoomFactorsImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10619960c

// -[SCFeatureZoomFactorsImpl pinchDidZoomOutToUltraWideThreshold]
// Type encoding: v16@0:8
// Implementation: 0x106199650

// -[SCFeatureZoomFactorsImpl pinchDidZoomInToTelephotoTreshold]
// Type encoding: v16@0:8
// Implementation: 0x106199698

// -[SCFeatureZoomFactorsImpl didPinchToZoomFactor:pinchEffectiveScale:]
// Type encoding: v24@0:8f16f20
// Implementation: 0x1061996e0

// -[SCFeatureZoomFactorsImpl canEnableTelephotoCamera]
// Type encoding: B16@0:8
// Implementation: 0x106199958

// -[SCFeatureZoomFactorsImpl canEnableUltraWideCamera]
// Type encoding: B16@0:8
// Implementation: 0x10619999c

// -[SCFeatureZoomFactorsImpl telephotoSwitchZoomThresholdAdaptedForUltraWide:]
// Type encoding: @20@0:8B16
// Implementation: 0x1061999e0

// -[SCFeatureZoomFactorsImpl zoomFactorsRange]
// Type encoding: @16@0:8
// Implementation: 0x106199a68

// -[SCFeatureZoomFactorsImpl preCaptureZoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x106199bf8

// -[SCFeatureZoomFactorsImpl zoomLevelGroup]
// Type encoding: q16@0:8
// Implementation: 0x106199c8c

// -[SCFeatureZoomFactorsImpl captureZoomSource]
// Type encoding: q16@0:8
// Implementation: 0x106199e00

// -[SCFeatureZoomFactorsImpl pillDidSelectZoomFactor:]
// Type encoding: v20@0:8f16
// Implementation: 0x106199e94

// -[SCFeatureZoomFactorsImpl pillButtonDidLongPressWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106199e9c

// -[SCFeatureZoomFactorsImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x106199ea0

// -[SCFeatureZoomFactorsImpl _pillView]
// Type encoding: @16@0:8
// Implementation: 0x100c5fd7c

// -[SCFeatureZoomFactorsImpl _createNativePillView]
// Type encoding: @16@0:8
// Implementation: 0x100c5fdcc

// -[SCFeatureZoomFactorsImpl _createHapticFeedbackZoomThresholds]
// Type encoding: @16@0:8
// Implementation: 0x106199f88

// -[SCFeatureZoomFactorsImpl _createPillViewZoomStops]
// Type encoding: @16@0:8
// Implementation: 0x100c5fe98

// -[SCFeatureZoomFactorsImpl _setUpViews]
// Type encoding: v16@0:8
// Implementation: 0x100c6339c

// -[SCFeatureZoomFactorsImpl _createDialBackgroundGradientView]
// Type encoding: @16@0:8
// Implementation: 0x106199f8c

// -[SCFeatureZoomFactorsImpl _createPillBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x10619a3cc

// -[SCFeatureZoomFactorsImpl _createDialView]
// Type encoding: @16@0:8
// Implementation: 0x10619a7a8

// -[SCFeatureZoomFactorsImpl _handleLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10619abbc

// -[SCFeatureZoomFactorsImpl _transitionToDialView]
// Type encoding: v16@0:8
// Implementation: 0x10619ad88

// -[SCFeatureZoomFactorsImpl _transitionToPillView]
// Type encoding: v16@0:8
// Implementation: 0x10619b470

// -[SCFeatureZoomFactorsImpl _handleTapToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10619ba38

// -[SCFeatureZoomFactorsImpl _calculateNewZoomRatio:newLocation:initialZoomRatio:]
// Type encoding: d56@0:8{CGPoint=dd}16{CGPoint=dd}32d48
// Implementation: 0x10619ba68

// -[SCFeatureZoomFactorsImpl _startDismissTimer]
// Type encoding: v16@0:8
// Implementation: 0x10619bc24

// -[SCFeatureZoomFactorsImpl _cancelDismissTimer]
// Type encoding: v16@0:8
// Implementation: 0x10619bd74

// -[SCFeatureZoomFactorsImpl _updateGestureRecognizersFor:enabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10619bdb8

// -[SCFeatureZoomFactorsImpl _handleDrag:]
// Type encoding: v24@0:8@16
// Implementation: 0x10619beec

// -[SCFeatureZoomFactorsImpl _dialOnSelectZoomRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x10619c078

// -[SCFeatureZoomFactorsImpl _dialDidZoomToFactor:]
// Type encoding: v20@0:8f16
// Implementation: 0x10619c2e0

// -[SCFeatureZoomFactorsImpl _pillButtonOnSelectZoomRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x10619c3c4

// -[SCFeatureZoomFactorsImpl _defaultButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10619c580

// -[SCFeatureZoomFactorsImpl _ultraWideButtonTappedWithZoomRatio:]
// Type encoding: v20@0:8f16
// Implementation: 0x10619c5e8

// -[SCFeatureZoomFactorsImpl _telephotoButtonTappedWithZoomRatio:]
// Type encoding: v20@0:8f16
// Implementation: 0x10619c6a4

// -[SCFeatureZoomFactorsImpl _setZoomFactor:animated:]
// Type encoding: v24@0:8f16B20
// Implementation: 0x10619c760

// -[SCFeatureZoomFactorsImpl _enableUltraWideCamera]
// Type encoding: v16@0:8
// Implementation: 0x10619c7d8

// -[SCFeatureZoomFactorsImpl _enableTelephotoCamera]
// Type encoding: v16@0:8
// Implementation: 0x10619c828

// -[SCFeatureZoomFactorsImpl _didChangeZoomFactorOfDevice:capturerState:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10619c878

// -[SCFeatureZoomFactorsImpl _ultraWideMultiplier]
// Type encoding: d16@0:8
// Implementation: 0x10619c98c

// -[SCFeatureZoomFactorsImpl _sessionDidStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x10619c9ac

// -[SCFeatureZoomFactorsImpl _updatedObservableStateWithIsARSessionActive:isMultiCamActive:isMusicFeatureActive:isBatchCaptureActive:isLensCarouselActive:isVideoRecording:isTimerCountingDown:]
// Type encoding: v44@0:8B16B20B24B28B32B36B40
// Implementation: 0x100c5fae4

// -[SCFeatureZoomFactorsImpl _updatePillViewVisibility]
// Type encoding: v16@0:8
// Implementation: 0x100c5fcc0

// -[SCFeatureZoomFactorsImpl _didChangeCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c71b68

// -[SCFeatureZoomFactorsImpl _setNeedsRefreshZoomFactors]
// Type encoding: v16@0:8
// Implementation: 0x10619cadc

// -[SCFeatureZoomFactorsImpl _refreshZoomFactorsIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c71bf0

// -[SCFeatureZoomFactorsImpl _registerObservers]
// Type encoding: v16@0:8
// Implementation: 0x100c5ed6c

// -[SCFeatureZoomFactorsImpl _unregisterObservers]
// Type encoding: v16@0:8
// Implementation: 0x10619d560

// -[SCFeatureZoomFactorsImpl _shouldEnableZoomFactorsDialView]
// Type encoding: B16@0:8
// Implementation: 0x100c5ff70

// -[SCFeatureZoomFactorsImpl didChangeZoomWithCaptureControlButton]
// Type encoding: v16@0:8
// Implementation: 0x10619d5b8

// -[SCFeatureZoomFactorsImpl cancelActiveZoomGestures]
// Type encoding: v16@0:8
// Implementation: 0x10619d5cc

// -[SCFeatureZoomFactorsImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10619d608

@end
