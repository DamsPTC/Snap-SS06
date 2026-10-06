// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGenericStoryQueryCoordinator
// Superclass: NSObject
// Address: 0x112b07588

@interface SCGenericStoryQueryCoordinator

// Property: sectionExtensionServices; attributes: T@"SCDiscoverFeedSectionExtensionServices",&,N,V_sectionExtensionServices
// Property: delegate; attributes: T@"<SCDiscoverFeedQueryCoordinatingDelegate>",W,N,V_delegate
// Property: isLoading; attributes: TB,R,N
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGenericStoryQueryCoordinator initWithUserSession:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersDataFetcher:remoteSnapchattersDataFetcher:readReceiptCoordinator:sectionsCoordinator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:networkRequester:grapheneRegistry:adConfigProvider:promotedStoriesLogger:creatorSettingsDataFetcher:audioSession:storiesConfigProvider:networkConnectivityMonitor:rtusClientCacheManager:adRenderDataParser:contentObjectResolver:locationProvider:birthdayProvider:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x10694aca4

// -[SCGenericStoryQueryCoordinator initWithPerformer:storiesRequestSender:storiesResponseProcessor:circumstanceEngine:discoverFeedDataFetcher:remoteSnapchattersDataFetcher:sectionsCoordinator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:adConfigProvider:creatorSettingsDataFetcher:adRenderDataParser:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x10694b100

// -[SCGenericStoryQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x10694b3c4

// -[SCGenericStoryQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10694b3cc

// -[SCGenericStoryQueryCoordinator _fetchStoryLookupResponseFromMixerForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10694b464

// -[SCGenericStoryQueryCoordinator _processStoryLookupResponseIntoSCDiscoverFeedStory:response:error:query:updatingBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10694b5f4

// -[SCGenericStoryQueryCoordinator _processSCDiscoverFeedStoryIntoLocalCache:error:query:updatingBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10694b830

// -[SCGenericStoryQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x10694b94c

// -[SCGenericStoryQueryCoordinator shouldBeginLoadingWithSource:]
// Type encoding: B24@0:8@16
// Implementation: 0x10694b978

// -[SCGenericStoryQueryCoordinator beginLoading]
// Type encoding: v16@0:8
// Implementation: 0x10694b990

// -[SCGenericStoryQueryCoordinator endLoading]
// Type encoding: v16@0:8
// Implementation: 0x10694b9cc

// -[SCGenericStoryQueryCoordinator sectionExtensionServices]
// Type encoding: @16@0:8
// Implementation: 0x10694b9dc

// -[SCGenericStoryQueryCoordinator setSectionExtensionServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694b9e4

// -[SCGenericStoryQueryCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x10694ba14

// -[SCGenericStoryQueryCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694ba2c

// -[SCGenericStoryQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x10694ba38

// -[SCGenericStoryQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694ba40

// -[SCGenericStoryQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10694ba48

@end
