// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFriendsFeedContextDataStore
// Superclass: NSObject
// Address: 0x112b232d8

@interface SCLensFriendsFeedContextDataStore


// -[SCLensFriendsFeedContextDataStore initWithDocObjectContext:lensFriendsFeedContextConfigFetcher:lensFriendsFeedContextEventFetcher:excludedEventTypes:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c0f4dc

// -[SCLensFriendsFeedContextDataStore updateEventsForConversationsWithStoreEvents:removeEvents:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106c0f5d8

// -[SCLensFriendsFeedContextDataStore markEventsForConversationIdsAsViewedAndNotRelevant:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106c0fb4c

// -[SCLensFriendsFeedContextDataStore cleanupAllEvents]
// Type encoding: v16@0:8
// Implementation: 0x106c10014

// -[SCLensFriendsFeedContextDataStore storeImpressionsForConversationsWithEvents:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106c10068

// -[SCLensFriendsFeedContextDataStore _updateCurrentEvents:withNewEvents:forConversationId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c105b4

// -[SCLensFriendsFeedContextDataStore ttlInSecondsForEventType:]
// Type encoding: d24@0:8Q16
// Implementation: 0x106c109a8

// -[SCLensFriendsFeedContextDataStore _suggestedLensIndexForEvent:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106c10a48

// -[SCLensFriendsFeedContextDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c10bd4

@end
