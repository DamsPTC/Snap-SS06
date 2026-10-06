// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleSuggestedFriendStore
// Superclass: NSObject
// Address: 0x112b08de8

@interface SCComposerPeopleSuggestedFriendStore

// Property: pinnedSuggestedSnapchatterUserIds; attributes: T@"NSSet",&,V_pinnedSuggestedSnapchatterUserIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: suggestionsObservable; attributes: T@"SCBridgeObservable",?,&,N,V_suggestionsObservable
// Property: suggestionsObservableV2; attributes: T@"SCBridgeObservable",?,&,N,V_suggestionsObservableV2
// Property: quickAddSnapchattersObservable; attributes: T@"SCBridgeObservable",&,N,V_quickAddSnapchattersObservable

// -[SCComposerPeopleSuggestedFriendStore initWithSnapchattersSuggestionPageType:snapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:hiddenSuggestionCoordinator:enableHideFeedback:activeStoryFetcher:quickAddRefresher:selectedSuggestionsRepository:circumstanceEngine:friendingBagdeRepository:pinnedSuggestedSnapchattersObservable:userPreferences:snapchattersObservableRepository:]
// Type encoding: @120@0:8I16@20@28@36@44B52@56@64@72@80@88@96@104@112
// Implementation: 0x10699b1c4

// -[SCComposerPeopleSuggestedFriendStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10699b4a4

// -[SCComposerPeopleSuggestedFriendStore _initializeSuggestionsObservable]
// Type encoding: v16@0:8
// Implementation: 0x10699b4b0

// -[SCComposerPeopleSuggestedFriendStore _createObservablesToBeUsedByComposer]
// Type encoding: v16@0:8
// Implementation: 0x10699b4f0

// -[SCComposerPeopleSuggestedFriendStore _observeDataUpdatesFromNative]
// Type encoding: v16@0:8
// Implementation: 0x10699b554

// -[SCComposerPeopleSuggestedFriendStore _initializeQuickAddSnapchattersObservable]
// Type encoding: v16@0:8
// Implementation: 0x10699b598

// -[SCComposerPeopleSuggestedFriendStore _publishQuickAddSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699bad8

// -[SCComposerPeopleSuggestedFriendStore _observePinnedSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x10699bb1c

// -[SCComposerPeopleSuggestedFriendStore _listenSuggestionFetchEvent]
// Type encoding: v16@0:8
// Implementation: 0x10699bcb4

// -[SCComposerPeopleSuggestedFriendStore _observeActiveStoryChanges]
// Type encoding: v16@0:8
// Implementation: 0x10699bcf0

// -[SCComposerPeopleSuggestedFriendStore _didReceiveNewActiveStoryInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699be48

// -[SCComposerPeopleSuggestedFriendStore _observeSelectedSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x10699beac

// -[SCComposerPeopleSuggestedFriendStore _didReceiveSelectedSuggestedSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699c000

// -[SCComposerPeopleSuggestedFriendStore _observeHiddenSuggestionObservable]
// Type encoding: v16@0:8
// Implementation: 0x10699c050

// -[SCComposerPeopleSuggestedFriendStore _fetchBadgedSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x10699c190

// -[SCComposerPeopleSuggestedFriendStore _didReceiveBadgedSuggestions:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699c2a0

// -[SCComposerPeopleSuggestedFriendStore _populateSuggestionsObservableFirstTime:isFromUserTriggeredRefresh:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10699c350

// -[SCComposerPeopleSuggestedFriendStore getSuggestedFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10699c368

// -[SCComposerPeopleSuggestedFriendStore _getLegacySuggestedFriendsFirstTime:]
// Type encoding: v20@0:8B16
// Implementation: 0x10699c36c

// -[SCComposerPeopleSuggestedFriendStore _getSuggestedFriends:]
// Type encoding: v20@0:8B16
// Implementation: 0x10699c4e4

// -[SCComposerPeopleSuggestedFriendStore hideSuggestedFriendWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699cb28

// -[SCComposerPeopleSuggestedFriendStore onCacheHideFriendWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699cbb0

// -[SCComposerPeopleSuggestedFriendStore onHideFriendFeedbackWithUserId:feedbackIndex:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10699cc58

// -[SCComposerPeopleSuggestedFriendStore undoHideSuggestedFriendWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699ccf8

// -[SCComposerPeopleSuggestedFriendStore onUserPullToRefresh]
// Type encoding: v16@0:8
// Implementation: 0x10699cd84

// -[SCComposerPeopleSuggestedFriendStore onForceRefresh]
// Type encoding: v16@0:8
// Implementation: 0x10699cd90

// -[SCComposerPeopleSuggestedFriendStore onClickShortcutWithSelectedId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699cd9c

// -[SCComposerPeopleSuggestedFriendStore onSuggestedFriendsUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x10699cda8

// -[SCComposerPeopleSuggestedFriendStore _handleLegacySuggestedFriends:error:firstTime:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10699cdb8

// -[SCComposerPeopleSuggestedFriendStore _handleSuggestions:isFromUserTriggeredRefresh:error:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x10699d10c

// -[SCComposerPeopleSuggestedFriendStore _reorderAndPublishSuggestions:isFromUserTriggeredRefresh:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x10699d164

// -[SCComposerPeopleSuggestedFriendStore _mergeBadgedSuggestionsAndPublishReorderedSuggestions:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10699d32c

// -[SCComposerPeopleSuggestedFriendStore _pinSuggestionFromPopover:]
// Type encoding: @24@0:8@16
// Implementation: 0x10699d8a0

// -[SCComposerPeopleSuggestedFriendStore _publishSuggestionsToComposerReorderedSuggestions:badgedSuggestionUserIds:cachedHiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10699d9cc

// -[SCComposerPeopleSuggestedFriendStore _shouldHideSuggestion:hiddenSuggestions:lastHiddenSuggestionUserIdPendingFeedback:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10699dd98

// -[SCComposerPeopleSuggestedFriendStore _shouldShowFeedback:lastHiddenSuggestionUserIdPendingFeedback:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10699de28

// -[SCComposerPeopleSuggestedFriendStore didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699de34

// -[SCComposerPeopleSuggestedFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10699de38

// -[SCComposerPeopleSuggestedFriendStore didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10699de3c

// -[SCComposerPeopleSuggestedFriendStore _endFetchingSuggestionsWithSuggestDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699de40

// -[SCComposerPeopleSuggestedFriendStore suggestionsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10699de90

// -[SCComposerPeopleSuggestedFriendStore setSuggestionsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699de98

// -[SCComposerPeopleSuggestedFriendStore suggestionsObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10699dec8

// -[SCComposerPeopleSuggestedFriendStore setSuggestionsObservableV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699ded0

// -[SCComposerPeopleSuggestedFriendStore quickAddSnapchattersObservable]
// Type encoding: @16@0:8
// Implementation: 0x10699df00

// -[SCComposerPeopleSuggestedFriendStore setQuickAddSnapchattersObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699df08

// -[SCComposerPeopleSuggestedFriendStore pinnedSuggestedSnapchatterUserIds]
// Type encoding: @16@0:8
// Implementation: 0x10699df38

// -[SCComposerPeopleSuggestedFriendStore setPinnedSuggestedSnapchatterUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699df44

// -[SCComposerPeopleSuggestedFriendStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10699df4c

@end
