// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraStabilityLogger
// Superclass: NSObject
// Address: 0x11287c6f8

@interface SCCameraStabilityLogger


// -[SCCameraStabilityLogger establishPromise]
// Type encoding: v16@0:8
// Implementation: 0x1000e6a04

// -[SCCameraStabilityLogger fulfillPromiseWithValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005d15c8

// -[SCCameraStabilityLogger revokePromise]
// Type encoding: v16@0:8
// Implementation: 0x1029eeb2c

// -[SCCameraStabilityLogger logToSnappableAttemptWith:cameraType:cameraDirection:initialCameraState:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x1008b760c

// -[SCCameraStabilityLogger logToSnappableSuccessWith:cameraType:cameraDirection:initialCameraState:overallLatencyMs:uiRenderLatency:frameRenderLatency:cameraViewWillStartCameraLatency:cameraViewDidStartCameraLatencyMs:isLowLightStatus:isSystemVideoEffectsPortraitActive:splits:]
// Type encoding: v104@0:8q16q24q32q40q48q56q64q72q80B88B92@96
// Implementation: 0x100c6bb4c

// -[SCCameraStabilityLogger logToSnappableFailureWith:cameraType:cameraDirection:initialCameraState:overallLatencyMs:uiRenderLatency:frameRenderLatency:cameraViewWillStartCameraLatency:cameraViewDidStartCameraLatencyMs:splits:failureReason:]
// Type encoding: v104@0:8q16q24q32q40q48q56q64q72q80@88q96
// Implementation: 0x1029ee3b8

// -[SCCameraStabilityLogger logToSnappableInterruptWith:cameraType:cameraDirection:initialCameraState:overallLatencyMs:uiRenderLatency:frameRenderLatency:cameraViewWillStartCameraLatency:cameraViewDidStartCameraLatencyMs:splits:reason:]
// Type encoding: v104@0:8q16q24q32q40q48q56q64q72q80@88q96
// Implementation: 0x1029eea0c

// -[SCCameraStabilityLogger logCameraOpenFailurePermissionIncomplete]
// Type encoding: v16@0:8
// Implementation: 0x1029edd8c

// -[SCCameraStabilityLogger logCameraOpenFailurePermissionNotGranted]
// Type encoding: v16@0:8
// Implementation: 0x1029edd90

// -[SCCameraStabilityLogger logFixSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x1029edd84

// -[SCCameraStabilityLogger logFixFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x1029edd88

// -[SCCameraStabilityLogger configureWithSnapSource:isBackCamera:isMainCamera:isMultiCam:cameraType:]
// Type encoding: v44@0:8q16B24B28B32q36
// Implementation: 0x1029edd70

// -[SCCameraStabilityLogger logCameraOpenEventStart]
// Type encoding: v16@0:8
// Implementation: 0x1029edd74

// -[SCCameraStabilityLogger logCameraOpenEventCameraRunning]
// Type encoding: v16@0:8
// Implementation: 0x1029edd78

// -[SCCameraStabilityLogger logCameraOpenEventFirstFrameReceiveSuccessfully]
// Type encoding: v16@0:8
// Implementation: 0x1029edd7c

// -[SCCameraStabilityLogger logCameraOpenEventCameraFailedToOpen]
// Type encoding: v16@0:8
// Implementation: 0x1029edd80

// -[SCCameraStabilityLogger initWithGrapheneLogger:isDebug:isSimulator:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x1000e6978

// -[SCCameraStabilityLogger init]
// Type encoding: @16@0:8
// Implementation: 0x1029edcd8

// -[SCCameraStabilityLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1029edd38

@end
