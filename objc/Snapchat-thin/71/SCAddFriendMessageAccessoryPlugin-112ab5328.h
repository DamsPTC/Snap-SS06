// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAddFriendMessageAccessoryPlugin
// Superclass: NSObject
// Address: 0x112ab5328

@interface SCAddFriendMessageAccessoryPlugin

// Property: messageRenderingPluginManager; attributes: T@"SCLazy",?,W,N,V_messageRenderingPluginManager
// Property: chatScrollHandler; attributes: T@"<SCCChatScrollHandling>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAddFriendMessageAccessoryPlugin initWithUserProvider:snapchattersObservableRepository:snapchattersDataMutator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fb15e8

// -[SCAddFriendMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb16b4

// -[SCAddFriendMessageAccessoryPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fb1a40

// -[SCAddFriendMessageAccessoryPlugin isApplicableToMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb1a70

// -[SCAddFriendMessageAccessoryPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fb1b24

// -[SCAddFriendMessageAccessoryPlugin _userToAddForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb1b2c

// -[SCAddFriendMessageAccessoryPlugin _contextParamsForSnapchatter:messageObservable:conversationInformation:snapchatterObservable:dismissalSubject:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105fb2008

// -[SCAddFriendMessageAccessoryPlugin _addSnapchatter:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105fb2604

// -[SCAddFriendMessageAccessoryPlugin messageRenderingPluginManager]
// Type encoding: @16@0:8
// Implementation: 0x105fb2758

// -[SCAddFriendMessageAccessoryPlugin setMessageRenderingPluginManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb2770

// -[SCAddFriendMessageAccessoryPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fb277c

@end
