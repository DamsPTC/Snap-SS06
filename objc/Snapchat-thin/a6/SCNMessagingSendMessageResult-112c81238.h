// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingSendMessageResult
// Superclass: NSObject
// Address: 0x112c81238

@interface SCNMessagingSendMessageResult

// Property: status; attributes: Tq,N,V_status
// Property: failureReason; attributes: T@"NSNumber",&,N,V_failureReason
// Property: failureDescription; attributes: T@"NSString",C,N,V_failureDescription
// Property: extendedFailureInfo; attributes: T@"NSData",C,N,V_extendedFailureInfo
// Property: content; attributes: T@"SCNMessagingLocalMessageContent",&,N,V_content
// Property: failedStep; attributes: T@"NSNumber",&,N,V_failedStep
// Property: resumeTrigger; attributes: T@"NSNumber",&,N,V_resumeTrigger
// Property: userActionTimestamp; attributes: Tq,N,V_userActionTimestamp
// Property: startTimestamp; attributes: Tq,N,V_startTimestamp
// Property: endTimestamp; attributes: Tq,N,V_endTimestamp
// Property: completedDestinations; attributes: T@"SCNMessagingMessageDestinations",&,N,V_completedDestinations
// Property: failedDestinations; attributes: T@"SCNMessagingMessageDestinations",&,N,V_failedDestinations
// Property: timers; attributes: T@"NSDictionary",C,N,V_timers
// Property: conversationMessagesMetricsData; attributes: T@"NSArray",C,N,V_conversationMessagesMetricsData
// Property: failedConversationsMetricsData; attributes: T@"NSArray",C,N,V_failedConversationsMetricsData
// Property: sendMessageAttemptType; attributes: Tq,N,V_sendMessageAttemptType
// Property: sendMessageAttemptId; attributes: T@"SCNMessagingUUID",&,N,V_sendMessageAttemptId
// Property: completedConversationDestinations; attributes: T@"NSArray",C,N,V_completedConversationDestinations
// Property: completedStoryDestinations; attributes: T@"NSArray",C,N,V_completedStoryDestinations
// Property: completedPhoneNumberDestinations; attributes: T@"NSArray",C,N,V_completedPhoneNumberDestinations
// Property: completedMassSnapDestinations; attributes: T@"NSArray",C,N,V_completedMassSnapDestinations
// Property: messageEncryption; attributes: Tq,N,V_messageEncryption
// Property: encryptFailure; attributes: T@"NSNumber",&,N,V_encryptFailure
// Property: encryptSkipReason; attributes: T@"NSNumber",&,N,V_encryptSkipReason
// Property: eelCapableDryRunMode; attributes: TB,N,V_eelCapableDryRunMode
// Property: recipientPkIds; attributes: T@"NSString",C,N,V_recipientPkIds
// Property: mediaOrchestrationAttemptIds; attributes: T@"NSArray",C,N,V_mediaOrchestrationAttemptIds
// Property: deviceTimeOffsetMs; attributes: T@"NSNumber",&,N,V_deviceTimeOffsetMs
// Property: partialFailures; attributes: T@"NSArray",C,N,V_partialFailures
// Property: inBackground; attributes: T@"NSNumber",&,N,V_inBackground

// -[SCNMessagingSendMessageResult initWithStatus:failureReason:failureDescription:extendedFailureInfo:content:failedStep:resumeTrigger:userActionTimestamp:startTimestamp:endTimestamp:completedDestinations:failedDestinations:timers:conversationMessagesMetricsData:failedConversationsMetricsData:sendMessageAttemptType:sendMessageAttemptId:completedConversationDestinations:completedStoryDestinations:completedPhoneNumberDestinations:completedMassSnapDestinations:messageEncryption:encryptFailure:encryptSkipReason:eelCapableDryRunMode:recipientPkIds:mediaOrchestrationAttemptIds:deviceTimeOffsetMs:partialFailures:inBackground:]
// Type encoding: @252@0:8q16@24@32@40@48@56@64q72q80q88@96@104@112@120@128q136@144@152@160@168@176q184@192@200B208@212@220@228@236@244
// Implementation: 0x10b6402ac

// -[SCNMessagingSendMessageResult initWithStatus:content:userActionTimestamp:startTimestamp:endTimestamp:completedDestinations:failedDestinations:timers:conversationMessagesMetricsData:failedConversationsMetricsData:sendMessageAttemptType:sendMessageAttemptId:completedConversationDestinations:completedStoryDestinations:completedPhoneNumberDestinations:completedMassSnapDestinations:messageEncryption:eelCapableDryRunMode:recipientPkIds:mediaOrchestrationAttemptIds:partialFailures:]
// Type encoding: @180@0:8q16@24q32q40q48@56@64@72@80@88q96@104@112@120@128@136q144B152@156@164@172
// Implementation: 0x10b640884

// -[SCNMessagingSendMessageResult status]
// Type encoding: q16@0:8
// Implementation: 0x10b640914

// -[SCNMessagingSendMessageResult setStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b64091c

// -[SCNMessagingSendMessageResult failureReason]
// Type encoding: @16@0:8
// Implementation: 0x10b640924

// -[SCNMessagingSendMessageResult setFailureReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b64092c

// -[SCNMessagingSendMessageResult failureDescription]
// Type encoding: @16@0:8
// Implementation: 0x10b64094c

// -[SCNMessagingSendMessageResult setFailureDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640954

// -[SCNMessagingSendMessageResult extendedFailureInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b64095c

// -[SCNMessagingSendMessageResult setExtendedFailureInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640964

// -[SCNMessagingSendMessageResult content]
// Type encoding: @16@0:8
// Implementation: 0x10b64096c

// -[SCNMessagingSendMessageResult setContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640974

// -[SCNMessagingSendMessageResult failedStep]
// Type encoding: @16@0:8
// Implementation: 0x10b640994

// -[SCNMessagingSendMessageResult setFailedStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b64099c

// -[SCNMessagingSendMessageResult resumeTrigger]
// Type encoding: @16@0:8
// Implementation: 0x10b6409bc

// -[SCNMessagingSendMessageResult setResumeTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6409c4

// -[SCNMessagingSendMessageResult userActionTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b6409e4

// -[SCNMessagingSendMessageResult setUserActionTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6409ec

// -[SCNMessagingSendMessageResult startTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b6409f4

// -[SCNMessagingSendMessageResult setStartTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6409fc

// -[SCNMessagingSendMessageResult endTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b640a04

// -[SCNMessagingSendMessageResult setEndTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b640a0c

// -[SCNMessagingSendMessageResult completedDestinations]
// Type encoding: @16@0:8
// Implementation: 0x10b640a14

// -[SCNMessagingSendMessageResult setCompletedDestinations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640a1c

// -[SCNMessagingSendMessageResult failedDestinations]
// Type encoding: @16@0:8
// Implementation: 0x10b640a3c

// -[SCNMessagingSendMessageResult setFailedDestinations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640a44

// -[SCNMessagingSendMessageResult timers]
// Type encoding: @16@0:8
// Implementation: 0x10b640a64

// -[SCNMessagingSendMessageResult setTimers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640a6c

// -[SCNMessagingSendMessageResult conversationMessagesMetricsData]
// Type encoding: @16@0:8
// Implementation: 0x10b640a74

// -[SCNMessagingSendMessageResult setConversationMessagesMetricsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640a7c

// -[SCNMessagingSendMessageResult failedConversationsMetricsData]
// Type encoding: @16@0:8
// Implementation: 0x10b640a84

// -[SCNMessagingSendMessageResult setFailedConversationsMetricsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640a8c

// -[SCNMessagingSendMessageResult sendMessageAttemptType]
// Type encoding: q16@0:8
// Implementation: 0x10b640a94

// -[SCNMessagingSendMessageResult setSendMessageAttemptType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b640a9c

// -[SCNMessagingSendMessageResult sendMessageAttemptId]
// Type encoding: @16@0:8
// Implementation: 0x10b640aa4

// -[SCNMessagingSendMessageResult setSendMessageAttemptId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640aac

// -[SCNMessagingSendMessageResult completedConversationDestinations]
// Type encoding: @16@0:8
// Implementation: 0x10b640acc

// -[SCNMessagingSendMessageResult setCompletedConversationDestinations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640ad4

// -[SCNMessagingSendMessageResult completedStoryDestinations]
// Type encoding: @16@0:8
// Implementation: 0x10b640adc

// -[SCNMessagingSendMessageResult setCompletedStoryDestinations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640ae4

// -[SCNMessagingSendMessageResult completedPhoneNumberDestinations]
// Type encoding: @16@0:8
// Implementation: 0x10b640aec

// -[SCNMessagingSendMessageResult setCompletedPhoneNumberDestinations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640af4

// -[SCNMessagingSendMessageResult completedMassSnapDestinations]
// Type encoding: @16@0:8
// Implementation: 0x10b640afc

// -[SCNMessagingSendMessageResult setCompletedMassSnapDestinations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640b04

// -[SCNMessagingSendMessageResult messageEncryption]
// Type encoding: q16@0:8
// Implementation: 0x10b640b0c

// -[SCNMessagingSendMessageResult setMessageEncryption:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b640b14

// -[SCNMessagingSendMessageResult encryptFailure]
// Type encoding: @16@0:8
// Implementation: 0x10b640b1c

// -[SCNMessagingSendMessageResult setEncryptFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640b24

// -[SCNMessagingSendMessageResult encryptSkipReason]
// Type encoding: @16@0:8
// Implementation: 0x10b640b44

// -[SCNMessagingSendMessageResult setEncryptSkipReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640b4c

// -[SCNMessagingSendMessageResult eelCapableDryRunMode]
// Type encoding: B16@0:8
// Implementation: 0x10b640b6c

// -[SCNMessagingSendMessageResult setEelCapableDryRunMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b640b74

// -[SCNMessagingSendMessageResult recipientPkIds]
// Type encoding: @16@0:8
// Implementation: 0x10b640b7c

// -[SCNMessagingSendMessageResult setRecipientPkIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640b84

// -[SCNMessagingSendMessageResult mediaOrchestrationAttemptIds]
// Type encoding: @16@0:8
// Implementation: 0x10b640b8c

// -[SCNMessagingSendMessageResult setMediaOrchestrationAttemptIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640b94

// -[SCNMessagingSendMessageResult deviceTimeOffsetMs]
// Type encoding: @16@0:8
// Implementation: 0x10b640b9c

// -[SCNMessagingSendMessageResult setDeviceTimeOffsetMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640ba4

// -[SCNMessagingSendMessageResult partialFailures]
// Type encoding: @16@0:8
// Implementation: 0x10b640bc4

// -[SCNMessagingSendMessageResult setPartialFailures:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640bcc

// -[SCNMessagingSendMessageResult inBackground]
// Type encoding: @16@0:8
// Implementation: 0x10b640bd4

// -[SCNMessagingSendMessageResult setInBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640bdc

// -[SCNMessagingSendMessageResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b640bfc

@end
