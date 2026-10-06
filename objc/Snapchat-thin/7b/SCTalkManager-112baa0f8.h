// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTalkManager
// Superclass: NSObject
// Address: 0x112baa0f8

@interface SCTalkManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: incomingCallRequestObservable; attributes: T@"SCObservable",R,N
// Property: cameraServices; attributes: T@"<SCTCameraServices>",R,N
// Property: localFrameProvider; attributes: T@"<SCTalkLocalFrameProvider>",R,N

// -[SCTalkManager initWithUserId:cameraServices:chatTransportServices:identityServices:circumstanceEngine:performer:localFrameProvider:incomingCallRequestObservable:callKitServices:audioManager:callOpsDataProvider:talkCoreProvider:talkSessionProvider:notificationPayloadDecryptor:rendererManagerBridge:audioSession:errorReporter:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x1085f0428

// -[SCTalkManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085f0924

// -[SCTalkManager identityServices]
// Type encoding: @16@0:8
// Implementation: 0x1085f0958

// -[SCTalkManager chatTransportServices]
// Type encoding: @16@0:8
// Implementation: 0x1085f0960

// -[SCTalkManager invalidate]
// Type encoding: v16@0:8
// Implementation: 0x1085f0968

// -[SCTalkManager audioManager]
// Type encoding: @16@0:8
// Implementation: 0x1085f09d4

// -[SCTalkManager createSessionForConvoId:convoMetadata:dependencies:delegate:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1085f09dc

// -[SCTalkManager createModularCallSessionForTalkContext:callIntent:selectedLensInfoObservable:appliedLensObservable:sharedLensController:delegate:sourceType:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56q64@?72
// Implementation: 0x1085f0aa4

// -[SCTalkManager createPipCallSessionForTalkContext:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085f0bb8

// -[SCTalkManager createHeadlessSessionForTalkContext:callIntent:remoteUserIds:delegate:sourceType:withCallKit:completion:]
// Type encoding: v68@0:8@16@24@32@40q48B56@?60
// Implementation: 0x1085f0c30

// -[SCTalkManager isSessionActiveForTalkContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085f0d18

// -[SCTalkManager acquirePermissionToStartCall:forTalkContext:sourceType:alertDialogUiContainer:completionBlock:]
// Type encoding: v56@0:8Q16@24q32@40@?48
// Implementation: 0x1085f0d20

// -[SCTalkManager acquirePermissionToPublishMedia:forTalkContext:alertDialogUiContainer:completionBlock:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x1085f1064

// -[SCTalkManager _acquirePermissionToPublishMedia:forTalkContext:alertDialogUiContainer:loggedCompletionBlock:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x1085f11ac

// -[SCTalkManager createVideoFrameProvider]
// Type encoding: @16@0:8
// Implementation: 0x1085f1a3c

// -[SCTalkManager processIncomingCallRequestAsNotification:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085f1a98

// -[SCTalkManager processRingingTimeout:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085f1e68

// -[SCTalkManager onIncomingCallRequestFailedToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f1fec

// -[SCTalkManager incomingCallRequestObservable]
// Type encoding: @16@0:8
// Implementation: 0x1085f2144

// -[SCTalkManager cameraServices]
// Type encoding: @16@0:8
// Implementation: 0x1085f22a0

// -[SCTalkManager localFrameProvider]
// Type encoding: @16@0:8
// Implementation: 0x1085f22c8

// -[SCTalkManager setCallingToPauseIfNeeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085f22d0

// -[SCTalkManager powerStateDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085f240c

// -[SCTalkManager dismissCallsOtherThanTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f246c

// -[SCTalkManager endCallForTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f2660

// -[SCTalkManager injectFrame:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1085f26b8

// -[SCTalkManager _isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x1085f26f4

// -[SCTalkManager _decryptSealedEnvelope:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085f2704

// -[SCTalkManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085f27e0

@end
