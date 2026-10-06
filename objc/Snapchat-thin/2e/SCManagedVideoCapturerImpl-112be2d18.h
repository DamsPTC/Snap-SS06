// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoCapturerImpl
// Superclass: NSObject
// Address: 0x112be2d18

@interface SCManagedVideoCapturerImpl

// Property: audioCaptureSession; attributes: T@"<SCAudioCaptureSession>",R,N
// Property: firstWrittenAudioBufferDelay; attributes: T{?=qiIq},N,V_firstWrittenAudioBufferDelay
// Property: audioConfigurationError; attributes: T@"NSError",&,N,V_audioConfigurationError
// Property: beginAudioRecordingError; attributes: T@"NSError",&,N,V_beginAudioRecordingError
// Property: frontMicAudioConfigurationError; attributes: T@"NSError",&,N,V_frontMicAudioConfigurationError
// Property: frontMicBeginAudioRecordingError; attributes: T@"NSError",&,N,V_frontMicBeginAudioRecordingError
// Property: audioSamplesErased; attributes: TQ,N,V_audioSamplesErased
// Property: audioSamplesCopyFailure; attributes: TQ,N,V_audioSamplesCopyFailure
// Property: audioSamplesRestoreFailure; attributes: TQ,N,V_audioSamplesRestoreFailure
// Property: audioCaptureEnabledOnCaptureStart; attributes: TB,N,V_audioCaptureEnabledOnCaptureStart
// Property: audioProcessingEnabledOnCaptureStart; attributes: TB,N,V_audioProcessingEnabledOnCaptureStart
// Property: audioSamplesReceived; attributes: TQ,N,V_audioSamplesReceived
// Property: audioSamplesDroppedPreWrite; attributes: TQ,N,V_audioSamplesDroppedPreWrite
// Property: inputAvailableAtRecordingStart; attributes: TB,N,V_inputAvailableAtRecordingStart
// Property: isPhoneCallActiveAtRecordingStart; attributes: TB,N,V_isPhoneCallActiveAtRecordingStart
// Property: availableInputsCountAtRecordingStart; attributes: TQ,N,V_availableInputsCountAtRecordingStart
// Property: inputPortTypeAtRecordingStart; attributes: T@"NSString",C,N,V_inputPortTypeAtRecordingStart
// Property: audioSessionCategoryAtRecordingStart; attributes: T@"NSString",C,N,V_audioSessionCategoryAtRecordingStart
// Property: audioSessionModeAtRecordingStart; attributes: T@"NSString",C,N,V_audioSessionModeAtRecordingStart
// Property: audioSessionCategoryOptionsAtRecordingStart; attributes: TQ,N,V_audioSessionCategoryOptionsAtRecordingStart
// Property: routeInputPortTypeAtRecordingStart; attributes: T@"NSString",C,N,V_routeInputPortTypeAtRecordingStart
// Property: routeOutputPortTypeAtRecordingStart; attributes: T@"NSString",C,N,V_routeOutputPortTypeAtRecordingStart
// Property: secondaryAudioShouldBeSilencedHintAtRecordingStart; attributes: TB,N,V_secondaryAudioShouldBeSilencedHintAtRecordingStart
// Property: availableMicDataSourcesAtRecordingStart; attributes: T@"NSString",C,N,V_availableMicDataSourcesAtRecordingStart
// Property: inputGainAtRecordingStart; attributes: Tf,N,V_inputGainAtRecordingStart
// Property: inputGainSettableAtRecordingStart; attributes: TB,N,V_inputGainSettableAtRecordingStart
// Property: isInputMutedAtRecordingStart; attributes: T@"NSNumber",&,N,V_isInputMutedAtRecordingStart
// Property: routeInputPortTypeAtQueueStart; attributes: T@"NSString",C,N,V_routeInputPortTypeAtQueueStart
// Property: routeInputSelectedDataSourceNameAtQueueStart; attributes: T@"NSString",C,N,V_routeInputSelectedDataSourceNameAtQueueStart
// Property: activeMicrophoneModeNameAtQueueStart; attributes: T@"NSString",C,N,V_activeMicrophoneModeNameAtQueueStart
// Property: consecutiveSilentRecordingCountAtRecordingStart; attributes: Tq,N,V_consecutiveSilentRecordingCountAtRecordingStart
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraCaptureLensProvider; attributes: T@"<SCCameraCaptureLensProviding>",&,N
// Property: status; attributes: TQ,V_status
// Property: outputURL; attributes: T@"NSURL",R,C,N,V_outputURL
// Property: activeSession; attributes: T@"SCVideoCaptureSessionInfo",R,N,V_activeSession
// Property: audioQueueStarted; attributes: TB,R,N,V_audioQueueStarted
// Property: audioCaptureEnabled; attributes: TB,N,V_audioCaptureEnabled
// Property: cameraCreationDelayLogger; attributes: T@"SCLazy",&,N,V_cameraCreationDelayLogger
// Property: cameraSnapCaptureLogger; attributes: T@"SCLazy",&,N,V_cameraSnapCaptureLogger
// Property: audioProcessingEnabled; attributes: TB,N,V_audioProcessingEnabled
// Property: isStreaming; attributes: TB,R,N
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer

// -[SCManagedVideoCapturerImpl initWithVideoCapturerHandler:cameraHardwareAPI:captureDeviceManager:cameraHardwareResource:audioCaptureSessionProvider:cameraCreationDelayLogger:cameraSnapCaptureLogger:systemConfiguration:crashLogger:circumstanceEngine:appStartExperimentReader:systemPreferences:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x100c26860

// -[SCManagedVideoCapturerImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109049438

// -[SCManagedVideoCapturerImpl setCameraCaptureLensProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c26e68

// -[SCManagedVideoCapturerImpl cameraCaptureLensProvider]
// Type encoding: @16@0:8
// Implementation: 0x109049498

// -[SCManagedVideoCapturerImpl audioCaptureSession]
// Type encoding: @16@0:8
// Implementation: 0x1090494a0

// -[SCManagedVideoCapturerImpl activeSession]
// Type encoding: @16@0:8
// Implementation: 0x109049500

// -[SCManagedVideoCapturerImpl defaultSizeForDeviceFormat:shouldKeepVideoSizeAsOutputSize:]
// Type encoding: {CGSize=dd}28@0:8@16B24
// Implementation: 0x109049638

// -[SCManagedVideoCapturerImpl cropSize:toAspectRatio:]
// Type encoding: {CGSize=dd}40@0:8{CGSize=dd}16d32
// Implementation: 0x10904979c

// -[SCManagedVideoCapturerImpl startRecordingAsynchronouslyWithOutputSettings:audioConfiguration:maxDuration:speedRate:aspectRatio:toURL:deviceFormat:devicePosition:videoOrientation:viewportOrientation:captureSessionID:isHEVCEncoderEnabled:H264BitrateMultiplier:captureBitrateLadderConfig:shouldKeepVideoSizeAsOutputSize:audioCaptureEnabledInConfiguration:shouldSyncVideoAndMusicPlayer:isHDModeActive:recordGestureStartTimestamp:shouldDisableBufferedRecording:captureOrientationFixEnabled:]
// Type encoding: @156@0:8@16@24d32d40d48@56@64q72q80Q88@96B104d108@116B124B128B132B136d140B148B152
// Implementation: 0x109049940

// -[SCManagedVideoCapturerImpl _handleRetryBeginAudioRecordingErrorCode:error:micResult:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x109049ea8

// -[SCManagedVideoCapturerImpl _activationErrorCodeFromSessionError:]
// Type encoding: i24@0:8@16
// Implementation: 0x10904a020

// -[SCManagedVideoCapturerImpl _shouldAttemptFrontMicRecovery:]
// Type encoding: B24@0:8q16
// Implementation: 0x10904a108

// -[SCManagedVideoCapturerImpl _isPhoneCallActive]
// Type encoding: B16@0:8
// Implementation: 0x10904a210

// -[SCManagedVideoCapturerImpl _captureAudioStateAtRecordingStart]
// Type encoding: v16@0:8
// Implementation: 0x10904a328

// -[SCManagedVideoCapturerImpl _handleQueueCreationResult:speedRate:devicePosition:logContext:block:]
// Type encoding: v56@0:8@16d24q32@40@?48
// Implementation: 0x10904a5c0

// -[SCManagedVideoCapturerImpl _beginAudioQueueRecordingWithPosition:speedRate:completeHandler:]
// Type encoding: v40@0:8q16d24@?32
// Implementation: 0x10904a858

// -[SCManagedVideoCapturerImpl _startAudioQueueRecordingWithPosition:speedRate:completeHandler:]
// Type encoding: v40@0:8q16d24@?32
// Implementation: 0x10904aa48

// -[SCManagedVideoCapturerImpl _audioRecordingCompleteWithBlock:speedRate:devicePosition:error:]
// Type encoding: v48@0:8@?16d24q32@40
// Implementation: 0x10904ad84

// -[SCManagedVideoCapturerImpl _appendInfo:forInfoKey:toError:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10904b184

// -[SCManagedVideoCapturerImpl _retryRequestRecordingWithCompleteHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10904b2dc

// -[SCManagedVideoCapturerImpl _handleSessionContentionWithBlock:]
// Type encoding: B24@0:8@?16
// Implementation: 0x10904b538

// -[SCManagedVideoCapturerImpl _attemptMicReactivationWithCompleteHandler:]
// Type encoding: B24@0:8@?16
// Implementation: 0x10904b6b8

// -[SCManagedVideoCapturerImpl sampleFrameWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10904b8b0

// -[SCManagedVideoCapturerImpl setMusicSyncInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904b8b8

// -[SCManagedVideoCapturerImpl videoWriterDidFailWritingWithError:callsite:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10904b928

// -[SCManagedVideoCapturerImpl _videoWriterDidFailWritingWithError:callsite:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10904ba5c

// -[SCManagedVideoCapturerImpl _willStopRecording]
// Type encoding: v16@0:8
// Implementation: 0x10904bb58

// -[SCManagedVideoCapturerImpl _stopRecording]
// Type encoding: v16@0:8
// Implementation: 0x10904bc5c

// -[SCManagedVideoCapturerImpl stopRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x10904c230

// -[SCManagedVideoCapturerImpl _stopRecordingAsynchronouslyWithStopTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10904c36c

// -[SCManagedVideoCapturerImpl cancelRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x10904c478

// -[SCManagedVideoCapturerImpl addTimedTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904c54c

// -[SCManagedVideoCapturerImpl _addTimedTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904c660

// -[SCManagedVideoCapturerImpl _isStatusReadyForStopRecord]
// Type encoding: B16@0:8
// Implementation: 0x10904c6c4

// -[SCManagedVideoCapturerImpl _isEndSessionTimeValidForStopRecord]
// Type encoding: B16@0:8
// Implementation: 0x10904c714

// -[SCManagedVideoCapturerImpl clearTimedTasks]
// Type encoding: v16@0:8
// Implementation: 0x10904c74c

// -[SCManagedVideoCapturerImpl _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x10904c834

// -[SCManagedVideoCapturerImpl _resetAudioConfigLogging]
// Type encoding: v16@0:8
// Implementation: 0x10904c8c0

// -[SCManagedVideoCapturerImpl _disposeAudioRecording]
// Type encoding: v16@0:8
// Implementation: 0x10904c904

// -[SCManagedVideoCapturerImpl _audioQueueDiagnosticsSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x10904ca80

// -[SCManagedVideoCapturerImpl _audioInputStateSnapshotAtRecordingEndWithActiveMicrophoneMode:]
// Type encoding: @24@0:8q16
// Implementation: 0x10904caec

// -[SCManagedVideoCapturerImpl _recordingEndAVSyncInfoExtrasWithActiveMicrophoneMode:]
// Type encoding: @24@0:8q16
// Implementation: 0x10904cd28

// -[SCManagedVideoCapturerImpl _setAudioQueueDiagnosticsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10904ceec

// -[SCManagedVideoCapturerImpl _checkVideoSizeForURL:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x10904cf54

// -[SCManagedVideoCapturerImpl _isVideoSizeZero:]
// Type encoding: B32@0:8{CGSize=dd}16
// Implementation: 0x10904d0a8

// -[SCManagedVideoCapturerImpl _handleZeroVideoSizeForURL:videoPromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10904d0e8

// -[SCManagedVideoCapturerImpl _checkAndReportVideoDurationForURL:videoPromise:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x10904d230

// -[SCManagedVideoCapturerImpl _isVideoDurationZero:]
// Type encoding: B24@0:8d16
// Implementation: 0x10904d408

// -[SCManagedVideoCapturerImpl audioCaptureSession:didOutputSampleBuffer:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x10904d434

// -[SCManagedVideoCapturerImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904d5c4

// -[SCManagedVideoCapturerImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x10904d7a8

// -[SCManagedVideoCapturerImpl _didReceiveManagedVideoDataSourceEvent:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10904d7d4

// -[SCManagedVideoCapturerImpl _generatePlaceholderImageWithPixelBuffer:]
// Type encoding: v24@0:8^{__CVBuffer=}16
// Implementation: 0x10904dc8c

// -[SCManagedVideoCapturerImpl _processVideoSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10904df34

// -[SCManagedVideoCapturerImpl _processAudioSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10904e018

// -[SCManagedVideoCapturerImpl _addVideoRawDataWithPixelBuffer:]
// Type encoding: v24@0:8^{__CVBuffer=}16
// Implementation: 0x10904e128

// -[SCManagedVideoCapturerImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c26db8

// -[SCManagedVideoCapturerImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904e224

// -[SCManagedVideoCapturerImpl startStreamingWithAudioConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904e22c

// -[SCManagedVideoCapturerImpl stopStreaming]
// Type encoding: v16@0:8
// Implementation: 0x10904e230

// -[SCManagedVideoCapturerImpl isStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10904e234

// -[SCManagedVideoCapturerImpl managedVideoCapturerTimeObserver:shouldProcessTimedTask:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10904e250

// -[SCManagedVideoCapturerImpl cameraCreationDelayLogger]
// Type encoding: @16@0:8
// Implementation: 0x10904e258

// -[SCManagedVideoCapturerImpl cameraSnapCaptureLogger]
// Type encoding: @16@0:8
// Implementation: 0x10904e280

// -[SCManagedVideoCapturerImpl _startRecordingWithOutputSettings:audioConfiguration:startTime:maxDuration:speedRate:videoAspectRatio:placeholderImageAspectRatio:toURL:deviceFormat:devicePosition:sessionInfo:shouldKeepVideoSizeAsOutputSize:]
// Type encoding: v108@0:8@16@24d32d40d48d56d64@72@80q88@96B104
// Implementation: 0x10904e2a8

// -[SCManagedVideoCapturerImpl _audioConfigDidCompleteWithStartTime:speedRate:placeholderImageAspectRatio:toURL:deviceFormat:devicePosition:sessionInfo:error:]
// Type encoding: v80@0:8d16d24d32@40@48q56@64@72
// Implementation: 0x10904e7a8

// -[SCManagedVideoCapturerImpl _startRecordingCompletionWithOutputSettings:startTime:speedRate:toURL:deviceFormat:devicePosition:sessionInfo:]
// Type encoding: v72@0:8@16d24d32@40@48q56@64
// Implementation: 0x10904e898

// -[SCManagedVideoCapturerImpl _videoCaptureFailWithError:session:captureSessionID:invalidPresentationTimeCount:callsite:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x10904ef5c

// -[SCManagedVideoCapturerImpl _videoWriteCompletionWithSessionId:recordedVideoPromise:status:error:]
// Type encoding: v44@0:8i16@20q28@36
// Implementation: 0x10904f060

// -[SCManagedVideoCapturerImpl _cancelRecording]
// Type encoding: v16@0:8
// Implementation: 0x10904f894

// -[SCManagedVideoCapturerImpl _handleOutputSampleBuffer:devicePosition:]
// Type encoding: v32@0:8^{opaqueCMSampleBuffer=}16q24
// Implementation: 0x10904fad4

// -[SCManagedVideoCapturerImpl _handleAudioOutputSampleBufferWithOptionalProcessing:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10904fdd8

// -[SCManagedVideoCapturerImpl _buildRecordingOutputSettingsWithOverrideSettings:deviceFormat:aspectRatio:shouldKeepVideoSizeAsOutputSize:]
// Type encoding: @44@0:8@16@24d32B40
// Implementation: 0x10904ff7c

// -[SCManagedVideoCapturerImpl _defaultRecordingOutputSettingsWithDeviceFormat:aspectRatio:shouldKeepVideoSizeAsOutputSize:]
// Type encoding: @36@0:8@16d24B32
// Implementation: 0x109050158

// -[SCManagedVideoCapturerImpl _buildSnapCaptureLogParametersWithCaptureSessionId:fileSizeInBytes:videoDurationMs:mediaSizeInPoints:countOfVideoSamplesAppended:countOfAudioSamplesAppended:countOfVideoSamplesAppendedByUser:countOfAudioSamplesAppendedByUser:countOfAudioSamplesAppendFailed:audioSampleAppendError:isVideoWriterPrepared:isAudioWriterPrepared:outputURL:audioQueueDiagnosticsSnapshot:audioSignalMetrics:recordingEndAVSyncInfoExtras:audioSessionConfigSkipReason:invalidPresentationTimeCount:assetWriterStatus:captureError:]
// Type encoding: @176@0:8@16q24q32{CGSize=dd}40q56q64q72q80q88@96B104B108@112@120@128@136@144q152q160@168
// Implementation: 0x109050324

// -[SCManagedVideoCapturerImpl _logVideoSnapCaptureStatus:callsite:captureParameters:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x1090517b0

// -[SCManagedVideoCapturerImpl _errorCodeFromError:]
// Type encoding: @24@0:8@16
// Implementation: 0x10905189c

// -[SCManagedVideoCapturerImpl _appendAudioSessionErrors:forError:keyPrefix:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1090518e4

// -[SCManagedVideoCapturerImpl _buildJsonDataFromError:]
// Type encoding: @24@0:8@16
// Implementation: 0x109051bac

// -[SCManagedVideoCapturerImpl _skipAudioSessionInitialization]
// Type encoding: B16@0:8
// Implementation: 0x109051da0

// -[SCManagedVideoCapturerImpl isAsync]
// Type encoding: B16@0:8
// Implementation: 0x109051db8

// -[SCManagedVideoCapturerImpl observeSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109051dc0

// -[SCManagedVideoCapturerImpl observeSampleBufferAsynchronously:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109051e6c

// -[SCManagedVideoCapturerImpl _resetFrontTorch]
// Type encoding: v16@0:8
// Implementation: 0x109051e70

// -[SCManagedVideoCapturerImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x109051f98

// -[SCManagedVideoCapturerImpl outputURL]
// Type encoding: @16@0:8
// Implementation: 0x109051fa0

// -[SCManagedVideoCapturerImpl firstWrittenAudioBufferDelay]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x109051fa8

// -[SCManagedVideoCapturerImpl setFirstWrittenAudioBufferDelay:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x109051fbc

// -[SCManagedVideoCapturerImpl audioQueueStarted]
// Type encoding: B16@0:8
// Implementation: 0x109051fd0

// -[SCManagedVideoCapturerImpl audioCaptureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109051fd8

// -[SCManagedVideoCapturerImpl setAudioCaptureEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109051fe0

// -[SCManagedVideoCapturerImpl audioProcessingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109051fe8

// -[SCManagedVideoCapturerImpl setAudioProcessingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109051ff0

// -[SCManagedVideoCapturerImpl setCameraCreationDelayLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x109051ff8

// -[SCManagedVideoCapturerImpl setCameraSnapCaptureLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052028

// -[SCManagedVideoCapturerImpl status]
// Type encoding: Q16@0:8
// Implementation: 0x100c2ce48

// -[SCManagedVideoCapturerImpl setStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100c26bb8

// -[SCManagedVideoCapturerImpl audioConfigurationError]
// Type encoding: @16@0:8
// Implementation: 0x109052058

// -[SCManagedVideoCapturerImpl setAudioConfigurationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052060

// -[SCManagedVideoCapturerImpl beginAudioRecordingError]
// Type encoding: @16@0:8
// Implementation: 0x109052090

// -[SCManagedVideoCapturerImpl setBeginAudioRecordingError:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052098

// -[SCManagedVideoCapturerImpl frontMicAudioConfigurationError]
// Type encoding: @16@0:8
// Implementation: 0x1090520c8

// -[SCManagedVideoCapturerImpl setFrontMicAudioConfigurationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090520d0

// -[SCManagedVideoCapturerImpl frontMicBeginAudioRecordingError]
// Type encoding: @16@0:8
// Implementation: 0x109052100

// -[SCManagedVideoCapturerImpl setFrontMicBeginAudioRecordingError:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052108

// -[SCManagedVideoCapturerImpl audioSamplesErased]
// Type encoding: Q16@0:8
// Implementation: 0x109052138

// -[SCManagedVideoCapturerImpl setAudioSamplesErased:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109052140

// -[SCManagedVideoCapturerImpl audioSamplesCopyFailure]
// Type encoding: Q16@0:8
// Implementation: 0x109052148

// -[SCManagedVideoCapturerImpl setAudioSamplesCopyFailure:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109052150

// -[SCManagedVideoCapturerImpl audioSamplesRestoreFailure]
// Type encoding: Q16@0:8
// Implementation: 0x109052158

// -[SCManagedVideoCapturerImpl setAudioSamplesRestoreFailure:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109052160

// -[SCManagedVideoCapturerImpl audioCaptureEnabledOnCaptureStart]
// Type encoding: B16@0:8
// Implementation: 0x109052168

// -[SCManagedVideoCapturerImpl setAudioCaptureEnabledOnCaptureStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x109052170

// -[SCManagedVideoCapturerImpl audioProcessingEnabledOnCaptureStart]
// Type encoding: B16@0:8
// Implementation: 0x109052178

// -[SCManagedVideoCapturerImpl setAudioProcessingEnabledOnCaptureStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x109052180

// -[SCManagedVideoCapturerImpl audioSamplesReceived]
// Type encoding: Q16@0:8
// Implementation: 0x109052188

// -[SCManagedVideoCapturerImpl setAudioSamplesReceived:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109052190

// -[SCManagedVideoCapturerImpl audioSamplesDroppedPreWrite]
// Type encoding: Q16@0:8
// Implementation: 0x109052198

// -[SCManagedVideoCapturerImpl setAudioSamplesDroppedPreWrite:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090521a0

// -[SCManagedVideoCapturerImpl inputAvailableAtRecordingStart]
// Type encoding: B16@0:8
// Implementation: 0x1090521a8

// -[SCManagedVideoCapturerImpl setInputAvailableAtRecordingStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090521b0

// -[SCManagedVideoCapturerImpl isPhoneCallActiveAtRecordingStart]
// Type encoding: B16@0:8
// Implementation: 0x1090521b8

// -[SCManagedVideoCapturerImpl setIsPhoneCallActiveAtRecordingStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090521c0

// -[SCManagedVideoCapturerImpl availableInputsCountAtRecordingStart]
// Type encoding: Q16@0:8
// Implementation: 0x1090521c8

// -[SCManagedVideoCapturerImpl setAvailableInputsCountAtRecordingStart:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090521d0

// -[SCManagedVideoCapturerImpl inputPortTypeAtRecordingStart]
// Type encoding: @16@0:8
// Implementation: 0x1090521d8

// -[SCManagedVideoCapturerImpl setInputPortTypeAtRecordingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090521e0

// -[SCManagedVideoCapturerImpl audioSessionCategoryAtRecordingStart]
// Type encoding: @16@0:8
// Implementation: 0x1090521e8

// -[SCManagedVideoCapturerImpl setAudioSessionCategoryAtRecordingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090521f0

// -[SCManagedVideoCapturerImpl audioSessionModeAtRecordingStart]
// Type encoding: @16@0:8
// Implementation: 0x1090521f8

// -[SCManagedVideoCapturerImpl setAudioSessionModeAtRecordingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052200

// -[SCManagedVideoCapturerImpl audioSessionCategoryOptionsAtRecordingStart]
// Type encoding: Q16@0:8
// Implementation: 0x109052208

// -[SCManagedVideoCapturerImpl setAudioSessionCategoryOptionsAtRecordingStart:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109052210

// -[SCManagedVideoCapturerImpl routeInputPortTypeAtRecordingStart]
// Type encoding: @16@0:8
// Implementation: 0x109052218

// -[SCManagedVideoCapturerImpl setRouteInputPortTypeAtRecordingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052220

// -[SCManagedVideoCapturerImpl routeOutputPortTypeAtRecordingStart]
// Type encoding: @16@0:8
// Implementation: 0x109052228

// -[SCManagedVideoCapturerImpl setRouteOutputPortTypeAtRecordingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052230

// -[SCManagedVideoCapturerImpl secondaryAudioShouldBeSilencedHintAtRecordingStart]
// Type encoding: B16@0:8
// Implementation: 0x109052238

// -[SCManagedVideoCapturerImpl setSecondaryAudioShouldBeSilencedHintAtRecordingStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x109052240

// -[SCManagedVideoCapturerImpl availableMicDataSourcesAtRecordingStart]
// Type encoding: @16@0:8
// Implementation: 0x109052248

// -[SCManagedVideoCapturerImpl setAvailableMicDataSourcesAtRecordingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052250

// -[SCManagedVideoCapturerImpl inputGainAtRecordingStart]
// Type encoding: f16@0:8
// Implementation: 0x109052258

// -[SCManagedVideoCapturerImpl setInputGainAtRecordingStart:]
// Type encoding: v20@0:8f16
// Implementation: 0x109052260

// -[SCManagedVideoCapturerImpl inputGainSettableAtRecordingStart]
// Type encoding: B16@0:8
// Implementation: 0x109052268

// -[SCManagedVideoCapturerImpl setInputGainSettableAtRecordingStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x109052270

// -[SCManagedVideoCapturerImpl isInputMutedAtRecordingStart]
// Type encoding: @16@0:8
// Implementation: 0x109052278

// -[SCManagedVideoCapturerImpl setIsInputMutedAtRecordingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x109052280

// -[SCManagedVideoCapturerImpl routeInputPortTypeAtQueueStart]
// Type encoding: @16@0:8
// Implementation: 0x1090522b0

// -[SCManagedVideoCapturerImpl setRouteInputPortTypeAtQueueStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090522b8

// -[SCManagedVideoCapturerImpl routeInputSelectedDataSourceNameAtQueueStart]
// Type encoding: @16@0:8
// Implementation: 0x1090522c0

// -[SCManagedVideoCapturerImpl setRouteInputSelectedDataSourceNameAtQueueStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090522c8

// -[SCManagedVideoCapturerImpl activeMicrophoneModeNameAtQueueStart]
// Type encoding: @16@0:8
// Implementation: 0x1090522d0

// -[SCManagedVideoCapturerImpl setActiveMicrophoneModeNameAtQueueStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090522d8

// -[SCManagedVideoCapturerImpl consecutiveSilentRecordingCountAtRecordingStart]
// Type encoding: q16@0:8
// Implementation: 0x1090522e0

// -[SCManagedVideoCapturerImpl setConsecutiveSilentRecordingCountAtRecordingStart:]
// Type encoding: v24@0:8q16
// Implementation: 0x1090522e8

// -[SCManagedVideoCapturerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090522f0

@end
