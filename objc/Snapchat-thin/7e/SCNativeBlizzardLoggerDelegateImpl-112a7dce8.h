// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeBlizzardLoggerDelegateImpl
// Superclass: NSObject
// Address: 0x112a7dce8

@interface SCNativeBlizzardLoggerDelegateImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeBlizzardLoggerDelegateImpl initWithUserTrackedLogger:feedPropertyLogger:e2eeKeyProvider:loggingMessagesReceivedEventsSubject:sponsoredSnapConversationSeqNumProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100416a94

// -[SCNativeBlizzardLoggerDelegateImpl initWithUserTrackedLogger:feedPropertyLogger:e2eeKeyProvider:loggingMessagesReceivedEventsSubject:performer:sponsoredSnapConversationSeqNumProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100417c38

// -[SCNativeBlizzardLoggerDelegateImpl onMessageReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594f1b4

// -[SCNativeBlizzardLoggerDelegateImpl onMessagesReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594f334

// -[SCNativeBlizzardLoggerDelegateImpl _logReceiveMessageWithNativeMetricsResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594f530

// -[SCNativeBlizzardLoggerDelegateImpl onMessageReEncrypted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594fce4

// -[SCNativeBlizzardLoggerDelegateImpl onMessagesReEncrypted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594fdf0

// -[SCNativeBlizzardLoggerDelegateImpl _logReencryptMessageWithNativeMetricsResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10594ffdc

// -[SCNativeBlizzardLoggerDelegateImpl onMessageReactionSent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059501b8

// -[SCNativeBlizzardLoggerDelegateImpl _logReactionSentWithResult:analyticsDataModel:cellPosition:sendMessageAnalytics:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105950550

// -[SCNativeBlizzardLoggerDelegateImpl logFideliusPhi:]
// Type encoding: v24@0:8@16
// Implementation: 0x105950b5c

// -[SCNativeBlizzardLoggerDelegateImpl logFideliusInversePhi:]
// Type encoding: v24@0:8@16
// Implementation: 0x105950e30

// -[SCNativeBlizzardLoggerDelegateImpl logChatEraseModeFor24hrRetentionMigration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059511a0

// -[SCNativeBlizzardLoggerDelegateImpl _getUserPkId]
// Type encoding: @16@0:8
// Implementation: 0x10595126c

// -[SCNativeBlizzardLoggerDelegateImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105951304

@end
