// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSaveMessageAccessoryPlugin
// Superclass: NSObject
// Address: 0x112ab53c8

@interface SCSaveMessageAccessoryPlugin

// Property: messageRenderingPluginManager; attributes: T@"SCLazy",?,W,N
// Property: chatScrollHandler; attributes: T@"<SCCChatScrollHandling>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSaveMessageAccessoryPlugin init]
// Type encoding: @16@0:8
// Implementation: 0x105fb4428

// -[SCSaveMessageAccessoryPlugin initWithScwConfigProvider:scwBridge:conversationActionHandler:messagingExperimentService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105fb443c

// -[SCSaveMessageAccessoryPlugin _scwVersionObservableIfEnabled]
// Type encoding: @16@0:8
// Implementation: 0x105fb45fc

// -[SCSaveMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fb4604

// -[SCSaveMessageAccessoryPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fb493c

// -[SCSaveMessageAccessoryPlugin isApplicableToMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fb496c

// -[SCSaveMessageAccessoryPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fb4974

// -[SCSaveMessageAccessoryPlugin _eligibilityObservableForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb497c

// -[SCSaveMessageAccessoryPlugin _contextParamsForMessage:messageObservable:conversationInformation:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fb4b08

// -[SCSaveMessageAccessoryPlugin _saveMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb4e1c

// -[SCSaveMessageAccessoryPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fb4e9c

@end
