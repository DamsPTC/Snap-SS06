// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraDataSource
// Superclass: NSObject
// Address: 0x112ad4c78

@interface SCCameraDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCViewfinderDataSourceDelegate>",W,N,V_delegate
// Property: context; attributes: T@"NSString",R,C,N,V_context
// Property: audioHandler; attributes: T@"<SCAudioHandler>",R,N
// Property: captureHandler; attributes: T@"<SCCaptureHandler>",R,N
// Property: positionSettingHandler; attributes: T@"<SCPositionSettingHandler>",R,N
// Property: zoomingHandler; attributes: T@"<SCZoomingHandler>",R,N
// Property: sampleBufferMetadataProvider; attributes: T@"<SCSampleBufferMetadataProvider>",R,N

// -[SCCameraDataSource initWithCameraRequestHandler:cameraCaptureRequestHandler:cameraHardwareResource:captureDeviceManager:cameraHardwareOwnershipRequester:primaryDevicePosition:secondaryDevicePositions:cameraConfigurationServices:audioSessionServices:userSession:context:circumstanceEngine:]
// Type encoding: @112@0:8@16@24@32@40@48q56Q64@72@80@88@96@104
// Implementation: 0x1062117a4

// -[SCCameraDataSource start]
// Type encoding: @16@0:8
// Implementation: 0x106211a18

// -[SCCameraDataSource captureHandler]
// Type encoding: @16@0:8
// Implementation: 0x106211b58

// -[SCCameraDataSource audioHandler]
// Type encoding: @16@0:8
// Implementation: 0x106211b60

// -[SCCameraDataSource positionSettingHandler]
// Type encoding: @16@0:8
// Implementation: 0x106211b68

// -[SCCameraDataSource zoomingHandler]
// Type encoding: @16@0:8
// Implementation: 0x106211b70

// -[SCCameraDataSource sampleBufferMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x106211b78

// -[SCCameraDataSource didInvalidateAllTokens]
// Type encoding: v16@0:8
// Implementation: 0x106211ba0

// -[SCCameraDataSource didReceiveSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106211bf4

// -[SCCameraDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x106211c48

// -[SCCameraDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106211c60

// -[SCCameraDataSource context]
// Type encoding: @16@0:8
// Implementation: 0x106211c6c

// -[SCCameraDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106211c74

@end
