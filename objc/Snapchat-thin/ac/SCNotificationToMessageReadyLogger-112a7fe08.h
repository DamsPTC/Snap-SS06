// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationToMessageReadyLogger
// Superclass: NSObject
// Address: 0x112a7fe08

@interface SCNotificationToMessageReadyLogger


// -[SCNotificationToMessageReadyLogger initWithFeedLifecycleObservable:conversationLifecycleObservable:currentPageObservable:conversationDataFetcher:travelModeSignalProvider:userBlizzard:grapheneCounters:grapheneTimers:messagingExperimentService:performer:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10098aed4

// -[SCNotificationToMessageReadyLogger _subscribeToFeedLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10098b0fc

// -[SCNotificationToMessageReadyLogger _subscribeToConversationLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10098b220

// -[SCNotificationToMessageReadyLogger _subscribeToCurrentPageEvents:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059aea10

// -[SCNotificationToMessageReadyLogger startNotificationToMessageReadyLoggingFlow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059aecc4

// -[SCNotificationToMessageReadyLogger recordNotificationToMessageReadyAppStartupType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10098b344

// -[SCNotificationToMessageReadyLogger recordNotificationToMessageReadyStep:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059aed90

// -[SCNotificationToMessageReadyLogger recordNotificationToMessageReadySyncSubstepStepMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059aee44

// -[SCNotificationToMessageReadyLogger notificationToMessageReadyLifecycleEvents]
// Type encoding: @16@0:8
// Implementation: 0x1059aeee0

// -[SCNotificationToMessageReadyLogger _startNotificationToMessageReadyLoggingFlow:startTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1059aef08

// -[SCNotificationToMessageReadyLogger _timeoutNotificationToMessageReadyFlow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059af1e0

// -[SCNotificationToMessageReadyLogger _recordNotificationToMessageReadyAppStartupType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1009e80f8

// -[SCNotificationToMessageReadyLogger _recordNotificationToMessageReadyStep:stepTime:source:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x1059af264

// -[SCNotificationToMessageReadyLogger _recordNotificationToMessageReadySyncSubstepStepMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059af3cc

// -[SCNotificationToMessageReadyLogger _recordCurrentLandedPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059af484

// -[SCNotificationToMessageReadyLogger _processEnterTargetScreenStepAtTime:conversationId:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1059af4d0

// -[SCNotificationToMessageReadyLogger _processSyncStepAtTime:conversationId:messageId:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x1059af5c8

// -[SCNotificationToMessageReadyLogger _processPrefetchStepAtTime:conversationId:messageId:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x1059af6cc

// -[SCNotificationToMessageReadyLogger _fetchMessageForSyncCompletionWithStepTime:conversationId:messageId:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x1059af774

// -[SCNotificationToMessageReadyLogger _handleSyncFetchedMessage:notificationId:stepTime:conversationId:messageId:]
// Type encoding: v56@0:8@16@24d32@40@48
// Implementation: 0x1059af9a4

// -[SCNotificationToMessageReadyLogger _processMessageReadyStepAtTime:conversationId:messageId:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x1059afbfc

// -[SCNotificationToMessageReadyLogger _processRenderedViewModels]
// Type encoding: v16@0:8
// Implementation: 0x1059afcbc

// -[SCNotificationToMessageReadyLogger _processCellAppeared:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059afcc8

// -[SCNotificationToMessageReadyLogger _shouldProcessStepLatencyForConversationId:messageId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1059afcf8

// -[SCNotificationToMessageReadyLogger _isFlowInProgress]
// Type encoding: B16@0:8
// Implementation: 0x1059afddc

// -[SCNotificationToMessageReadyLogger _isFlowForSnap]
// Type encoding: B16@0:8
// Implementation: 0x1059afe00

// -[SCNotificationToMessageReadyLogger _hasEnteredTargetScreen]
// Type encoding: B16@0:8
// Implementation: 0x1059afe44

// -[SCNotificationToMessageReadyLogger _dataSaverMode]
// Type encoding: B16@0:8
// Implementation: 0x1059afe88

// -[SCNotificationToMessageReadyLogger _entireFlowStartTime]
// Type encoding: d16@0:8
// Implementation: 0x1059afea4

// -[SCNotificationToMessageReadyLogger _completionTimeWithDataSaverMode:]
// Type encoding: d20@0:8B16
// Implementation: 0x1059aff34

// -[SCNotificationToMessageReadyLogger _completeFlowWithTimedOut:dataSaverMode:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1059affd8

// -[SCNotificationToMessageReadyLogger _completeFlowWithTimedOut:dataSaverMode:messageType:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1059b0298

// -[SCNotificationToMessageReadyLogger _computeResultForFlowWithTimedOut:]
// Type encoding: @20@0:8B16
// Implementation: 0x1059b04e4

// -[SCNotificationToMessageReadyLogger _initializeBlizzardMetricWithResult:appStartupType:notifType:messageType:dataSaverMode:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x1059b05a8

// -[SCNotificationToMessageReadyLogger _logNotificationCompleteWithResult:appStartupType:notifType:messageType:dataSaverMode:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1059b07b8

// -[SCNotificationToMessageReadyLogger _logNotificationTapToCompleteWithResult:appStartupType:notifType:messageType:dataSaverMode:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1059b08b4

// -[SCNotificationToMessageReadyLogger _logStartupLatenciesWithResult:appStartupType:notifType:messageType:dataSaverMode:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1059b09e4

// -[SCNotificationToMessageReadyLogger _logStepLatenciesWithResult:appStartupType:notifType:messageType:blizzardMetric:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1059b0bf0

// -[SCNotificationToMessageReadyLogger _logSyncFeedFailureIfNecessary:appStartupType:notifType:messageType:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1059b1298

// -[SCNotificationToMessageReadyLogger launchTimeInSecs]
// Type encoding: d16@0:8
// Implementation: 0x1059b1364

// -[SCNotificationToMessageReadyLogger appStartupTimeInSecs]
// Type encoding: d16@0:8
// Implementation: 0x1059b1388

// -[SCNotificationToMessageReadyLogger earliestStartupTimeInSecs]
// Type encoding: d16@0:8
// Implementation: 0x1059b13ac

// -[SCNotificationToMessageReadyLogger logMessageInitializedWithConversationId:analyticsMessageId:timestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1059b1430

// -[SCNotificationToMessageReadyLogger logMessageLoadStartedWithConversationId:analyticsMessageId:timestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1059b1598

// -[SCNotificationToMessageReadyLogger logMessageLoadEndedWithConversationId:analyticsMessageId:timestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1059b1700

// -[SCNotificationToMessageReadyLogger logMessageLoadFailedWithConversationId:analyticsMessageId:timestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1059b1868

// -[SCNotificationToMessageReadyLogger logMessageMediaDisplayedWithConversationId:analyticsMessageId:mediaIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059b186c

// -[SCNotificationToMessageReadyLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059b1870

@end
