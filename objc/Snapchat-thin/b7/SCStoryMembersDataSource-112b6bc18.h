// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryMembersDataSource
// Superclass: NSObject
// Address: 0x112b6bc18

@interface SCStoryMembersDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: publicationId; attributes: T@"NSString",R,C,N,V_publicationId
// Property: storyOwnerId; attributes: T@"NSString",R,C,N,V_storyOwnerId
// Property: sortsAlphabetically; attributes: TB,N,V_sortsAlphabetically

// -[SCStoryMembersDataSource initWithPublicationId:customStoriesDataFetcher:customStoriesDataSyncer:snapchattersDataFetcher:snapchattersPublicInfoFetcher:blockedSnapchatterFetcher:snapchattersDataTracker:circumstanceEngine:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107a3a7b4

// -[SCStoryMembersDataSource membersListSnapchattersObservableWithQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a3abb0

// -[SCStoryMembersDataSource storyMemberInfoObservableWithQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a3adac

// -[SCStoryMembersDataSource storyMemberCount]
// Type encoding: @16@0:8
// Implementation: 0x107a3b374

// -[SCStoryMembersDataSource isBlockedWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a3b37c

// -[SCStoryMembersDataSource fetchRemoteSnapchattersWithUserIds:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a3b454

// -[SCStoryMembersDataSource _fetchSnapchattersForCustomStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3b7c8

// -[SCStoryMembersDataSource _fetchSnapchattersForUserIds:customStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a3ba8c

// -[SCStoryMembersDataSource _handleFetchedSnapchatters:userIds:customStory:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a3bc38

// -[SCStoryMembersDataSource _handleRemoteFetchedSnapchatters:customStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a3bf00

// -[SCStoryMembersDataSource _updataMembersListSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3bf8c

// -[SCStoryMembersDataSource _updataMembersListSnapchatters:customStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a3c050

// -[SCStoryMembersDataSource _updataMembersListSnapchattersHelper]
// Type encoding: v16@0:8
// Implementation: 0x107a3c1e8

// -[SCStoryMembersDataSource _updateRemoteSnapchattersWithUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3c220

// -[SCStoryMembersDataSource _fetchBlockedSnapchatters]
// Type encoding: v16@0:8
// Implementation: 0x107a3c308

// -[SCStoryMembersDataSource didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107a3c45c

// -[SCStoryMembersDataSource didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3c5e8

// -[SCStoryMembersDataSource publicationId]
// Type encoding: @16@0:8
// Implementation: 0x107a3c5ec

// -[SCStoryMembersDataSource storyOwnerId]
// Type encoding: @16@0:8
// Implementation: 0x107a3c5f4

// -[SCStoryMembersDataSource sortsAlphabetically]
// Type encoding: B16@0:8
// Implementation: 0x107a3c5fc

// -[SCStoryMembersDataSource setSortsAlphabetically:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a3c604

// -[SCStoryMembersDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a3c60c

@end
