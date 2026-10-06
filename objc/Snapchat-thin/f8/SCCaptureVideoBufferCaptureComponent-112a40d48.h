// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureVideoBufferCaptureComponent
// Superclass: SCCaptureImageCaptureBaseComponent
// Address: 0x112a40d48

@interface SCCaptureVideoBufferCaptureComponent


// -[SCCaptureVideoBufferCaptureComponent initWithCaptureResource:captureConfiguration:cameraCreationDelayLogger:cameraCaptureLensProvider:videoDataSourceObserver:capturePerformer:cameraMLRequestHandler:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1054d1eac

// -[SCCaptureVideoBufferCaptureComponent capturePhotoImpl]
// Type encoding: v16@0:8
// Implementation: 0x1054d2054

// -[SCCaptureVideoBufferCaptureComponent _orientationOfImageCreatedFromVideoSourceWithDevicePosition:]
// Type encoding: q24@0:8q16
// Implementation: 0x1054d2258

// -[SCCaptureVideoBufferCaptureComponent _processFingerDownCaptureData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054d2320

// -[SCCaptureVideoBufferCaptureComponent _didCaptureVideoBuffer:devicePosition:]
// Type encoding: v32@0:8^{opaqueCMSampleBuffer=}16q24
// Implementation: 0x1054d2514

// -[SCCaptureVideoBufferCaptureComponent _fetchVideoBufferAndCapture]
// Type encoding: v16@0:8
// Implementation: 0x1054d2964

// -[SCCaptureVideoBufferCaptureComponent _publishEventWithStage:stillImageData:error:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x1054d2a60

// -[SCCaptureVideoBufferCaptureComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054d2b90

@end
