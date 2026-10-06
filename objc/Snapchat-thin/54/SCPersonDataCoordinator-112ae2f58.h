// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPersonDataCoordinator
// Superclass: NSObject
// Address: 0x112ae2f58

@interface SCPersonDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPersonDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bac4e4

// -[SCPersonDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064de0e4

// -[SCPersonDataCoordinator initWithPersonRepository:groupsDataFetcher:docObjectContext:ghostToFeedLogger:userId:blockedSnapchattersSynchronousDataFetcher:snapchattersObservableRepository:disableLegacyGroupsFeedDataCoordinator:]
// Type encoding: @76@0:8@16@24@32@40@48@56@64B72
// Implementation: 0x100ba8c88

// -[SCPersonDataCoordinator personDataForOneOnOneFeedIds:groupFeedIds:multiRecipientFeedIds:fetchContexts:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x100bbdf74

// -[SCPersonDataCoordinator _entitiesForOneOnOneFeedIds:groupFeedIds:multiRecipientFeedIds:fetchContexts:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x100bbdf78

// -[SCPersonDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064de128

// -[SCPersonDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064de12c

// -[SCPersonDataCoordinator didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5a318

// -[SCPersonDataCoordinator didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1064de130

// -[SCPersonDataCoordinator _setupSubscriptionsIfNeededWithSnapchattersObservableRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064de174

// -[SCPersonDataCoordinator _performFetchWithSnapchatterFeedIds:groupFeedIds:multiRecipientFeedIds:multiRecipientFeedIdToRecipientIds:multiRecipientIndividualIds:fetchContexts:completion:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x100bd0ed4

// -[SCPersonDataCoordinator _logGrapheneForSubstep:entriesFetched:startTime:fetchContexts:]
// Type encoding: v48@0:8q16Q24d32@40
// Implementation: 0x1064de310

// -[SCPersonDataCoordinator _fetchAndObserveGroupsForGroupIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064de394

// -[SCPersonDataCoordinator _updateSummaryFetchedResult:groupId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064de6fc

// -[SCPersonDataCoordinator _fetchGroupEntities:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bd1168

// -[SCPersonDataCoordinator _groupEntityForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064de8f0

// -[SCPersonDataCoordinator _buildAllEntitiesFromOneOnOneFeedIds:groupFeedIds:multiRecipientFeedIds:groupEntities:personEntities:multiRecipientFeedIdToRecipientIds:snapchatterStartFetchTime:fetchContexts:completion:]
// Type encoding: v88@0:8@16@24@32@40@48@56d64@72@?80
// Implementation: 0x100bd2960

// -[SCPersonDataCoordinator _multiRecipientEntityWithMultiRecipientId:recipientIds:personEntities:groupEntities:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1064df01c

// -[SCPersonDataCoordinator _updateMerlinSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064df478

// -[SCPersonDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064df4a8

// +[SCPersonDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x100c5a35c

@end
