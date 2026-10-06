// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2ChatLogger
// Superclass: NSObject
// Address: 0x112ae0898

@interface SCContextV2ChatLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextV2ChatLogger initWithChatLogger:conversationIdResolver:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10647392c

// -[SCContextV2ChatLogger logChatCreateOneOnOneWithRecipientUserId:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1064739d0

// -[SCContextV2ChatLogger logChatCreateOneOnOneWithRecipientUsername:recipientUserId:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1064739e0

// -[SCContextV2ChatLogger logSCAChatCreateGroupWithMischiefId:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1064739e4

// -[SCContextV2ChatLogger _logChatCreateOneOnOneWithRecipientUsername:recipientUserId:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106473a64

// -[SCContextV2ChatLogger _logChatCreateOneOnOneWithRecipientUsername:recipientUserId:conversationId:source:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x106473cd8

// -[SCContextV2ChatLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106473dcc

@end
