// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingArroyoAdapter
// Superclass: NSObject
// Address: 0x1000d5178

@interface SCMessagingArroyoAdapter


// -[SCMessagingArroyoAdapter initWithArroyoConfig:userId:snapTokenProvider:grapheneLogger:appGroupPlistStorage:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10003edc8

// -[SCMessagingArroyoAdapter initWithNativeSession:grapheneLogger:config:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10003f2c8

// -[SCMessagingArroyoAdapter arroyoConversationIdentifierFromNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x10003f36c

// -[SCMessagingArroyoAdapter consumePayloadOrDeltaSyncToDisk:conversationVersion:decryptedPayloadBytes:callback:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10003f788

// -[SCMessagingArroyoAdapter decryptTextMessageContent:messageId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10003f888

// -[SCMessagingArroyoAdapter _logTextReplyDecryptionFailureWithNativeError:]
// Type encoding: v24@0:8q16
// Implementation: 0x10003fa20

// -[SCMessagingArroyoAdapter _logTextReplyDecryptionFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003fa44

// -[SCMessagingArroyoAdapter getServerVersionFromConversationIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10003fb44

// -[SCMessagingArroyoAdapter getLastSeenChatFromConversationIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10003fbac

// -[SCMessagingArroyoAdapter getLastSeenSnapFromConversationIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10003fc14

// -[SCMessagingArroyoAdapter getLastSeenReactionFromConversationIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10003fc7c

// -[SCMessagingArroyoAdapter getConversationMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x10003fce4

// -[SCMessagingArroyoAdapter _mapSchedulerPriorityStringToQosClass:]
// Type encoding: I24@0:8@16
// Implementation: 0x10003fd4c

// -[SCMessagingArroyoAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003fdc4

@end
