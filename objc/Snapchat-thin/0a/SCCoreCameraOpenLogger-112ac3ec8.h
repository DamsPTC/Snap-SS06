// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCoreCameraOpenLogger
// Superclass: NSObject
// Address: 0x112ac3ec8

@interface SCCoreCameraOpenLogger


// -[SCCoreCameraOpenLogger initWithCameraLoggingServices:cameraUserLoggingServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1008cbb40

// -[SCCoreCameraOpenLogger configureWithSnapSource:isBackCamera:isMainCamera:isMultiCam:cameraType:]
// Type encoding: v44@0:8q16B24B28B32q36
// Implementation: 0x1008cbc7c

// -[SCCoreCameraOpenLogger logCameraOpenEventStart]
// Type encoding: v16@0:8
// Implementation: 0x1008cbee8

// -[SCCoreCameraOpenLogger logCameraOpenEventCameraRunning]
// Type encoding: v16@0:8
// Implementation: 0x10608bff0

// -[SCCoreCameraOpenLogger logCameraOpenEventFirstFrameReceiveSuccessfully]
// Type encoding: v16@0:8
// Implementation: 0x10608c068

// -[SCCoreCameraOpenLogger logCameraOpenEventCameraFailedToOpen]
// Type encoding: v16@0:8
// Implementation: 0x10608c138

// -[SCCoreCameraOpenLogger logCameraOpenFailurePermissionIncomplete]
// Type encoding: v16@0:8
// Implementation: 0x10608c140

// -[SCCoreCameraOpenLogger logCameraOpenFailurePermissionNotGranted]
// Type encoding: v16@0:8
// Implementation: 0x10608c148

// -[SCCoreCameraOpenLogger logCameraOpenEventCameraFailedToOpenWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x10608c14c

// -[SCCoreCameraOpenLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10608c254

@end
