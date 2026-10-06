// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptureSessionFixer
// Superclass: NSObject
// Address: 0x112b5a698

@interface SCCaptureSessionFixer

// Property: isCameraHardwareRequestHandlerTurnedOn; attributes: TB,N,V_isCameraHardwareRequestHandlerTurnedOn
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptureSessionFixer initWithCaptureResource:applicationState:cameraHardwareServicesAPI:captureDeviceManager:managedCaptureSession:deviceCapacityAnalyzer:systemConfiguration:cameraHardwareRequestHandler:featureStartupEventBus:appStartExperimentReader:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x100c24528

// -[SCCaptureSessionFixer captureSessionFixEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x107029af0

// -[SCCaptureSessionFixer _fixAVSessionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107029b18

// -[SCCaptureSessionFixer _runningConsistencyCheckAndFix]
// Type encoding: v16@0:8
// Implementation: 0x100c7738c

// -[SCCaptureSessionFixer _runningARSessionConsistencyCheckAndFix]
// Type encoding: v16@0:8
// Implementation: 0x107029dd8

// -[SCCaptureSessionFixer _runningAVCaptureSessionConsistencyCheckAndFix]
// Type encoding: v16@0:8
// Implementation: 0x100c77594

// -[SCCaptureSessionFixer _startRunningWithNewCaptureSessionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107029f84

// -[SCCaptureSessionFixer _startRunningWithNewCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x10702a0a0

// -[SCCaptureSessionFixer _resetAVCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x10702a6b8

// -[SCCaptureSessionFixer _setupNewVideoFileDataSource]
// Type encoding: v16@0:8
// Implementation: 0x10702a74c

// -[SCCaptureSessionFixer _setupNewVideoDataSourceFromSourceProvider]
// Type encoding: v16@0:8
// Implementation: 0x10702a8c8

// -[SCCaptureSessionFixer _setupNewVideoDataSourceForNonLiveStreaming:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702aa34

// -[SCCaptureSessionFixer _setupVideoDataSourceListeners:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702ab18

// -[SCCaptureSessionFixer _setupNewVideoDataSource]
// Type encoding: v16@0:8
// Implementation: 0x10702acd8

// -[SCCaptureSessionFixer _setupVideoDataSourceWithNewSession]
// Type encoding: v16@0:8
// Implementation: 0x10702ae50

// -[SCCaptureSessionFixer setIsCameraHardwareRequestHandlerTurnedOn:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c72304

// -[SCCaptureSessionFixer _isCameraActive]
// Type encoding: B16@0:8
// Implementation: 0x100c77728

// -[SCCaptureSessionFixer managedCaptureSessionRunningDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c76c00

// -[SCCaptureSessionFixer onSessionStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x100c72324

// -[SCCaptureSessionFixer onSessionStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x10702afcc

// -[SCCaptureSessionFixer sessionRuntimeError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702b02c

// -[SCCaptureSessionFixer setIsCameraRequestHandlerOn:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c275d8

// -[SCCaptureSessionFixer _setupLivenessConsistencyTimerIfForeground]
// Type encoding: v16@0:8
// Implementation: 0x100c72328

// -[SCCaptureSessionFixer _destroyLivenessConsistencyTimer]
// Type encoding: v16@0:8
// Implementation: 0x10702b488

// -[SCCaptureSessionFixer _livenessConsistency]
// Type encoding: v16@0:8
// Implementation: 0x10702b4b4

// -[SCCaptureSessionFixer applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10702b584

// -[SCCaptureSessionFixer applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c7721c

// -[SCCaptureSessionFixer applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10702b6ac

// -[SCCaptureSessionFixer detectorDidDetectBlackCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702b6b0

// -[SCCaptureSessionFixer _addObservers]
// Type encoding: v16@0:8
// Implementation: 0x100c24730

// -[SCCaptureSessionFixer _sessionWasInterrupted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702b7e8

// -[SCCaptureSessionFixer _sessionInterruptionEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10702b958

// -[SCCaptureSessionFixer isCameraHardwareRequestHandlerTurnedOn]
// Type encoding: B16@0:8
// Implementation: 0x100c7772c

// -[SCCaptureSessionFixer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10702ba14

@end
