// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCameraProviderImpl
// Superclass: NSObject
// Address: 0x112bab098

@interface SCTCameraProviderImpl

// Property: captureState; attributes: T@"SCManagedCapturerState",C,N,V_captureState
// Property: cameraStartTime; attributes: Td,V_cameraStartTime
// Property: isCameraActive; attributes: TB,V_isCameraActive
// Property: cameraFirstFrameTime; attributes: Td,V_cameraFirstFrameTime
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCTCameraProviderDelegate>",W,N,Vdelegate
// Property: isMultitaskingCameraAccessEnabled; attributes: TB,R,N

// -[SCTCameraProviderImpl initWithCameraHardwareServicesAPI:captureDeviceManager:grapheneLogger:cameraHardwareResource:renderTarget:cameraRequestManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10860d7bc

// -[SCTCameraProviderImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10860dc88

// -[SCTCameraProviderImpl isMultitaskingCameraAccessEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10860dcf8

// -[SCTCameraProviderImpl setDevicePositionAsynchronouslyToFront:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10860dd34

// -[SCTCameraProviderImpl startRunningAsynchronouslyWithMultitaskingCamera:cameraDeviceSettingsResolver:isDevicePositionFront:setVideoOrientation:completionHandler:]
// Type encoding: @44@0:8B16@20B28B32@?36
// Implementation: 0x10860ddfc

// -[SCTCameraProviderImpl reportFirstFrameMetrics]
// Type encoding: v16@0:8
// Implementation: 0x10860e0a8

// -[SCTCameraProviderImpl stopRunningAsynchronously:after:setVideoOrientation:withCompletionHandler:]
// Type encoding: v44@0:8@16d24B32@?36
// Implementation: 0x10860e190

// -[SCTCameraProviderImpl activateLensesWithUseVideoCallSource:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10860e28c

// -[SCTCameraProviderImpl deactivateLensesWithUseVideoCallSource:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10860e338

// -[SCTCameraProviderImpl getCameraPreview]
// Type encoding: @16@0:8
// Implementation: 0x10860e3e4

// -[SCTCameraProviderImpl setAutofocusAndExposurePointOfInterest:viewSize:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGSize=dd}32
// Implementation: 0x10860e42c

// -[SCTCameraProviderImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10860e620

// -[SCTCameraProviderImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10860e944

// -[SCTCameraProviderImpl _didChangeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860e970

// -[SCTCameraProviderImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860ea9c

// -[SCTCameraProviderImpl _didReceiveManagedVideoDataSourceEvent:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10860ec88

// -[SCTCameraProviderImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x10860ecf4

// -[SCTCameraProviderImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10860ed20

// -[SCTCameraProviderImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860ed38

// -[SCTCameraProviderImpl captureState]
// Type encoding: @16@0:8
// Implementation: 0x10860ed44

// -[SCTCameraProviderImpl setCaptureState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860ed4c

// -[SCTCameraProviderImpl cameraStartTime]
// Type encoding: d16@0:8
// Implementation: 0x10860ed54

// -[SCTCameraProviderImpl setCameraStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10860ed5c

// -[SCTCameraProviderImpl isCameraActive]
// Type encoding: B16@0:8
// Implementation: 0x10860ed64

// -[SCTCameraProviderImpl setIsCameraActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10860ed70

// -[SCTCameraProviderImpl cameraFirstFrameTime]
// Type encoding: d16@0:8
// Implementation: 0x10860ed78

// -[SCTCameraProviderImpl setCameraFirstFrameTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10860ed80

// -[SCTCameraProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10860ed88

@end
