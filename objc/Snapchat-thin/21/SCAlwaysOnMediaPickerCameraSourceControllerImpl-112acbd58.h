// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAlwaysOnMediaPickerCameraSourceControllerImpl
// Superclass: NSObject
// Address: 0x112acbd58

@interface SCAlwaysOnMediaPickerCameraSourceControllerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl initWithCameraHardwareResource:cameraHardwareServicesAPI:lensLogger:ngsmePlaybackServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106104484

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl updateCameraWithMediaSource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10610457c

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl restoreCameraStreamWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1061047a4

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl managedVideoDataSource:sampleBufferAtTime:isRecording:]
// Type encoding: ^{opaqueCMSampleBuffer=}36@0:8@16d24B32
// Implementation: 0x106104864

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl managedVideoDataSourceDidStartStreaming:performer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106104930

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl managedVideoDataSourceDidStopStreaming:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061049dc

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl mediaSizeOfManagedVideoDataSource]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106104a58

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl mediaAspectRatioOfManagedVideoDataSource]
// Type encoding: d16@0:8
// Implementation: 0x106104a60

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateCameraWithVideoURL:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106104a68

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateCameraWithImageURL:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106104bc8

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateCameraWithImage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106104c8c

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _restoreCameraHardwareResourceStreamProvider]
// Type encoding: v16@0:8
// Implementation: 0x106104d60

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _setCameraHardwareResourceStreamProviderToSelf]
// Type encoding: v16@0:8
// Implementation: 0x106104e04

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateInnerStreamProvider:mediaType:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x106104f30

// -[SCAlwaysOnMediaPickerCameraSourceControllerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061050c8

@end
