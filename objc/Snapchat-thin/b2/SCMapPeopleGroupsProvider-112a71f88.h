// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPeopleGroupsProvider
// Superclass: NSObject
// Address: 0x112a71f88

@interface SCMapPeopleGroupsProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPeopleGroupsProvider initWithCurrentUserId:usernameObservable:groupsDataCreator:groupsDataFetcher:groupsDataTracker:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10583bae4

// -[SCMapPeopleGroupsProvider groupsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10583bd48

// -[SCMapPeopleGroupsProvider displayNameForExistingGroupChatContainingPeople:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583bd70

// -[SCMapPeopleGroupsProvider canCreateGroupChatForPeople:]
// Type encoding: B24@0:8@16
// Implementation: 0x10583bdb4

// -[SCMapPeopleGroupsProvider orderedPeopleForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583bed0

// -[SCMapPeopleGroupsProvider _updateLatestUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583c098

// -[SCMapPeopleGroupsProvider _mostRecentGroupContainingAllPeople:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583c0c8

// -[SCMapPeopleGroupsProvider didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10583c3e4

// -[SCMapPeopleGroupsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10583c400

@end
