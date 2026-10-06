// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCameraServices
// Superclass: NSObject
// Address: 0x112bab0e8

@interface SCTCameraServices

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: aspectRatio; attributes: Td,R,N

// -[SCTCameraServices initWithCameraHardwareServicesAPI:captureDeviceManager:grapheneLogger:cameraHardwareResource:renderTarget:cameraRequestManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10860ee14

// -[SCTCameraServices aspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x10860f144

// -[SCTCameraServices _appStartComplete]
// Type encoding: v16@0:8
// Implementation: 0x10860f1a4

// -[SCTCameraServices activateLensesWithUseVideoCallSource:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10860f22c

// -[SCTCameraServices deactivateLensesWithUseVideoCallSource:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10860f28c

// -[SCTCameraServices startCameraForConsumer:cameraDeviceSettingsResolver:withMultitaskingCamera:setVideoOrientation:completion:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x10860f2ec

// -[SCTCameraServices stopCameraForConsumer:setVideoOrientation:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10860f560

// -[SCTCameraServices setAutofocusAndExposurePointOfInterest:viewSize:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGSize=dd}32
// Implementation: 0x10860f78c

// -[SCTCameraServices getCameraProvider]
// Type encoding: @16@0:8
// Implementation: 0x10860f7ec

// -[SCTCameraServices acquirePreviewWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10860f858

// -[SCTCameraServices setVideoFrameReceiver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860f900

// -[SCTCameraServices setCameraType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10860f90c

// -[SCTCameraServices getCameraType]
// Type encoding: Q16@0:8
// Implementation: 0x10860f964

// -[SCTCameraServices cameraProvider:didOutputSampleBuffer:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x10860f96c

// -[SCTCameraServices cameraProviderDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860f9a0

// -[SCTCameraServices cameraProviderDidEndInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860f9b0

// -[SCTCameraServices isMultitaskingCameraAccessEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10860f9c0

// -[SCTCameraServices isCameraInterruptedObservable]
// Type encoding: @16@0:8
// Implementation: 0x10860f9fc

// -[SCTCameraServices cameraLifecycleObservable]
// Type encoding: @16@0:8
// Implementation: 0x10860fa04

// -[SCTCameraServices .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10860fa2c

@end
