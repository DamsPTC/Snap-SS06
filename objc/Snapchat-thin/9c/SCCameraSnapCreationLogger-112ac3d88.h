// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraSnapCreationLogger
// Superclass: NSObject
// Address: 0x112ac3d88

@interface SCCameraSnapCreationLogger


// -[SCCameraSnapCreationLogger initWithCameraUserBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060856a8

// -[SCCameraSnapCreationLogger logDirectSnapActionEventWithCaptureSessionId:snapSessionId:isImage:lensesActive:activeLensID:activeCameraModes:cameraSource:snapSource:]
// Type encoding: v72@0:8@16@24B32B36@40@48q56@64
// Implementation: 0x106085728

// -[SCCameraSnapCreationLogger logCameraSnapCreateStepWithCaptureSessionId:stepName:stepDescription:isFingerDownCapture:isBatchCapture:playbackSessionId:cameraType:extras:]
// Type encoding: v72@0:8@16@24@32B40B44@48q56@64
// Implementation: 0x10608591c

// -[SCCameraSnapCreationLogger logDirectSnapCaptureLossWithCaptureSessionId:isImage:isFingerDownCapture:isBatchCapture:snapSource:errorMessage:]
// Type encoding: v52@0:8@16B24B28B32q36@44
// Implementation: 0x106085ab8

// -[SCCameraSnapCreationLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106085cc8

@end
