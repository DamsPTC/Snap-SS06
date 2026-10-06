// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATrackingComponent
// Superclass: LSABaseComponent
// Address: 0x112bf9f68

@interface LSATrackingComponent

// Property: delegate; attributes: T@"<LSATrackingComponentDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSATrackingComponent restartTrackingWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10adc47bc

// -[LSATrackingComponent restartTrackingWithNormalizedPoint:completion:]
// Type encoding: v40@0:8{CGPoint=dd}16@?32
// Implementation: 0x10adc4a64

// -[LSATrackingComponent addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc4d2c

// -[LSATrackingComponent removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc4d3c

// -[LSATrackingComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adc4d4c

// -[LSATrackingComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10adc4ef0

// -[LSATrackingComponent registerCalculators:]
// Type encoding: v32@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16
// Implementation: 0x10adc52fc

// -[LSATrackingComponent clearResources]
// Type encoding: v16@0:8
// Implementation: 0x10adc5bcc

// -[LSATrackingComponent didRequestTrackingDataGeneration:image:parameters:useAnchors:requirements:]
// Type encoding: B52@0:8{LSAObjCppPtrWrapper<LS::TrackingData>=^{TrackingData}}16{LSAObjCppPtrWrapper<const LS::Image>=^{Image}}24{LSAObjCppPtrWrapper<const LS::TrackingParameters>=^{TrackingParameters}}32B40Q44
// Implementation: 0x10adc5c1c

// -[LSATrackingComponent prepareTrackingParameters:enableSceneDepth:]
// Type encoding: {?={?=BBB}BBB}28@0:8{LSAObjCppPtrWrapper<const LS::TrackingParameters>=^{TrackingParameters}}16B24
// Implementation: 0x10adc62b0

// -[LSATrackingComponent didRequestTrackingBeginWithRequirement:parameters:]
// Type encoding: B32@0:8Q16{LSAObjCppPtrWrapper<const LS::TrackingParameters>=^{TrackingParameters}}24
// Implementation: 0x10adc633c

// -[LSATrackingComponent didRequestTrackingReset]
// Type encoding: B16@0:8
// Implementation: 0x10adc6534

// -[LSATrackingComponent didRequestTrackingEndWithRequirement:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10adc65c8

// -[LSATrackingComponent didRequestTrackingRestartAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10adc66b4

// -[LSATrackingComponent didRequestTrackingRestartWithExistingTransform:]
// Type encoding: B80@0:8{?=[4]}16
// Implementation: 0x10adc6760

// -[LSATrackingComponent didFinishTrackingProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10adc6904

// -[LSATrackingComponent isDeviceSupported]
// Type encoding: B16@0:8
// Implementation: 0x10adc6908

// -[LSATrackingComponent isTrackingRequirementSupported:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10adc699c

// -[LSATrackingComponent didRecognizeExpression:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc69b8

// -[LSATrackingComponent didRecognizeFaces:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10adc6aa4

// -[LSATrackingComponent requestFinishTrackingProcessingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10adc6b4c

// -[LSATrackingComponent addARAnchors:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc6bdc

// -[LSATrackingComponent removeARAnchors:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc6c44

// -[LSATrackingComponent updateARAnchors:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc6cc0

// -[LSATrackingComponent getWorldTrackingCapabilities]
// Type encoding: {?=BBBB}16@0:8
// Implementation: 0x10adc6d3c

// -[LSATrackingComponent didRequestResetWorldMeshes]
// Type encoding: v16@0:8
// Implementation: 0x10adc6dd0

// -[LSATrackingComponent createTrackedPoint:]
// Type encoding: v24@0:8{LSAObjCppPtrWrapper<const LS::World::TrackedPointParameters>=^{TrackedPointParameters}}16
// Implementation: 0x10adc6e60

// -[LSATrackingComponent deleteTrackedPoint:]
// Type encoding: v20@0:8I16
// Implementation: 0x10adc6ecc

// -[LSATrackingComponent raycastARScene:allowingTarget:alignment:]
// Type encoding: @48@0:8{CGPoint=dd}16q32q40
// Implementation: 0x10adc6f38

// -[LSATrackingComponent delegate]
// Type encoding: @16@0:8
// Implementation: 0x10adc7004

// -[LSATrackingComponent setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc7024

// -[LSATrackingComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adc7038

// -[LSATrackingComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adc7144

@end
