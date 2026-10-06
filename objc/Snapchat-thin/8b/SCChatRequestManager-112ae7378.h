// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatRequestManager
// Superclass: NSObject
// Address: 0x112ae7378

@interface SCChatRequestManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatRequestManager initWithContentDelivery:chatLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065b28e0

// -[SCChatRequestManager boostMediaDownloadRequestForConversationId:messageId:analyticsMessageId:messageBodyType:media:requestSource:]
// Type encoding: v64@0:8@16@24@32q40@48q56
// Implementation: 0x1065b2984

// -[SCChatRequestManager sendMediaDownloadRequestForConversationId:messageId:messageBodyType:media:mediaId:analyticsMessageId:contentObject:userInitiated:requestSource:successBlock:failureBlock:]
// Type encoding: v100@0:8@16@24q32@40@48@56@64B72q76@?84@?92
// Implementation: 0x1065b2af0

// -[SCChatRequestManager increaseMediaDownloadPriorityForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b2e5c

// -[SCChatRequestManager _handleMediaDownloadSuccessWithBlock:userInitiated:mediaId:messageBodyType:messageId:responseDataLength:networkStats:]
// Type encoding: v68@0:8@?16B24@28q36@44Q52@60
// Implementation: 0x1065b2efc

// -[SCChatRequestManager _handleMediaDownloadFailureWithFailureBlock:mediaId:responseCode:messageId:messageBodyType:userInitiated:networkStats:error:]
// Type encoding: v76@0:8@?16@24q32@40q48B56@60@68
// Implementation: 0x1065b2f7c

// -[SCChatRequestManager requestContextsWithConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065b3148

// -[SCChatRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065b3258

// +[SCChatRequestManager requestContextsWithConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065b3154

@end
