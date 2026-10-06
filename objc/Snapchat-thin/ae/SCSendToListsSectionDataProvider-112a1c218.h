// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToListsSectionDataProvider
// Superclass: NSObject
// Address: 0x112a1c218

@interface SCSendToListsSectionDataProvider

// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToListsSectionDataProvider initWithListsDataCoordinator:selectionTracker:imageDownloader:snapchatterViewModelGenerator:groupViewModelGenerator:snapchattersDataFetcher:groupsDataFetcher:userSession:myDisplayName:sendToTracker:shortcutsDataFetcher:circumstanceEngine:nonSnapchattersObservableRepository:contactPhotosService:shouldIncludeSelectableContacts:sendToExperimentConfiguration:sendToUIConfiguration:avatarFactory:]
// Type encoding: @156@0:8@16@24@32@?40@?48@56@64@72@80@88@96@104@112@120B128@132@140@148
// Implementation: 0x1051542c0

// -[SCSendToListsSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051546f0

// -[SCSendToListsSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051546f8

// -[SCSendToListsSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105154700

// -[SCSendToListsSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x105154774

// -[SCSendToListsSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1051549c8

// -[SCSendToListsSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x1051549d0

// -[SCSendToListsSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1051549d8

// -[SCSendToListsSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051549e0

// -[SCSendToListsSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105154a64

// -[SCSendToListsSectionDataProvider containerCellViewModels]
// Type encoding: @16@0:8
// Implementation: 0x105154ae0

// -[SCSendToListsSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105154b08

// -[SCSendToListsSectionDataProvider _updateContainerViewModelWithShortcutId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105154bac

// -[SCSendToListsSectionDataProvider _updateContainerViewModelWithShortcutRecipients:shortcutId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105154d34

// -[SCSendToListsSectionDataProvider _contactPhotosObservable]
// Type encoding: @16@0:8
// Implementation: 0x10515522c

// -[SCSendToListsSectionDataProvider _updateContainerViewModelWithSortedPhoneNumbers:contactNonSnapchatters:snapchatterUserIds:groups:isContextual:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1051552f4

// -[SCSendToListsSectionDataProvider _filterContactsWithPhoneNumbers:contactNonSnapchatters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1051553cc

// -[SCSendToListsSectionDataProvider _containerCellViewModelForContactNonSnapchatter:isSelected:index:count:]
// Type encoding: @44@0:8@16B24Q28Q36
// Implementation: 0x1051554e0

// -[SCSendToListsSectionDataProvider _updateContainerViewModelWithSelectedList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105155568

// -[SCSendToListsSectionDataProvider _selectionGroupsWithGroupIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105155610

// -[SCSendToListsSectionDataProvider _updateContainerViewModelWithSnapchatterUserIds:groups:contactNonSnapchatters:isContextual:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x105155760

// -[SCSendToListsSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105155928

// -[SCSendToListsSectionDataProvider _setSelectionRecipients:groups:contactNonSnapchatters:isContextual:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x105155a9c

// -[SCSendToListsSectionDataProvider _sortedRecipientsListFromSnapchatters:groups:contactNonSnapchatters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105156138

// -[SCSendToListsSectionDataProvider _containerViewModelsForRecipients:identifierToStateMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105156320

// -[SCSendToListsSectionDataProvider _recipientIdentifiers:groups:contactNonSnapchatters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105156928

// -[SCSendToListsSectionDataProvider _identifiersForRecipients:]
// Type encoding: @24@0:8@16
// Implementation: 0x105156a2c

// -[SCSendToListsSectionDataProvider _setItemToSelectionStateMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105156c28

// -[SCSendToListsSectionDataProvider _containerCellViewModelForGroup:index:isSelected:count:]
// Type encoding: @44@0:8@16Q24B32Q36
// Implementation: 0x105156e98

// -[SCSendToListsSectionDataProvider _containerCellViewModelForSelectionSnapchatter:index:isSelected:count:addActiviyIndicator:]
// Type encoding: @48@0:8@16Q24B32Q36B44
// Implementation: 0x105156f4c

// -[SCSendToListsSectionDataProvider _configureRecipientCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105157008

// -[SCSendToListsSectionDataProvider _selectionIdentifierFromRecipient:]
// Type encoding: @24@0:8@16
// Implementation: 0x105157084

// -[SCSendToListsSectionDataProvider _onNextSendToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105157108

// -[SCSendToListsSectionDataProvider _clearListSelection]
// Type encoding: v16@0:8
// Implementation: 0x105157338

// -[SCSendToListsSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105157388

// -[SCSendToListsSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051573a0

// -[SCSendToListsSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x1051573ac

// -[SCSendToListsSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1051573b4

// -[SCSendToListsSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051573bc

// +[SCSendToListsSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1051546e4

@end
