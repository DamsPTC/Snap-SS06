// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConversationDataFetcher
// Superclass: NSObject
// Address: 0x112a43ea8

@interface SCConversationDataFetcher


// -[SCConversationDataFetcher initWithNativeMessagingSessionManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x105525c28

// -[SCConversationDataFetcher _nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x105525c9c

// -[SCConversationDataFetcher fetchMessageAndConversationWithId:messageId:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x105525ce4

// -[SCConversationDataFetcher fetchMessagesForConversation:startingMessageId:pageSize:matchingCase:completion:]
// Type encoding: @56@0:8@16@24Q32@?40@?48
// Implementation: 0x105525ef8

// -[SCConversationDataFetcher fetchMessagesInclusiveForConversation:startingMessageId:pageSize:matchingCase:completion:]
// Type encoding: @56@0:8@16@24Q32@?40@?48
// Implementation: 0x105525fe8

// -[SCConversationDataFetcher fetchMessageWithServerId:conversationId:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x1055262b0

// -[SCConversationDataFetcher fetchQuotedMessageForConversationId:messageId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105526494

// -[SCConversationDataFetcher fetchMessagesInBundle:bundleId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10552664c

// -[SCConversationDataFetcher fetchPlayableMediaMessages:initialMessageId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105526820

// -[SCConversationDataFetcher fetchConversationMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105526a00

// -[SCConversationDataFetcher _getConversationUUIDForConversation:pageSize:completion:]
// Type encoding: @40@0:8@16Q24@?32
// Implementation: 0x105526bd8

// -[SCConversationDataFetcher _fetchMessagesForConversation:startingMessageId:matchingMessages:pageSize:hasMoreMessages:cancelable:matchingCase:completion:]
// Type encoding: v76@0:8@16@24@32Q40B48@52@?60@?68
// Implementation: 0x105526c88

// -[SCConversationDataFetcher _fetchConversationWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10552723c

// -[SCConversationDataFetcher fetchMessageWithId:conversationId:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x10552739c

// -[SCConversationDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10552755c

@end
