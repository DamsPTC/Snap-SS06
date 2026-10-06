// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaStateManager
// Superclass: NSObject
// Address: 0x112b05328

@interface SCChatMediaStateManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatMediaStateManager initWithMediaReferenceManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x100496064

// -[SCChatMediaStateManager setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x100497470

// -[SCChatMediaStateManager updateAllMessagesForMediaId:messageId:conversationId:messageBodyType:mediaLoadState:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x1068f3d70

// -[SCChatMediaStateManager _updateAllMessagesForMediaId:messageId:conversationId:messageBodyType:mediaLoadState:conversationAndMessageIdentifiers:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x1068f3f24

// -[SCChatMediaStateManager addReferenceAndUpdateAllMessagesForMediaId:messageId:conversationId:messageBodyType:mediaLoadState:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x1068f416c

// -[SCChatMediaStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068f4220

@end
