// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagePluginForwardHandler
// Superclass: NSObject
// Address: 0x112a0a1f8

@interface SCMessagePluginForwardHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessagePluginForwardHandler initWithMessageForwarder:textSender:forwardablePlugin:message:focusedMessageContent:conversationParticipants:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f3f2d4

// -[SCMessagePluginForwardHandler buildForwardParams]
// Type encoding: @16@0:8
// Implementation: 0x104f3f428

// -[SCMessagePluginForwardHandler forwardMessageWithConversations:participantCount:additionalText:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x104f3f480

// -[SCMessagePluginForwardHandler _forwardMediaToConversations:participantCount:additionalText:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x104f3f608

// -[SCMessagePluginForwardHandler _sendAdditionalText:conversations:participantCount:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x104f3f768

// -[SCMessagePluginForwardHandler _platformAnalyticsForConversations:participantCount:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x104f3f864

// -[SCMessagePluginForwardHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f3f990

@end
