// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedStoriesResponseProcessor
// Superclass: NSObject
// Address: 0x112b666c8

@interface SCDiscoverFeedStoriesResponseProcessor

// Property: sectionExtensionServices; attributes: T@"SCDiscoverFeedSectionExtensionServices",&,N,V_sectionExtensionServices
// Property: queryCoordinator; attributes: T@"<SCDiscoverFeedQueryCoordinating>",W,N,V_queryCoordinator

// -[SCDiscoverFeedStoriesResponseProcessor initWithPerformer:userSession:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataAccessor:discoverFeedDataMutator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:adConfigProvider:sectionsCoordinator:circumstanceEngine:snapchattersDataFetcher:promotedStoriesLogger:storiesConfigProvider:rtusClientCacheManager:adRenderDataParser:spotlightDisplayOrdererFactory:contentObjectResolver:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x1079a9af4

// -[SCDiscoverFeedStoriesResponseProcessor handleStoriesBatchResponse:existingSections:prependExistingStoryDedupeFps:query:updatingBlock:completion:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x1079a9f3c

// -[SCDiscoverFeedStoriesResponseProcessor handleStoriesResponse:query:updatingBlock:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1079aa290

// -[SCDiscoverFeedStoriesResponseProcessor handleStoryLookupResponse:existingSections:query:stories:updatingBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1079aa780

// -[SCDiscoverFeedStoriesResponseProcessor preprocessAndConvertInterstitialStoryCards:requestID:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1079aaaf0

// -[SCDiscoverFeedStoriesResponseProcessor _handledStoryLookupResponse:existingSections:query:feedType:stories:updatingBlock:]
// Type encoding: v60@0:8@16@24@32i40@44@?52
// Implementation: 0x1079ab124

// -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesResponse:responseTimestamp:watchedStatesByEditionId:snapchatterByUserId:query:updatingBlock:completion:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x1079ab1f0

// -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesResponse:responseTimestamp:watchedStatesByEditionId:snapchatterByUserId:query:interactionHistoryArray:updatingBlock:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x1079ab6a8

// -[SCDiscoverFeedStoriesResponseProcessor _handledStoriesResponse:feedType:isScrollQuery:stories:completion:]
// Type encoding: v48@0:8@16i24B28@32@?40
// Implementation: 0x1079abdd0

// -[SCDiscoverFeedStoriesResponseProcessor _updateSectionAfterPaginationForFeedType:newStoryIdentifiers:streamToken:frontierToken:hasMoreStories:]
// Type encoding: v48@0:8i16@20@28@36B44
// Implementation: 0x1079ac024

// -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesBatchResponse:responseTimestamp:existingSections:prependExistingStoryDedupeFps:watchedStatesByEditionId:query:updatingBlock:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x1079ac310

// -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesBatchResponse:responseTimestamp:existingSections:prependExistingStoryDedupeFps:watchedStatesByEditionId:query:interactionHistoryArray:updatingBlock:completion:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@?72@?80
// Implementation: 0x1079ac820

// -[SCDiscoverFeedStoriesResponseProcessor _handleStoriesBatchResponse:responseTimestamp:existingSections:prependExistingStoryDedupeFps:watchedStatesByEditionId:snapchatterByUserId:query:interactionHistoryArray:updatingBlock:completion:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64@72@?80@?88
// Implementation: 0x1079acc04

// -[SCDiscoverFeedStoriesResponseProcessor _handleAppliedStoriesBatchResponseWithQuery:sections:feedTypes:updatingBlock:completion:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1079ad38c

// -[SCDiscoverFeedStoriesResponseProcessor handleFeedCardResponse:existingSections:prependExistingStoryDedupeFps:query:updatingBlock:completion:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x1079ad610

// -[SCDiscoverFeedStoriesResponseProcessor renderSections:query:updatingBlock:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1079ad854

// -[SCDiscoverFeedStoriesResponseProcessor _renderSections:query:updatingBlock:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1079ada38

// -[SCDiscoverFeedStoriesResponseProcessor _purgeRTUSEventsWithQuery:rtusResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079ae128

// -[SCDiscoverFeedStoriesResponseProcessor _updateDisplayOrdererWithResponseStories:feedType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1079ae210

// -[SCDiscoverFeedStoriesResponseProcessor sectionExtensionServices]
// Type encoding: @16@0:8
// Implementation: 0x1079ae2ac

// -[SCDiscoverFeedStoriesResponseProcessor setSectionExtensionServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079ae2b4

// -[SCDiscoverFeedStoriesResponseProcessor queryCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x1079ae2e4

// -[SCDiscoverFeedStoriesResponseProcessor setQueryCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079ae2fc

// -[SCDiscoverFeedStoriesResponseProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079ae308

@end
