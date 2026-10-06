// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeStoryReplySender
// Superclass: NSObject
// Address: 0x112b06b38

@interface SCNativeStoryReplySender

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeStoryReplySender initWithCoreMessageSender:externalMediaPreparer:snapchatterPublicInfoFetcher:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106929de8

// -[SCNativeStoryReplySender sendStoryReply:storySnap:conversationId:platformAnalytics:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106929ee4

// -[SCNativeStoryReplySender _sendStoryReply:storySnap:recipientSnapchatter:conversationId:platformAnalytics:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x10692a27c

// -[SCNativeStoryReplySender _prepareUploadForExternalMedia:trackingId:conversationIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10692b3bc

// -[SCNativeStoryReplySender _shouldMarkItemInstanceAsExternalContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x10692b520

// -[SCNativeStoryReplySender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10692b630

@end
