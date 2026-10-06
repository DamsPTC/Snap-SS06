// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessageReportingPluginManager
// Superclass: NSObject
// Address: 0x112afe028

@interface SCMessageReportingPluginManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessageReportingPluginManager initWithPlugins:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d0cb4

// -[SCMessageReportingPluginManager reportedChatMessageContentForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d0d94

// -[SCMessageReportingPluginManager reportedChatMessageReplyToContentsForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d0ea0

// -[SCMessageReportingPluginManager isReportableForCurrentUserId:senderUserId:isGroupConversation:conversationSubtype:message:]
// Type encoding: @52@0:8@16@24B32q36@44
// Implementation: 0x1067d0fac

// -[SCMessageReportingPluginManager _messageContentPluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d1124

// -[SCMessageReportingPluginManager _pluginIdentifierForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d12a4

// -[SCMessageReportingPluginManager _messageReplyToContentPluginForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d153c

// -[SCMessageReportingPluginManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067d1710

@end
