// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTV3HeadlessSessionController
// Superclass: NSObject
// Address: 0x112ba9e78

@interface SCTV3HeadlessSessionController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTV3HeadlessSessionController initWithUserId:talkManager:audioServices:identityServices:talkContextFactory:snapchattersSynchronousDataFetcher:groupsDataFetcher:displayNameProvider:grapheneLogger:notificationOSSettingsRetriever:notificationManager:missedCallsCache:plusFeatureGating:watchCallNotificationScheduler:notificationProcessingReporter:defaultCommunicationAppConfig:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x1085e6bac

// -[SCTV3HeadlessSessionController notificationProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1085e7104

// -[SCTV3HeadlessSessionController callKitCallManager]
// Type encoding: @16@0:8
// Implementation: 0x1085e7108

// -[SCTV3HeadlessSessionController _handleUnexpectedVoipNotification:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e7110

// -[SCTV3HeadlessSessionController handlePushKitIncomingCallNotification:withCompletionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e71dc

// -[SCTV3HeadlessSessionController setModularCallLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e74f8

// -[SCTV3HeadlessSessionController invalidate]
// Type encoding: v16@0:8
// Implementation: 0x1085e7504

// -[SCTV3HeadlessSessionController handleTalkInAppNotificationPressed:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085e7540

// -[SCTV3HeadlessSessionController handleTalkInAppNotificationDismissed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e76a8

// -[SCTV3HeadlessSessionController shouldFilterNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x1085e77c0

// -[SCTV3HeadlessSessionController processNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e7904

// -[SCTV3HeadlessSessionController removeNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e7a88

// -[SCTV3HeadlessSessionController isSessionActiveForTalkContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085e7b20

// -[SCTV3HeadlessSessionController didStartCallWithTalkContext:media:sourceType:isHangout:completion:]
// Type encoding: v52@0:8@16Q24q32B40@?44
// Implementation: 0x1085e7b94

// -[SCTV3HeadlessSessionController willAnswerCallWithTalkContext:media:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1085e7f34

// -[SCTV3HeadlessSessionController didAnswerCallWithTalkContext:media:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1085e7f38

// -[SCTV3HeadlessSessionController didEndCallWithTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e7ff8

// -[SCTV3HeadlessSessionController didUpdateMedia:muteStatus:talkContext:]
// Type encoding: v36@0:8Q16B24@28
// Implementation: 0x1085e810c

// -[SCTV3HeadlessSessionController callKitAudioServices]
// Type encoding: @16@0:8
// Implementation: 0x1085e8174

// -[SCTV3HeadlessSessionController _handleNotification:talkContext:isVoipForCallKit:withCompletion:]
// Type encoding: q44@0:8@16@24B32@?36
// Implementation: 0x1085e81d4

// -[SCTV3HeadlessSessionController _blockSuppressNotification:emitProcessingStepEvents:]
// Type encoding: q28@0:8@16B24
// Implementation: 0x1085e91e8

// -[SCTV3HeadlessSessionController _handleReplacementNotification:convoId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1085e920c

// -[SCTV3HeadlessSessionController _applyWorkaroundForIos13SdkForMultipleVoipsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085e9440

// -[SCTV3HeadlessSessionController _doesIosDemandVoipMustTriggerCallKit]
// Type encoding: B16@0:8
// Implementation: 0x1085e9484

// -[SCTV3HeadlessSessionController _notificationWithNewTitle:forNotification:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085e94c8

// -[SCTV3HeadlessSessionController _prepareSessionForTalkContext:callIntent:remoteUserIds:sourceType:withCallKit:completion:]
// Type encoding: v60@0:8@16@24@32q40B48@?52
// Implementation: 0x1085e95a4

// -[SCTV3HeadlessSessionController _retainSession:forTalkContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085e96e0

// -[SCTV3HeadlessSessionController _releaseSessionForTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e9794

// -[SCTV3HeadlessSessionController _getSessionForTalkContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085e9878

// -[SCTV3HeadlessSessionController _raiseExceptionIfViolatingIos13SdkRule:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e9920

// -[SCTV3HeadlessSessionController _reportIncomingCallNotification:incomingCallRequest:session:customRingtoneId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1085e9a10

// -[SCTV3HeadlessSessionController _cacheMissedCallFromTalkcorePayload:withReason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1085e9d50

// -[SCTV3HeadlessSessionController _showGhostCallForNotification:withUnknownCallerName:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1085e9e24

// -[SCTV3HeadlessSessionController _isTalkV3Notification:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085e9ef4

// -[SCTV3HeadlessSessionController _isTalkV3ReplacementNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085e9fcc

// -[SCTV3HeadlessSessionController _stringFromPushType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1085ea048

// -[SCTV3HeadlessSessionController _convoMetadataForNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085ea0dc

// -[SCTV3HeadlessSessionController _removeCallKitNotificationForTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ea17c

// -[SCTV3HeadlessSessionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085ea25c

@end
