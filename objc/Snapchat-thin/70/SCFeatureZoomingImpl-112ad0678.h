// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureZoomingImpl
// Superclass: SCFeature
// Address: 0x112ad0678

@interface SCFeatureZoomingImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraViewType; attributes: Tq,N,V_cameraViewType
// Property: cameraUserActionLogger; attributes: T@"SCFeatureReference",&,N,V_cameraUserActionLogger
// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",W,N,V_containerView
// Property: recording; attributes: TB,N,V_recording
// Property: actionType; attributes: Tq,R
// Property: cameraUIItem; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureZoomingDelegate>",W,N,V_delegate
// Property: targetZoomDeviceProvider; attributes: T@"<SCFeatureZoomingTargetProviding>",W,N,V_targetZoomDeviceProvider

// -[SCFeatureZoomingImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061ae8f8

// -[SCFeatureZoomingImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1061aedbc

// -[SCFeatureZoomingImpl _didChangeCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061aedf0

// -[SCFeatureZoomingImpl _didChangeZoomFactorForDevicePosition:capturerState:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1061aee6c

// -[SCFeatureZoomingImpl initWithCameraViewType:mainCameraViewControllerLifecycleEvents:cameraUserActionLogger:cameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:multiCamModeConfig:cameraZoomFactorsConfiguration:zoomFactorsFeature:circumstanceEngine:]
// Type encoding: @96@0:8q16@24@32@40@48@56@64@72@80@88
// Implementation: 0x100c2b324

// -[SCFeatureZoomingImpl initiatedRecording]
// Type encoding: B16@0:8
// Implementation: 0x1061ac70c

// -[SCFeatureZoomingImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061ac750

// -[SCFeatureZoomingImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1061ac794

// -[SCFeatureZoomingImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2b664

// -[SCFeatureZoomingImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061ac88c

// -[SCFeatureZoomingImpl forwardCameraTimerGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061acd90

// -[SCFeatureZoomingImpl forwardPinchGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ad224

// -[SCFeatureZoomingImpl _forwardPinchGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ad228

// -[SCFeatureZoomingImpl forwardPanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ad71c

// -[SCFeatureZoomingImpl actionType]
// Type encoding: q16@0:8
// Implementation: 0x1061adae0

// -[SCFeatureZoomingImpl cameraUIItem]
// Type encoding: q16@0:8
// Implementation: 0x1061adafc

// -[SCFeatureZoomingImpl recordZoomingStateForDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061adb04

// -[SCFeatureZoomingImpl recordZoomingState]
// Type encoding: v16@0:8
// Implementation: 0x1061adca0

// -[SCFeatureZoomingImpl restoreZoomingStateForDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061adccc

// -[SCFeatureZoomingImpl restoreZoomingState]
// Type encoding: v16@0:8
// Implementation: 0x1061ade70

// -[SCFeatureZoomingImpl resetZoomingStateForDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061ade9c

// -[SCFeatureZoomingImpl resetZoomingState]
// Type encoding: v16@0:8
// Implementation: 0x1061adf38

// -[SCFeatureZoomingImpl resetFlipRecordedCount]
// Type encoding: v16@0:8
// Implementation: 0x100c2b678

// -[SCFeatureZoomingImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1061adf64

// -[SCFeatureZoomingImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1061adf68

// -[SCFeatureZoomingImpl currentVideoZoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x1061ae084

// -[SCFeatureZoomingImpl _currentZoomingState]
// Type encoding: @16@0:8
// Implementation: 0x1061ae0dc

// -[SCFeatureZoomingImpl _zoomingStateForDevicePosition:]
// Type encoding: @24@0:8q16
// Implementation: 0x1061ae104

// -[SCFeatureZoomingImpl _snapToDefaultZoomFactorIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1061ae250

// -[SCFeatureZoomingImpl _logCameraUserActionDidStartWithZoomType:touchLocation:]
// Type encoding: v40@0:8Q16{CGPoint=dd}24
// Implementation: 0x1061ae3b0

// -[SCFeatureZoomingImpl _logCameraUserActionDidEndWithZoomType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061ae418

// -[SCFeatureZoomingImpl _logCameraUserActionDidNotCompleteWithZoomType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061ae468

// -[SCFeatureZoomingImpl _getOffsetFromVelocity:]
// Type encoding: d32@0:8{CGPoint=dd}16
// Implementation: 0x1061ae4b8

// -[SCFeatureZoomingImpl _gestureRecognizer:hasAllTouchesInView:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1061ae4c0

// -[SCFeatureZoomingImpl targetZoomDevice]
// Type encoding: q16@0:8
// Implementation: 0x1061ae600

// -[SCFeatureZoomingImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1061ae6a4

// -[SCFeatureZoomingImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2b650

// -[SCFeatureZoomingImpl targetZoomDeviceProvider]
// Type encoding: @16@0:8
// Implementation: 0x1061ae6c4

// -[SCFeatureZoomingImpl setTargetZoomDeviceProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ae6e4

// -[SCFeatureZoomingImpl cameraViewType]
// Type encoding: q16@0:8
// Implementation: 0x1061ae6f8

// -[SCFeatureZoomingImpl setCameraViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061ae708

// -[SCFeatureZoomingImpl cameraUserActionLogger]
// Type encoding: @16@0:8
// Implementation: 0x1061ae718

// -[SCFeatureZoomingImpl setCameraUserActionLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ae728

// -[SCFeatureZoomingImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x1061ae768

// -[SCFeatureZoomingImpl setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ae788

// -[SCFeatureZoomingImpl recording]
// Type encoding: B16@0:8
// Implementation: 0x1061ae79c

// -[SCFeatureZoomingImpl setRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061ae7ac

// -[SCFeatureZoomingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061ae7bc

@end
