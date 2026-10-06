// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCClearFeedActionHandler
// Superclass: NSObject
// Address: 0x112ae7008

@interface SCClearFeedActionHandler


// -[SCClearFeedActionHandler initWithConversationIdResolver:actionHandler:userClearConversationEventPublisher:userId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1065a3a30

// -[SCClearFeedActionHandler clearingFeedIds]
// Type encoding: @16@0:8
// Implementation: 0x1065a3b4c

// -[SCClearFeedActionHandler clearFeedItemForUserId:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1065a3b9c

// -[SCClearFeedActionHandler clearFeedItemForGroupId:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1065a3e00

// -[SCClearFeedActionHandler _clearFeedEntryWithConversationId:userId:groupId:source:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1065a4064

// -[SCClearFeedActionHandler _didClearOneOnOneFeedEntryWithConversationId:userId:groupId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065a4298

// -[SCClearFeedActionHandler _addClearingFeedId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a4364

// -[SCClearFeedActionHandler _removeClearingFeedId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a43cc

// -[SCClearFeedActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065a4434

@end
