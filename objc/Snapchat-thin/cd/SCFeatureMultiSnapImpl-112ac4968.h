// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMultiSnapImpl
// Superclass: SCFeature
// Address: 0x112ac4968

@interface SCFeatureMultiSnapImpl

// Property: sampledImageSize; attributes: T{CGSize=dd},N,V_sampledImageSize
// Property: currentMultiSnapSegment; attributes: T@"<SCMultiSnapSegment>",&,N,V_currentMultiSnapSegment
// Property: multiSnapV2ViewController; attributes: T@"SCMultiSnapV2CollectionViewController",&,N,V_multiSnapV2ViewController
// Property: containerView; attributes: T@"UIView<SCFeatureContainerView>",R,N,V_containerView
// Property: userSession; attributes: T@"SCUserSession",R,N,V_userSession
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCFeatureMultiSnapDelegate>",W,N,V_delegate
// Property: enabled; attributes: TB,R,N
// Property: frameForPreviewTransition; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: viewForPreviewTransition; attributes: T@"UIView",R,N
// Property: shouldFadeForPreviewTransition; attributes: TB,R,N
// Property: defaultRecordingDuration; attributes: Td,R,N

// -[SCFeatureMultiSnapImpl initWithUserSession:sampledImageSize:cameraHardwareServicesAPI:cameraHardwareResource:cameraRecordingDurationConfig:cameraViewType:circumstanceEngine:speedModeFeature:]
// Type encoding: @88@0:8@16{CGSize=dd}24@40@48@56q64@72@80
// Implementation: 0x100c2bd80

// -[SCFeatureMultiSnapImpl defaultRecordingDuration]
// Type encoding: d16@0:8
// Implementation: 0x1060a327c

// -[SCFeatureMultiSnapImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2bf98

// -[SCFeatureMultiSnapImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060a3290

// -[SCFeatureMultiSnapImpl enabled]
// Type encoding: B16@0:8
// Implementation: 0x1060a34e8

// -[SCFeatureMultiSnapImpl frameForPreviewTransition]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1060a34f8

// -[SCFeatureMultiSnapImpl viewForPreviewTransition]
// Type encoding: @16@0:8
// Implementation: 0x1060a3568

// -[SCFeatureMultiSnapImpl shouldFadeForPreviewTransition]
// Type encoding: B16@0:8
// Implementation: 0x1060a3578

// -[SCFeatureMultiSnapImpl finalizeCurrentSegment]
// Type encoding: v16@0:8
// Implementation: 0x1060a3590

// -[SCFeatureMultiSnapImpl configurationWithFinalDuration:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x1060a35e4

// -[SCFeatureMultiSnapImpl prepareForRecordingWithCaptureSessionId:showMultiSnapThumbnails:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1060a3660

// -[SCFeatureMultiSnapImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x100c2bfd0

// -[SCFeatureMultiSnapImpl _addCaptureLifecycleTasks]
// Type encoding: v16@0:8
// Implementation: 0x1060a36b8

// -[SCFeatureMultiSnapImpl _addAnimationLifecycleTasks]
// Type encoding: v16@0:8
// Implementation: 0x1060a388c

// -[SCFeatureMultiSnapImpl _segmentRecordingTimeAdjustedForSpeedMode]
// Type encoding: d16@0:8
// Implementation: 0x1060a3a80

// -[SCFeatureMultiSnapImpl recoverWithSnapSessionContext:contentLossReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1060a3af0

// -[SCFeatureMultiSnapImpl _multiSnapViewFrameForView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x1060a3af4

// -[SCFeatureMultiSnapImpl _configureMultiSnapView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a3bb0

// -[SCFeatureMultiSnapImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1060a3c08

// -[SCFeatureMultiSnapImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2bf84

// -[SCFeatureMultiSnapImpl containerView]
// Type encoding: @16@0:8
// Implementation: 0x1060a3c28

// -[SCFeatureMultiSnapImpl userSession]
// Type encoding: @16@0:8
// Implementation: 0x1060a3c38

// -[SCFeatureMultiSnapImpl sampledImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1060a3c48

// -[SCFeatureMultiSnapImpl setSampledImageSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1060a3c5c

// -[SCFeatureMultiSnapImpl currentMultiSnapSegment]
// Type encoding: @16@0:8
// Implementation: 0x1060a3c70

// -[SCFeatureMultiSnapImpl setCurrentMultiSnapSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a3c80

// -[SCFeatureMultiSnapImpl multiSnapV2ViewController]
// Type encoding: @16@0:8
// Implementation: 0x1060a3cc0

// -[SCFeatureMultiSnapImpl setMultiSnapV2ViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060a3cd0

// -[SCFeatureMultiSnapImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060a3d10

@end
