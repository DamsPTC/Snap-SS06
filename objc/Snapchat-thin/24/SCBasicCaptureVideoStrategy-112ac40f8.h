// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBasicCaptureVideoStrategy
// Superclass: NSObject
// Address: 0x112ac40f8

@interface SCBasicCaptureVideoStrategy

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBasicCaptureVideoStrategy initWithVideoCaptureStrategyEvents:recordingFileURLGenerator:cameraHardwareServicesAPI:captureDeviceManager:cameraConfigurationServices:cameraHardwareResource:cameraCaptureRequestHandler:circumstanceEngine:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10608f664

// -[SCBasicCaptureVideoStrategy dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10608f914

// -[SCBasicCaptureVideoStrategy startRecordingWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608f958

// -[SCBasicCaptureVideoStrategy stopRecording]
// Type encoding: v16@0:8
// Implementation: 0x10608fa4c

// -[SCBasicCaptureVideoStrategy cancelRecordingWithShouldAbort:cancelReason:callsite:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10608fa58

// -[SCBasicCaptureVideoStrategy scheduleRecordRequestWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608faa0

// -[SCBasicCaptureVideoStrategy startRecordWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608fd28

// -[SCBasicCaptureVideoStrategy stopRecord]
// Type encoding: v16@0:8
// Implementation: 0x106090258

// -[SCBasicCaptureVideoStrategy cancelRecordRequest]
// Type encoding: v16@0:8
// Implementation: 0x106090420

// -[SCBasicCaptureVideoStrategy abortRecordWithShouldAbort:cancelReason:callsite:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x1060904d0

// -[SCBasicCaptureVideoStrategy completeWithVideo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060905e0

// -[SCBasicCaptureVideoStrategy completeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106090694

// -[SCBasicCaptureVideoStrategy startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106090748

// -[SCBasicCaptureVideoStrategy stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106090da8

// -[SCBasicCaptureVideoStrategy _startRecordingCompletionHandlerWithActiveSessionInfo:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106090dd4

// -[SCBasicCaptureVideoStrategy _handleRecordingResultWithRecordedVideo:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106090e28

// -[SCBasicCaptureVideoStrategy _capturerDidFailRecordingWithError:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106090f8c

// -[SCBasicCaptureVideoStrategy _capturerWillFinishRecordingWithRecordedVideoFuture:session:videoSize:placeholderImage:]
// Type encoding: v56@0:8@16@24{CGSize=dd}32@48
// Implementation: 0x106090fd4

// -[SCBasicCaptureVideoStrategy _capturerDidCancelRecordingWithCapturerState:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060911f0

// -[SCBasicCaptureVideoStrategy _capturerDidFinishRecordingWithCapturerState:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106091244

// -[SCBasicCaptureVideoStrategy _capturerDidBeginRecordingWithCapturerState:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106091298

// -[SCBasicCaptureVideoStrategy _capturerWillBeginRecordingWithCapturerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060912ec

// -[SCBasicCaptureVideoStrategy _adjustedRecordingDurationForAudioConfiguration:]
// Type encoding: d24@0:8@16
// Implementation: 0x10609133c

// -[SCBasicCaptureVideoStrategy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060913a8

@end
