// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureCameraImageDegradationLevelLogger
// Superclass: SCFeature
// Address: 0x112ac4fa8

@interface SCFeatureCameraImageDegradationLevelLogger


// -[SCFeatureCameraImageDegradationLevelLogger initWithBlizzardLogger:cameraHardwareResource:modelProvider:imageDegradationLevelLoggerConfig:applicationLifecycleEvents:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1060c68c0

// -[SCFeatureCameraImageDegradationLevelLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1060c6a50

// -[SCFeatureCameraImageDegradationLevelLogger beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060c6a94

// -[SCFeatureCameraImageDegradationLevelLogger _onDidCaptureImageWithStillImageData:configuration:deviceOrientation:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1060c6e60

// -[SCFeatureCameraImageDegradationLevelLogger _loadModelIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1060c712c

// -[SCFeatureCameraImageDegradationLevelLogger _imageWithImage:convertToSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1060c742c

// -[SCFeatureCameraImageDegradationLevelLogger _inferAndLogDegradationLevelWithImage:captureSessionId:pixelWidth:pixelHeight:]
// Type encoding: v48@0:8@16@24Q32Q40
// Implementation: 0x1060c74a4

// -[SCFeatureCameraImageDegradationLevelLogger _shouldSampleWithRate:]
// Type encoding: B20@0:8f16
// Implementation: 0x1060c78bc

// -[SCFeatureCameraImageDegradationLevelLogger _observeApplicationLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c7910

// -[SCFeatureCameraImageDegradationLevelLogger _didReceiveMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c7a5c

// -[SCFeatureCameraImageDegradationLevelLogger _respondToMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x1060c7b54

// -[SCFeatureCameraImageDegradationLevelLogger _shouldProcessImage]
// Type encoding: B16@0:8
// Implementation: 0x1060c7bac

// -[SCFeatureCameraImageDegradationLevelLogger _stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1060c7c3c

// -[SCFeatureCameraImageDegradationLevelLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060c7c94

@end
