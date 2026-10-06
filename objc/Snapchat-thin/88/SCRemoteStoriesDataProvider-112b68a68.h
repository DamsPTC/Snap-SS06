// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRemoteStoriesDataProvider
// Superclass: NSObject
// Address: 0x112b68a68

@interface SCRemoteStoriesDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRemoteStoriesDataProvider initWithStoriesDataCoordinator:friendStoriesPlaybackDataProvider:mixerNetworkRequester:snapReadReceiptCoordinator:grapheneMetricsEmitter:circumstanceEngine:adConfigProvider:networkConnectivityMonitor:locationProvider:storiesConfigProvider:docObjectContext:adRenderDataParser:discoverFeedDataMutator:discoverFeedDataFetcher:contentObjectResolver:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x1079e0a88

// -[SCRemoteStoriesDataProvider addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e0f84

// -[SCRemoteStoriesDataProvider removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e0f8c

// -[SCRemoteStoriesDataProvider handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e0f94

// -[SCRemoteStoriesDataProvider customStoryPlaybackSequenceByPublicationId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e0fa4

// -[SCRemoteStoriesDataProvider userStoryPlaybackSequenceByStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e1028

// -[SCRemoteStoriesDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e1230

// -[SCRemoteStoriesDataProvider topicStoryPlaybackSequenceByTopicStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e1238

// -[SCRemoteStoriesDataProvider singleSnapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e1240

// -[SCRemoteStoriesDataProvider mapStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e13a0

// -[SCRemoteStoriesDataProvider savedStoryPlaybackSequenceByStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e13a8

// -[SCRemoteStoriesDataProvider storiesPlaybackMetadataForStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079e13b0

// -[SCRemoteStoriesDataProvider storyAvailability]
// Type encoding: Q16@0:8
// Implementation: 0x1079e154c

// -[SCRemoteStoriesDataProvider triggerPaginationByCompositeId:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079e158c

// -[SCRemoteStoriesDataProvider _playbackMetadataMapWithAllStoryIds:existingMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e1590

// -[SCRemoteStoriesDataProvider _playbackMetadataMapOnQueueWithAllStoryIds:existingMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079e1748

// -[SCRemoteStoriesDataProvider fetchStorySummaryInfoWithUserId:ignoreBlockerStories:completionQueue:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1079e196c

// -[SCRemoteStoriesDataProvider fetchPublicStoryWithUserId:ignoreBlockerStories:completionQueue:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1079e1ae0

// -[SCRemoteStoriesDataProvider fetchPublicStoriesWithUserIds:ignoreBlockerStories:completionQueue:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1079e1c54

// -[SCRemoteStoriesDataProvider fetchStoryRemotelyWithUserId:ignoreBlockerStories:source:completionQueue:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x1079e1dc8

// -[SCRemoteStoriesDataProvider fetchStoriesWithStoryIds:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1079e1f54

// -[SCRemoteStoriesDataProvider fetchAndStoreStoryFromRemoteWithUserId:ignoreBlockerStories:source:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1079e205c

// -[SCRemoteStoriesDataProvider _fetchStoriesWithProgress:isDeepLinkPublicStory:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1079e2188

// -[SCRemoteStoriesDataProvider _resolveStoriesLocallyWithProgress:summaryInfoMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079e2458

// -[SCRemoteStoriesDataProvider _fetchUnresolvedStoriesRemotelyWithProgress:isDeepLinkPublicStory:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1079e2640

// -[SCRemoteStoriesDataProvider _resolveFetchedStories:progress:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079e29b4

// -[SCRemoteStoriesDataProvider _resolveFetchedStories:viewStateMap:progress:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1079e2bdc

// -[SCRemoteStoriesDataProvider _resolveFetchedStory:viewStateMap:progress:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1079e2d14

// -[SCRemoteStoriesDataProvider _publicUserPlaybackSequenceWithRemoteStory:outgoingSequence:viewStateMap:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1079e353c

// -[SCRemoteStoriesDataProvider _singleSnapPlaybackSequenceWithRemoteStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e35d4

// -[SCRemoteStoriesDataProvider bundleStoryPlaybackSequenceByBundleStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079e36c0

// -[SCRemoteStoriesDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079e36c8

// +[SCRemoteStoriesDataProvider dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079e0f98

@end
