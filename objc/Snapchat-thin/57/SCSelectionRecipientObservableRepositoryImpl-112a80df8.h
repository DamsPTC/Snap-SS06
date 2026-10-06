// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionRecipientObservableRepositoryImpl
// Superclass: NSObject
// Address: 0x112a80df8

@interface SCSelectionRecipientObservableRepositoryImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSelectionRecipientObservableRepositoryImpl initWithSnapchatterObservableRepository:selectionGroupObservableRepository:contactNonSnapchattersObservableRepository:lastInteractionDataService:currentUserId:storiesDataCoordinator:mapPersonLocationsProvider:circumstanceEngine:customStoriesDataFetcher:recentsRankingServiceFactory:recentsConfiguration:performer:suppressInactiveViewerRecentSorter:recentPredicate:recentPredicateIncludingSelfAndTeamSnapchat:recentSorter:recentCutter:recipientMerger:recipientStoriesAppender:recipientLocationAppender:recipientFilter:searchSorter:suppressFollowingAccountsPredicate:contactRecipientAppender:sendToExperimentConfiguration:boostExpiringStreaksSorter:rankByLastSnapSendTimestampEnabled:applyRankingBySendToSurfaceEnabled:rankByLastContentShareTimestampEnabled:]
// Type encoding: @236@0:8@16@24@32@40@48@56@64@72@80@88@96@104@?112@?120@?128@?136@?144@?152@?160@?168@?176@?184@?192@?200@208@?216B224B228B232
// Implementation: 0x1059bdf5c

// -[SCSelectionRecipientObservableRepositoryImpl recentSelectionRecipientsObservableWithQueue:selectionRecipientSource:includeContactNonSnapchatters:includeSelectableContacts:includeSelfAndTeamSnapchat:includeStoriesWithSnapchatter:includeLocationWithSnapchatter:includeNonBidirectionalFriends:sendToLogger:contextualSignals:]
// Type encoding: @72@0:8@16q24B32B36B40B44B48B52@56@64
// Implementation: 0x1059be628

// -[SCSelectionRecipientObservableRepositoryImpl _selectionRecipientsRankingWithObservable:recentsRankingService:selectionRecipientSource:contextualSignals:sendToLogger:]
// Type encoding: @56@0:8@16@24q32@40@48
// Implementation: 0x1059beacc

// -[SCSelectionRecipientObservableRepositoryImpl _rankingResultObservableFromRecipientsObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059bf3bc

// -[SCSelectionRecipientObservableRepositoryImpl legacyRecentSelectionRecipientsRankingWithObservable:selectionRecipientSource:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1059bf41c

// -[SCSelectionRecipientObservableRepositoryImpl suggestedRecipientsObservableWithQueue:selectedRecipientIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059bf640

// -[SCSelectionRecipientObservableRepositoryImpl selectionRecipientObservableForRecipientIds:queue:includeContactNonSnapchatters:includeSelectableContacts:maintainOrder:]
// Type encoding: @44@0:8@16@24B32B36B40
// Implementation: 0x1059bf940

// -[SCSelectionRecipientObservableRepositoryImpl searchSelectionRecipientsObservableForQuery:queue:includeContactNonSnapchatters:includeSelectableContacts:includeSelfAndTeamSnapchat:includeNonBidirectionalFriends:]
// Type encoding: @48@0:8@16@24B32B36B40B44
// Implementation: 0x1059bfc44

// -[SCSelectionRecipientObservableRepositoryImpl allRankingSubjectsObservableWithQueue:additionalFeatureKeys:includeContactNonSnapchatters:includeSelectableContacts:contextualSignals:]
// Type encoding: @48@0:8@16@24B32B36@40
// Implementation: 0x1059bfd88

// -[SCSelectionRecipientObservableRepositoryImpl allSelectionRecipientsObservableWithQueue:includeContactNonSnapchatters:includeSelectableContacts:includeSelfAndTeamSnapchat:includeStoriesWithSnapchatter:includeLocationWithSnapchatter:includeNonBidirectionalFriends:countObservableEmissions:]
// Type encoding: @52@0:8@16B24B28B32B36B40B44B48
// Implementation: 0x1059c0050

// -[SCSelectionRecipientObservableRepositoryImpl rankedRecipientsObservableForContextualSignals:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059c089c

// -[SCSelectionRecipientObservableRepositoryImpl _lastTurnInteractionStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059c08dc

// -[SCSelectionRecipientObservableRepositoryImpl _userIdToStoriesSummaryInfoObservableWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059c0924

// -[SCSelectionRecipientObservableRepositoryImpl _locationIsAvailableObservableStartingWithDummyValue]
// Type encoding: @16@0:8
// Implementation: 0x1059c0a4c

// -[SCSelectionRecipientObservableRepositoryImpl _fetchUserIdsInTheirPrivateStoryContextWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059c0b0c

// -[SCSelectionRecipientObservableRepositoryImpl _mergeSortWithRecentlyAddedRecipients:inTheirPrivateRecipients:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059c0e6c

// -[SCSelectionRecipientObservableRepositoryImpl _selectionRecipientUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059c11f8

// -[SCSelectionRecipientObservableRepositoryImpl _getCachedRankingForContextualSignals:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059c132c

// -[SCSelectionRecipientObservableRepositoryImpl _setCachedRanking:forContextualSignals:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059c13cc

// -[SCSelectionRecipientObservableRepositoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059c1568

@end
