// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureVideoDataSourceObserver
// Superclass: NSObject
// Address: 0x112acef08

@interface SCCaptureVideoDataSourceObserver

// Property: cameraCaptureLensProvider; attributes: T@"<SCCameraCaptureLensProviding>",W,V_cameraCaptureLensProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptureVideoDataSourceObserver initWithCaptureResource:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c25a7c

// -[SCCaptureVideoDataSourceObserver dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10619fc5c

// -[SCCaptureVideoDataSourceObserver fetchImmediateVideoBuffer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10619fca0

// -[SCCaptureVideoDataSourceObserver _didReceiveManagedVideoDataSourceEvent:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x100c2d278

// -[SCCaptureVideoDataSourceObserver startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c26f74

// -[SCCaptureVideoDataSourceObserver stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x10619fd1c

// -[SCCaptureVideoDataSourceObserver isAsync]
// Type encoding: B16@0:8
// Implementation: 0x10619fd48

// -[SCCaptureVideoDataSourceObserver observeSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10619fd50

// -[SCCaptureVideoDataSourceObserver observeSampleBufferAsynchronously:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10619fdc4

// -[SCCaptureVideoDataSourceObserver cameraCaptureLensProvider]
// Type encoding: @16@0:8
// Implementation: 0x10619fdc8

// -[SCCaptureVideoDataSourceObserver setCameraCaptureLensProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c25fcc

// -[SCCaptureVideoDataSourceObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10619fde0

@end
