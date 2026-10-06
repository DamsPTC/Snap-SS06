// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatDisplayReadyLogger
// Superclass: NSObject
// Address: 0x112a6ba48

@interface SCChatDisplayReadyLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatDisplayReadyLogger initWithCurrentPageObservable:conversationUpdaterEventPublisher:messagingExperimentService:userTrackedLogger:performerProvider:grapheneCounters:grapheneTimers:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1057d8f98

// -[SCChatDisplayReadyLogger beginLoggingFlowForChatIdentifier:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1057d91d0

// -[SCChatDisplayReadyLogger setIsViewControlledCached:]
// Type encoding: v20@0:8B16
// Implementation: 0x1057d9284

// -[SCChatDisplayReadyLogger recordChatDisplayReadyStep:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057d92f0

// -[SCChatDisplayReadyLogger completeFlowWithFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x1057d936c

// -[SCChatDisplayReadyLogger onConversationEnteredWithConversationId:chatIdentifier:isGroup:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1057d93e8

// -[SCChatDisplayReadyLogger onConversationResumedWithConversationId:chatIdentifier:isGroup:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1057d94c4

// -[SCChatDisplayReadyLogger onConversationExitedWithConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d95ac

// -[SCChatDisplayReadyLogger recordMessagesBelowTheFold:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d9654

// -[SCChatDisplayReadyLogger recordConversationMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d96f0

// -[SCChatDisplayReadyLogger recordNumberOfMessagesFetched:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057d978c

// -[SCChatDisplayReadyLogger _onConversationEnteredWithConversationId:chatIdentifier:isGroup:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1057d97f0

// -[SCChatDisplayReadyLogger _setIsViewControllerCached:]
// Type encoding: v20@0:8B16
// Implementation: 0x1057d9868

// -[SCChatDisplayReadyLogger _onConversationResumedWithConversationId:chatIdentifier:isGroup:stepTime:]
// Type encoding: v44@0:8@16@24B32d36
// Implementation: 0x1057d9870

// -[SCChatDisplayReadyLogger _onConversationExitedWithConversationId:stepTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1057d98d0

// -[SCChatDisplayReadyLogger _subscribeToConversationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1057d9914

// -[SCChatDisplayReadyLogger _onConversationUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d9be4

// -[SCChatDisplayReadyLogger _onConversationRemoved:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d9c28

// -[SCChatDisplayReadyLogger _subscribeToCurrentPageObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d9c6c

// -[SCChatDisplayReadyLogger _onEndPageViewWithNextPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057d9e90

// -[SCChatDisplayReadyLogger _beginChatDisplayReadyLoggingFlowWithStartTime:chatIdentifier:source:]
// Type encoding: v40@0:8d16@24q32
// Implementation: 0x1057d9f10

// -[SCChatDisplayReadyLogger _startNewFlowWithChatIdentifier:conversationId:source:startTime:]
// Type encoding: v48@0:8@16@24q32d40
// Implementation: 0x1057d9f98

// -[SCChatDisplayReadyLogger _recordChatDisplayReadyStep:stepTime:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x1057da078

// -[SCChatDisplayReadyLogger _endTimestampOfMostRecentSerialStep]
// Type encoding: d16@0:8
// Implementation: 0x1057da1f8

// -[SCChatDisplayReadyLogger _recordMessagesBelowTheFold:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057da374

// -[SCChatDisplayReadyLogger _recordConversationMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057da3a4

// -[SCChatDisplayReadyLogger _recordNumberOfMessagesFetched:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057da3d4

// -[SCChatDisplayReadyLogger _completeFlowWithFailureReason:endTime:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x1057da3dc

// -[SCChatDisplayReadyLogger _logBlizzardMetricWithEndTimeIfNecessary:]
// Type encoding: v24@0:8d16
// Implementation: 0x1057da3e4

// -[SCChatDisplayReadyLogger _logBlizzardMetricWithEndTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1057da41c

// -[SCChatDisplayReadyLogger _logGrapheneMetricsWithChatEntryLatency:conversationFetchLatency:conversationDataFetchLatency:viewModelGenerationLatency:initialRenderLatency:keyboardReadyLatency:wallpaperLoadLatency:totalLatency:]
// Type encoding: v80@0:8q16q24q32q40q48q56q64q72
// Implementation: 0x1057da944

// -[SCChatDisplayReadyLogger _reset]
// Type encoding: v16@0:8
// Implementation: 0x1057daba4

// -[SCChatDisplayReadyLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057dac70

@end
