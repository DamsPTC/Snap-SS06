// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedLegacyGroupUpdatesDataCoordinator
// Superclass: NSObject
// Address: 0x112ae3228

@interface SCFriendsFeedLegacyGroupUpdatesDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bad0f0

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e61ec

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator initWithBlockedSnapchatterSynchronousFetcher:docObjectContext:groupsDataFetcher:groupsDataTracker:userId:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100baca3c

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e6224

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator didGroupsUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e6228

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1064e668c

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _didFinishLoadingGroups]
// Type encoding: v16@0:8
// Implementation: 0x1064e6690

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _updateWithGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e67f4

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _didBeginLeavingGroupWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e6a7c

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _processLeaveGroupWithId:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064e6c24

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _processChangeInfoWithGroup:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064e6c94

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator _announceLegacyGroupUpdatesWithDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e6d04

// -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064e6d48

// +[SCFriendsFeedLegacyGroupUpdatesDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x100c5a4cc

@end
