// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedFetcher
// Superclass: NSObject
// Address: 0x112ae3278

@interface SCFriendsFeedFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedFetcher initWithNativeFeedManager:nativeSessionManagerFuture:messagingExperimentService:ghostToFeedLogger:friendsFeedLoadingStatusStream:arroyoSyncedFeedEntriesUpdateEvents:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1004fd80c

// -[SCFriendsFeedFetcher updateAppStateChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x1004ff2a4

// -[SCFriendsFeedFetcher updateFriendsFeedForTriggerType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1004ff370

// -[SCFriendsFeedFetcher _updateLoadingStatus:triggerType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1004ff4d8

// -[SCFriendsFeedFetcher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1064e6d9c

// -[SCFriendsFeedFetcher hasMoreFeedEntries]
// Type encoding: B16@0:8
// Implementation: 0x1064e6de4

// -[SCFriendsFeedFetcher hasMoreFeedEntriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064e6e24

// -[SCFriendsFeedFetcher queryFeedParameters]
// Type encoding: @16@0:8
// Implementation: 0x1064e7060

// -[SCFriendsFeedFetcher configureForWarmStart]
// Type encoding: v16@0:8
// Implementation: 0x1064e70a8

// -[SCFriendsFeedFetcher loadMoreConversationsIfPossibleForceOnFailed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064e70f0

// -[SCFriendsFeedFetcher fetchAndSyncFeedForConversationIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1064e72d0

// -[SCFriendsFeedFetcher _loadMoreConversationsIfPossibleWithOverrideableForceOnFailed:loadingStatusProvider:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1064e73c4

// -[SCFriendsFeedFetcher _loadMoreConversationsIfPossibleForceOnFailed:loadingStatusProvider:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1064e745c

// -[SCFriendsFeedFetcher _loadMoreConversations]
// Type encoding: v16@0:8
// Implementation: 0x1064e74b0

// -[SCFriendsFeedFetcher _subscribeToSyncedFeedUpdateEvents]
// Type encoding: v16@0:8
// Implementation: 0x1004fd954

// -[SCFriendsFeedFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064e75e8

@end
