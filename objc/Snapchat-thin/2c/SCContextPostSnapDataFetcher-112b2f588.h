// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextPostSnapDataFetcher
// Superclass: NSObject
// Address: 0x112b2f588

@interface SCContextPostSnapDataFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextPostSnapDataFetcher initWithDocContext:resetTracker:nglStudySettings:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106ca1a4c

// -[SCContextPostSnapDataFetcher conversationActionsObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ca1b8c

// -[SCContextPostSnapDataFetcher fetchActionsForConversationId:isGroupConversation:completionPerformer:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x106ca1e8c

// -[SCContextPostSnapDataFetcher _fetchActionsForConversationId:isGroupConversation:completionPerformer:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x106ca3094

// -[SCContextPostSnapDataFetcher _fetchViewedSnapsForPostSnapActionsInConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106ca3804

// -[SCContextPostSnapDataFetcher _hasTurnBasedPromptLensAction:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ca3ec0

// -[SCContextPostSnapDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ca40a0

@end
