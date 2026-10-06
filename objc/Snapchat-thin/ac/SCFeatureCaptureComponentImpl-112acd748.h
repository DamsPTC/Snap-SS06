// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureCaptureComponentImpl
// Superclass: SCFeature
// Address: 0x112acd748

@interface SCFeatureCaptureComponentImpl

// Property: captureServiceActionObservable; attributes: T@"SCBehaviorSubject",&,N,V_captureServiceActionObservable
// Property: imageCaptureStrategyEvents; attributes: T@"SCObservable",&,N,V_imageCaptureStrategyEvents
// Property: videoCaptureStrategyEvents; attributes: T@"SCObservable",&,N,V_videoCaptureStrategyEvents
// Property: recoveryEvent; attributes: T@"SCFuture",R,N
// Property: delegate; attributes: T@"<SCFeatureCaptureComponentDelegate>",W,N,V_delegate
// Property: imagePromise; attributes: T@"SCPromise",&,N,V_imagePromise
// Property: captureConfigurationDelegate; attributes: T@"<SCFeatureImageCaptureConfigurationDelegate>",W,N,V_captureConfigurationDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureCaptureComponentImpl initWithSnapRecovery:captureEventsObservers:cameraHardwareServicesAPI:captureServiceScopeBuilderServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1008b3f94

// -[SCFeatureCaptureComponentImpl stopRecording]
// Type encoding: v16@0:8
// Implementation: 0x106147a54

// -[SCFeatureCaptureComponentImpl abortRecordingWithReason:callsite:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106147c70

// -[SCFeatureCaptureComponentImpl prepareForRecordingWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106147d34

// -[SCFeatureCaptureComponentImpl captureImageWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106147ddc

// -[SCFeatureCaptureComponentImpl logTimerModeImageCaptureWithSessionId:filterLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061480f4

// -[SCFeatureCaptureComponentImpl activateAudioSessionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061480f8

// -[SCFeatureCaptureComponentImpl relinquishAudioSessionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106148134

// -[SCFeatureCaptureComponentImpl recoveryEvent]
// Type encoding: @16@0:8
// Implementation: 0x100c64518

// -[SCFeatureCaptureComponentImpl captureServiceActionObservable]
// Type encoding: @16@0:8
// Implementation: 0x106148170

// -[SCFeatureCaptureComponentImpl recoverWithSnapSessionContext:contentLossReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1061483b8

// -[SCFeatureCaptureComponentImpl _captureServiceScopeCleanup]
// Type encoding: v16@0:8
// Implementation: 0x106148404

// -[SCFeatureCaptureComponentImpl _scheduledStartRecordingRequest:state:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106148490

// -[SCFeatureCaptureComponentImpl _adjustedDuration:forSpeedMultiplier:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x1061487f8

// -[SCFeatureCaptureComponentImpl _willStartRecord:]
// Type encoding: v24@0:8@16
// Implementation: 0x106148808

// -[SCFeatureCaptureComponentImpl _startedRecordingVideo]
// Type encoding: v16@0:8
// Implementation: 0x106148860

// -[SCFeatureCaptureComponentImpl _stoppedRecordingVideo]
// Type encoding: v16@0:8
// Implementation: 0x106148898

// -[SCFeatureCaptureComponentImpl _abortedRecordingVideoWithDidCancelCapturerRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061488f4

// -[SCFeatureCaptureComponentImpl _canceledStartRecordingRequest]
// Type encoding: v16@0:8
// Implementation: 0x106148900

// -[SCFeatureCaptureComponentImpl _stopppedRecordingDelegateMethods]
// Type encoding: v16@0:8
// Implementation: 0x106148a08

// -[SCFeatureCaptureComponentImpl _abortedRecordingDelegateMethods]
// Type encoding: v16@0:8
// Implementation: 0x106148a60

// -[SCFeatureCaptureComponentImpl _startedCapturingImage]
// Type encoding: v16@0:8
// Implementation: 0x106148ab8

// -[SCFeatureCaptureComponentImpl _finishedCapturingImage]
// Type encoding: v16@0:8
// Implementation: 0x106148b00

// -[SCFeatureCaptureComponentImpl _didCaptureImage:discardRelatedData:configuration:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106148b24

// -[SCFeatureCaptureComponentImpl _imageCaptureDidReceiveError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106148c10

// -[SCFeatureCaptureComponentImpl _didCaptureVideo:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106148c40

// -[SCFeatureCaptureComponentImpl _videoCaptureDidReceiveError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106148cb0

// -[SCFeatureCaptureComponentImpl _capturerWillFinishRecordingWithRecordedVideoFuture:videoSize:placeholderImage:session:]
// Type encoding: v56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x106148cec

// -[SCFeatureCaptureComponentImpl _capturerWillBeginRecording]
// Type encoding: v16@0:8
// Implementation: 0x106148d78

// -[SCFeatureCaptureComponentImpl _capturerDidEndRecording]
// Type encoding: v16@0:8
// Implementation: 0x106148d8c

// -[SCFeatureCaptureComponentImpl _asynchronousImageCaptureEnabled:configuration:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106148db0

// -[SCFeatureCaptureComponentImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x106148e04

// -[SCFeatureCaptureComponentImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b4294

// -[SCFeatureCaptureComponentImpl imagePromise]
// Type encoding: @16@0:8
// Implementation: 0x106148e24

// -[SCFeatureCaptureComponentImpl setImagePromise:]
// Type encoding: v24@0:8@16
// Implementation: 0x106148e34

// -[SCFeatureCaptureComponentImpl imageCaptureStrategyEvents]
// Type encoding: @16@0:8
// Implementation: 0x106148e74

// -[SCFeatureCaptureComponentImpl setImageCaptureStrategyEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106148e84

// -[SCFeatureCaptureComponentImpl videoCaptureStrategyEvents]
// Type encoding: @16@0:8
// Implementation: 0x106148ec4

// -[SCFeatureCaptureComponentImpl setVideoCaptureStrategyEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106148ed4

// -[SCFeatureCaptureComponentImpl captureConfigurationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106148f14

// -[SCFeatureCaptureComponentImpl setCaptureConfigurationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b42a8

// -[SCFeatureCaptureComponentImpl setCaptureServiceActionObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106148f34

// -[SCFeatureCaptureComponentImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106148f74

@end
