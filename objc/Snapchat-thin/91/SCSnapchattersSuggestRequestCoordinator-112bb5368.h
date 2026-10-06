// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersSuggestRequestCoordinator
// Superclass: NSObject
// Address: 0x112bb5368

@interface SCSnapchattersSuggestRequestCoordinator

// Property: snapchattersLoggingDataObservable; attributes: T@"SCObservable",?,R,&,N
// Property: fetchSuggestionLoggingDataObservable; attributes: T@"SCObservable",?,R,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchattersSuggestRequestCoordinator initWithDocObjectContext:docObjectPerformer:servicePerformer:suggestService:suggestedSnapchatterFetcher:currentDateProvider:preferences:grapheneLogger:pinnedUserIds:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1009766a4

// -[SCSnapchattersSuggestRequestCoordinator fetchSuggestionLoggingDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10097cb4c

// -[SCSnapchattersSuggestRequestCoordinator fetchSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd3474

// -[SCSnapchattersSuggestRequestCoordinator hideSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd35f4

// -[SCSnapchattersSuggestRequestCoordinator hideAllSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd35f8

// -[SCSnapchattersSuggestRequestCoordinator viewSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd3760

// -[SCSnapchattersSuggestRequestCoordinator hideSuggestedSnapchatter:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd38c8

// -[SCSnapchattersSuggestRequestCoordinator _fetchSuggestionWithSuggestRequest:fetchStartTime:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16d24@32@?40
// Implementation: 0x108bd3a34

// -[SCSnapchattersSuggestRequestCoordinator _processFetchSuggestionWithSuggestedFriendResponse:isPrefetchForNotification:triggerSourceType:triggerType:startTime:error:fetchRequestId:completionQueue:completionHandler:]
// Type encoding: v84@0:8@16B24q28q36d44@52@60@68@?76
// Implementation: 0x108bd3d04

// -[SCSnapchattersSuggestRequestCoordinator _hideSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd44cc

// -[SCSnapchattersSuggestRequestCoordinator _processHideSuggestedSnapchatter:error:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108bd460c

// -[SCSnapchattersSuggestRequestCoordinator _hideAllSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd47c8

// -[SCSnapchattersSuggestRequestCoordinator _viewSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd49bc

// -[SCSnapchattersSuggestRequestCoordinator _logSuggestionSyncGapPeriod]
// Type encoding: v16@0:8
// Implementation: 0x108bd4bf8

// -[SCSnapchattersSuggestRequestCoordinator _didReceiveSuggestionMap:previousSuggestionMap:deltaSyncMetadata:purgedBeforeImpressedCount:triggerSourceType:triggerType:startTime:error:]
// Type encoding: v80@0:8@16@24@32q40q48q56d64@72
// Implementation: 0x108bd4ca4

// -[SCSnapchattersSuggestRequestCoordinator _updatePinnedUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a18b8c

// -[SCSnapchattersSuggestRequestCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bd5148

@end
