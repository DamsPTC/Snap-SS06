// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecipientListsDataCoordinator
// Superclass: NSObject
// Address: 0x112a811b8

@interface SCRecipientListsDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRecipientListsDataCoordinator hasSyncedWithServer]
// Type encoding: B16@0:8
// Implementation: 0x1059cc44c

// -[SCRecipientListsDataCoordinator hasSyncedWithServerObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059cc4ac

// -[SCRecipientListsDataCoordinator _updateLastServerSyncTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x1059cc4b4

// -[SCRecipientListsDataCoordinator lastServerSyncTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1059cc530

// -[SCRecipientListsDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059cc58c

// -[SCRecipientListsDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059cc594

// -[SCRecipientListsDataCoordinator initWithDocObjectContext:networkService:preferences:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059cc59c

// -[SCRecipientListsDataCoordinator listsWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059cc7a4

// -[SCRecipientListsDataCoordinator listWithListId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059cc970

// -[SCRecipientListsDataCoordinator syncFromServerWithCompletionQueue:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1059ccb54

// -[SCRecipientListsDataCoordinator createLists:completionQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1059cce04

// -[SCRecipientListsDataCoordinator updateLists:completionQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1059cd010

// -[SCRecipientListsDataCoordinator deleteListsWithListIds:completionQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1059cd21c

// -[SCRecipientListsDataCoordinator removeRecipientFromAllListsWithRecipientIdToRemove:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059cd41c

// -[SCRecipientListsDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059cd864

// -[SCRecipientListsDataCoordinator _flushAndUpsertClientLocalLists:completionQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1059cd868

// -[SCRecipientListsDataCoordinator _upsertClientLocalLists:completionQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1059cd9f8

// -[SCRecipientListsDataCoordinator _deleteClientListsWithIds:completionQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1059cdc80

// -[SCRecipientListsDataCoordinator _cleanAllDataWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059cdf08

// -[SCRecipientListsDataCoordinator cleanAllDataWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059cdf88

// -[SCRecipientListsDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059ce0bc

// +[SCRecipientListsDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1059cc580

@end
