// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedStillImageCapturerV2
// Superclass: NSObject
// Address: 0x112a40bb8

@interface SCManagedStillImageCapturerV2

// Property: cameraCreationDelayLogger; attributes: T@"SCLazy",&,N,V_cameraCreationDelayLogger
// Property: didFinishPhotoCapture; attributes: TB,N,V_didFinishPhotoCapture
// Property: cameraCaptureLensProvider; attributes: T@"<SCCameraCaptureLensProviding>",&,N,V_cameraCaptureLensProvider
// Property: cameraMLRequestHandler; attributes: T@"<SCCameraMLRequestHandling>",&,N,V_cameraMLRequestHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isCapturingPhoto; attributes: TB,N,V_isCapturingPhoto

// -[SCManagedStillImageCapturerV2 initWithCaptureResource:captureDeviceManager:managedCaptureSession:cameraCreationDelayLogger:systemConfiguration:audioSession:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100c25710

// -[SCManagedStillImageCapturerV2 captureStillImageWithCaptureConfiguration:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054ce6e8

// -[SCManagedStillImageCapturerV2 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1054ce9d0

// -[SCManagedStillImageCapturerV2 setCameraCaptureLensProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c25f64

// -[SCManagedStillImageCapturerV2 _enableThreadSafeCameraMLRequestHandlerSetter]
// Type encoding: B16@0:8
// Implementation: 0x100c26058

// -[SCManagedStillImageCapturerV2 setCameraMLRequestHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c25fd8

// -[SCManagedStillImageCapturerV2 startObservingManagedDeviceCapacityAnalyzerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c27134

// -[SCManagedStillImageCapturerV2 stopObservingManagedDeviceCapacityAnalyzerEvent]
// Type encoding: v16@0:8
// Implementation: 0x1054cea4c

// -[SCManagedStillImageCapturerV2 _didReceiveChangeAdjustingExposureEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c76a8c

// -[SCManagedStillImageCapturerV2 _didReceiveChangeLightingConditionEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054cea78

// -[SCManagedStillImageCapturerV2 _didChangeAdjustingExposureWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c71fcc

// -[SCManagedStillImageCapturerV2 startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100c26568

// -[SCManagedStillImageCapturerV2 stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1054ceb60

// -[SCManagedStillImageCapturerV2 setCaptureDeadline:]
// Type encoding: v20@0:8f16
// Implementation: 0x100c76b84

// -[SCManagedStillImageCapturerV2 _didChangeAdjustingExposure:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c722bc

// -[SCManagedStillImageCapturerV2 _startPhotoCapture]
// Type encoding: v16@0:8
// Implementation: 0x1054ceb8c

// -[SCManagedStillImageCapturerV2 _capturePhotoWithCaptureComponent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054cedb4

// -[SCManagedStillImageCapturerV2 _fallbackToVideoBufferDeadline]
// Type encoding: d16@0:8
// Implementation: 0x1054cef70

// -[SCManagedStillImageCapturerV2 _processEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054cf1bc

// -[SCManagedStillImageCapturerV2 _publishWillCapturePhotoNotification]
// Type encoding: v16@0:8
// Implementation: 0x1054cf3ac

// -[SCManagedStillImageCapturerV2 _publishDidCapturePhotoNotification]
// Type encoding: v16@0:8
// Implementation: 0x1054cf670

// -[SCManagedStillImageCapturerV2 _photoCaptureEndWithStillImageData:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054cf848

// -[SCManagedStillImageCapturerV2 isAsync]
// Type encoding: B16@0:8
// Implementation: 0x1054cf924

// -[SCManagedStillImageCapturerV2 observeSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054cf92c

// -[SCManagedStillImageCapturerV2 observeSampleBufferAsynchronously:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054cf934

// -[SCManagedStillImageCapturerV2 startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c26f6c

// -[SCManagedStillImageCapturerV2 stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x1054cf93c

// -[SCManagedStillImageCapturerV2 cameraCreationDelayLogger]
// Type encoding: @16@0:8
// Implementation: 0x1054cf944

// -[SCManagedStillImageCapturerV2 setCameraCreationDelayLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054cf94c

// -[SCManagedStillImageCapturerV2 cameraCaptureLensProvider]
// Type encoding: @16@0:8
// Implementation: 0x1054cf97c

// -[SCManagedStillImageCapturerV2 cameraMLRequestHandler]
// Type encoding: @16@0:8
// Implementation: 0x1054cf984

// -[SCManagedStillImageCapturerV2 isCapturingPhoto]
// Type encoding: B16@0:8
// Implementation: 0x100c2c0a0

// -[SCManagedStillImageCapturerV2 setIsCapturingPhoto:]
// Type encoding: v20@0:8B16
// Implementation: 0x1054cf98c

// -[SCManagedStillImageCapturerV2 didFinishPhotoCapture]
// Type encoding: B16@0:8
// Implementation: 0x1054cf994

// -[SCManagedStillImageCapturerV2 setDidFinishPhotoCapture:]
// Type encoding: v20@0:8B16
// Implementation: 0x1054cf99c

// -[SCManagedStillImageCapturerV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054cf9a4

@end
