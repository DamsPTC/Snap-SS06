// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraHardwareServicesAPIImpl
// Superclass: NSObject
// Address: 0x112a27ed8

@interface SCCameraHardwareServicesAPIImpl

// Property: isCameraHardwareRequestHandlerActive; attributes: TB,N,V_isCameraHardwareRequestHandlerActive
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraHardwareServicesAPIImpl initWithCameraHardwareResource:managedCaptureSession:deviceCapacityAnalyzer:audioCaptureSessionProvider:audioSessionServices:applicationState:userPreferences:systemConfiguration:cameraRequestManager:featureStartupEventBus:appStartExperimentReader:captureDeviceManager:systemLaunchTabCache:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1000d7054

// -[SCCameraHardwareServicesAPIImpl applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052eed98

// -[SCCameraHardwareServicesAPIImpl applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c760c8

// -[SCCameraHardwareServicesAPIImpl applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1052eed9c

// -[SCCameraHardwareServicesAPIImpl applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052eeed4

// -[SCCameraHardwareServicesAPIImpl _isCameraActive]
// Type encoding: B16@0:8
// Implementation: 0x1052eeed8

// -[SCCameraHardwareServicesAPIImpl currentCapturerState]
// Type encoding: @16@0:8
// Implementation: 0x100c5fc60

// -[SCCameraHardwareServicesAPIImpl _setupBlackCameraDetector]
// Type encoding: v16@0:8
// Implementation: 0x100c2434c

// -[SCCameraHardwareServicesAPIImpl startRunningWithAvailabilityOptions:cameraDeviceSettingsResolver:context:completionHandler:]
// Type encoding: @48@0:8Q16@24@32@?40
// Implementation: 0x1008ba088

// -[SCCameraHardwareServicesAPIImpl _startRunningWithAvailabilityOptions:cameraDeviceSettingsResolver:token:completionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x100c24170

// -[SCCameraHardwareServicesAPIImpl _submitStartOperationsWithActiveDeviceSettingsMap:availabilityOptions:activeFeatures:completionHandler:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x100c26204

// -[SCCameraHardwareServicesAPIImpl token:didInvalidateWithCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100c27244

// -[SCCameraHardwareServicesAPIImpl numberOfTokens]
// Type encoding: q16@0:8
// Implementation: 0x1052eef64

// -[SCCameraHardwareServicesAPIImpl _stopRunningWithToken:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1052eefc4

// -[SCCameraHardwareServicesAPIImpl startStreaming]
// Type encoding: v16@0:8
// Implementation: 0x1052ef188

// -[SCCameraHardwareServicesAPIImpl activateAudioSessionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052ef1d4

// -[SCCameraHardwareServicesAPIImpl _activateAudioSessionHelper]
// Type encoding: v16@0:8
// Implementation: 0x1052ef2f8

// -[SCCameraHardwareServicesAPIImpl relinquishAudioSessionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052ef594

// -[SCCameraHardwareServicesAPIImpl _relinquishAudioSessionHelper]
// Type encoding: v16@0:8
// Implementation: 0x1052ef6b8

// -[SCCameraHardwareServicesAPIImpl activeSession]
// Type encoding: @16@0:8
// Implementation: 0x1052ef8cc

// -[SCCameraHardwareServicesAPIImpl canRunARSession]
// Type encoding: B16@0:8
// Implementation: 0x1052ef9e4

// -[SCCameraHardwareServicesAPIImpl turnARSessionOn]
// Type encoding: v16@0:8
// Implementation: 0x1052efad8

// -[SCCameraHardwareServicesAPIImpl turnARSessionOff]
// Type encoding: v16@0:8
// Implementation: 0x1052efae0

// -[SCCameraHardwareServicesAPIImpl restartARSession]
// Type encoding: v16@0:8
// Implementation: 0x1052efae8

// -[SCCameraHardwareServicesAPIImpl clearARKitData]
// Type encoding: v16@0:8
// Implementation: 0x1052efb14

// -[SCCameraHardwareServicesAPIImpl firstWrittenAudioBufferDelay]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1052efbdc

// -[SCCameraHardwareServicesAPIImpl audioQueueStarted]
// Type encoding: B16@0:8
// Implementation: 0x1052efc28

// -[SCCameraHardwareServicesAPIImpl audioSamplesReceived]
// Type encoding: Q16@0:8
// Implementation: 0x1052efc64

// -[SCCameraHardwareServicesAPIImpl devicePosition]
// Type encoding: q16@0:8
// Implementation: 0x1008ca61c

// -[SCCameraHardwareServicesAPIImpl _currentStabilizationState]
// Type encoding: @16@0:8
// Implementation: 0x1052efca0

// -[SCCameraHardwareServicesAPIImpl resetExposureAdjustment]
// Type encoding: v16@0:8
// Implementation: 0x100c768e0

// -[SCCameraHardwareServicesAPIImpl recreateCaptureSessionWithMainDevicePosition:secondaryDeviceOption:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x1052efd70

// -[SCCameraHardwareServicesAPIImpl setDevicePositionAsynchronouslyWithMainDevicePosition:secondaryDevicePositions:completionHandler:context:]
// Type encoding: v48@0:8q16Q24@?32@40
// Implementation: 0x1052f01c4

// -[SCCameraHardwareServicesAPIImpl setDevicePositionAsynchronouslyWithMainDevicePosition:secondaryDevicePositions:completionHandler:context:viewfinderTransition:]
// Type encoding: v56@0:8q16Q24@?32@40q48
// Implementation: 0x1052f01cc

// -[SCCameraHardwareServicesAPIImpl setCaptureBitrateLadderConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f0420

// -[SCCameraHardwareServicesAPIImpl setAudioProcessingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f0450

// -[SCCameraHardwareServicesAPIImpl addTimedTask:task:context:]
// Type encoding: v56@0:8{?=qiIq}16@?40@48
// Implementation: 0x1052f04d0

// -[SCCameraHardwareServicesAPIImpl clearTimedTasksWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f06ac

// -[SCCameraHardwareServicesAPIImpl reloadOutputURLAssetKeys]
// Type encoding: v16@0:8
// Implementation: 0x1052f07f4

// -[SCCameraHardwareServicesAPIImpl removeVideoCapturerObserver]
// Type encoding: v16@0:8
// Implementation: 0x1052f083c

// -[SCCameraHardwareServicesAPIImpl setCameraCreationDelayLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005d2804

// -[SCCameraHardwareServicesAPIImpl setCameraSnapCaptureLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005d2938

// -[SCCameraHardwareServicesAPIImpl setIsHEVCEncoderEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f08b8

// -[SCCameraHardwareServicesAPIImpl setH264BitrateMultiplier:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052f08c0

// -[SCCameraHardwareServicesAPIImpl recreateImageCapturer]
// Type encoding: v16@0:8
// Implementation: 0x1052f08c8

// -[SCCameraHardwareServicesAPIImpl setLensesActive:completionHandler:context:]
// Type encoding: v36@0:8B16@?20@28
// Implementation: 0x1052f0b54

// -[SCCameraHardwareServicesAPIImpl setLensesAsCameraModeActive:completionHandler:context:]
// Type encoding: v36@0:8B16@?20@28
// Implementation: 0x1052f0b64

// -[SCCameraHardwareServicesAPIImpl setLensesInTalkActive:useVideoCallSource:completionHandler:context:]
// Type encoding: v40@0:8B16B20@?24@32
// Implementation: 0x1052f0b74

// -[SCCameraHardwareServicesAPIImpl isAudioCaptureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1052f0b84

// -[SCCameraHardwareServicesAPIImpl _setLensesActive:source:completionHandler:context:]
// Type encoding: v44@0:8B16Q20@?28@36
// Implementation: 0x1052f0bc0

// -[SCCameraHardwareServicesAPIImpl setVideoOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052f0ea4

// -[SCCameraHardwareServicesAPIImpl _setVideoOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052f0fc8

// -[SCCameraHardwareServicesAPIImpl _setBlackCameraNoOutputDetectorEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c24810

// -[SCCameraHardwareServicesAPIImpl _turnARSessionOnWithManagedSessionUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f1138

// -[SCCameraHardwareServicesAPIImpl _turnARSessionOffWithManagedSessionUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f16a0

// -[SCCameraHardwareServicesAPIImpl _deprecated_isCameraActive]
// Type encoding: B16@0:8
// Implementation: 0x1052f19f4

// -[SCCameraHardwareServicesAPIImpl isCameraInBackground]
// Type encoding: B16@0:8
// Implementation: 0x1052f19f8

// -[SCCameraHardwareServicesAPIImpl isOnCameraQueue]
// Type encoding: B16@0:8
// Implementation: 0x1052f1a38

// -[SCCameraHardwareServicesAPIImpl isSessionRunning]
// Type encoding: B16@0:8
// Implementation: 0x1052f1a98

// -[SCCameraHardwareServicesAPIImpl isArSessionActive]
// Type encoding: B16@0:8
// Implementation: 0x1052f1ad8

// -[SCCameraHardwareServicesAPIImpl timeSinceLastArFrame]
// Type encoding: d16@0:8
// Implementation: 0x1052f1b38

// -[SCCameraHardwareServicesAPIImpl arTrackingState]
// Type encoding: q16@0:8
// Implementation: 0x1052f1bc4

// -[SCCameraHardwareServicesAPIImpl sampleFrameWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052f1c5c

// -[SCCameraHardwareServicesAPIImpl addFrameObserver:withFrameSamplingRate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1052f1cac

// -[SCCameraHardwareServicesAPIImpl removeFrameObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f1d24

// -[SCCameraHardwareServicesAPIImpl getWarmupTokenAndInvalidate]
// Type encoding: @16@0:8
// Implementation: 0x1008b9e68

// -[SCCameraHardwareServicesAPIImpl startupCaptureHardwareWarmer]
// Type encoding: @16@0:8
// Implementation: 0x100150ab0

// -[SCCameraHardwareServicesAPIImpl _imageCapturer]
// Type encoding: @16@0:8
// Implementation: 0x1005d28e8

// -[SCCameraHardwareServicesAPIImpl _videoCapturer]
// Type encoding: @16@0:8
// Implementation: 0x1005d2898

// -[SCCameraHardwareServicesAPIImpl markWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052f1d94

// -[SCCameraHardwareServicesAPIImpl _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052f1d98

// -[SCCameraHardwareServicesAPIImpl _applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1052f1fbc

// -[SCCameraHardwareServicesAPIImpl _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c76398

// -[SCCameraHardwareServicesAPIImpl _applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1052f214c

// -[SCCameraHardwareServicesAPIImpl managedCaptureSessionRunningDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c766fc

// -[SCCameraHardwareServicesAPIImpl managedCaptureSessionDidBeginInterruption]
// Type encoding: v16@0:8
// Implementation: 0x1052f21c8

// -[SCCameraHardwareServicesAPIImpl managedCaptureSessionDidEndInterruption]
// Type encoding: v16@0:8
// Implementation: 0x1052f22e0

// -[SCCameraHardwareServicesAPIImpl _updateManagedCapturerStateInterruptedStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f23f8

// -[SCCameraHardwareServicesAPIImpl _managedCaptureSessionRunningDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c76700

// -[SCCameraHardwareServicesAPIImpl setRingFlashSelectionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f248c

// -[SCCameraHardwareServicesAPIImpl setAspectRatio4By3ModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f269c

// -[SCCameraHardwareServicesAPIImpl setIsHDModeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f28d0

// -[SCCameraHardwareServicesAPIImpl runDeferredStartWhenNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1052f2ac0

// -[SCCameraHardwareServicesAPIImpl _updateMaxPhotoQualityPrioritizationForHDMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052f2bf4

// -[SCCameraHardwareServicesAPIImpl setUIInterfaceOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052f2d64

// -[SCCameraHardwareServicesAPIImpl setMultiBackCameraSystemEnabled:zoomFactor:completion:]
// Type encoding: v36@0:8B16q20@?28
// Implementation: 0x1052f2ef4

// -[SCCameraHardwareServicesAPIImpl setSessionFixingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008b5168

// -[SCCameraHardwareServicesAPIImpl setProcessingModule:enabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1052f32dc

// -[SCCameraHardwareServicesAPIImpl _managedCaptureStateWithLensesActive:source:]
// Type encoding: @28@0:8B16Q20
// Implementation: 0x1052f34a8

// -[SCCameraHardwareServicesAPIImpl addCaptureControls:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052f3600

// -[SCCameraHardwareServicesAPIImpl isCameraHardwareRequestHandlerActive]
// Type encoding: B16@0:8
// Implementation: 0x1052f3784

// -[SCCameraHardwareServicesAPIImpl setIsCameraHardwareRequestHandlerActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c8059c

// -[SCCameraHardwareServicesAPIImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052f378c

@end
