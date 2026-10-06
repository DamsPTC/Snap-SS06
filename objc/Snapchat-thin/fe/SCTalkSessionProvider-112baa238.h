// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTalkSessionProvider
// Superclass: NSObject
// Address: 0x112baa238

@interface SCTalkSessionProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTalkSessionProvider initWithTalkCoreProvider:bitmojiFlatlandInfoProvider:screenCaptureServices:chatTransportServices:identityServices:talkContextMutableFactory:cameraServices:networkServices:callKitCallManager:notificationPool:callStateProvider:valdiRuntimeProvider:networkConnectivityMonitorServices:applicationLifecycleEvents:friendsFeedGraphene:presenceRenderGrapheneLogger:talkCoreDispatcher:rendererManagerBridge:errorReporter:localFrameProvider:networkInfo:callOpsDataProvider:audioManager:grapheneLogger:circumstanceEngine:plusFeatureGating:plusFeatureLogging:callSuperResolutionServices:callPageConfig:platformPresenceServiceProvider:talkIntentDonator:currentPageTracker:crashLogger:]
// Type encoding: @280@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272
// Implementation: 0x1085f2f30

// -[SCTalkSessionProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085f3720

// -[SCTalkSessionProvider disposeWithReason:]
// Type encoding: v20@0:8i16
// Implementation: 0x1085f3768

// -[SCTalkSessionProvider sessionWrappers]
// Type encoding: @16@0:8
// Implementation: 0x1085f3a44

// -[SCTalkSessionProvider sessionWrapperForTalkContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085f3a94

// -[SCTalkSessionProvider createTalkChatSessionForConvoId:convoMetadata:dependencies:delegate:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1085f3b2c

// -[SCTalkSessionProvider createModularCallSessionForTalkContext:callIntent:selectedLensInfoObservable:appliedLensObservable:sharedLensController:delegate:sourceType:talkManager:completion:]
// Type encoding: v88@0:8@16@24@32@40@48@56q64@72@?80
// Implementation: 0x1085f3e70

// -[SCTalkSessionProvider createPipCallSessionForTalkContext:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085f42a8

// -[SCTalkSessionProvider createHeadlessSessionForTalkContext:callIntent:remoteUserIds:delegate:sourceType:withCallKit:completion:]
// Type encoding: v68@0:8@16@24@32@40q48B56@?60
// Implementation: 0x1085f454c

// -[SCTalkSessionProvider createCallingSessionWrapper:remoteUserIds:callIntent:sourceType:withCallKit:completion:]
// Type encoding: v60@0:8@16@24@32q40B48@?52
// Implementation: 0x1085f479c

// -[SCTalkSessionProvider isSessionActiveForTalkContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085f4d58

// -[SCTalkSessionProvider sessionWrapperDestroyed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f4e2c

// -[SCTalkSessionProvider _reachabilityChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x1085f50a4

// -[SCTalkSessionProvider _thermalStateChanged]
// Type encoding: v16@0:8
// Implementation: 0x1085f5124

// -[SCTalkSessionProvider _createTalkChatSessionForConvoId:dependencies:remoteParticipants:delegate:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1085f531c

// -[SCTalkSessionProvider _createCallingSessionWrapper:callIntent:sessionBridge:platformEventSubject:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1085f59f8

// -[SCTalkSessionProvider _createCallingSessionParametersWithConversationId:isGroup:callIntent:remoteUserIds:sourceType:withCallKit:]
// Type encoding: @56@0:8@16B24@28@36q44B52
// Implementation: 0x1085f5cd8

// -[SCTalkSessionProvider _createCallingSessionWrapperPromise:callIntent:remoteUserIds:sourceType:withCallKit:]
// Type encoding: @52@0:8@16@24@32q40B48
// Implementation: 0x1085f6358

// -[SCTalkSessionProvider _getRemoteParticipantUserIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085f6d78

// -[SCTalkSessionProvider _getConversationMetadataForConvoId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085f6ebc

// -[SCTalkSessionProvider _networkStatusLoggerForTalkContextId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085f6f28

// -[SCTalkSessionProvider _subscribeToReachabilityIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085f6fcc

// -[SCTalkSessionProvider _subscribeToThermalStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085f7154

// -[SCTalkSessionProvider _isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x1085f71f0

// -[SCTalkSessionProvider _createTalkChatSessionWithPresenceTSForConvoId:dependencies:delegate:presenceSession:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1085f7200

// -[SCTalkSessionProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085f76dc

@end
