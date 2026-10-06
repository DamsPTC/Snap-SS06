// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingReceiveMessageMetricsResult
// Superclass: NSObject
// Address: 0x112c81058

@interface SCNMessagingReceiveMessageMetricsResult

// Property: analyticsMessageId; attributes: T@"NSString",C,N,V_analyticsMessageId
// Property: attemptId; attributes: T@"SCNMessagingUUID",&,N,V_attemptId
// Property: receiptType; attributes: Tq,N,V_receiptType
// Property: conversationMetricsData; attributes: T@"SCNMessagingConversationMetricsData",&,N,V_conversationMetricsData
// Property: content; attributes: T@"NSData",C,N,V_content
// Property: contentType; attributes: Tq,N,V_contentType
// Property: startTimestampMs; attributes: Tq,N,V_startTimestampMs
// Property: endTimestampMs; attributes: Tq,N,V_endTimestampMs
// Property: stepLatenciesMs; attributes: T@"NSDictionary",C,N,V_stepLatenciesMs
// Property: status; attributes: Tq,N,V_status
// Property: failedStep; attributes: T@"NSNumber",&,N,V_failedStep
// Property: error; attributes: T@"NSNumber",&,N,V_error
// Property: isChatReply; attributes: TB,N,V_isChatReply
// Property: messageEncryption; attributes: Tq,N,V_messageEncryption
// Property: decryptResult; attributes: Tq,N,V_decryptResult
// Property: decryptFailureReason; attributes: T@"NSNumber",&,N,V_decryptFailureReason
// Property: decryptLatencyUs; attributes: Tq,N,V_decryptLatencyUs
// Property: isSender; attributes: TB,N,V_isSender
// Property: eelInitEnabled; attributes: TB,N,V_eelInitEnabled
// Property: eelAckEnabled; attributes: TB,N,V_eelAckEnabled
// Property: messageVersion; attributes: Tq,N,V_messageVersion
// Property: watermarkDiff; attributes: Tq,N,V_watermarkDiff
// Property: inActiveConversation; attributes: TB,N,V_inActiveConversation
// Property: messageCreationTimestamp; attributes: Tq,N,V_messageCreationTimestamp
// Property: deviceTimeOffsetMs; attributes: T@"NSNumber",&,N,V_deviceTimeOffsetMs

// -[SCNMessagingReceiveMessageMetricsResult initWithAnalyticsMessageId:attemptId:receiptType:conversationMetricsData:content:contentType:startTimestampMs:endTimestampMs:stepLatenciesMs:status:failedStep:error:isChatReply:messageEncryption:decryptResult:decryptFailureReason:decryptLatencyUs:isSender:eelInitEnabled:eelAckEnabled:messageVersion:watermarkDiff:inActiveConversation:messageCreationTimestamp:deviceTimeOffsetMs:]
// Type encoding: @196@0:8@16@24q32@40@48q56q64q72@80q88@96@104B112q116q124@132q140B148B152B156q160q168B176q180@188
// Implementation: 0x10b63f388

// -[SCNMessagingReceiveMessageMetricsResult initWithAnalyticsMessageId:attemptId:receiptType:conversationMetricsData:contentType:startTimestampMs:endTimestampMs:stepLatenciesMs:status:isChatReply:messageEncryption:decryptResult:decryptLatencyUs:isSender:eelInitEnabled:eelAckEnabled:messageVersion:watermarkDiff:inActiveConversation:messageCreationTimestamp:]
// Type encoding: @156@0:8@16@24q32@40q48q56q64@72q80B88q92q100q108B116B120B124q128q136B144q148
// Implementation: 0x10b63f67c

// -[SCNMessagingReceiveMessageMetricsResult analyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x10b63f70c

// -[SCNMessagingReceiveMessageMetricsResult setAnalyticsMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f714

// -[SCNMessagingReceiveMessageMetricsResult attemptId]
// Type encoding: @16@0:8
// Implementation: 0x10b63f71c

// -[SCNMessagingReceiveMessageMetricsResult setAttemptId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f724

// -[SCNMessagingReceiveMessageMetricsResult receiptType]
// Type encoding: q16@0:8
// Implementation: 0x10b63f744

// -[SCNMessagingReceiveMessageMetricsResult setReceiptType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f74c

// -[SCNMessagingReceiveMessageMetricsResult conversationMetricsData]
// Type encoding: @16@0:8
// Implementation: 0x10b63f754

// -[SCNMessagingReceiveMessageMetricsResult setConversationMetricsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f75c

// -[SCNMessagingReceiveMessageMetricsResult content]
// Type encoding: @16@0:8
// Implementation: 0x10b63f77c

// -[SCNMessagingReceiveMessageMetricsResult setContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f784

// -[SCNMessagingReceiveMessageMetricsResult contentType]
// Type encoding: q16@0:8
// Implementation: 0x10b63f78c

// -[SCNMessagingReceiveMessageMetricsResult setContentType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f794

// -[SCNMessagingReceiveMessageMetricsResult startTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10b63f79c

// -[SCNMessagingReceiveMessageMetricsResult setStartTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f7a4

// -[SCNMessagingReceiveMessageMetricsResult endTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10b63f7ac

// -[SCNMessagingReceiveMessageMetricsResult setEndTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f7b4

// -[SCNMessagingReceiveMessageMetricsResult stepLatenciesMs]
// Type encoding: @16@0:8
// Implementation: 0x10b63f7bc

// -[SCNMessagingReceiveMessageMetricsResult setStepLatenciesMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f7c4

// -[SCNMessagingReceiveMessageMetricsResult status]
// Type encoding: q16@0:8
// Implementation: 0x10b63f7cc

// -[SCNMessagingReceiveMessageMetricsResult setStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f7d4

// -[SCNMessagingReceiveMessageMetricsResult failedStep]
// Type encoding: @16@0:8
// Implementation: 0x10b63f7dc

// -[SCNMessagingReceiveMessageMetricsResult setFailedStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f7e4

// -[SCNMessagingReceiveMessageMetricsResult error]
// Type encoding: @16@0:8
// Implementation: 0x10b63f804

// -[SCNMessagingReceiveMessageMetricsResult setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f80c

// -[SCNMessagingReceiveMessageMetricsResult isChatReply]
// Type encoding: B16@0:8
// Implementation: 0x10b63f82c

// -[SCNMessagingReceiveMessageMetricsResult setIsChatReply:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63f834

// -[SCNMessagingReceiveMessageMetricsResult messageEncryption]
// Type encoding: q16@0:8
// Implementation: 0x10b63f83c

// -[SCNMessagingReceiveMessageMetricsResult setMessageEncryption:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f844

// -[SCNMessagingReceiveMessageMetricsResult decryptResult]
// Type encoding: q16@0:8
// Implementation: 0x10b63f84c

// -[SCNMessagingReceiveMessageMetricsResult setDecryptResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f854

// -[SCNMessagingReceiveMessageMetricsResult decryptFailureReason]
// Type encoding: @16@0:8
// Implementation: 0x10b63f85c

// -[SCNMessagingReceiveMessageMetricsResult setDecryptFailureReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f864

// -[SCNMessagingReceiveMessageMetricsResult decryptLatencyUs]
// Type encoding: q16@0:8
// Implementation: 0x10b63f884

// -[SCNMessagingReceiveMessageMetricsResult setDecryptLatencyUs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f88c

// -[SCNMessagingReceiveMessageMetricsResult isSender]
// Type encoding: B16@0:8
// Implementation: 0x10b63f894

// -[SCNMessagingReceiveMessageMetricsResult setIsSender:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63f89c

// -[SCNMessagingReceiveMessageMetricsResult eelInitEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b63f8a4

// -[SCNMessagingReceiveMessageMetricsResult setEelInitEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63f8ac

// -[SCNMessagingReceiveMessageMetricsResult eelAckEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b63f8b4

// -[SCNMessagingReceiveMessageMetricsResult setEelAckEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63f8bc

// -[SCNMessagingReceiveMessageMetricsResult messageVersion]
// Type encoding: q16@0:8
// Implementation: 0x10b63f8c4

// -[SCNMessagingReceiveMessageMetricsResult setMessageVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f8cc

// -[SCNMessagingReceiveMessageMetricsResult watermarkDiff]
// Type encoding: q16@0:8
// Implementation: 0x10b63f8d4

// -[SCNMessagingReceiveMessageMetricsResult setWatermarkDiff:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f8dc

// -[SCNMessagingReceiveMessageMetricsResult inActiveConversation]
// Type encoding: B16@0:8
// Implementation: 0x10b63f8e4

// -[SCNMessagingReceiveMessageMetricsResult setInActiveConversation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63f8ec

// -[SCNMessagingReceiveMessageMetricsResult messageCreationTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b63f8f4

// -[SCNMessagingReceiveMessageMetricsResult setMessageCreationTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63f8fc

// -[SCNMessagingReceiveMessageMetricsResult deviceTimeOffsetMs]
// Type encoding: @16@0:8
// Implementation: 0x10b63f904

// -[SCNMessagingReceiveMessageMetricsResult setDeviceTimeOffsetMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63f90c

// -[SCNMessagingReceiveMessageMetricsResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63f92c

@end
