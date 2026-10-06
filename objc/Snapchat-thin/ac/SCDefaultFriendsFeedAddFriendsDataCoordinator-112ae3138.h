// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDefaultFriendsFeedAddFriendsDataCoordinator
// Superclass: NSObject
// Address: 0x112ae3138

@interface SCDefaultFriendsFeedAddFriendsDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: feedHasAppeared; attributes: TB,N,VfeedHasAppeared

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator initWithSnapchattersDataFetcher:nonSnapchattersDataFetcher:enableTwilioInvites:contactPhotosService:snapchattersDataTracking:incomingFriendsRepository:contactSyncCTAQualificationProvider:circumstanceEngine:messagingExperimentService:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100bab0a8

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator snapchattersWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100bbe45c

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _refetch]
// Type encoding: v16@0:8
// Implementation: 0x1064e337c

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _fetchContactNonSnapchattersOnly]
// Type encoding: v16@0:8
// Implementation: 0x1064e3c94

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator addFriendsDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064e405c

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator identifier]
// Type encoding: @16@0:8
// Implementation: 0x1064e4084

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _updateSuggestedFriends:incomingFriends:contactSnapchatters:contactNonSnapchatters:contactPhotos:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1064e40ec

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _announceListener]
// Type encoding: v16@0:8
// Implementation: 0x1064e41ec

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator handleFriendsFeedViewDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e4238

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e43fc

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1064e4400

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1064e45a8

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _mergeIncomingFriendsAndUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e47a4

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _filterIgnoredSnapchatters:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064e4804

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _dedupAndSortSnapchatters:withLocalSnapchatters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1064e48a8

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _performRefetch]
// Type encoding: v16@0:8
// Implementation: 0x1064e4b38

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _handleViewHasPartiallyAppearedAtLeastOnce]
// Type encoding: v16@0:8
// Implementation: 0x1064e4c0c

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _viewHasPartiallyAppearedAtLeastOnce]
// Type encoding: v16@0:8
// Implementation: 0x1064e4ce4

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _subscribeIncomingFriendsChange]
// Type encoding: v16@0:8
// Implementation: 0x1064e4d0c

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _mergeAfterViewDidAppeared:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e4e9c

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _processContactNonSnapchatters:contactPhotos:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1064e4ee0

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator _isQualifiedToShowAddFriendsSections]
// Type encoding: B16@0:8
// Implementation: 0x100bbe548

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator feedHasAppeared]
// Type encoding: B16@0:8
// Implementation: 0x1064e4f84

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator setFeedHasAppeared:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064e4f8c

// -[SCDefaultFriendsFeedAddFriendsDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064e4f94

@end
