// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersRecentlyActiveRecordDefaultRepository
// Superclass: NSObject
// Address: 0x112a49e48

@interface SCSnapchattersRecentlyActiveRecordDefaultRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository initWithDocObjectContext:recentlyActiveRecordService:incomingSnapchatterObservable:suggestedSnapchatterObservable:pinnedSuggestedSnapchatterObservable:contactSnapchatterObservable:recentlyActiveRecordParamConverter:performerProvider:featureSettingsService:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1055b43c0

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository recentlyActiveText]
// Type encoding: @16@0:8
// Implementation: 0x1055b4614

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository incomingFriendsWithActiveStatus]
// Type encoding: @16@0:8
// Implementation: 0x1055b4618

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository suggestedFriendsWithActiveStatus]
// Type encoding: @16@0:8
// Implementation: 0x1055b4640

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository contactSnapchattersWithActiveStatus]
// Type encoding: @16@0:8
// Implementation: 0x1055b4668

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository fetchRecentlyActiveRecordsForUserIds:querySource:completion:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x1055b468c

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _performerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055b47d4

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _observeIncomingSnapchatterObservable:suggestedSnapchatterObservable:pinnedSuggestedSnapchatterObservable:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055b4830

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _observeContactSnapchatterObservable]
// Type encoding: v16@0:8
// Implementation: 0x1055b4c58

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _getRecentlyActiveRecordsForSourceToSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055b4e2c

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _didReceiveUnexpiredLocalRecentlyActiveRecords:requestSourceToIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055b5064

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _didReceiveSourceToRecentlyActiveFromServer:localUnexpiredRecentlyActiveRecords:sourceToUserIds:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1055b5318

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _fetchRecentlyActiveRecordsForUserIds:querySource:completion:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x1055b5448

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _handleFetchedLocalRecords:userIds:querySource:completion:]
// Type encoding: v44@0:8@16@24i32@?36
// Implementation: 0x1055b5604

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _handleServerResponse:localRecordsMap:userIds:error:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1055b5ab4

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _getUnexpiredRecentlyActiveRecordOfUserIdsLocally:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1055b5e1c

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _updateRecentlyActivenessFromUserIds:lastUpdatedTimestamp:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16d24@32@?40
// Implementation: 0x1055b6084

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _upsertActivenessFromUserIds:transactionContext:timestamp:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x1055b6370

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _publishUpdatedRecords:lastUpdatedTimestamp:localUnexpiredRecentlyActiveRecords:sourceToUserIds:]
// Type encoding: v48@0:8@16d24@32@40
// Implementation: 0x1055b66cc

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository _combineUpdatedRecentlyActiveRecords:localUnexpiredRecentlyActiveRecords:sourceToUserIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055b678c

// -[SCSnapchattersRecentlyActiveRecordDefaultRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055b6c04

@end
