// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCModularCallController
// Superclass: NSObject
// Address: 0x112b0a008

@interface SCModularCallController

// Property: delegate; attributes: T@"<SCModularCallControllerDelegate>",W,N,V_delegate
// Property: callInfoObservable; attributes: T@"SCObservable",R,N
// Property: pipInfoObservable; attributes: T@"SCObservable",R,N
// Property: isSponsoredLensAttachmentVisible; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCModularCallController initWithTalkManager:talkContext:callLaunchAction:callKitServices:cameraManager:talkAudioServices:sharedLensController:talkScreenshotSender:lensLoggingInfoProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1069b6540

// -[SCModularCallController _createSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b6724

// -[SCModularCallController _createModularCallSession:startCallSourceType:callLaunchAction:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1069b6cfc

// -[SCModularCallController _onSessionCreated:callLaunchAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069b6edc

// -[SCModularCallController _activateSessionAndApplyCallLaunchAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b7020

// -[SCModularCallController _callLaunchActionCompletion]
// Type encoding: v16@0:8
// Implementation: 0x1069b714c

// -[SCModularCallController dispose]
// Type encoding: v16@0:8
// Implementation: 0x1069b74e4

// -[SCModularCallController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1069b74e8

// -[SCModularCallController callInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1069b751c

// -[SCModularCallController pipInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1069b7544

// -[SCModularCallController setIsUiAppeared:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069b7614

// -[SCModularCallController declineCall]
// Type encoding: v16@0:8
// Implementation: 0x1069b7678

// -[SCModularCallController switchCamera]
// Type encoding: v16@0:8
// Implementation: 0x1069b770c

// -[SCModularCallController selectAudioDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b7784

// -[SCModularCallController updatePublishedMedia:]
// Type encoding: v20@0:8i16
// Implementation: 0x1069b7818

// -[SCModularCallController updateLocalVideoState:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069b79a4

// -[SCModularCallController stopScreenCapture]
// Type encoding: v16@0:8
// Implementation: 0x1069b79f0

// -[SCModularCallController notifyScreenShareWillStart:]
// Type encoding: B20@0:8B16
// Implementation: 0x1069b7a54

// -[SCModularCallController enableLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b7b50

// -[SCModularCallController disableLenses]
// Type encoding: v16@0:8
// Implementation: 0x1069b7d40

// -[SCModularCallController onDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1069b7d48

// -[SCModularCallController setIsAppBackgrounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069b7d4c

// -[SCModularCallController createRemoteVideoViewWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1069b7db0

// -[SCModularCallController notifyScreenShotTaken]
// Type encoding: v16@0:8
// Implementation: 0x1069b7edc

// -[SCModularCallController notifyScreenRecorded]
// Type encoding: v16@0:8
// Implementation: 0x1069b7f6c

// -[SCModularCallController reportCallingAddedParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b7ffc

// -[SCModularCallController setNativeAudioSelectorOpened:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069b80b0

// -[SCModularCallController isSponsoredLensAttachmentVisible]
// Type encoding: B16@0:8
// Implementation: 0x1069b8138

// -[SCModularCallController setSponsoredLensAttachmentVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069b8140

// -[SCModularCallController retryCall:]
// Type encoding: v20@0:8i16
// Implementation: 0x1069b82a8

// -[SCModularCallController sendScreenshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b8318

// -[SCModularCallController alertDialogUiContainer]
// Type encoding: @16@0:8
// Implementation: 0x1069b83f8

// -[SCModularCallController _setCallInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b8438

// -[SCModularCallController _applyCallLaunchAction:pendingCallMedia:toSession:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1069b849c

// -[SCModularCallController _enableCameraAndLensesEagerlyIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b8838

// -[SCModularCallController _applyToSession:fallback:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1069b88d4

// -[SCModularCallController _dispose]
// Type encoding: v16@0:8
// Implementation: 0x1069b895c

// -[SCModularCallController _disposeSession]
// Type encoding: v16@0:8
// Implementation: 0x1069b898c

// -[SCModularCallController _endCallBeforeSessionIsReady]
// Type encoding: v16@0:8
// Implementation: 0x1069b8a30

// -[SCModularCallController _disposeSessionIfCallEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b8ac4

// -[SCModularCallController _runBlockAndUpdateCallVisiblityIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1069b8b60

// -[SCModularCallController _isCallVisible]
// Type encoding: B16@0:8
// Implementation: 0x1069b8cd0

// -[SCModularCallController _updateCallVisibilityForCameraManager]
// Type encoding: v16@0:8
// Implementation: 0x1069b8cfc

// -[SCModularCallController _updateCallVisibilityForSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b8d34

// -[SCModularCallController _setSponsoredLensAttachmentVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1069b8d80

// -[SCModularCallController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1069b8e3c

// -[SCModularCallController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069b8e54

// -[SCModularCallController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069b8e60

@end
