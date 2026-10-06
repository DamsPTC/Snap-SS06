// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedUpNextV2NetworkRequester
// Superclass: NSObject
// Address: 0x112b0f698

@interface SCDiscoverFeedUpNextV2NetworkRequester

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedUpNextV2NetworkRequester initWithUserSession:pageType:snapTokenProvider:mixerEndpointManager:storiesMetricServices:storiesConfigProvider:networkConnectivityMonitor:requestMutators:bitmojiAvatarProvider:circumstanceEngine:adConfigProvider:bitmojiFriendAvatarProvider:snapchattersDataFetcher:performer:dataBuffer:interactionHistoryModifier:readReceiptCoordinator:rtusClientCacheManager:adRenderDataParser:]
// Type encoding: @168@0:8@16q24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x106a92fc0

// -[SCDiscoverFeedUpNextV2NetworkRequester sendUpNextRequestWithRequestMutators:pageSessionId:triggeringStoryId:defaultPlaylistStories:upNextTriggeringAction:upNextTriggeringSource:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:]
// Type encoding: v88@0:8@16@24@32@40i48i52Q56@?64@72@?80
// Implementation: 0x106a934a0

// -[SCDiscoverFeedUpNextV2NetworkRequester _createAndSendRequestWithAdditionalRequestMutators:snapToken:upNextTriggeringAction:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:requestStartTime:]
// Type encoding: v76@0:8@16@24i32Q36@?44@52@?60d68
// Implementation: 0x106a93854

// -[SCDiscoverFeedUpNextV2NetworkRequester _sendRetriableUpNextV2RequestWithStoriesRequest:snapToken:baseUrl:path:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:upNextTriggeringAction:interactionHistories:requestStartTime:]
// Type encoding: v100@0:8@16@24@32@40Q48@?56@64@?72i80@84d92
// Implementation: 0x106a93f2c

// -[SCDiscoverFeedUpNextV2NetworkRequester _sendUpNextV2RequestWithStoriesRequest:snapToken:baseUrl:path:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:retryTimer:upNextTriggeringAction:interactionHistories:requestStartTime:]
// Type encoding: v108@0:8@16@24@32@40Q48@?56@64@?72@80i88@92d100
// Implementation: 0x106a9428c

// -[SCDiscoverFeedUpNextV2NetworkRequester _parseStoriesResponse:data:error:responseStoryMutatingBlock:completionPerformer:completionBlock:retryTimer:upNextTriggeringAction:interactionHistories:response:requestStartTime:sequence:]
// Type encoding: v108@0:8@16@24@32@?40@48@?56@64i72@76@84d92Q100
// Implementation: 0x106a9479c

// -[SCDiscoverFeedUpNextV2NetworkRequester _handleStoriesResponse:snapchatterByUserId:responseStoryMutatingBlock:completionPerformer:completionBlock:upNextTriggeringAction:interactionHistories:requestStartTime:sequence:]
// Type encoding: v84@0:8@16@24@?32@40@?48i56@60d68Q76
// Implementation: 0x106a94cf0

// -[SCDiscoverFeedUpNextV2NetworkRequester _handleStoriesResponse:snapchatterByUserId:responseStoryMutatingBlock:completionPerformer:completionBlock:upNextTriggeringAction:interactionHistories:watchStatesByEditionId:requestStartTime:sequence:]
// Type encoding: v92@0:8@16@24@?32@40@?48i56@60@68d76Q84
// Implementation: 0x106a95030

// -[SCDiscoverFeedUpNextV2NetworkRequester _parseStoriesResponse:snapchatterByUserId:upNextTriggeringAction:watchStatesByEditionId:expectedFeedType:responseStoryMutatingBlock:requestStartTime:sequence:]
// Type encoding: @72@0:8@16@24i32@36i44@?48d56Q64
// Implementation: 0x106a95230

// -[SCDiscoverFeedUpNextV2NetworkRequester _processStories:interactionHistories:debugHtml:completionPerformer:completionBlock:requestStartTime:sequence:]
// Type encoding: v72@0:8@16@24@32@40@?48d56Q64
// Implementation: 0x106a95730

// -[SCDiscoverFeedUpNextV2NetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a959a4

@end
