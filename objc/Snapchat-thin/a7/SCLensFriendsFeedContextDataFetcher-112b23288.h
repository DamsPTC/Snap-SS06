// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFriendsFeedContextDataFetcher
// Superclass: NSObject
// Address: 0x112b23288

@interface SCLensFriendsFeedContextDataFetcher


// -[SCLensFriendsFeedContextDataFetcher initWithFriendsFeedDataCoordinator:docObjectContext:lensFriendsFeedContextDataStore:lensFriendsFeedContextConfigFetcher:messagingExperimentService:lensFriendsFeedContextEventFetcher:groupsDataTracker:impressionTracker:conversationUpdatesTracker:itemsHelper:performer:areSuggestionsUpdatesAllowed:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64@72@80@88@96B104
// Implementation: 0x106c0b5cc

// -[SCLensFriendsFeedContextDataFetcher _subscribeToAllGroupsUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106c0b8ec

// -[SCLensFriendsFeedContextDataFetcher _subscribeToImpressionTrackerUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106c0ba6c

// -[SCLensFriendsFeedContextDataFetcher _subsribeToSentMessagesByUser]
// Type encoding: v16@0:8
// Implementation: 0x106c0be38

// -[SCLensFriendsFeedContextDataFetcher _subscribeToFriendsFeedDataChanges]
// Type encoding: v16@0:8
// Implementation: 0x106c0c0f4

// -[SCLensFriendsFeedContextDataFetcher _processCurrentFriendsFeedItems]
// Type encoding: v16@0:8
// Implementation: 0x106c0c2c0

// -[SCLensFriendsFeedContextDataFetcher _processFriendsFeedItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c0c3dc

// -[SCLensFriendsFeedContextDataFetcher _updateLensSuggestionsFromConversationsEvents:friendsFeedItems:numberOfItemsToProcess:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106c0d810

// -[SCLensFriendsFeedContextDataFetcher _notifyFriendsFeedIfNeededWithSuggestions:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c0dd38

// -[SCLensFriendsFeedContextDataFetcher _topPriorityValidEventFromEvents:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c0ddc8

// -[SCLensFriendsFeedContextDataFetcher _createLensSuggestionsForEvent:forFeedItem:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c0df74

// -[SCLensFriendsFeedContextDataFetcher _conversationIDsForFeedItems:birthdayConversationIDs:suppressedConversationIDs:numberOfItemsToProcess:shouldHideStandardCTAs:perConversationCTAClearEnabled:]
// Type encoding: @56@0:8@16@24@32Q40B48B52
// Implementation: 0x106c0e428

// -[SCLensFriendsFeedContextDataFetcher _eventsForDocConversations:shouldHideStandardCTAs:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106c0e650

// -[SCLensFriendsFeedContextDataFetcher _isLensSuggestonsUpdated:newSuggestions:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106c0e84c

// -[SCLensFriendsFeedContextDataFetcher _hasConsumableContentInLastWeek:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c0ea70

// -[SCLensFriendsFeedContextDataFetcher _hasUnreadContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c0ed38

// -[SCLensFriendsFeedContextDataFetcher _dayOfWeekEventTypes]
// Type encoding: @16@0:8
// Implementation: 0x106c0f224

// -[SCLensFriendsFeedContextDataFetcher lensSuggestionsUpdates]
// Type encoding: @16@0:8
// Implementation: 0x106c0f290

// -[SCLensFriendsFeedContextDataFetcher updatePlayedStoryIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c0f2b8

// -[SCLensFriendsFeedContextDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c0f3e0

@end
