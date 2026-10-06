// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTextSender
// Superclass: NSObject
// Address: 0x112a6b9a8

@interface SCTextSender


// -[SCTextSender initWithCoreMessageSender:graphene:nativeSessionManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057d7d64

// -[SCTextSender sendAttributedTextMessage:additionalMetadata:conversations:massSnapRecipients:platformAnalytics:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1057d7e30

// -[SCTextSender sendURLTextMessage:additionalTextMessage:conversations:platformAnalytics:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1057d7f5c

// -[SCTextSender sendMessageWithContent:additionalTextMessage:conversations:massSnapRecipients:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1057d805c

// -[SCTextSender submitEditWithConversationId:messageId:attributedText:mentions:chatCommands:scale:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48d56@?64
// Implementation: 0x1057d835c

// -[SCTextSender chatTextMessageForAdditionalText:additionalMetadata:platformAnalytics:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057d897c

// -[SCTextSender chatTextMessageForAdditionalAttributedText:additionalMetadata:platformAnalytics:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057d8a3c

// -[SCTextSender nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x1057d8b18

// -[SCTextSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057d8b60

@end
