// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureHandsFreeImpl
// Superclass: SCFeature
// Address: 0x112acdf68

@interface SCFeatureHandsFreeImpl

// Property: actionType; attributes: Tq,R
// Property: cameraUIItem; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: usageTracker; attributes: T@"<SCFeatureHandsFreeModeUsageTracker>",W,N,V_usageTracker
// Property: longPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",R,N,V_longPressGestureRecognizer
// Property: canEnable; attributes: TB,N,V_canEnable
// Property: enabled; attributes: TB,R,N,V_enabled
// Property: handsFreeRecordingStateObservable; attributes: T@"SCObservable",R,N,V_handsFreeRecordingStateObservable
// Property: destinationActivatedObservable; attributes: T@"SCObservable",R,N
// Property: destinationActivatedReplyConfig; attributes: T@,R,N

// -[SCFeatureHandsFreeImpl initWithUserSession:cameraUserActionLogger:blizzardLogger:featureSettingsService:cameraHardwareServicesAPI:simpleFeatureGatingConfig:verticalToolbarConfiguration:cameraModeActivationController:scopedCameraType:cameraViewfinderConfiguration:lensCarouselManager:cameraHardwareResource:cameraUIScopeViewContainer:replyConfigPublisher:circumstanceEngine:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72Q80@88@96@104@112@120@128
// Implementation: 0x1008eaaf4

// -[SCFeatureHandsFreeImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10616c0ec

// -[SCFeatureHandsFreeImpl _quickReplyConsumptionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10616c150

// -[SCFeatureHandsFreeImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10616c160

// -[SCFeatureHandsFreeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eaeb4

// -[SCFeatureHandsFreeImpl configureLayout:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eae7c

// -[SCFeatureHandsFreeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10616c248

// -[SCFeatureHandsFreeImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10616c594

// -[SCFeatureHandsFreeImpl shouldDisplayHandsFreeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x10616c610

// -[SCFeatureHandsFreeImpl prepareForRecordingWithVideoCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616c658

// -[SCFeatureHandsFreeImpl forwardCameraTimerGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616c980

// -[SCFeatureHandsFreeImpl setCancelBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10616ce48

// -[SCFeatureHandsFreeImpl _cancelButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10616cf88

// -[SCFeatureHandsFreeImpl setCanEnable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616cfc4

// -[SCFeatureHandsFreeImpl setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616d030

// -[SCFeatureHandsFreeImpl turnOnHandsFree]
// Type encoding: v16@0:8
// Implementation: 0x10616d14c

// -[SCFeatureHandsFreeImpl announceDestinationActivated:]
// Type encoding: v24@0:8@16
// Implementation: 0x10616d18c

// -[SCFeatureHandsFreeImpl destinationActivatedObservable]
// Type encoding: @16@0:8
// Implementation: 0x10616d1f0

// -[SCFeatureHandsFreeImpl destinationActivatedReplyConfig]
// Type encoding: @16@0:8
// Implementation: 0x10616d268

// -[SCFeatureHandsFreeImpl nilOutDestionationActivated]
// Type encoding: v16@0:8
// Implementation: 0x10616d2cc

// -[SCFeatureHandsFreeImpl cameraUIItem]
// Type encoding: q16@0:8
// Implementation: 0x10616d320

// -[SCFeatureHandsFreeImpl actionType]
// Type encoding: q16@0:8
// Implementation: 0x10616d33c

// -[SCFeatureHandsFreeImpl _createAndSetupView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eaf14

// -[SCFeatureHandsFreeImpl _didToggleAvailability]
// Type encoding: v16@0:8
// Implementation: 0x10616d598

// -[SCFeatureHandsFreeImpl _logCameraUserActionDidEndWithRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616d600

// -[SCFeatureHandsFreeImpl _logCameraUserActionDidNotCompleteWithRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616d650

// -[SCFeatureHandsFreeImpl _logCameraUserActionDidStartWithRecording:touchLocation:]
// Type encoding: v36@0:8B16{CGPoint=dd}20
// Implementation: 0x10616d6a0

// -[SCFeatureHandsFreeImpl _capturerDidFailRecording]
// Type encoding: v16@0:8
// Implementation: 0x10616d708

// -[SCFeatureHandsFreeImpl _capturerDidFinishRecording]
// Type encoding: v16@0:8
// Implementation: 0x10616d710

// -[SCFeatureHandsFreeImpl _capturerDidCancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x10616d718

// -[SCFeatureHandsFreeImpl canEnable]
// Type encoding: B16@0:8
// Implementation: 0x10616d720

// -[SCFeatureHandsFreeImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x10616d730

// -[SCFeatureHandsFreeImpl longPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10616d740

// -[SCFeatureHandsFreeImpl usageTracker]
// Type encoding: @16@0:8
// Implementation: 0x10616d750

// -[SCFeatureHandsFreeImpl setUsageTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eb13c

// -[SCFeatureHandsFreeImpl handsFreeRecordingStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10616d770

// -[SCFeatureHandsFreeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10616d780

@end
