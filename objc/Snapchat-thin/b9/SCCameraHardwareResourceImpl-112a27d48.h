// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraHardwareResourceImpl
// Superclass: NSObject
// Address: 0x112a27d48

@interface SCCameraHardwareResourceImpl

// Property: managedCapturerStateCoordinator; attributes: T@"SCLazy",R,N,V_managedCapturerStateCoordinator
// Property: state; attributes: T@"SCManagedCapturerState",&,N
// Property: secondaryDevicePositions; attributes: TQ,N,V_secondaryDevicePositions
// Property: tokenSet; attributes: T@"<SCCapturerTokenSet>",&,N,V_tokenSet
// Property: trackingParameters; attributes: T{?={?=BBBBB}},N,V_trackingParameters
// Property: arSession; attributes: T@"ARSession",&,N,V_arSession
// Property: debugInfoDict; attributes: T@"NSDictionary",C,N,V_debugInfoDict
// Property: stillImageCapturer; attributes: T@"<SCPhotoCapturer>",&,N,V_stillImageCapturer
// Property: stillImageCapturerObservable; attributes: T@"SCObservable",&,N,V_stillImageCapturerSubject
// Property: videoCapturer; attributes: T@"<SCManagedVideoCapturer>",&,N,V_videoCapturer
// Property: videoCapturerObservable; attributes: T@"SCObservable",&,N,V_videoCapturerSubject
// Property: arImageCapturer; attributes: T@"<SCStillImageCapturer><SCManagedVideoDataSourceOutputEventObserver>",&,N,V_arImageCapturer
// Property: videoDataSource; attributes: T@"<SCManagedVideoARDataSource>",&,N,V_videoDataSource
// Property: videoDataSourceObservable; attributes: T@"SCObservable",R,N,V_videoDataSourceObservable
// Property: videoDataSourceStreamProvider; attributes: T@"<SCManagedVideoDataSourceStreamProvider>",&,N,V_videoDataSourceStreamProvider
// Property: isLiveStreaming; attributes: TB,R,N
// Property: frameProcessLatencyReporter; attributes: T@"<SCFrameProcessLatencyReporter>",&,N,V_frameProcessLatencyReporter
// Property: frameHealthChecker; attributes: T@"<SCManagedFrameHealthChecker>",&,N,V_frameHealthChecker
// Property: queuePerformer; attributes: T@"<SCPerforming>",&,N,V_queuePerformer
// Property: validateTokenBeforeStartingCamera; attributes: TB,N,V_validateTokenBeforeStartingCamera
// Property: appInBackground; attributes: TB,N,V_appInBackground
// Property: notificationRegistered; attributes: TB,N,V_notificationRegistered
// Property: deviceMotionManager; attributes: T@"SCLazy",&,N,V_deviceMotionManager
// Property: blackCameraNoOutputDetector; attributes: T@"<SCBlackCameraNoOutputDetector>",&,N,V_blackCameraNoOutputDetector
// Property: viewStabilityMonitor; attributes: T@"<SCCameraViewStabilityMonitor>",&,N,V_viewStabilityMonitor
// Property: stateStabilityMonitor; attributes: T@"<SCCameraStateStabilityMonitor>",&,N,V_stateStabilityMonitor
// Property: frameStabilityMonitor; attributes: T@"<SCCameraFrameStabilityMonitor>",&,N,V_frameStabilityMonitor
// Property: videoStreamStabilityMonitor; attributes: T@"<SCCameraVideoStreamStabilityMonitor>",&,N,V_videoStreamStabilityMonitor
// Property: stateListener; attributes: T@"<SCCaptureSessionStateListening>",R,N
// Property: captureSessionFixer; attributes: T@"<SCBlackCameraDetectorDelegate><SCCaptureSessionFixing><SCCaptureSessionStateListening>",&,N,V_captureSessionFixer
// Property: sessionRuntimeErrorHandler; attributes: T@"NSObject",&,N,V_sessionRuntimeErrorHandler

// -[SCCameraHardwareResourceImpl initWithQueuePerformer:deviceMotionManager:blizzardLogger:perfLogger:managedCapturerStateCoordinator:isCaptureDeviceManagerEnabled:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x1000bcfd4

// -[SCCameraHardwareResourceImpl state]
// Type encoding: @16@0:8
// Implementation: 0x1000d8180

// -[SCCameraHardwareResourceImpl setState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100353604

// -[SCCameraHardwareResourceImpl capturerStateUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x100115a18

// -[SCCameraHardwareResourceImpl stateListener]
// Type encoding: @16@0:8
// Implementation: 0x100c238f0

// -[SCCameraHardwareResourceImpl setVideoDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003529f0

// -[SCCameraHardwareResourceImpl setStillImageCapturer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c25aec

// -[SCCameraHardwareResourceImpl setVideoCapturer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c26d14

// -[SCCameraHardwareResourceImpl setVideoDataSourceStreamProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed364

// -[SCCameraHardwareResourceImpl isLiveStreaming]
// Type encoding: B16@0:8
// Implementation: 0x1052ed3bc

// -[SCCameraHardwareResourceImpl trackingParameters]
// Type encoding: {?={?=BBBBB}}16@0:8
// Implementation: 0x1052ed3fc

// -[SCCameraHardwareResourceImpl setTrackingParameters:]
// Type encoding: v21@0:8{?={?=BBBBB}}16
// Implementation: 0x1052ed40c

// -[SCCameraHardwareResourceImpl arSession]
// Type encoding: @16@0:8
// Implementation: 0x1003525dc

// -[SCCameraHardwareResourceImpl setArSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed41c

// -[SCCameraHardwareResourceImpl arImageCapturer]
// Type encoding: @16@0:8
// Implementation: 0x10070950c

// -[SCCameraHardwareResourceImpl setArImageCapturer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c26f3c

// -[SCCameraHardwareResourceImpl videoDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10034d248

// -[SCCameraHardwareResourceImpl queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1000d273c

// -[SCCameraHardwareResourceImpl setQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed44c

// -[SCCameraHardwareResourceImpl frameProcessLatencyReporter]
// Type encoding: @16@0:8
// Implementation: 0x10034de24

// -[SCCameraHardwareResourceImpl setFrameProcessLatencyReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed47c

// -[SCCameraHardwareResourceImpl appInBackground]
// Type encoding: B16@0:8
// Implementation: 0x10038f474

// -[SCCameraHardwareResourceImpl setAppInBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052ed4ac

// -[SCCameraHardwareResourceImpl tokenSet]
// Type encoding: @16@0:8
// Implementation: 0x100c242ec

// -[SCCameraHardwareResourceImpl setTokenSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed4b4

// -[SCCameraHardwareResourceImpl debugInfoDict]
// Type encoding: @16@0:8
// Implementation: 0x1052ed4e4

// -[SCCameraHardwareResourceImpl setDebugInfoDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed4ec

// -[SCCameraHardwareResourceImpl notificationRegistered]
// Type encoding: B16@0:8
// Implementation: 0x10038f47c

// -[SCCameraHardwareResourceImpl setNotificationRegistered:]
// Type encoding: v20@0:8B16
// Implementation: 0x10038f484

// -[SCCameraHardwareResourceImpl captureSessionFixer]
// Type encoding: @16@0:8
// Implementation: 0x1005d398c

// -[SCCameraHardwareResourceImpl setCaptureSessionFixer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c247cc

// -[SCCameraHardwareResourceImpl blackCameraNoOutputDetector]
// Type encoding: @16@0:8
// Implementation: 0x100c247fc

// -[SCCameraHardwareResourceImpl setBlackCameraNoOutputDetector:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e76b0

// -[SCCameraHardwareResourceImpl frameHealthChecker]
// Type encoding: @16@0:8
// Implementation: 0x1052ed4f4

// -[SCCameraHardwareResourceImpl setFrameHealthChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e94b0

// -[SCCameraHardwareResourceImpl deviceMotionManager]
// Type encoding: @16@0:8
// Implementation: 0x100808758

// -[SCCameraHardwareResourceImpl setDeviceMotionManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed4fc

// -[SCCameraHardwareResourceImpl sessionRuntimeErrorHandler]
// Type encoding: @16@0:8
// Implementation: 0x10038f4e4

// -[SCCameraHardwareResourceImpl setSessionRuntimeErrorHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed52c

// -[SCCameraHardwareResourceImpl frameStabilityMonitor]
// Type encoding: @16@0:8
// Implementation: 0x1008cbd0c

// -[SCCameraHardwareResourceImpl setFrameStabilityMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e97dc

// -[SCCameraHardwareResourceImpl stateStabilityMonitor]
// Type encoding: @16@0:8
// Implementation: 0x1052ed55c

// -[SCCameraHardwareResourceImpl setStateStabilityMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed564

// -[SCCameraHardwareResourceImpl viewStabilityMonitor]
// Type encoding: @16@0:8
// Implementation: 0x1052ed594

// -[SCCameraHardwareResourceImpl setViewStabilityMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed59c

// -[SCCameraHardwareResourceImpl videoStreamStabilityMonitor]
// Type encoding: @16@0:8
// Implementation: 0x10034e164

// -[SCCameraHardwareResourceImpl setVideoStreamStabilityMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000eafb4

// -[SCCameraHardwareResourceImpl secondaryDevicePositions]
// Type encoding: Q16@0:8
// Implementation: 0x1007089b4

// -[SCCameraHardwareResourceImpl setSecondaryDevicePositions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1002edc50

// -[SCCameraHardwareResourceImpl stillImageCapturer]
// Type encoding: @16@0:8
// Implementation: 0x1005d2930

// -[SCCameraHardwareResourceImpl videoCapturer]
// Type encoding: @16@0:8
// Implementation: 0x1005d28e0

// -[SCCameraHardwareResourceImpl validateTokenBeforeStartingCamera]
// Type encoding: B16@0:8
// Implementation: 0x1052ed5cc

// -[SCCameraHardwareResourceImpl setValidateTokenBeforeStartingCamera:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052ed5d4

// -[SCCameraHardwareResourceImpl videoDataSourceStreamProvider]
// Type encoding: @16@0:8
// Implementation: 0x1052ed5dc

// -[SCCameraHardwareResourceImpl videoDataSourceObservable]
// Type encoding: @16@0:8
// Implementation: 0x1004554e8

// -[SCCameraHardwareResourceImpl stillImageCapturerObservable]
// Type encoding: @16@0:8
// Implementation: 0x1006c04f8

// -[SCCameraHardwareResourceImpl setStillImageCapturerObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed5e4

// -[SCCameraHardwareResourceImpl videoCapturerObservable]
// Type encoding: @16@0:8
// Implementation: 0x10068d204

// -[SCCameraHardwareResourceImpl setVideoCapturerObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052ed614

// -[SCCameraHardwareResourceImpl managedCapturerStateCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x100455420

// -[SCCameraHardwareResourceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052ed644

@end
