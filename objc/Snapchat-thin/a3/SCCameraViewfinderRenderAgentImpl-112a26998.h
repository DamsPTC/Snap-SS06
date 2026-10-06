// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraViewfinderRenderAgentImpl
// Superclass: NSObject
// Address: 0x112a26998

@interface SCCameraViewfinderRenderAgentImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: performer; attributes: T@"<SCAsyncPerforming>",R,N,V_performer
// Property: delegate; attributes: T@"<SCManagedSampleBufferDisplayControllerDelegate>",W,N,Vdelegate
// Property: renderingModuleType; attributes: TQ,R,N

// -[SCCameraViewfinderRenderAgentImpl initWithHardwareResource:renderTarget:featureStartupEventBus:appStartExperimentReader:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100454af0

// -[SCCameraViewfinderRenderAgentImpl setupRenderModule:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100455634

// -[SCCameraViewfinderRenderAgentImpl activateRenderModule:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1004556ec

// -[SCCameraViewfinderRenderAgentImpl attachRenderLayerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008bbaa4

// -[SCCameraViewfinderRenderAgentImpl enqueueSampleBuffer:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100883968

// -[SCCameraViewfinderRenderAgentImpl enqueueSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10526fe80

// -[SCCameraViewfinderRenderAgentImpl setupRenderPipeline]
// Type encoding: v16@0:8
// Implementation: 0x100455608

// -[SCCameraViewfinderRenderAgentImpl flushOutdatedPreview]
// Type encoding: v16@0:8
// Implementation: 0x10526fe88

// -[SCCameraViewfinderRenderAgentImpl videoOrientationChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x10526ff8c

// -[SCCameraViewfinderRenderAgentImpl applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105270084

// -[SCCameraViewfinderRenderAgentImpl applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052701c0

// -[SCCameraViewfinderRenderAgentImpl setBlurEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052702c4

// -[SCCameraViewfinderRenderAgentImpl renderTarget:didUpdateRect:]
// Type encoding: v56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x100864db0

// -[SCCameraViewfinderRenderAgentImpl _updateLastSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100883bf4

// -[SCCameraViewfinderRenderAgentImpl _clearLastSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x100883c54

// -[SCCameraViewfinderRenderAgentImpl _asyncClearSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1052703d8

// -[SCCameraViewfinderRenderAgentImpl _cacheViewfinderSizeIfNecessary:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x100864e04

// -[SCCameraViewfinderRenderAgentImpl _setTextureSizeIfNecessary:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x100865e6c

// -[SCCameraViewfinderRenderAgentImpl _setupRenderModule:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100456b14

// -[SCCameraViewfinderRenderAgentImpl _setCurrentlyActiveModule:]
// Type encoding: B24@0:8@16
// Implementation: 0x1004dcba8

// -[SCCameraViewfinderRenderAgentImpl _currentlyActiveModule]
// Type encoding: @16@0:8
// Implementation: 0x1004dcce8

// -[SCCameraViewfinderRenderAgentImpl _activateRenderModule:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1004dc5e4

// -[SCCameraViewfinderRenderAgentImpl _attachRenderTargetToLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008bbbdc

// -[SCCameraViewfinderRenderAgentImpl _textureSizeFromRect:]
// Type encoding: {CGSize=dd}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10527049c

// -[SCCameraViewfinderRenderAgentImpl _shouldRenderAtOutputBufferSize]
// Type encoding: B16@0:8
// Implementation: 0x100864e7c

// -[SCCameraViewfinderRenderAgentImpl _bufferSizeRenderingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100864e88

// -[SCCameraViewfinderRenderAgentImpl renderingModuleType]
// Type encoding: Q16@0:8
// Implementation: 0x1006c0db4

// -[SCCameraViewfinderRenderAgentImpl displayLayerContainer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1006c0dbc

// -[SCCameraViewfinderRenderAgentImpl flushTextureCache]
// Type encoding: v16@0:8
// Implementation: 0x105270530

// -[SCCameraViewfinderRenderAgentImpl renderSampleBuffer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100883964

// -[SCCameraViewfinderRenderAgentImpl setTextureSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1052705bc

// -[SCCameraViewfinderRenderAgentImpl setTextureOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052705c0

// -[SCCameraViewfinderRenderAgentImpl newSampleBufferReceived]
// Type encoding: v16@0:8
// Implementation: 0x100709728

// -[SCCameraViewfinderRenderAgentImpl _newSampleBufferReceived]
// Type encoding: v16@0:8
// Implementation: 0x100709814

// -[SCCameraViewfinderRenderAgentImpl logOnNextFrameReceivedWithFrameMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052705c4

// -[SCCameraViewfinderRenderAgentImpl logOnNextFrameReceivedWithLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052706a0

// -[SCCameraViewfinderRenderAgentImpl logOnNextFrameRenderedWithToSnappableMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b6948

// -[SCCameraViewfinderRenderAgentImpl cameraHeathMonitorDidDetectFailedCameraOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x105270780

// -[SCCameraViewfinderRenderAgentImpl view]
// Type encoding: @16@0:8
// Implementation: 0x105270788

// -[SCCameraViewfinderRenderAgentImpl _onSessionRunningStatusChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052707b0

// -[SCCameraViewfinderRenderAgentImpl _updateVideoOrientationForActiveRenderModule]
// Type encoding: v16@0:8
// Implementation: 0x1004dcc70

// -[SCCameraViewfinderRenderAgentImpl _attachToDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x100455538

// -[SCCameraViewfinderRenderAgentImpl _updateTextureSizeIfNecessaryWithSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x100883ca4

// -[SCCameraViewfinderRenderAgentImpl _isViewfinderInPortraitOrientation]
// Type encoding: B16@0:8
// Implementation: 0x100883d9c

// -[SCCameraViewfinderRenderAgentImpl showBlurTransitionWithAutoDismissOnBrightnessStable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052707d8

// -[SCCameraViewfinderRenderAgentImpl hideBlurTransition]
// Type encoding: v16@0:8
// Implementation: 0x105270854

// -[SCCameraViewfinderRenderAgentImpl _examineBrightnessAndDismissBlurIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052708b0

// -[SCCameraViewfinderRenderAgentImpl _fadeInBlurView:]
// Type encoding: v20@0:8B16
// Implementation: 0x10527095c

// -[SCCameraViewfinderRenderAgentImpl _fadeOutBlurView]
// Type encoding: v16@0:8
// Implementation: 0x105270a34

// -[SCCameraViewfinderRenderAgentImpl _clearBlurImmediatelyOrScheduleClearTimeout:]
// Type encoding: v20@0:8B16
// Implementation: 0x105270b14

// -[SCCameraViewfinderRenderAgentImpl _displayLastSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x105270bd4

// -[SCCameraViewfinderRenderAgentImpl _createBlurViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105270c88

// -[SCCameraViewfinderRenderAgentImpl pauseAndResumeRenderingAfter:]
// Type encoding: v24@0:8d16
// Implementation: 0x105270d4c

// -[SCCameraViewfinderRenderAgentImpl _setPauseSampleBufferRender:]
// Type encoding: v20@0:8B16
// Implementation: 0x105270ddc

// -[SCCameraViewfinderRenderAgentImpl _isSampleBufferRenderPaused]
// Type encoding: B16@0:8
// Implementation: 0x100883ac8

// -[SCCameraViewfinderRenderAgentImpl _setIsBlurTransitionVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x105270e0c

// -[SCCameraViewfinderRenderAgentImpl _isBlurTransitionVisible]
// Type encoding: B16@0:8
// Implementation: 0x105270e3c

// -[SCCameraViewfinderRenderAgentImpl _simMockSetupOnce]
// Type encoding: v16@0:8
// Implementation: 0x105270e70

// -[SCCameraViewfinderRenderAgentImpl _simMockEnqueueIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105270f40

// -[SCCameraViewfinderRenderAgentImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105271244

// -[SCCameraViewfinderRenderAgentImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100456b08

// -[SCCameraViewfinderRenderAgentImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x1006b8cec

// -[SCCameraViewfinderRenderAgentImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10527125c

@end
