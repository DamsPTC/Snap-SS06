// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCKCallManager
// Superclass: NSObject
// Address: 0x112ba8e38

@interface SCTCKCallManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTCKCallManager prepareAudioConfigurationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085ac8b0

// -[SCTCKCallManager _appDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ac908

// -[SCTCKCallManager _callKitAudioServices]
// Type encoding: @16@0:8
// Implementation: 0x1085ac9bc

// -[SCTCKCallManager initWithLocalUserId:listener:callKitAudioServicesProvider:identityServices:talkContextFactory:locationServices:snapchattersSynchronousDataFetcher:groupsDataFetcher:displayNameProvider:grapheneLogger:watchCallNotificationScheduler:notificationProcessingReporter:defaultCommunicationAppConfig:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1085ac9fc

// -[SCTCKCallManager invalidate]
// Type encoding: v16@0:8
// Implementation: 0x1085ace64

// -[SCTCKCallManager reportGhostCallAndTearDownForNotification:withCompletionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085ace94

// -[SCTCKCallManager reportIncomingCallNotification:talkContext:isVideo:customRingtoneId:withCompletionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x1085ad0c8

// -[SCTCKCallManager _reportIncomingCall:callUpdate:shouldIncludeInRecent:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1085ad4f0

// -[SCTCKCallManager _reportOutgoingCall:isFromButton:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1085ad6e4

// -[SCTCKCallManager _validateOutgoingCallWithTalkContext:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085ae1d8

// -[SCTCKCallManager _savePendingOutgoingCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ae3a4

// -[SCTCKCallManager _handleOutgoingCallWithoutMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ae40c

// -[SCTCKCallManager reportCallFailedForTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ae6d8

// -[SCTCKCallManager setModularCallLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ae71c

// -[SCTCKCallManager hasCallObject]
// Type encoding: B16@0:8
// Implementation: 0x1085ae750

// -[SCTCKCallManager reportOutgoingCallToTalkContext:isVideo:sourceType:isHangout:completion:]
// Type encoding: v48@0:8@16B24q28B36@?40
// Implementation: 0x1085ae770

// -[SCTCKCallManager setAudioRecordingInProgress:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ae81c

// -[SCTCKCallManager callDidEndForHeadlessSession:reason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1085ae82c

// -[SCTCKCallManager callDidConnectForHeadlessSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ae9c0

// -[SCTCKCallManager headlessSession:didChangePublishedMedia:isMuted:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1085aeb40

// -[SCTCKCallManager _outgoingCallConnected:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085aec8c

// -[SCTCKCallManager _incomingCallAnswered:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085aed30

// -[SCTCKCallManager providerDidBegin:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085aedbc

// -[SCTCKCallManager _providerDidBeginTimeout]
// Type encoding: v16@0:8
// Implementation: 0x1085aee2c

// -[SCTCKCallManager providerDidReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085aeeb0

// -[SCTCKCallManager provider:performStartCallAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085aeebc

// -[SCTCKCallManager provider:performEndCallAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085af2b0

// -[SCTCKCallManager provider:performAnswerCallAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085af364

// -[SCTCKCallManager provider:performSetMutedCallAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085af734

// -[SCTCKCallManager provider:didActivateAudioSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085af86c

// -[SCTCKCallManager provider:didDeactivateAudioSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085af8e0

// -[SCTCKCallManager hasConnectedCall]
// Type encoding: B16@0:8
// Implementation: 0x1085af8e4

// -[SCTCKCallManager notifyMediaUpdateForConvoId:isVideo:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1085afa04

// -[SCTCKCallManager reportOutgoingCallFromRecentsToConvoId:isVideo:sourceType:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x1085afb10

// -[SCTCKCallManager _onPublishedMediaOrMuteChanged:media:muted:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1085afba4

// -[SCTCKCallManager _updateConfigurationForConvoId:convoMetadata:isVideo:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1085afc3c

// -[SCTCKCallManager _callTitleForConvoId:convoMetadata:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085afdfc

// -[SCTCKCallManager _groupNameBasedOnParticipantNamesForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085b0038

// -[SCTCKCallManager _updateConfigurationForConvoId:isVideo:notification:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x1085b02b0

// -[SCTCKCallManager _createCXCallUpdateForConvoId:isVideo:callerName:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x1085b0330

// -[SCTCKCallManager _performAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b0414

// -[SCTCKCallManager _performAction:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085b041c

// -[SCTCKCallManager _registerProviderIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085b05e4

// -[SCTCKCallManager _prepareCallKitForConvoId:customRingtoneId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085b07c8

// -[SCTCKCallManager _releaseCallKit]
// Type encoding: v16@0:8
// Implementation: 0x1085b08c0

// -[SCTCKCallManager _dismissCallsWithReason:shouldNotifyListener:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1085b090c

// -[SCTCKCallManager _launchCallPageForOutgoingCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b0a98

// -[SCTCKCallManager _presentIncomingCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b0b78

// -[SCTCKCallManager _endCall:reason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1085b0cd0

// -[SCTCKCallManager _callDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b0e4c

// -[SCTCKCallManager _appStartComplete]
// Type encoding: v16@0:8
// Implementation: 0x1085b0f74

// -[SCTCKCallManager _reportOutgoingCallIfPending]
// Type encoding: v16@0:8
// Implementation: 0x1085b0f7c

// -[SCTCKCallManager _resumeTasksAfterAppStartOrActivate]
// Type encoding: v16@0:8
// Implementation: 0x1085b0f90

// -[SCTCKCallManager _presentIncomingCallIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085b0fb4

// -[SCTCKCallManager _requestCallKitAudioSessionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085b0fc4

// -[SCTCKCallManager _releaseCallKitAudioSession]
// Type encoding: v16@0:8
// Implementation: 0x1085b101c

// -[SCTCKCallManager _setIncludesCallsInRecentsIfPossible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085b10b4

// -[SCTCKCallManager _callForTalkContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085b1108

// -[SCTCKCallManager _callForConvoId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085b1298

// -[SCTCKCallManager _reportEndCallIfPending]
// Type encoding: v16@0:8
// Implementation: 0x1085b1420

// -[SCTCKCallManager _snapchatterNameToDisplayForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085b14b8

// -[SCTCKCallManager _snapchatterNameToDisplayForUsername:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085b1590

// -[SCTCKCallManager _getRingtoneSoundNameWithConvoId:customRingtoneId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085b1670

// -[SCTCKCallManager _subscribeToConversationUpdatesForCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b1780

// -[SCTCKCallManager _conversationUpdated:forCall:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085b1964

// -[SCTCKCallManager _resetCallTitleAndHandleForCallIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b1bf8

// -[SCTCKCallManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085b1e0c

@end
