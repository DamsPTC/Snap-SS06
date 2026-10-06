// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToSectionDataSource
// Superclass: NSObject
// Address: 0x112aa1328

@interface SCSendToSectionDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lastSnapTitle; attributes: T@"NSAttributedString",R,N
// Property: lastSnapItems; attributes: T@"NSArray",R,N
// Property: sortedEntitiesObservable; attributes: T@"SCObservable",R,N

// -[SCSendToSectionDataSource prewarmRecentRecipientsObservable]
// Type encoding: v16@0:8
// Implementation: 0x105e27ee4

// -[SCSendToSectionDataSource initWithConfiguration:snapchatterObservableRepository:searchServiceClientFactory:searchClient:sortableSnapchatterObservableRepository:selectionGroupObservableRepository:selectionRecipientObservableRepository:selectionStoryObservableRepository:replyRecipientObservableRepository:lastSnapDataCoordinator:storiesDataCoordinator:mapPersonLocationsProvider:selectionTracker:sendToSnapchatterObservableRepository:userInitiatedPerformer:circumstanceEngine:sendToExperimentConfiguration:recentlyActiveService:snapchattersDataFetcher:topGroupsDataSource:snappableDataSource:sendToLogger:sendToAttribution:contextualSignalsObservable:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x105e21ad4

// -[SCSendToSectionDataSource sortableSnapchatterObservableForSectionIdentifier:query:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e22b08

// -[SCSendToSectionDataSource selectionGroupObservableForSectionIdentifier:query:selectionTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105e22bc8

// -[SCSendToSectionDataSource selectionSnapchatterObservableForSectionIdentifier:query:includeStoriesSummaryInfo:includeLocation:selectionTracker:]
// Type encoding: @48@0:8@16@24B32B36@40
// Implementation: 0x105e22d64

// -[SCSendToSectionDataSource selectionRecipientObservableForSectionIdentifier:query:selectionTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105e23170

// -[SCSendToSectionDataSource foldedSectionRecipientObservableForSectionIdentifier:query:selectionTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105e23448

// -[SCSendToSectionDataSource _foldedSectionRecipientObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e236a4

// -[SCSendToSectionDataSource selectionStoryObservableForSectionIdentifier:query:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e23c48

// -[SCSendToSectionDataSource lastSnapTitle]
// Type encoding: @16@0:8
// Implementation: 0x105e23d84

// -[SCSendToSectionDataSource lastSnapItems]
// Type encoding: @16@0:8
// Implementation: 0x105e23dcc

// -[SCSendToSectionDataSource sortedEntitiesObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e23e14

// -[SCSendToSectionDataSource entityCountObservableForIndexKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e23e1c

// -[SCSendToSectionDataSource _bestFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e24004

// -[SCSendToSectionDataSource _bestFriendsWithGroupsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e24074

// -[SCSendToSectionDataSource _replyRecipientsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e241d0

// -[SCSendToSectionDataSource _selectedReplySectionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e24218

// -[SCSendToSectionDataSource _isReplySectionSelectedWithReplyRecipients:selectedItems:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e2441c

// -[SCSendToSectionDataSource _dedupedFoldedSectionObservable:precedingSectionObservables:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e24600

// -[SCSendToSectionDataSource _allFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e24938

// -[SCSendToSectionDataSource _sortableSnapchatterMapObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e249a8

// -[SCSendToSectionDataSource _sortedFriendsObservableForLetterKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e24a18

// -[SCSendToSectionDataSource _quickAddSnapchatterObservableWithConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e24b3c

// -[SCSendToSectionDataSource _snappableSnapchatterObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e24eb4

// -[SCSendToSectionDataSource _selectedFriendsObservableWithSelectionTracker:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e24f24

// -[SCSendToSectionDataSource _universalSearchObservableForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e24ff0

// -[SCSendToSectionDataSource _searchAddFriendsV2ObservableForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e25258

// -[SCSendToSectionDataSource _recentGroupObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e254fc

// -[SCSendToSectionDataSource _newGroupObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e25564

// -[SCSendToSectionDataSource _topGroupsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e255a4

// -[SCSendToSectionDataSource _recentRecipientsObservableWithInternalConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e255ec

// -[SCSendToSectionDataSource _selectionStoryObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e258c8

// -[SCSendToSectionDataSource _searchServiceClientObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e25910

// -[SCSendToSectionDataSource _selectionSnapchatterWithSnapchatterObservable:includeStoriesSummaryInfo:includeLocation:includeRecentlyActive:]
// Type encoding: @36@0:8@16B24B28B32
// Implementation: 0x105e25994

// -[SCSendToSectionDataSource _combineRecentlyActiveObservableWithSelectionSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e25e8c

// -[SCSendToSectionDataSource _combineRecentlyActiveObservableWithSelectionGroups:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e26228

// -[SCSendToSectionDataSource _combineRecentlyActiveObservableWithSelectionRecipients:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e265dc

// -[SCSendToSectionDataSource _userIdToStoriesSummaryInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e269c4

// -[SCSendToSectionDataSource _locationIsAvailableObservableFilterAndMapWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e26ad4

// -[SCSendToSectionDataSource _appendStoriesSummaryInfoWithSelectionSnapchatter:userIdToStoriesSummayInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e26b94

// -[SCSendToSectionDataSource _appendLocationWithSelectionSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e26da0

// -[SCSendToSectionDataSource _recievedSnapchatters:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e26fcc

// -[SCSendToSectionDataSource _recentlyActiveServiceIsPopulated]
// Type encoding: v16@0:8
// Implementation: 0x105e27164

// -[SCSendToSectionDataSource _populateSelectionRecipients:withRecentlyActiveResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e271a0

// -[SCSendToSectionDataSource _populateSelectionSnapchatters:withRecentlyActiveResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e276b8

// -[SCSendToSectionDataSource _populateSelectionGroups:withRecentlyActiveResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e2788c

// -[SCSendToSectionDataSource _isRecentlyActiveAvailibleForSectionWithIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e27b2c

// -[SCSendToSectionDataSource _sectionEnabledWithCofKey:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105e27ce0

// -[SCSendToSectionDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e27cf0

@end
