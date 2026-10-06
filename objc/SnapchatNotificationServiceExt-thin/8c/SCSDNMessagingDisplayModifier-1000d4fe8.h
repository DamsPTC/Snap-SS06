// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSDNMessagingDisplayModifier
// Superclass: NSObject
// Address: 0x1000d4fe8

@interface SCSDNMessagingDisplayModifier


// -[SCSDNMessagingDisplayModifier initWithNotificationCenter:arroyoAdapter:grapheneLogger:configs:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10003c634

// -[SCSDNMessagingDisplayModifier modifyNotification:clientPayload:decryptedPayload:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10003c74c

// -[SCSDNMessagingDisplayModifier _modifyNotification:clientPayload:decryptedPayload:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10003c8c0

// -[SCSDNMessagingDisplayModifier _applyGroupTemplateIfNecessary:clientPayload:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10003cb18

// -[SCSDNMessagingDisplayModifier _applyGroupTemplate:incomingSenderInfo:notificationKey:templates:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10003cde4

// -[SCSDNMessagingDisplayModifier _addSnapIconIfNecessary:clientPayload:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10003d1f4

// -[SCSDNMessagingDisplayModifier _decryptedChatPlaintextFromDecryptedPayload:chat:decryptSkipReason:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10003d4e4

// -[SCSDNMessagingDisplayModifier _applyPriorityChatNsePreviewPlaintext:plaintext:decryptSkipReason:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10003d778

// -[SCSDNMessagingDisplayModifier _incrementPriorityChatNSEPreviewMetric:reason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10003d8dc

// -[SCSDNMessagingDisplayModifier _addAppleWatchTextReplyInfoFromPlaintext:chat:plaintext:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10003d9b8

// -[SCSDNMessagingDisplayModifier _addDecryptedTextReplyInfo:clientPayload:decryptedPayload:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10003db9c

// -[SCSDNMessagingDisplayModifier _logTextReplyContentAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10003ded8

// -[SCSDNMessagingDisplayModifier _logTextReplyContentSuccess]
// Type encoding: v16@0:8
// Implementation: 0x10003df38

// -[SCSDNMessagingDisplayModifier _logTextReplyContentSkipped]
// Type encoding: v16@0:8
// Implementation: 0x10003df98

// -[SCSDNMessagingDisplayModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003dff8

@end
