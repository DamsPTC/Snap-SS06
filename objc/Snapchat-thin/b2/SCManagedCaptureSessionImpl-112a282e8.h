// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedCaptureSessionImpl
// Superclass: NSObject
// Address: 0x112a282e8

@interface SCManagedCaptureSessionImpl

// Property: hardwarePerformer; attributes: T@"<SCPerforming>",R,N,V_hardwarePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: photoOutput; attributes: T@"AVCapturePhotoOutput",R,N
// Property: metadataOutput; attributes: T@"AVCaptureMetadataOutput",R,N
// Property: videoOutput; attributes: T@"AVCaptureVideoDataOutput",R,N
// Property: skipSessionFix; attributes: TB,N,V_skipSessionFix
// Property: videoStabilizationMode; attributes: Tq,R,N
// Property: frontCameraStabilizationMode; attributes: Tq,N,V_frontStabilizationMode
// Property: rearCameraStabilizationMode; attributes: Tq,N,V_rearStabilizationMode

// -[SCManagedCaptureSessionImpl initWithSystemConfiguration:startupInfoService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000bac98

// -[SCManagedCaptureSessionImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c765b0

// -[SCManagedCaptureSessionImpl _addDeviceOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002b4fc0

// -[SCManagedCaptureSessionImpl _addPhotoOutputIfNeeded:isMultiCam:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1002b506c

// -[SCManagedCaptureSessionImpl _shouldAddDeferredPhotoOutputDuringStartup:]
// Type encoding: B24@0:8@16
// Implementation: 0x1002b5400

// -[SCManagedCaptureSessionImpl _addOutput:withoutConnections:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1002b5754

// -[SCManagedCaptureSessionImpl _addOutput:withoutConnections:allowWhileRunning:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x1002b575c

// -[SCManagedCaptureSessionImpl _removeOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f4bc0

// -[SCManagedCaptureSessionImpl setSessionPreset:]
// Type encoding: B24@0:8@16
// Implementation: 0x1002efcf4

// -[SCManagedCaptureSessionImpl photoOutput]
// Type encoding: @16@0:8
// Implementation: 0x1052f4c50

// -[SCManagedCaptureSessionImpl addPhotoOutputToCaptureSessionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052f4d1c

// -[SCManagedCaptureSessionImpl runDeferredStartWhenNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052f4e0c

// -[SCManagedCaptureSessionImpl _disableSensorOrientationCompensationIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f4e68

// -[SCManagedCaptureSessionImpl momentarilyStopStreamingToDelegates]
// Type encoding: v16@0:8
// Implementation: 0x1052f4fb0

// -[SCManagedCaptureSessionImpl restoreStreamingToCachedDelegatesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052f5230

// -[SCManagedCaptureSessionImpl sampleBufferDelegate]
// Type encoding: @16@0:8
// Implementation: 0x100352ba0

// -[SCManagedCaptureSessionImpl setSampleBufferDelegate:queueMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10034e59c

// -[SCManagedCaptureSessionImpl videoOutput]
// Type encoding: @16@0:8
// Implementation: 0x1052f54b8

// -[SCManagedCaptureSessionImpl addCaptureDevicesToSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002ee650

// -[SCManagedCaptureSessionImpl removeCaptureDeviceFromSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f5514

// -[SCManagedCaptureSessionImpl _addInput:withoutConnections:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1002efbe8

// -[SCManagedCaptureSessionImpl startRunning]
// Type encoding: v16@0:8
// Implementation: 0x1003a49c8

// -[SCManagedCaptureSessionImpl startStreamingToStreamer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f55dc

// -[SCManagedCaptureSessionImpl stopStreamingToStreamer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f57b0

// -[SCManagedCaptureSessionImpl hasAnyActiveStreamingDelegates]
// Type encoding: B16@0:8
// Implementation: 0x1052f5810

// -[SCManagedCaptureSessionImpl stopRunning]
// Type encoding: v16@0:8
// Implementation: 0x1052f5870

// -[SCManagedCaptureSessionImpl isRunning]
// Type encoding: B16@0:8
// Implementation: 0x1002efcdc

// -[SCManagedCaptureSessionImpl isInterrupted]
// Type encoding: B16@0:8
// Implementation: 0x1052f58a4

// -[SCManagedCaptureSessionImpl _startObservingRunningStatus]
// Type encoding: v16@0:8
// Implementation: 0x1002c2f84

// -[SCManagedCaptureSessionImpl _stopObservingRunningStatus]
// Type encoding: v16@0:8
// Implementation: 0x1002c30bc

// -[SCManagedCaptureSessionImpl _AVSessionDidStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x100c23608

// -[SCManagedCaptureSessionImpl _AVSessionDidStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x1052f58ac

// -[SCManagedCaptureSessionImpl _AVSessionDidBeginInterruption]
// Type encoding: v16@0:8
// Implementation: 0x1052f58f0

// -[SCManagedCaptureSessionImpl _AVSessionDidEndInterruption]
// Type encoding: v16@0:8
// Implementation: 0x1052f5930

// -[SCManagedCaptureSessionImpl performConfiguration:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10035a990

// -[SCManagedCaptureSessionImpl _resetAVCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x1002aba40

// -[SCManagedCaptureSessionImpl _clearDeviceOutputs]
// Type encoding: v16@0:8
// Implementation: 0x1002ac040

// -[SCManagedCaptureSessionImpl isUnderlyingAVCaptureSession:]
// Type encoding: B24@0:8@16
// Implementation: 0x1052f5970

// -[SCManagedCaptureSessionImpl createNewAVCaptureSessionWithMultiCam:forLiveStreaming:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1002ab850

// -[SCManagedCaptureSessionImpl isMultiCam]
// Type encoding: B16@0:8
// Implementation: 0x1002a6120

// -[SCManagedCaptureSessionImpl isMultitaskingCameraAccessSupported]
// Type encoding: B16@0:8
// Implementation: 0x10038f570

// -[SCManagedCaptureSessionImpl isMultitaskingCameraAccessEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10038f5b4

// -[SCManagedCaptureSessionImpl setIsMultitaskingCameraAccessEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10038f4ec

// -[SCManagedCaptureSessionImpl fixCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x1052f5980

// -[SCManagedCaptureSessionImpl captureOutput:didOutputSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x1052f59b4

// -[SCManagedCaptureSessionImpl captureOutput:didDropSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x1052f5b4c

// -[SCManagedCaptureSessionImpl setFrontCameraStabilizationMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052f5ce4

// -[SCManagedCaptureSessionImpl setRearCameraStabilizationMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x1000cc6f8

// -[SCManagedCaptureSessionImpl videoStabilizationMode]
// Type encoding: q16@0:8
// Implementation: 0x1002e9640

// -[SCManagedCaptureSessionImpl _setVideoStabilizationMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10034b06c

// -[SCManagedCaptureSessionImpl setVideoOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10034e7d8

// -[SCManagedCaptureSessionImpl setFrontFacingVideoMirrored]
// Type encoding: v16@0:8
// Implementation: 0x1003523f8

// -[SCManagedCaptureSessionImpl isVideoMirrored]
// Type encoding: B16@0:8
// Implementation: 0x1052f5e2c

// -[SCManagedCaptureSessionImpl metadataOutput]
// Type encoding: @16@0:8
// Implementation: 0x1052f5eb8

// -[SCManagedCaptureSessionImpl disableMetadataOutput]
// Type encoding: v16@0:8
// Implementation: 0x1052f5f14

// -[SCManagedCaptureSessionImpl enableMetadataOutput]
// Type encoding: v16@0:8
// Implementation: 0x1052f60a4

// -[SCManagedCaptureSessionImpl _isMetadataOutput:]
// Type encoding: B24@0:8@16
// Implementation: 0x1052f62d4

// -[SCManagedCaptureSessionImpl configureCaptureControls:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f6334

// -[SCManagedCaptureSessionImpl _addCaptureControls:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002c0408

// -[SCManagedCaptureSessionImpl sessionControlsDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f64a4

// -[SCManagedCaptureSessionImpl sessionControlsDidBecomeInactive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f66ac

// -[SCManagedCaptureSessionImpl sessionControlsWillEnterFullscreenAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f68b4

// -[SCManagedCaptureSessionImpl sessionControlsWillExitFullscreenAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f68b8

// -[SCManagedCaptureSessionImpl skipSessionFix]
// Type encoding: B16@0:8
// Implementation: 0x1052f68bc

// -[SCManagedCaptureSessionImpl setSkipSessionFix:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008b51a4

// -[SCManagedCaptureSessionImpl frontCameraStabilizationMode]
// Type encoding: q16@0:8
// Implementation: 0x1002e9648

// -[SCManagedCaptureSessionImpl rearCameraStabilizationMode]
// Type encoding: q16@0:8
// Implementation: 0x1002e9650

// -[SCManagedCaptureSessionImpl hardwarePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1000bc5c0

// -[SCManagedCaptureSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052f68c4

// +[SCManagedCaptureSessionImpl createManagedCaptureSessionWithSystemConfiguration:startupInfoService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000bac14

@end
