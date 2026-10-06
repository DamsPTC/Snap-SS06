// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingInlineSuggestionsImpressionLogger
// Superclass: NSObject
// Address: 0x112a6fb98

@interface SCFriendingInlineSuggestionsImpressionLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendingInlineSuggestionsImpressionLogger initWithDiscoverEventAnnouncer:queuePerformer:grapheneLogger:quickAddLoggerCreator:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10581b24c

// -[SCFriendingInlineSuggestionsImpressionLogger _createLazyQuickAddLoggerWithQuickAddCreator:]
// Type encoding: @24@0:8@16
// Implementation: 0x10581b36c

// -[SCFriendingInlineSuggestionsImpressionLogger _updateSeenSuggestion:index:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10581b458

// -[SCFriendingInlineSuggestionsImpressionLogger _sendSeenSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x10581b568

// -[SCFriendingInlineSuggestionsImpressionLogger didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10581b5dc

// -[SCFriendingInlineSuggestionsImpressionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10581b968

@end
