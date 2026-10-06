// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextMentionStoryShareMessageSenderHelper
// Superclass: NSObject
// Address: 0x112b9d6c8

@interface SCContextMentionStoryShareMessageSenderHelper


// -[SCContextMentionStoryShareMessageSenderHelper initWithConversationDestinationParser:storyShareSender:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084345cc

// -[SCContextMentionStoryShareMessageSenderHelper sendStoryShareMessageForChatIdentifiers:numGroupParticipants:storySnapId:mediaType:performer:]
// Type encoding: v56@0:8@16q24@32q40@48
// Implementation: 0x108434670

// -[SCContextMentionStoryShareMessageSenderHelper _sendStoryShareMessageToSortedConversations:error:storySnapId:mediaType:recipientsCount:performer:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x108434894

// -[SCContextMentionStoryShareMessageSenderHelper _sendStoryShareForStorySnapId:mediaType:toArroyoConversationIds:platformAnalytics:performer:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x108434ad8

// -[SCContextMentionStoryShareMessageSenderHelper sendSnapProStoryShareMessageForChatIdentifiers:numGroupParticipants:businessId:snapId:performer:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x108434c3c

// -[SCContextMentionStoryShareMessageSenderHelper _sendSnapProStoryShareWithBusinessId:snapId:sortedConversations:error:recipientsCount:performer:]
// Type encoding: v64@0:8@16@24@32@40q48@56
// Implementation: 0x108434e80

// -[SCContextMentionStoryShareMessageSenderHelper _sendSnapProStoryShareForBusinessId:snapId:toArroyoConversationIds:platformAnalytics:performer:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1084350e4

// -[SCContextMentionStoryShareMessageSenderHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108435250

@end
