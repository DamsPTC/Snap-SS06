// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraLegacyDataSource
// Superclass: NSObject
// Address: 0x112ad4ae8

@interface SCCameraLegacyDataSource

// Property: cameraVisible; attributes: TB,V_cameraVisible
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

// -[SCCameraLegacyDataSource initWithCameraHardwareResource:captureDeviceManager:configurationFactory:cameraVisibilityObservable:isLiveStreaming:context:]
// Type encoding: @60@0:8@16@24@32@40B48@52
// Implementation: 0x10068b64c

// -[SCCameraLegacyDataSource start]
// Type encoding: @16@0:8
// Implementation: 0x1006c6cf8

// -[SCCameraLegacyDataSource captureHandler]
// Type encoding: @16@0:8
// Implementation: 0x10620ff54

// -[SCCameraLegacyDataSource audioHandler]
// Type encoding: @16@0:8
// Implementation: 0x1006be5f8

// -[SCCameraLegacyDataSource positionSettingHandler]
// Type encoding: @16@0:8
// Implementation: 0x10620ff5c

// -[SCCameraLegacyDataSource zoomingHandler]
// Type encoding: @16@0:8
// Implementation: 0x10620ff64

// -[SCCameraLegacyDataSource sampleBufferMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1006bdffc

// -[SCCameraLegacyDataSource didInvalidateAllTokens]
// Type encoding: v16@0:8
// Implementation: 0x10620ff6c

// -[SCCameraLegacyDataSource didOutputSampleBuffer:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x100709648

// -[SCCameraLegacyDataSource managedAudioDataSource:didOutputSampleBuffer:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x10620ffa0

// -[SCCameraLegacyDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x10087d50c

// -[SCCameraLegacyDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006ba98c

// -[SCCameraLegacyDataSource context]
// Type encoding: @16@0:8
// Implementation: 0x1006b8c90

// -[SCCameraLegacyDataSource cameraVisible]
// Type encoding: B16@0:8
// Implementation: 0x10070971c

// -[SCCameraLegacyDataSource setCameraVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10087d504

// -[SCCameraLegacyDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106210034

@end
