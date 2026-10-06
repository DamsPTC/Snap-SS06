// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraViewfinderDevice
// Superclass: NSObject
// Address: 0x112ad4cc8

@interface SCCameraViewfinderDevice

// Property: captureHandler; attributes: T@"<SCCaptureHandler>",R,N,V_captureHandler
// Property: zoomingHandler; attributes: T@"<SCZoomingHandler>",R,N,V_zoomingHandler
// Property: positionSettingHandler; attributes: T@"<SCPositionSettingHandler>",R,N,V_positionSettingHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraViewfinderDevice initWithCameraRequestHandler:cameraCaptureRequestHandler:cameraHardwareResource:primaryDevicePosition:secondaryDevicePositions:cameraConfigurationServices:audioSessionServices:userSession:context:delegate:circumstanceEngine:]
// Type encoding: @104@0:8@16@24@32q40Q48@56@64@72@80@88@96
// Implementation: 0x106211d2c

// -[SCCameraViewfinderDevice start]
// Type encoding: v16@0:8
// Implementation: 0x106211f84

// -[SCCameraViewfinderDevice stop]
// Type encoding: v16@0:8
// Implementation: 0x10621200c

// -[SCCameraViewfinderDevice dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106212014

// -[SCCameraViewfinderDevice captureOutput:didOutputSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x10621205c

// -[SCCameraViewfinderDevice captureOutput:didDropSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x106212118

// -[SCCameraViewfinderDevice _submitStopOperationWithStreamingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621211c

// -[SCCameraViewfinderDevice captureHandler]
// Type encoding: @16@0:8
// Implementation: 0x1062121a4

// -[SCCameraViewfinderDevice zoomingHandler]
// Type encoding: @16@0:8
// Implementation: 0x1062121ac

// -[SCCameraViewfinderDevice positionSettingHandler]
// Type encoding: @16@0:8
// Implementation: 0x1062121b4

// -[SCCameraViewfinderDevice .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062121bc

@end
