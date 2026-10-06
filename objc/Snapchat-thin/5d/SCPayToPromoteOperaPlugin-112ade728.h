// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPayToPromoteOperaPlugin
// Superclass: NSObject
// Address: 0x112ade728

@interface SCPayToPromoteOperaPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentPayToPromoteStoryIsPlaying; attributes: TB,N,V_currentPayToPromoteStoryIsPlaying

// -[SCPayToPromoteOperaPlugin initWithNetworkRequester:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:collectionPrefetcher:playableViewModelGenerator:grapheneRegistry:discoverFeedDataMutator:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:blizzardLogger:adRenderDataParser:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x106438d0c

// -[SCPayToPromoteOperaPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064390c8

// -[SCPayToPromoteOperaPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1064390d4

// -[SCPayToPromoteOperaPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106439190

// -[SCPayToPromoteOperaPlugin extraPropertiesProvider]
// Type encoding: @16@0:8
// Implementation: 0x10643930c

// -[SCPayToPromoteOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106439310

// -[SCPayToPromoteOperaPlugin fetchDiscoverStoryWithAdResponse:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10643957c

// -[SCPayToPromoteOperaPlugin _didFetchDiscoverStoryMetadataWithStory:error:compositeStoryId:publisherId:startFetchingTimeInSeconds:adResponse:completion:]
// Type encoding: v72@0:8@16@24@32@40d48@56@?64
// Implementation: 0x106439a30

// -[SCPayToPromoteOperaPlugin _didFetchDiscoverStoryMetadataAndMediaWithCompositeStoryId:publisherId:success:adResponse:startFetchingTimeInSeconds:completion:]
// Type encoding: v60@0:8@16@24B32@36d44@?52
// Implementation: 0x106439fdc

// -[SCPayToPromoteOperaPlugin dataStatusForPublisherId:editionId:corpus:]
// Type encoding: Q36@0:8@16@24i32
// Implementation: 0x10643a108

// -[SCPayToPromoteOperaPlugin isDupDiscoverStoryForPublisherId:editionId:corpus:]
// Type encoding: B36@0:8@16@24i32
// Implementation: 0x10643a17c

// -[SCPayToPromoteOperaPlugin insertPromotedPublisherStoryWithPublisherId:editionId:corpus:afterGroup:]
// Type encoding: B44@0:8@16@24i32@36
// Implementation: 0x10643a26c

// -[SCPayToPromoteOperaPlugin _cleanUpAfterExitingOperaSession]
// Type encoding: v16@0:8
// Implementation: 0x10643a568

// -[SCPayToPromoteOperaPlugin _updateLoggingInfoForStory:isPayToPromoteStory:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10643a73c

// -[SCPayToPromoteOperaPlugin insertedAdResponseForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10643a850

// -[SCPayToPromoteOperaPlugin isInsertedGroupWithGroupId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10643a8a4

// -[SCPayToPromoteOperaPlugin _updateFeedTypeForPlayableDataModel:feedType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10643a8dc

// -[SCPayToPromoteOperaPlugin _fetchFeedTypeForPlayableDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10643aa50

// -[SCPayToPromoteOperaPlugin _payToPromoteStoryDiscoverFeedDataStoreFeedType]
// Type encoding: i16@0:8
// Implementation: 0x10643ab8c

// -[SCPayToPromoteOperaPlugin logPayToPromoteRequestError:errorReason:adResponse:storyId:publisherId:startFetchingTimeInSeconds:endFetchingTimeInSeconds:]
// Type encoding: v72@0:8q16@24@32@40@48d56d64
// Implementation: 0x10643aba0

// -[SCPayToPromoteOperaPlugin currentPayToPromoteStoryIsPlaying]
// Type encoding: B16@0:8
// Implementation: 0x10643ad24

// -[SCPayToPromoteOperaPlugin setCurrentPayToPromoteStoryIsPlaying:]
// Type encoding: v20@0:8B16
// Implementation: 0x10643ad2c

// -[SCPayToPromoteOperaPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10643ad34

@end
