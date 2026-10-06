// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendshipFlashbacksDataManager
// Superclass: NSObject
// Address: 0x112a53e98

@interface SCFriendshipFlashbacksDataManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendshipFlashbacksDataManager initWithNativeMessagingSessionManager:docObjectContext:performer:networkFetcher:conversationIdResolver:userPreferences:friendshipFlashbackPersister:notificationPool:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105656b38

// -[SCFriendshipFlashbacksDataManager friendshipFlashbacksObservableWithChatIdentifier:flashbackId:forceSyncIfMissing:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105656d38

// -[SCFriendshipFlashbacksDataManager _friendshipFlashbacksObservableWithChatIdentifier:flashbackId:forceSyncIfMissing:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10565700c

// -[SCFriendshipFlashbacksDataManager observeAllChatMediaFeaturedStories]
// Type encoding: @16@0:8
// Implementation: 0x1056576ac

// -[SCFriendshipFlashbacksDataManager observeFullyUnviewedFriendshipFlashbacksInChat:]
// Type encoding: @24@0:8@16
// Implementation: 0x105657900

// -[SCFriendshipFlashbacksDataManager observeFullyUnviewedFriendshipFlashbacksByConversationId]
// Type encoding: @16@0:8
// Implementation: 0x105657b28

// -[SCFriendshipFlashbacksDataManager observePrimaryUnviewedFriendshipFlashbacksByConversationId]
// Type encoding: @16@0:8
// Implementation: 0x105657dd8

// -[SCFriendshipFlashbacksDataManager _observeFullyUnviewedFriendshipFlashbacksInChat:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056580e8

// -[SCFriendshipFlashbacksDataManager markFlashbackMessageMediaAsViewedWithFlashbackId:messageConsistentId:mediaId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056582d4

// -[SCFriendshipFlashbacksDataManager _updateLocalFlashbackData]
// Type encoding: @16@0:8
// Implementation: 0x10565838c

// -[SCFriendshipFlashbacksDataManager _populateMessagesData:]
// Type encoding: @24@0:8@16
// Implementation: 0x105658440

// -[SCFriendshipFlashbacksDataManager _observeFriendshipFlashbacksFeaturedStoryWithStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x105658638

// -[SCFriendshipFlashbacksDataManager _cachedDataModelForStory:storySignature:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105658a48

// -[SCFriendshipFlashbacksDataManager _updateDataModelCacheWithStory:storySignature:dataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105658b5c

// -[SCFriendshipFlashbacksDataManager _storyCacheSignatureForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x105658c40

// -[SCFriendshipFlashbacksDataManager _observableForSingleStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x105658e0c

// -[SCFriendshipFlashbacksDataManager _populateFlashbackStoryWithFullMessageDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105659034

// -[SCFriendshipFlashbacksDataManager _persistFriendshipFlashbacksFromExtension]
// Type encoding: @16@0:8
// Implementation: 0x1056594e4

// -[SCFriendshipFlashbacksDataManager _tryFetchFriendshipFlashbacksFromRemote]
// Type encoding: @16@0:8
// Implementation: 0x1056597b0

// -[SCFriendshipFlashbacksDataManager _isEligibleForRemoteFetch]
// Type encoding: B16@0:8
// Implementation: 0x105659ab0

// -[SCFriendshipFlashbacksDataManager _fetchFriendshipFlashbacksFromRemote:]
// Type encoding: @24@0:8@?16
// Implementation: 0x105659b54

// -[SCFriendshipFlashbacksDataManager _processRemotelyFetchedFriendshipFlashbacks:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105659cf4

// -[SCFriendshipFlashbacksDataManager _fetchFlashbackStoryWithConversationId:flashbackId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105659e44

// -[SCFriendshipFlashbacksDataManager _isExpiredStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x105659f04

// -[SCFriendshipFlashbacksDataManager _resetViewStatesForTweak]
// Type encoding: v16@0:8
// Implementation: 0x105659f78

// -[SCFriendshipFlashbacksDataManager _fetchRemoteForTweak]
// Type encoding: v16@0:8
// Implementation: 0x10565a0ac

// -[SCFriendshipFlashbacksDataManager _showToastForTweak:]
// Type encoding: v20@0:8B16
// Implementation: 0x10565a18c

// -[SCFriendshipFlashbacksDataManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10565a288

@end
