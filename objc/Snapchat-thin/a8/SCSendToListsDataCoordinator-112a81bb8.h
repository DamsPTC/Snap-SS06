// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToListsDataCoordinator
// Superclass: NSObject
// Address: 0x112a81bb8

@interface SCSendToListsDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToListsDataCoordinator initWithUserSession:recipientListsDataCoordinator:snapchattersDataFetcher:groupsDataFetcher:listsLogger:myDisplayName:sendToSuggestionsDataService:circumstanceEngine:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1059d7194

// -[SCSendToListsDataCoordinator _initData]
// Type encoding: v16@0:8
// Implementation: 0x1059d75b8

// -[SCSendToListsDataCoordinator hasSyncedListDataFromServer]
// Type encoding: B16@0:8
// Implementation: 0x1059d7844

// -[SCSendToListsDataCoordinator _hasSyncedWithServer]
// Type encoding: B16@0:8
// Implementation: 0x1059d7848

// -[SCSendToListsDataCoordinator _lastServerSyncTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1059d7888

// -[SCSendToListsDataCoordinator logListAction:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d78d0

// -[SCSendToListsDataCoordinator logRecipientActions:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d7940

// -[SCSendToListsDataCoordinator sortedListsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1059d79b0

// -[SCSendToListsDataCoordinator lazySortedListsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059d7b20

// -[SCSendToListsDataCoordinator _sortedListsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059d7b48

// -[SCSendToListsDataCoordinator _publishSortedListsObservableWithSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d7c74

// -[SCSendToListsDataCoordinator listObservableForListId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059d7d44

// -[SCSendToListsDataCoordinator _listObservableForListId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059d7e78

// -[SCSendToListsDataCoordinator _publishListObservableForListId:listForListIdBehaviorSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d7fc0

// -[SCSendToListsDataCoordinator listsMapWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1059d82bc

// -[SCSendToListsDataCoordinator listWithListId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059d842c

// -[SCSendToListsDataCoordinator createListWithList:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1059d8664

// -[SCSendToListsDataCoordinator updateListWithList:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1059d8668

// -[SCSendToListsDataCoordinator deleteListWithListId:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1059d866c

// -[SCSendToListsDataCoordinator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d8670

// -[SCSendToListsDataCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d8678

// -[SCSendToListsDataCoordinator newCustomShortcutIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059d8680

// -[SCSendToListsDataCoordinator _fetchDataObject]
// Type encoding: @16@0:8
// Implementation: 0x1059d86a8

// -[SCSendToListsDataCoordinator _deleteCachedDataModelForId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059d86d0

// -[SCSendToListsDataCoordinator _resetCachedDataModelsForLists:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059d89c4

// -[SCSendToListsDataCoordinator _saveWithDataObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d8b30

// -[SCSendToListsDataCoordinator _syncWithServerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1059d8b88

// -[SCSendToListsDataCoordinator _translateAndResetCachedDataModelsForLists:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059d8d68

// -[SCSendToListsDataCoordinator _updateSuggestionsDataWithLists:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d8f44

// -[SCSendToListsDataCoordinator _insertSuggestionsDataWithLists:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d9094

// -[SCSendToListsDataCoordinator _translateAndUpdateCachedDataModelsForList:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059d94b8

// -[SCSendToListsDataCoordinator _updateCachedDataModelsForList:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059d9728

// -[SCSendToListsDataCoordinator _announceEditList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d9934

// -[SCSendToListsDataCoordinator _announceUserInitiatedCreateList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d9a40

// -[SCSendToListsDataCoordinator _createForList:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1059d9b78

// -[SCSendToListsDataCoordinator _deleteForListId:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1059d9fe8

// -[SCSendToListsDataCoordinator _updateForList:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1059da238

// -[SCSendToListsDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059da6a8

@end
