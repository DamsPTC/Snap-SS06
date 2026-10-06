// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapProShareDataFetcher
// Superclass: NSObject
// Address: 0x112ab7128

@interface SCSnapProShareDataFetcher

// Property: hasLiveStory; attributes: TB,R
// Property: story; attributes: T@"SCDiscoverFeedStory",R
// Property: snapProUserName; attributes: T@"NSString",R
// Property: snapProHostUserId; attributes: T@"NSString",R
// Property: initialSnapClientId; attributes: T@"NSString",R
// Property: storyThumbnailUrlObservable; attributes: T@"SCObservable",R
// Property: storyShareDataListener; attributes: T@"<SCSnapProStoryShareDataListening>",W,N,V_storyShareDataListener
// Property: storySharePlaybackPresenterDelegate; attributes: T@"<SCStorySharePlaybackScopeDelegate>",W,N,V_storySharePlaybackPresenterDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapProShareDataFetcher initWithSnapProId:snapId:snapProProfilesProvider:storiesNetworkRequester:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:notificationPool:networkConnectivityMonitor:locationProvider:forwardabilityListener:mediaCoordinator:renderForQuotedMessage:adRenderDataParser:remoteSnapchattersDataFetcher:storiesConfigProvider:isUserQuoted:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104B112@116@124@132B140
// Implementation: 0x105fd29a4

// -[SCSnapProShareDataFetcher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105fd2d64

// -[SCSnapProShareDataFetcher hasLiveStory]
// Type encoding: B16@0:8
// Implementation: 0x105fd2dac

// -[SCSnapProShareDataFetcher snapProUserName]
// Type encoding: @16@0:8
// Implementation: 0x105fd2dfc

// -[SCSnapProShareDataFetcher storyThumbnailUrlObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fd2e74

// -[SCSnapProShareDataFetcher story]
// Type encoding: @16@0:8
// Implementation: 0x105fd2e9c

// -[SCSnapProShareDataFetcher initialSnapClientId]
// Type encoding: @16@0:8
// Implementation: 0x105fd2ed8

// -[SCSnapProShareDataFetcher snapProHostUserId]
// Type encoding: @16@0:8
// Implementation: 0x105fd2f30

// -[SCSnapProShareDataFetcher subscribe]
// Type encoding: v16@0:8
// Implementation: 0x105fd2fa8

// -[SCSnapProShareDataFetcher _updateWithSnapProProfileHandler:uiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x105fd3170

// -[SCSnapProShareDataFetcher _handleResolveResultWithStorySnap:uiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x105fd35f0

// -[SCSnapProShareDataFetcher _startStoryCardResolveWithShareTileRenderBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105fd37e0

// -[SCSnapProShareDataFetcher _identifyOwnershipWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105fd3918

// -[SCSnapProShareDataFetcher _awaitStoryCardOnHandler:isOwnStory:shareTileRenderBlock:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x105fd3afc

// -[SCSnapProShareDataFetcher _refreshAndObserveStoryCardOnHandler:shareTileRenderBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105fd3bac

// -[SCSnapProShareDataFetcher _readSnapFromStoryHandler:shareTileRenderBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105fd3d7c

// -[SCSnapProShareDataFetcher _scheduleUnavailableFallbackForGeneration:shareTileRenderBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x105fd401c

// -[SCSnapProShareDataFetcher _pollStoryCardUntilSnapIndexedForGeneration:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105fd4168

// -[SCSnapProShareDataFetcher _finishStoryCardResolve]
// Type encoding: v16@0:8
// Implementation: 0x105fd42a4

// -[SCSnapProShareDataFetcher _hasLiveStory]
// Type encoding: B16@0:8
// Implementation: 0x105fd42e4

// -[SCSnapProShareDataFetcher _fetchSnapchatterAndStoryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105fd435c

// -[SCSnapProShareDataFetcher _fetchStoryWithCompletion:snapchatterByUserId:compositeStoryId:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x105fd4660

// -[SCSnapProShareDataFetcher _fetchStoryViaStoryLookupWithCompletion:snapchatterByUserId:compositeStoryId:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x105fd4704

// -[SCSnapProShareDataFetcher _fetchStoryViaBatchStoryLookupWithCompletion:snapchatterByUserId:compositeStoryId:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x105fd49d4

// -[SCSnapProShareDataFetcher _updateUiWithUiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:storySnap:]
// Type encoding: v48@0:8@?16@?24@?32@40
// Implementation: 0x105fd4db4

// -[SCSnapProShareDataFetcher _storyFromStoryLookupResponse:responseTimestamp:snapchatterByUserId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fd5274

// -[SCSnapProShareDataFetcher _storyFromBatchStoryLookupResponse:responseTimestamp:snapchatterByUserId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fd53b8

// -[SCSnapProShareDataFetcher _findSnapInStory:completion:]
// Type encoding: B32@0:8@16@?24
// Implementation: 0x105fd5500

// -[SCSnapProShareDataFetcher _prefetchStoryMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd5ae8

// -[SCSnapProShareDataFetcher fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x105fd5bbc

// -[SCSnapProShareDataFetcher shouldOverrideMediaSize]
// Type encoding: B16@0:8
// Implementation: 0x105fd5e28

// -[SCSnapProShareDataFetcher overrideMediaSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105fd5e30

// -[SCSnapProShareDataFetcher storySharePlaybackPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105fd5e44

// -[SCSnapProShareDataFetcher setStorySharePlaybackPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd5e5c

// -[SCSnapProShareDataFetcher storyShareDataListener]
// Type encoding: @16@0:8
// Implementation: 0x105fd5e68

// -[SCSnapProShareDataFetcher setStoryShareDataListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fd5e80

// -[SCSnapProShareDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fd5e8c

@end
