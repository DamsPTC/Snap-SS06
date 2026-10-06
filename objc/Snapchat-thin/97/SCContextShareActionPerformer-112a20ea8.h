// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextShareActionPerformer
// Superclass: NSObject
// Address: 0x112a20ea8

@interface SCContextShareActionPerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextShareActionPerformer initWithSendToMentionsConfiguration:conversationDataFetcher:textSender:notificationManager:circumstanceEngine:userId:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1051d4c78

// -[SCContextShareActionPerformer performAction:onViewController:uiContainer:params:source:completion:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x1051d4de0

// -[SCContextShareActionPerformer _sendFriendshipFlashbackWithConversationId:messageId:analyticsMessageId:recipientId:isGroupReply:contextSessionId:completion:]
// Type encoding: v68@0:8@16@24@32@40B48@52@?60
// Implementation: 0x1051d5874

// -[SCContextShareActionPerformer _sendFriendshipFlashbackWithMessage:messageId:conversationId:recipientId:isGroupReply:analytics:completion:]
// Type encoding: v68@0:8@16@24@32@40B48@52@?60
// Implementation: 0x1051d5cbc

// -[SCContextShareActionPerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051d5ffc

@end
