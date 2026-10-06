// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingReverseCameraController
// Superclass: NSObject
// Address: 0x112bbb718

@interface SCLensProcessingReverseCameraController

// Property: isLoading; attributes: TB,R,N
// Property: dataSourceStream; attributes: T@"<SCLensProcessingExternalStream>",&,V_dataSourceStream
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: resourceId; attributes: T@"NSString",R,N

// -[SCLensProcessingReverseCameraController initWithCameraHardwareServicesAPIImpl:cameraHardwareResource:containerViewFuture:deviceSettingsResolver:cameraDeviceSettingsConfiguration:cameraUsageTier:]
// Type encoding: @64@0:8@16@24@32@40@48Q56
// Implementation: 0x108c92f64

// -[SCLensProcessingReverseCameraController activateReverseCameraForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c93098

// -[SCLensProcessingReverseCameraController deactivateReverseCamera]
// Type encoding: v16@0:8
// Implementation: 0x108c9315c

// -[SCLensProcessingReverseCameraController resourceId]
// Type encoding: @16@0:8
// Implementation: 0x108c931dc

// -[SCLensProcessingReverseCameraController currentCVPixelBufferRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x108c931e8

// -[SCLensProcessingReverseCameraController preferredFrameTransformForReverseCamera]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x108c93224

// -[SCLensProcessingReverseCameraController didRegisterProviderToken:noFormatFoundError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c93274

// -[SCLensProcessingReverseCameraController didUnregisterProviderToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c932c4

// -[SCLensProcessingReverseCameraController featureNameForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c932f0

// -[SCLensProcessingReverseCameraController _setSecondaryCameraStreamProvider]
// Type encoding: v16@0:8
// Implementation: 0x108c932fc

// -[SCLensProcessingReverseCameraController _setSecondaryCameraStreamProviderIfStillLoading]
// Type encoding: v16@0:8
// Implementation: 0x108c93384

// -[SCLensProcessingReverseCameraController startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c93484

// -[SCLensProcessingReverseCameraController stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x108c936ac

// -[SCLensProcessingReverseCameraController _didDeliverSecondarySampleBufferToLensCore]
// Type encoding: v16@0:8
// Implementation: 0x108c936d8

// -[SCLensProcessingReverseCameraController setIsLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c937c8

// -[SCLensProcessingReverseCameraController isLoading]
// Type encoding: B16@0:8
// Implementation: 0x108c939c0

// -[SCLensProcessingReverseCameraController _didStopLoadingWithContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c939c8

// -[SCLensProcessingReverseCameraController dataSourceStream]
// Type encoding: @16@0:8
// Implementation: 0x108c939e0

// -[SCLensProcessingReverseCameraController setDataSourceStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c939ec

// -[SCLensProcessingReverseCameraController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c939f4

@end
