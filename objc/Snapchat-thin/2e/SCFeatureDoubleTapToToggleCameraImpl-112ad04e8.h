// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureDoubleTapToToggleCameraImpl
// Superclass: SCFeature
// Address: 0x112ad04e8

@interface SCFeatureDoubleTapToToggleCameraImpl

// Property: actionType; attributes: Tq,R
// Property: cameraUIItem; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureDoubleTapToToggleCameraDelegate>",W,N,V_delegate
// Property: numberOfFlipsDuringCapture; attributes: Tq,R,N,V_numberOfFlipsDuringCapture
// Property: doubleTapToToggleCameraDidTriggerObservable; attributes: T@"SCObservable",R,N,V_doubleTapToToggleCameraDidTriggerSubject

// -[SCFeatureDoubleTapToToggleCameraImpl initWithToggleCamera:toggleCameraButton:cameraUserActionLogger:captureDeviceManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10084c088

// -[SCFeatureDoubleTapToToggleCameraImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061a98cc

// -[SCFeatureDoubleTapToToggleCameraImpl isDoubleTapGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061a99cc

// -[SCFeatureDoubleTapToToggleCameraImpl addBeRequiredToFailByGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10084df24

// -[SCFeatureDoubleTapToToggleCameraImpl setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061a99e4

// -[SCFeatureDoubleTapToToggleCameraImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10084c7a4

// -[SCFeatureDoubleTapToToggleCameraImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x1061a99f4

// -[SCFeatureDoubleTapToToggleCameraImpl resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10084c734

// -[SCFeatureDoubleTapToToggleCameraImpl usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1061a9a44

// -[SCFeatureDoubleTapToToggleCameraImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10084c82c

// -[SCFeatureDoubleTapToToggleCameraImpl actionType]
// Type encoding: q16@0:8
// Implementation: 0x1061a9af8

// -[SCFeatureDoubleTapToToggleCameraImpl cameraUIItem]
// Type encoding: q16@0:8
// Implementation: 0x1061a9b00

// -[SCFeatureDoubleTapToToggleCameraImpl _setupDoubleTapGesture]
// Type encoding: v16@0:8
// Implementation: 0x10084c1d4

// -[SCFeatureDoubleTapToToggleCameraImpl _doubleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061a9b08

// -[SCFeatureDoubleTapToToggleCameraImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1061a9e00

// -[SCFeatureDoubleTapToToggleCameraImpl doubleTapToToggleCameraDidTriggerObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061a9e20

// -[SCFeatureDoubleTapToToggleCameraImpl numberOfFlipsDuringCapture]
// Type encoding: q16@0:8
// Implementation: 0x1061a9e30

// -[SCFeatureDoubleTapToToggleCameraImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061a9e40

@end
