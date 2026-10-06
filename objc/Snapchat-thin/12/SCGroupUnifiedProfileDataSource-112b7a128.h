// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupUnifiedProfileDataSource
// Superclass: NSObject
// Address: 0x112b7a128

@interface SCGroupUnifiedProfileDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sessionId; attributes: T@"NSString",R,C,N,V_sessionId

// -[SCGroupUnifiedProfileDataSource initWithUserSession:groupsDataFetcher:groupsDataMutator:groupId:groupMembers:groupsDataTracker:groupSnapchatterRepository:selfUserId:userInfoProvider:snapchattersDataFetcher:snapchattersDataTracker:friendStatusManagerCreator:snapchatterPublicInfoFetcher:friendsFeedDataAccess:storiesDataAccess:remoteStoriesDataProvider:conversationServices:legacySnapchatterServices:friendStorySettingMutator:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x107ceb868

// -[SCGroupUnifiedProfileDataSource groupMembers]
// Type encoding: @16@0:8
// Implementation: 0x107cebe88

// -[SCGroupUnifiedProfileDataSource groupMembersCount]
// Type encoding: Q16@0:8
// Implementation: 0x107cebfb4

// -[SCGroupUnifiedProfileDataSource groupDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x107cec090

// -[SCGroupUnifiedProfileDataSource groupName]
// Type encoding: @16@0:8
// Implementation: 0x107cec1a0

// -[SCGroupUnifiedProfileDataSource groupFormattedDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x107cec2a0

// -[SCGroupUnifiedProfileDataSource groupId]
// Type encoding: @16@0:8
// Implementation: 0x107cec674

// -[SCGroupUnifiedProfileDataSource friendsFeedItem]
// Type encoding: @16@0:8
// Implementation: 0x107cec69c

// -[SCGroupUnifiedProfileDataSource chatGroup]
// Type encoding: @16@0:8
// Implementation: 0x107cec79c

// -[SCGroupUnifiedProfileDataSource isMuted]
// Type encoding: B16@0:8
// Implementation: 0x107cec7ec

// -[SCGroupUnifiedProfileDataSource addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cec8b4

// -[SCGroupUnifiedProfileDataSource removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cec8bc

// -[SCGroupUnifiedProfileDataSource _updateGroupDisplayName]
// Type encoding: v16@0:8
// Implementation: 0x107cec8c4

// -[SCGroupUnifiedProfileDataSource _updateGroupDisplayNameContinuation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ceca04

// -[SCGroupUnifiedProfileDataSource _setGroupDisplayName:groupName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107cecc3c

// -[SCGroupUnifiedProfileDataSource _updateGroupMembers]
// Type encoding: v16@0:8
// Implementation: 0x107cecd5c

// -[SCGroupUnifiedProfileDataSource _setMemberSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cecf70

// -[SCGroupUnifiedProfileDataSource _findFriendsFeedItemForGroupId:inFeedItems:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ced050

// -[SCGroupUnifiedProfileDataSource _updateFriendsFeedItemBasedOnFriendsFeedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ced1b0

// -[SCGroupUnifiedProfileDataSource _updateFriendsFeedItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ced200

// -[SCGroupUnifiedProfileDataSource _updateIsMuted]
// Type encoding: v16@0:8
// Implementation: 0x107ced350

// -[SCGroupUnifiedProfileDataSource _updateIsMutedWithGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ced4d4

// -[SCGroupUnifiedProfileDataSource _isMutedWithMuteEndDate:isNotifsEnabled:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x107ced604

// -[SCGroupUnifiedProfileDataSource didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107ced688

// -[SCGroupUnifiedProfileDataSource _didChangeInfoForGroupWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ced6ec

// -[SCGroupUnifiedProfileDataSource _didBeginLeavingGroupWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ced734

// -[SCGroupUnifiedProfileDataSource didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ced778

// -[SCGroupUnifiedProfileDataSource _dispatchAnnounceUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ced7cc

// -[SCGroupUnifiedProfileDataSource _isRTL]
// Type encoding: B16@0:8
// Implementation: 0x107ced884

// -[SCGroupUnifiedProfileDataSource sessionId]
// Type encoding: @16@0:8
// Implementation: 0x107ced8f8

// -[SCGroupUnifiedProfileDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ced900

// +[SCGroupUnifiedProfileDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107cec8a8

@end
