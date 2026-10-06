// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestTask
// Superclass: NSObject
// Address: 0x112c71f68

@interface SCRequestTask

// Property: userSessionScopeIdentifier; attributes: T@"<SCRequestAuthenticator>",W,D,N
// Property: logger; attributes: T@"SCRequestTaskLogger",&,N,V_logger
// Property: numOfRequestAttempts; attributes: TQ,N,V_numOfRequestAttempts
// Property: numOfRequestAttemptsCancelled; attributes: TQ,R,N,V_numOfRequestAttemptsCancelled
// Property: numOfRequestAttemptsPaused; attributes: TQ,N,V_numOfRequestAttemptsPaused
// Property: numHTTPRequestCompleted; attributes: TQ,N,V_numHTTPRequestCompleted
// Property: success; attributes: TB,R,N,V_success
// Property: forcedRetry; attributes: TB,R,N,V_forcedRetry
// Property: isRunning; attributes: TB,N,V_isRunning
// Property: isCompleteTaskExecuted; attributes: TB,N,V_isCompleteTaskExecuted
// Property: nativeHttpRequestKey; attributes: Tq,N,V_nativeHttpRequestKey
// Property: nativeRequest; attributes: T@"SCNNetworkTypesHttpRequestAndInfo",&,N,V_nativeRequest
// Property: cancelTaskInNNMDelegate; attributes: T@"<SCCancelTaskInNNMDelegate>",W,N,V_cancelTaskInNNMDelegate
// Property: taskId; attributes: T@"NSString",R,C,N,V_taskId
// Property: request; attributes: T@"SCRequest",R,N,V_request
// Property: authenticator; attributes: T@"<SCRequestAuthenticator>",R,W,N,V_authenticator
// Property: shouldRetry; attributes: TB,R,N,V_shouldRetry
// Property: cancelReason; attributes: Tq,N,V_cancelReason
// Property: nonFatalReporter; attributes: T@"<SCNetworkNonFatalReporting>",W,N,V_nonFatalReporter

// -[SCRequestTask userSessionScopeIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10b26e658

// -[SCRequestTask setUserSessionScopeIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b43df4

// -[SCRequestTask isEqualToSessionScopeWithAuthenticator:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b26e664

// -[SCRequestTask isDownloadMediaRequestTaskWithTrackingId]
// Type encoding: B16@0:8
// Implementation: 0x10b26e580

// -[SCRequestTask initWithRequest:authenticator:traceFile:]
// Type encoding: @40@0:8@16@24^{SCNetworkTraceFileStruct=}32
// Implementation: 0x1005a0a54

// -[SCRequestTask runWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b26e7d4

// -[SCRequestTask _onTaskComplete:response:data:error:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10b26ea30

// -[SCRequestTask cancelInNNM]
// Type encoding: v16@0:8
// Implementation: 0x10b26ede4

// -[SCRequestTask cancelInNativeWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26ee18

// -[SCRequestTask cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b26ee5c

// -[SCRequestTask cancelWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ee68

// -[SCRequestTask cancelWithForcedRetryIfRunning:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10b26ee74

// -[SCRequestTask cancelByProducingResumeData:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b26ef48

// -[SCRequestTask _cancelRunningTaskWithCompletionHandler:forcedRetry:error:]
// Type encoding: v36@0:8@?16B24@28
// Implementation: 0x10b26f018

// -[SCRequestTask _completeCanceledTaskWithCompletionHandler:error:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10b26f158

// -[SCRequestTask isResumable]
// Type encoding: B16@0:8
// Implementation: 0x10b26f280

// -[SCRequestTask pause]
// Type encoding: v16@0:8
// Implementation: 0x10b26f288

// -[SCRequestTask updateTaskURLSessionPriority:]
// Type encoding: v20@0:8f16
// Implementation: 0x10b26f304

// -[SCRequestTask updateTaskQueuingLatency:]
// Type encoding: v24@0:8q16
// Implementation: 0x10068aebc

// -[SCRequestTask didEnqueueTask]
// Type encoding: v16@0:8
// Implementation: 0x10b26f30c

// -[SCRequestTask didEnqueueTaskWithTimestampForFirstAttempt:]
// Type encoding: v24@0:8d16
// Implementation: 0x1005a85fc

// -[SCRequestTask didSubmitTask]
// Type encoding: v16@0:8
// Implementation: 0x1005ab60c

// -[SCRequestTask updateUserInitiated]
// Type encoding: v16@0:8
// Implementation: 0x1005a9dc8

// -[SCRequestTask didInitiateTaskByUser]
// Type encoding: v16@0:8
// Implementation: 0x100b4424c

// -[SCRequestTask shouldRetryRequestWithError:response:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b26f370

// -[SCRequestTask checkInterceptors:withRequest:response:data:error:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1008a2a3c

// -[SCRequestTask updateTaskWithTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26f4d4

// -[SCRequestTask completeTask]
// Type encoding: @?16@0:8
// Implementation: 0x10b26f534

// -[SCRequestTask progressiveUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10b26f588

// -[SCRequestTask updateRequestId]
// Type encoding: v16@0:8
// Implementation: 0x1005ab650

// -[SCRequestTask taskWillRun]
// Type encoding: v16@0:8
// Implementation: 0x10068adf0

// -[SCRequestTask _isErrorRetriableWithError:response:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b26f58c

// -[SCRequestTask _eligibleErrorCodesForRetry]
// Type encoding: @16@0:8
// Implementation: 0x10b26f6dc

// -[SCRequestTask _hasRetryAttemptsLeft]
// Type encoding: B16@0:8
// Implementation: 0x10b26f76c

// -[SCRequestTask _usedValidRequestAttemptCount]
// Type encoding: q16@0:8
// Implementation: 0x10b26f7a0

// -[SCRequestTask taskId]
// Type encoding: @16@0:8
// Implementation: 0x10068b074

// -[SCRequestTask request]
// Type encoding: @16@0:8
// Implementation: 0x1005a8668

// -[SCRequestTask authenticator]
// Type encoding: @16@0:8
// Implementation: 0x10b26f7b4

// -[SCRequestTask shouldRetry]
// Type encoding: B16@0:8
// Implementation: 0x10b26f7cc

// -[SCRequestTask isRunning]
// Type encoding: B16@0:8
// Implementation: 0x10b26f7d4

// -[SCRequestTask setIsRunning:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26f7dc

// -[SCRequestTask cancelReason]
// Type encoding: q16@0:8
// Implementation: 0x10b26f7e4

// -[SCRequestTask setCancelReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26f7ec

// -[SCRequestTask nonFatalReporter]
// Type encoding: @16@0:8
// Implementation: 0x10b26f7f4

// -[SCRequestTask setNonFatalReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a85f0

// -[SCRequestTask logger]
// Type encoding: @16@0:8
// Implementation: 0x1005a8848

// -[SCRequestTask setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26f80c

// -[SCRequestTask numOfRequestAttempts]
// Type encoding: Q16@0:8
// Implementation: 0x10068aecc

// -[SCRequestTask setNumOfRequestAttempts:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10068aed4

// -[SCRequestTask numOfRequestAttemptsCancelled]
// Type encoding: Q16@0:8
// Implementation: 0x10b26f83c

// -[SCRequestTask numOfRequestAttemptsPaused]
// Type encoding: Q16@0:8
// Implementation: 0x1008a2a30

// -[SCRequestTask setNumOfRequestAttemptsPaused:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b26f844

// -[SCRequestTask numHTTPRequestCompleted]
// Type encoding: Q16@0:8
// Implementation: 0x1008a2a20

// -[SCRequestTask setNumHTTPRequestCompleted:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1008a2a28

// -[SCRequestTask success]
// Type encoding: B16@0:8
// Implementation: 0x10b26f84c

// -[SCRequestTask forcedRetry]
// Type encoding: B16@0:8
// Implementation: 0x10b26f854

// -[SCRequestTask isCompleteTaskExecuted]
// Type encoding: B16@0:8
// Implementation: 0x1008a2a18

// -[SCRequestTask setIsCompleteTaskExecuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008a3e0c

// -[SCRequestTask nativeHttpRequestKey]
// Type encoding: q16@0:8
// Implementation: 0x10b26f85c

// -[SCRequestTask setNativeHttpRequestKey:]
// Type encoding: v24@0:8q16
// Implementation: 0x1005ae568

// -[SCRequestTask nativeRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b26f864

// -[SCRequestTask setNativeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26f86c

// -[SCRequestTask cancelTaskInNNMDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b26f89c

// -[SCRequestTask setCancelTaskInNNMDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005ab798

// -[SCRequestTask .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008a5b94

// +[SCRequestTask createTaskWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @88@0:8@16@24^{SCNetworkTraceFileStruct=}32@40@48@56@64@?72@?80
// Implementation: 0x1005a0750

// +[SCRequestTask createTaskWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:completionQueue:completionBlock:]
// Type encoding: @72@0:8@16@24^{SCNetworkTraceFileStruct=}32@40@48@56@?64
// Implementation: 0x100b43a9c

// +[SCRequestTask createTaskWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:progressiveUpdateQueue:progressiveUpdateBlock:]
// Type encoding: @72@0:8@16@24^{SCNetworkTraceFileStruct=}32@40@48@56@?64
// Implementation: 0x10b26e6e8

@end
