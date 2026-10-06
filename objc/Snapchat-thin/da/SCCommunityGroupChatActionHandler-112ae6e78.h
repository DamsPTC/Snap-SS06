// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommunityGroupChatActionHandler
// Superclass: NSObject
// Address: 0x112ae6e78

@interface SCCommunityGroupChatActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommunityGroupChatActionHandler initWithNativeSessionManager:userTrackedLogger:currentUserId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065a0d28

// -[SCCommunityGroupChatActionHandler joinCommunityGroupConversation:communityId:groupChatName:createdTimestampMs:source:completion:]
// Type encoding: v64@0:8@16@24@32d40q48@?56
// Implementation: 0x1065a0df4

// -[SCCommunityGroupChatActionHandler _onJoinCommunityGroupSuccess:communityId:source:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1065a1104

// -[SCCommunityGroupChatActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065a1204

@end
