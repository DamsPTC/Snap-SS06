// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureSystemCaptureComponent
// Superclass: SCCaptureImageCaptureBaseComponent
// Address: 0x112a40cf8

@interface SCCaptureSystemCaptureComponent

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptureSystemCaptureComponent initWithCaptureSession:captureResource:photoSettings:captureConfiguration:cameraCaptureLensProvider:audioSession:cameraCreationDelayLogger:capturePerformer:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1054d107c

// -[SCCaptureSystemCaptureComponent capturePhotoImpl]
// Type encoding: v16@0:8
// Implementation: 0x1054d124c

// -[SCCaptureSystemCaptureComponent captureOutput:willBeginCaptureForResolvedSettings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054d13d0

// -[SCCaptureSystemCaptureComponent captureOutput:willCapturePhotoForResolvedSettings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054d1438

// -[SCCaptureSystemCaptureComponent captureOutput:didCapturePhotoForResolvedSettings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054d14a0

// -[SCCaptureSystemCaptureComponent captureOutput:didFinishProcessingPhoto:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054d1518

// -[SCCaptureSystemCaptureComponent _publishEventWithStage:stillImageData:error:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x1054d17a8

// -[SCCaptureSystemCaptureComponent _setupShutterSoundDisposingTimer]
// Type encoding: @16@0:8
// Implementation: 0x1054d1944

// -[SCCaptureSystemCaptureComponent _disposeShutterSound]
// Type encoding: v16@0:8
// Implementation: 0x1054d1a9c

// -[SCCaptureSystemCaptureComponent _startShutterSoundDisposingTimerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1054d1aa4

// -[SCCaptureSystemCaptureComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054d1df0

@end
