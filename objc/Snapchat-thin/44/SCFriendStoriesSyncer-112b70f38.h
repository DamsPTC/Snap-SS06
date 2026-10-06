// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendStoriesSyncer
// Superclass: NSObject
// Address: 0x112b70f38

@interface SCFriendStoriesSyncer

// Property: lastResponseTime; attributes: T@"NSDate",&,V_lastResponseTime

// -[SCFriendStoriesSyncer initWithDocObjectContext:performer:storiesSnapchatterFetcher:snapchatterPublicInfoFetcher:customStoriesDataSyncer:discoverFeedEventsController:debugInfoDataProvider:grapheneMetricsEmitter:ghostToFriendStoriesMetricsEmitter:debounceInterval:adConfigProvider:interactionHistoryManager:storiesRanker:circumstanceEngine:storiesConfigProvider:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80d88@96@104@112@120@128
// Implementation: 0x107b0f188

// -[SCFriendStoriesSyncer attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:]
// Type encoding: v48@0:8q16@?24@?32@40
// Implementation: 0x107b0f5d0

// -[SCFriendStoriesSyncer _attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:]
// Type encoding: v48@0:8q16@?24@?32@40
// Implementation: 0x107b0f778

// -[SCFriendStoriesSyncer fetchDeltaInfoWithCompletion:completionQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x107b0fa04

// -[SCFriendStoriesSyncer receivedBatchStoriesResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b0fd94

// -[SCFriendStoriesSyncer finishedProcessingResponseWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b0fedc

// -[SCFriendStoriesSyncer handleStoriesResponse:triggerType:extraData:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x107b0ffd4

// -[SCFriendStoriesSyncer _processStoriesResponse:updatedCustomStoryIds:allFriendStoryIds:allCustomStoryIds:allPublicUserStoryIds:friendIdToUsernameMap:userIdToBitmojiAvatarIdMap:userIdToBitmojiAvatarSelfieId:fetchStartTime:triggerType:upateRankedStoryIdsOnly:lastUpdatedSnapTimeStamp:externalCompletion:]
// Type encoding: v116@0:8@16@24@32@40@48@56@64@72d80q88B96d100@?108
// Implementation: 0x107b1054c

// -[SCFriendStoriesSyncer _didFinishProcessResponseWithTriggerType:success:updatedCustomStoryIds:lastUpdatedSnapTimeStamp:predictedSessionDepth:externalCompletion:]
// Type encoding: v60@0:8q16B24@28d36@44@?52
// Implementation: 0x107b10d20

// -[SCFriendStoriesSyncer _handleUpdatedFriendStoriesOnPerformerWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b10e80

// -[SCFriendStoriesSyncer _querySnapchatterUsernamesWithUserIds:userStorySequences:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b10f08

// -[SCFriendStoriesSyncer _logFetchFriendStoriesLatencyWithStartTime:step:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x107b11644

// -[SCFriendStoriesSyncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b116b8

// -[SCFriendStoriesSyncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b116c0

// -[SCFriendStoriesSyncer observeFriendStoriesFetching]
// Type encoding: @16@0:8
// Implementation: 0x107b116c8

// -[SCFriendStoriesSyncer observeFriendStoriesPredictedSessionDepth]
// Type encoding: @16@0:8
// Implementation: 0x107b116f0

// -[SCFriendStoriesSyncer lastResponseTime]
// Type encoding: @16@0:8
// Implementation: 0x107b11718

// -[SCFriendStoriesSyncer setLastResponseTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b11724

// -[SCFriendStoriesSyncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b1172c

@end
