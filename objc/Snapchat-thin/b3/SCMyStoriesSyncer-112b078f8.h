// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyStoriesSyncer
// Superclass: NSObject
// Address: 0x112b078f8

@interface SCMyStoriesSyncer


// -[SCMyStoriesSyncer initWithDocObjectContext:performer:myStoriesStore:snapchatterFetcher:circumstanceEngine:snapPostCoordinator:grapheneMetricsEmitter:ghostToMyStoriesMetricsEmitter:postingLogger:currentUserId:usernameProvider:debounceInterval:snapProProfileIdProvider:customStoriesDataFetcher:adConfigProvider:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96d104@112@120@128
// Implementation: 0x106969db4

// -[SCMyStoriesSyncer attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:]
// Type encoding: v48@0:8q16@?24@?32@40
// Implementation: 0x10696a258

// -[SCMyStoriesSyncer _attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:]
// Type encoding: v48@0:8q16@?24@?32@40
// Implementation: 0x10696a584

// -[SCMyStoriesSyncer _attemptToSyncWithCustomStoriesMetadata:triggerType:externalCallback:callback:callbackQueue:]
// Type encoding: v56@0:8@16q24@?32@?40@48
// Implementation: 0x10696a808

// -[SCMyStoriesSyncer _logIssuingMyStoriesSyncRequestWithTriggerType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10696adf4

// -[SCMyStoriesSyncer fetchDeltaInfoWithCompletion:completionQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10696ae34

// -[SCMyStoriesSyncer receivedBatchStoriesResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10696aecc

// -[SCMyStoriesSyncer finishedProcessingResponseWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x10696aed8

// -[SCMyStoriesSyncer handleStoriesResponse:triggerType:extraData:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x10696afd0

// -[SCMyStoriesSyncer _applyStoriesResponse:userIdToUsername:customStoryIdToCustomStory:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10696b510

// -[SCMyStoriesSyncer _handleAppliedStoriesResponse:success:confirmedStoryPosts:failedStoryPosts:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x10696b918

// -[SCMyStoriesSyncer _invokeAllCompletionBlocksWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x10696bf18

// -[SCMyStoriesSyncer _fetchUsernamesWithUserIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10696bf5c

// -[SCMyStoriesSyncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10696c33c

@end
