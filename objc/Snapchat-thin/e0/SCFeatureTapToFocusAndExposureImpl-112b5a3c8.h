// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureTapToFocusAndExposureImpl
// Superclass: SCFeature
// Address: 0x112b5a3c8

@interface SCFeatureTapToFocusAndExposureImpl

// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",W,N,V_containerView
// Property: cameraHardwareServicesAPI; attributes: T@"SCLazy",W,N,V_cameraHardwareServicesAPI
// Property: exposureBiasConfiguration; attributes: T@"SCLazy",&,N,V_exposureBiasConfiguration
// Property: userTappedToFocusAndExposure; attributes: TB,N,V_userTappedToFocusAndExposure
// Property: commands; attributes: T@"NSArray",&,N,V_commands
// Property: cameraUserActionLogger; attributes: T@"SCFeatureReference",&,N,V_cameraUserActionLogger
// Property: tapToFocusPoint; attributes: T{CGPoint=dd},N,V_tapToFocusPoint
// Property: enableExposureAdjustment; attributes: TB,N,V_enableExposureAdjustment
// Property: tapAnimationView; attributes: T@"SCTapAnimationView",&,N,V_tapAnimationView
// Property: exposureBiasAnimationView; attributes: T@"SCExposureBiasAnimationView",&,N,V_exposureBiasAnimationView
// Property: tapToFocusAndExposureTimeoutBlock; attributes: T@?,C,N,V_tapToFocusAndExposureTimeoutBlock
// Property: videoCaptureEventsObserver; attributes: T@"SCDisposableObserver",&,N,V_videoCaptureEventsObserver
// Property: imageCaptureEventsObserver; attributes: T@"SCDisposableObserver",&,N,V_imageCaptureEventsObserver
// Property: enabled; attributes: TB,R,N
// Property: actionType; attributes: Tq,R
// Property: cameraUIItem; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: exposureBias; attributes: T@"NSNumber",R,N,V_exposureBias

// -[SCFeatureTapToFocusAndExposureImpl initWithCommands:cameraUserActionLogger:cameraHardwareServicesAPI:captureDeviceManager:deviceSubjectAreaHandler:exposureBiasConfiguration:simpleFeatureGatingConfiguration:cameraHardwareResources:optimizedExposureConfiguration:closeupCapture:lensCarouselManager:cameraModeActivationController:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x107024f60

// -[SCFeatureTapToFocusAndExposureImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x107025268

// -[SCFeatureTapToFocusAndExposureImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1070253d8

// -[SCFeatureTapToFocusAndExposureImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x107025434

// -[SCFeatureTapToFocusAndExposureImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107025460

// -[SCFeatureTapToFocusAndExposureImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1070254c4

// -[SCFeatureTapToFocusAndExposureImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1070255c4

// -[SCFeatureTapToFocusAndExposureImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1070259d4

// -[SCFeatureTapToFocusAndExposureImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107025ee8

// -[SCFeatureTapToFocusAndExposureImpl forwardCameraOverlayTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107025f40

// -[SCFeatureTapToFocusAndExposureImpl _processTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107025f5c

// -[SCFeatureTapToFocusAndExposureImpl _handlePan:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070264dc

// -[SCFeatureTapToFocusAndExposureImpl cameraUIItem]
// Type encoding: q16@0:8
// Implementation: 0x1070268cc

// -[SCFeatureTapToFocusAndExposureImpl actionType]
// Type encoding: q16@0:8
// Implementation: 0x1070268d4

// -[SCFeatureTapToFocusAndExposureImpl _setupCameraModeActivationInfoObserver]
// Type encoding: v16@0:8
// Implementation: 0x1070268dc

// -[SCFeatureTapToFocusAndExposureImpl _applyTapCommands:enableCameraExposureBias:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x107026b00

// -[SCFeatureTapToFocusAndExposureImpl _showTapAnimationAtPoint:forGesture:isOnRightEdge:enableCameraExposureBias:]
// Type encoding: v48@0:8{CGPoint=dd}16@32B40B44
// Implementation: 0x107026d60

// -[SCFeatureTapToFocusAndExposureImpl gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107026fe4

// -[SCFeatureTapToFocusAndExposureImpl gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107026fec

// -[SCFeatureTapToFocusAndExposureImpl _resetTapAndExposureAnimation]
// Type encoding: v16@0:8
// Implementation: 0x107027078

// -[SCFeatureTapToFocusAndExposureImpl exposureBias]
// Type encoding: @16@0:8
// Implementation: 0x1070270c0

// -[SCFeatureTapToFocusAndExposureImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x1070270d0

// -[SCFeatureTapToFocusAndExposureImpl setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070270f0

// -[SCFeatureTapToFocusAndExposureImpl cameraHardwareServicesAPI]
// Type encoding: @16@0:8
// Implementation: 0x107027104

// -[SCFeatureTapToFocusAndExposureImpl setCameraHardwareServicesAPI:]
// Type encoding: v24@0:8@16
// Implementation: 0x107027124

// -[SCFeatureTapToFocusAndExposureImpl exposureBiasConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107027138

// -[SCFeatureTapToFocusAndExposureImpl setExposureBiasConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107027148

// -[SCFeatureTapToFocusAndExposureImpl userTappedToFocusAndExposure]
// Type encoding: B16@0:8
// Implementation: 0x107027188

// -[SCFeatureTapToFocusAndExposureImpl setUserTappedToFocusAndExposure:]
// Type encoding: v20@0:8B16
// Implementation: 0x107027198

// -[SCFeatureTapToFocusAndExposureImpl commands]
// Type encoding: @16@0:8
// Implementation: 0x1070271a8

// -[SCFeatureTapToFocusAndExposureImpl setCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070271b8

// -[SCFeatureTapToFocusAndExposureImpl cameraUserActionLogger]
// Type encoding: @16@0:8
// Implementation: 0x1070271f8

// -[SCFeatureTapToFocusAndExposureImpl setCameraUserActionLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107027208

// -[SCFeatureTapToFocusAndExposureImpl tapToFocusPoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107027248

// -[SCFeatureTapToFocusAndExposureImpl setTapToFocusPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10702725c

// -[SCFeatureTapToFocusAndExposureImpl enableExposureAdjustment]
// Type encoding: B16@0:8
// Implementation: 0x107027270

// -[SCFeatureTapToFocusAndExposureImpl setEnableExposureAdjustment:]
// Type encoding: v20@0:8B16
// Implementation: 0x107027280

// -[SCFeatureTapToFocusAndExposureImpl tapAnimationView]
// Type encoding: @16@0:8
// Implementation: 0x107027290

// -[SCFeatureTapToFocusAndExposureImpl setTapAnimationView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070272a0

// -[SCFeatureTapToFocusAndExposureImpl exposureBiasAnimationView]
// Type encoding: @16@0:8
// Implementation: 0x1070272e0

// -[SCFeatureTapToFocusAndExposureImpl setExposureBiasAnimationView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070272f0

// -[SCFeatureTapToFocusAndExposureImpl tapToFocusAndExposureTimeoutBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107027330

// -[SCFeatureTapToFocusAndExposureImpl setTapToFocusAndExposureTimeoutBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107027340

// -[SCFeatureTapToFocusAndExposureImpl videoCaptureEventsObserver]
// Type encoding: @16@0:8
// Implementation: 0x10702734c

// -[SCFeatureTapToFocusAndExposureImpl setVideoCaptureEventsObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702735c

// -[SCFeatureTapToFocusAndExposureImpl imageCaptureEventsObserver]
// Type encoding: @16@0:8
// Implementation: 0x10702739c

// -[SCFeatureTapToFocusAndExposureImpl setImageCaptureEventsObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070273ac

// -[SCFeatureTapToFocusAndExposureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070273ec

@end
