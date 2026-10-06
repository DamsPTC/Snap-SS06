// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureFingerDownCaptureImpl
// Superclass: SCFeature
// Address: 0x112acdd88

@interface SCFeatureFingerDownCaptureImpl

// Property: isObservingFrame; attributes: TB,V_isObservingFrame
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureFingerDownCaptureImpl initWithCameraHardwareResource:videoDataSourceObserver:cameraLensProvider:cameraType:cameraMLConfiguration:cameraModeActivationController:applicationLifecycleEvents:]
// Type encoding: @72@0:8@16@24@32Q40@48@56@64
// Implementation: 0x106164134

// -[SCFeatureFingerDownCaptureImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x106164314

// -[SCFeatureFingerDownCaptureImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106164364

// -[SCFeatureFingerDownCaptureImpl retrieveFingerDownData]
// Type encoding: @16@0:8
// Implementation: 0x10616475c

// -[SCFeatureFingerDownCaptureImpl forwardCameraTimerGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061647bc

// -[SCFeatureFingerDownCaptureImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061649f4

// -[SCFeatureFingerDownCaptureImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x106164dc8

// -[SCFeatureFingerDownCaptureImpl _stopObservingCameraFrames]
// Type encoding: v16@0:8
// Implementation: 0x106164e14

// -[SCFeatureFingerDownCaptureImpl _startObservingCapturerStateUpdateWithManagedCapturerStateCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106164e78

// -[SCFeatureFingerDownCaptureImpl _startObservingAppLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x106165148

// -[SCFeatureFingerDownCaptureImpl _shouldEnableFingerDownCapture]
// Type encoding: B16@0:8
// Implementation: 0x106165278

// -[SCFeatureFingerDownCaptureImpl _orientationOfImageCreatedFromVideoSourceWithDevicePosition:]
// Type encoding: q24@0:8q16
// Implementation: 0x1061654ec

// -[SCFeatureFingerDownCaptureImpl _storeData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061655b4

// -[SCFeatureFingerDownCaptureImpl _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x10616560c

// -[SCFeatureFingerDownCaptureImpl _activeFlashMode]
// Type encoding: q16@0:8
// Implementation: 0x106165660

// -[SCFeatureFingerDownCaptureImpl isObservingFrame]
// Type encoding: B16@0:8
// Implementation: 0x106165770

// -[SCFeatureFingerDownCaptureImpl setIsObservingFrame:]
// Type encoding: v20@0:8B16
// Implementation: 0x106165784

// -[SCFeatureFingerDownCaptureImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106165794

@end
