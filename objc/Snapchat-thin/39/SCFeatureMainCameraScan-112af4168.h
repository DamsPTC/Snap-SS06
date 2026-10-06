// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMainCameraScan
// Superclass: SCFeature
// Address: 0x112af4168

@interface SCFeatureMainCameraScan

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraUIDelegate; attributes: T@"<SCMainCameraScanDelegate>",W,N,V_cameraUIDelegate
// Property: scanTrayActivationStateObservable; attributes: T@"SCObservable",R,N,V_scanTrayActivationStateObservable

// -[SCFeatureMainCameraScan initWithScanServices:scanFromLensFeatureSettings:applicationLifecycleEventsObservable:capturer:cameraHardwareResource:performer:cameraUIServices:lensCarouselManager:scanConfiguration:scanScopeServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10673acd0

// -[SCFeatureMainCameraScan initWithScanServices:scanFromLensFeatureSettings:cameraHardwareServices:cameraHardwareResource:cameraUIServices:cameraWorkflowDelegate:applicationLifecycleEventsObservable:lensCarouselManager:scanConfiguration:scanScopeServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10673b058

// -[SCFeatureMainCameraScan configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673b270

// -[SCFeatureMainCameraScan activate]
// Type encoding: v16@0:8
// Implementation: 0x10673b3f8

// -[SCFeatureMainCameraScan deactivate]
// Type encoding: v16@0:8
// Implementation: 0x10673b610

// -[SCFeatureMainCameraScan isLaunchedFromMainCamera]
// Type encoding: B16@0:8
// Implementation: 0x10673b614

// -[SCFeatureMainCameraScan activateWithSourceId:withDataSubject:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10673b624

// -[SCFeatureMainCameraScan _activateWithSourceId:withOptionalDataSubject:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10673b6d0

// -[SCFeatureMainCameraScan _beginScanFromSource:activationSourceId:withOptionalDataSubject:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10673b794

// -[SCFeatureMainCameraScan _endScan]
// Type encoding: v16@0:8
// Implementation: 0x10673b918

// -[SCFeatureMainCameraScan _beginQueryFromSource:activationSourceId:requestedAnalyzerServiceIds:optionalDataSubject:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10673b93c

// -[SCFeatureMainCameraScan _beginCaptureSessionWithDataSubject:activationSourceId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10673ba70

// -[SCFeatureMainCameraScan _endQuery]
// Type encoding: v16@0:8
// Implementation: 0x10673bd90

// -[SCFeatureMainCameraScan _presentScanIfNecessary:sourceId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10673be14

// -[SCFeatureMainCameraScan _dismissScanUI]
// Type encoding: v16@0:8
// Implementation: 0x10673bfd0

// -[SCFeatureMainCameraScan _dismissScanIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10673bfe4

// -[SCFeatureMainCameraScan _didDismissScan]
// Type encoding: v16@0:8
// Implementation: 0x10673c1b0

// -[SCFeatureMainCameraScan _dismissScanIfNecessaryToMainCamera]
// Type encoding: v16@0:8
// Implementation: 0x10673c2a0

// -[SCFeatureMainCameraScan _dismissScanIfNecessaryWithFallback]
// Type encoding: v16@0:8
// Implementation: 0x10673c2e8

// -[SCFeatureMainCameraScan scanWantsDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673c340

// -[SCFeatureMainCameraScan scanWantsQueryWithSource:requestedAnalyzerServiceIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10673c480

// -[SCFeatureMainCameraScan didDismissFullscreenModal]
// Type encoding: v16@0:8
// Implementation: 0x10673c4e0

// -[SCFeatureMainCameraScan didDisplayFullscreenModal]
// Type encoding: v16@0:8
// Implementation: 0x10673c598

// -[SCFeatureMainCameraScan setAllCameraUIVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10673c64c

// -[SCFeatureMainCameraScan setCameraHeaderVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10673c760

// -[SCFeatureMainCameraScan setCameraToolbarVisible:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10673c874

// -[SCFeatureMainCameraScan headerItemYOffset]
// Type encoding: d16@0:8
// Implementation: 0x10673c988

// -[SCFeatureMainCameraScan cameraUIDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10673c9cc

// -[SCFeatureMainCameraScan setCameraUIDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673c9ec

// -[SCFeatureMainCameraScan scanTrayActivationStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10673ca00

// -[SCFeatureMainCameraScan .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10673ca10

@end
