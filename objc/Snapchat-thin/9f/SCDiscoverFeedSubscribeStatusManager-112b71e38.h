// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedSubscribeStatusManager
// Superclass: NSObject
// Address: 0x112b71e38

@interface SCDiscoverFeedSubscribeStatusManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedSubscribeStatusManager addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b23fd8

// -[SCDiscoverFeedSubscribeStatusManager removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b23fe0

// -[SCDiscoverFeedSubscribeStatusManager initWithDiscoverFeedDataFetcher:discoverFeedDataMutator:interactionHistoryManager:storiesGrapheneMetricsEmitter:sectionKey:pageType:snapchattersDataMutator:snapchattersDataFetcher:snapchattersDataTracker:creatorSettingsMutator:snapTokenProvider:circumstanceEngine:]
// Type encoding: @112@0:8@16@24@32@40@48q56@64@72@80@88@96@104
// Implementation: 0x107b23fe8

// -[SCDiscoverFeedSubscribeStatusManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107b24390

// -[SCDiscoverFeedSubscribeStatusManager initializeStorySubscribeState:subscribeState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107b243f4

// -[SCDiscoverFeedSubscribeStatusManager initializeStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b244e4

// -[SCDiscoverFeedSubscribeStatusManager subscribeStateForStoryDedupeFp:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x107b245f0

// -[SCDiscoverFeedSubscribeStatusManager handleSubscribeStoryDedupeFp:snapchatter:currentSubscribeState:]
// Type encoding: v40@0:8Q16@24Q32
// Implementation: 0x107b24728

// -[SCDiscoverFeedSubscribeStatusManager _initializeStorySubscribeState:subscribeState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107b24850

// -[SCDiscoverFeedSubscribeStatusManager _initializeStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b248dc

// -[SCDiscoverFeedSubscribeStatusManager _subscribeStateForStoryDedupeFp:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x107b24a98

// -[SCDiscoverFeedSubscribeStatusManager _updateStoryInPrivateQueueWithDedupeFp:subscribeState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107b24b64

// -[SCDiscoverFeedSubscribeStatusManager _updateStoryDedupeFp:subscribeState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107b24c54

// -[SCDiscoverFeedSubscribeStatusManager _storyWithDedupeFp:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107b25090

// -[SCDiscoverFeedSubscribeStatusManager _handleChangeInSubscribeStatusForStory:isSubscribed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b25118

// -[SCDiscoverFeedSubscribeStatusManager _handleSubscribeStoryDedupeFp:snapchatter:currentSubscribeState:]
// Type encoding: v40@0:8Q16@24Q32
// Implementation: 0x107b25724

// -[SCDiscoverFeedSubscribeStatusManager _sendSubscribeRequestWithStoryKey:story:storyDedupeFp:shouldSubscribe:]
// Type encoding: v44@0:8@16@24Q32B40
// Implementation: 0x107b25c54

// -[SCDiscoverFeedSubscribeStatusManager _updateShouldSubscribe:story:storyKey:storyDedupeFp:accessToken:]
// Type encoding: v52@0:8B16@20@28Q36@44
// Implementation: 0x107b261bc

// -[SCDiscoverFeedSubscribeStatusManager _handleSubscribeResponseDidSubscribe:story:storyDedupeFp:success:]
// Type encoding: v40@0:8B16@20Q28B36
// Implementation: 0x107b263f8

// -[SCDiscoverFeedSubscribeStatusManager _logSubscribeResponse:error:request:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b264d8

// -[SCDiscoverFeedSubscribeStatusManager didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b26564

// -[SCDiscoverFeedSubscribeStatusManager didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107b26568

// -[SCDiscoverFeedSubscribeStatusManager _updateFriendStatusIfNecessary:success:snapchatter:error:]
// Type encoding: v44@0:8Q16B24@28@36
// Implementation: 0x107b267a0

// -[SCDiscoverFeedSubscribeStatusManager _rehydrateFriendInfoAndUnsubscribeForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b26900

// -[SCDiscoverFeedSubscribeStatusManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b26b1c

// +[SCDiscoverFeedSubscribeStatusManager announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107b23fcc

@end
