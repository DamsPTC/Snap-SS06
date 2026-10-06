// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatReactionHandler
// Superclass: NSObject
// Address: 0x112ae6c98

@interface SCChatReactionHandler


// -[SCChatReactionHandler initWithNativeMessagingSessionManager:conversationDataFetcher:chatLogger:snapchatterPublicInfoFetcher:userId:sponsoredSnapAdResponseParser:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10659b894

// -[SCChatReactionHandler _nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x10659ba30

// -[SCChatReactionHandler reactToMessageInConversationId:messageId:reactionContent:reactionSource:reactionSendSource:source:completionHandler:]
// Type encoding: v72@0:8@16@24@32q40q48q56@?64
// Implementation: 0x10659ba78

// -[SCChatReactionHandler _reactToMessage:reactionId:reactionContent:conversation:reactionSource:reactionSendSource:source:completion:]
// Type encoding: v80@0:8@16@24@32@40q48q56q64@?72
// Implementation: 0x10659bce8

// -[SCChatReactionHandler removeReactionToMessageInConversationId:messageId:reactionContent:source:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10659c2a4

// -[SCChatReactionHandler _removeReactionToMessage:reactionId:conversation:source:reactionContent:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x10659c4c0

// -[SCChatReactionHandler _handleRemoveReactionSuccessForMessage:conversation:reactionId:eraseType:source:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x10659c758

// -[SCChatReactionHandler _logRemoveReactionFromMessage:reaction:isGroupConversation:recipient:eraseType:source:]
// Type encoding: v60@0:8@16@24B32@36q44q52
// Implementation: 0x10659ca58

// -[SCChatReactionHandler _getReactionWithId:message:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10659cb08

// -[SCChatReactionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10659cc9c

@end
