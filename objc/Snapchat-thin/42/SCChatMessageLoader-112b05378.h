// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMessageLoader
// Superclass: NSObject
// Address: 0x112b05378

@interface SCChatMessageLoader

// Property: delegate; attributes: T@"<SCChatMessageLoaderDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatMessageLoader initWithActionHandler:messagingExperimentService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1004e902c

// -[SCChatMessageLoader loadMessageContentForConversationId:loadMessageId:isGroupConversation:requestContext:requestSource:]
// Type encoding: v52@0:8@16@24B32q36q44
// Implementation: 0x1068f4248

// -[SCChatMessageLoader loadMessageContent:isGroupConversation:requestContext:requestSource:]
// Type encoding: v44@0:8@16B24q28q36
// Implementation: 0x1068f43cc

// -[SCChatMessageLoader delegate]
// Type encoding: @16@0:8
// Implementation: 0x1068f46d8

// -[SCChatMessageLoader setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e90d0

// -[SCChatMessageLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068f46f0

@end
