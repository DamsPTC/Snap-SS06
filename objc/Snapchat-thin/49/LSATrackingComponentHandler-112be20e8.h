// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATrackingComponentHandler
// Superclass: NSObject
// Address: 0x112be20e8

@interface LSATrackingComponentHandler

// Property: arKitObservable; attributes: T@"SCObservable",R,N,V_arKitSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSATrackingComponentHandler initWithCaptureResource:cameraHardwareAPIImpl:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109030eb0

// -[LSATrackingComponentHandler restartTrackingAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x109030f60

// -[LSATrackingComponentHandler _restartTrackingWithTransform:initialPlacementScale:]
// Type encoding: v88@0:8{?=[4]}16d80
// Implementation: 0x1090310fc

// -[LSATrackingComponentHandler beginTrackingWithParameters:]
// Type encoding: B22@0:8{?={?=BBB}BBB}16
// Implementation: 0x10903140c

// -[LSATrackingComponentHandler updateTrackingParameters:]
// Type encoding: B22@0:8{?={?=BBB}BBB}16
// Implementation: 0x1090315b8

// -[LSATrackingComponentHandler trackingComponentResetTracking]
// Type encoding: B16@0:8
// Implementation: 0x1090317d4

// -[LSATrackingComponentHandler trackingComponentEndTracking]
// Type encoding: B16@0:8
// Implementation: 0x109031a68

// -[LSATrackingComponentHandler latestARFrame]
// Type encoding: @16@0:8
// Implementation: 0x109031bd0

// -[LSATrackingComponentHandler latestDepthData]
// Type encoding: @16@0:8
// Implementation: 0x109031dcc

// -[LSATrackingComponentHandler restartTrackingWithExistingTrackingData:]
// Type encoding: B96@0:8{?={?=[4]}d}16
// Implementation: 0x109031eb0

// -[LSATrackingComponentHandler trackingComponentFinishedTrackingProcessing]
// Type encoding: v16@0:8
// Implementation: 0x109031ed4

// -[LSATrackingComponentHandler trackingComponentIsNativeTrackingSupported]
// Type encoding: B16@0:8
// Implementation: 0x109031fbc

// -[LSATrackingComponentHandler createTrackedPoint:]
// Type encoding: @80@0:8{?=[4]}16
// Implementation: 0x109031fc8

// -[LSATrackingComponentHandler deleteTrackedPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x109032094

// -[LSATrackingComponentHandler getWorldTrackingCapabilities]
// Type encoding: {?=BBBB}16@0:8
// Implementation: 0x10903213c

// -[LSATrackingComponentHandler raycastARScene:allowingTarget:alignment:]
// Type encoding: @48@0:8{CGPoint=dd}16q32q40
// Implementation: 0x1090321c4

// -[LSATrackingComponentHandler didRequestResetWorldMeshes]
// Type encoding: v16@0:8
// Implementation: 0x109032288

// -[LSATrackingComponentHandler arKitObservable]
// Type encoding: @16@0:8
// Implementation: 0x109032328

// -[LSATrackingComponentHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109032330

@end
