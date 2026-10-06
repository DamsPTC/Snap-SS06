// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainCameraScanCapturer
// Superclass: NSObject
// Address: 0x112af41b8

@interface SCMainCameraScanCapturer

// Property: imageDataObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMainCameraScanCapturer initWithCameraHardwareResource:]
// Type encoding: @24@0:8@16
// Implementation: 0x10673cb94

// -[SCMainCameraScanCapturer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10673cd5c

// -[SCMainCameraScanCapturer startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673cdb4

// -[SCMainCameraScanCapturer stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x10673cfa0

// -[SCMainCameraScanCapturer _didReceiveManagedVideoDataSourceEvent:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10673cfcc

// -[SCMainCameraScanCapturer imageDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10673d060

// -[SCMainCameraScanCapturer beginCaptureWithTouchPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10673d088

// -[SCMainCameraScanCapturer endCapture]
// Type encoding: v16@0:8
// Implementation: 0x10673d1cc

// -[SCMainCameraScanCapturer _captureSingleFrameWithTouchPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10673d1f8

// -[SCMainCameraScanCapturer _didReceiveFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673d268

// -[SCMainCameraScanCapturer _handleFrame:withTouchPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x10673d390

// -[SCMainCameraScanCapturer startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10673d574

// -[SCMainCameraScanCapturer stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10673d894

// -[SCMainCameraScanCapturer _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673d8c0

// -[SCMainCameraScanCapturer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10673d8f4

@end
