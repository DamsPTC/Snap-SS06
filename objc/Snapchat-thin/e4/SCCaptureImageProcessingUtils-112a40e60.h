// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureImageProcessingUtils
// Superclass: NSObject
// Address: 0x112a40e60

@interface SCCaptureImageProcessingUtils


// +[SCCaptureImageProcessingUtils stillImageDataFromPhoto:captureConfiguration:cameraCaptureLensProvider:captureResource:cameraCreationDelayLogger:viewportOrientation:]
// Type encoding: @64@0:8@16@24@32@40@48Q56
// Implementation: 0x1054d3930

// +[SCCaptureImageProcessingUtils stillImageDataFromVideoImage:captureConfiguration:sampleBufferMetadata:cameraInfo:cameraCaptureLensProvider:captureResource:cameraCreationDelayLogger:isLiveStream:]
// Type encoding: @80@0:8@16@24{SampleBufferMetadata=iff}32@44@52@60@68B76
// Implementation: 0x1054d3ef4

// +[SCCaptureImageProcessingUtils _healthInfoDataForLens:captureResource:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054d41b4

// +[SCCaptureImageProcessingUtils _croppedImageFromFullScreenImage:captureConfiguration:maxPixelSize:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x1054d4330

// +[SCCaptureImageProcessingUtils _shouldApplyLensEffectWithCameraCaptureLensProvider:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054d45f0

@end
