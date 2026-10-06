// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAPIRequestInfo
// Superclass: NSObject
// Address: 0x112c719c8

@interface SCAPIRequestInfo

// Property: path; attributes: T@"NSString",R,C,N,V_path
// Property: requestTypeStr; attributes: T@"NSString",R,C,N,V_requestTypeStr
// Property: requestBatchId; attributes: T@"NSString",R,C,N,V_requestBatchId
// Property: startTime; attributes: Td,R,N,V_startTime
// Property: startDate; attributes: T@"NSDate",R,C,N,V_startDate
// Property: requestSize; attributes: TQ,R,N,V_requestSize
// Property: connectivityStatus; attributes: Tq,R,N,V_connectivityStatus
// Property: sequenceNumber; attributes: TQ,R,N,V_sequenceNumber
// Property: requestParser; attributes: T@"<SCRequestParser>",R,N,V_requestParser
// Property: trackingInfo; attributes: T@"SCRequestTrackingInfo",R,N,V_trackingInfo
// Property: completionQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_completionQueue
// Property: taskId; attributes: T@"NSString",R,C,N,V_taskId
// Property: queuingLatency; attributes: Tq,R,N,V_queuingLatency
// Property: userInitiatedQueuingLatency; attributes: Tq,R,N,V_userInitiatedQueuingLatency
// Property: isLargeDownloadRequest; attributes: TB,R,N,V_isLargeDownloadRequest
// Property: completionBlock; attributes: T@?,C,N,V_completionBlock
// Property: responseData; attributes: T@"NSMutableArray",&,N,V_responseData
// Property: response; attributes: T@"NSHTTPURLResponse",&,N,V_response
// Property: error; attributes: T@"NSError",&,N,V_error
// Property: sessionTaskStartDate; attributes: T@"NSDate",&,N,V_sessionTaskStartDate
// Property: sessionTaskEndDate; attributes: T@"NSDate",&,N,V_sessionTaskEndDate
// Property: countOfBytesReceived; attributes: Tq,N,V_countOfBytesReceived
// Property: countOfBytesSent; attributes: Tq,N,V_countOfBytesSent
// Property: finishTime; attributes: Td,N,V_finishTime
// Property: isDownloadTask; attributes: TB,N,V_isDownloadTask
// Property: isPaused; attributes: TB,N,V_isPaused
// Property: isResumed; attributes: TB,N,V_isResumed
// Property: isResumable; attributes: TB,N,V_isResumable
// Property: isNSURLSessionTaskStarted; attributes: TB,N,V_isNSURLSessionTaskStarted
// Property: isUserInitiated; attributes: TB,N,V_isUserInitiated
// Property: isStreaming; attributes: TB,N,V_isStreaming
// Property: resumeDataBytes; attributes: TQ,V_resumeDataBytes
// Property: bytesReceivedByCronet; attributes: TI,N,V_bytesReceivedByCronet
// Property: lastUserInitiatedTime; attributes: Td,N,V_lastUserInitiatedTime
// Property: accumulatedUserInitiatedNetworkLatency; attributes: Tq,N,V_accumulatedUserInitiatedNetworkLatency
// Property: appState; attributes: Tq,N,V_appState

// -[SCAPIRequestInfo initWithPath:requestTypeStr:requestBatchId:resumedData:startTime:startDate:requestSize:connectivityStatus:sequenceNumber:requestParser:trackingInfo:taskId:queuingLatency:isLargeDownloadRequest:isUserInitiated:isStreaming:appState:userInitiatedQueuingLatency:completionQueue:]
// Type encoding: @156@0:8@16@24@32@40d48@56Q64q72Q80@88@96@104q112B120B124B128q132q140@148
// Implementation: 0x10b2653a0

// -[SCAPIRequestInfo addUserInfoEntriesFromDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b265668

// -[SCAPIRequestInfo userInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b2656d4

// -[SCAPIRequestInfo setIsUserInitiated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b265730

// -[SCAPIRequestInfo path]
// Type encoding: @16@0:8
// Implementation: 0x10b265794

// -[SCAPIRequestInfo requestTypeStr]
// Type encoding: @16@0:8
// Implementation: 0x10b26579c

// -[SCAPIRequestInfo requestBatchId]
// Type encoding: @16@0:8
// Implementation: 0x10b2657a4

// -[SCAPIRequestInfo startTime]
// Type encoding: d16@0:8
// Implementation: 0x10b2657ac

// -[SCAPIRequestInfo startDate]
// Type encoding: @16@0:8
// Implementation: 0x10b2657b4

// -[SCAPIRequestInfo requestSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b2657bc

// -[SCAPIRequestInfo connectivityStatus]
// Type encoding: q16@0:8
// Implementation: 0x10b2657c4

// -[SCAPIRequestInfo sequenceNumber]
// Type encoding: Q16@0:8
// Implementation: 0x10b2657cc

// -[SCAPIRequestInfo requestParser]
// Type encoding: @16@0:8
// Implementation: 0x10b2657d4

// -[SCAPIRequestInfo trackingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b2657dc

// -[SCAPIRequestInfo completionQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b2657e4

// -[SCAPIRequestInfo taskId]
// Type encoding: @16@0:8
// Implementation: 0x10b2657ec

// -[SCAPIRequestInfo queuingLatency]
// Type encoding: q16@0:8
// Implementation: 0x10b2657f4

// -[SCAPIRequestInfo userInitiatedQueuingLatency]
// Type encoding: q16@0:8
// Implementation: 0x10b2657fc

// -[SCAPIRequestInfo isLargeDownloadRequest]
// Type encoding: B16@0:8
// Implementation: 0x10b265804

// -[SCAPIRequestInfo completionBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b26580c

// -[SCAPIRequestInfo setCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b265814

// -[SCAPIRequestInfo responseData]
// Type encoding: @16@0:8
// Implementation: 0x10b26581c

// -[SCAPIRequestInfo setResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b265824

// -[SCAPIRequestInfo response]
// Type encoding: @16@0:8
// Implementation: 0x10b265854

// -[SCAPIRequestInfo setResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26585c

// -[SCAPIRequestInfo error]
// Type encoding: @16@0:8
// Implementation: 0x10b26588c

// -[SCAPIRequestInfo setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b265894

// -[SCAPIRequestInfo sessionTaskStartDate]
// Type encoding: @16@0:8
// Implementation: 0x10b2658c4

// -[SCAPIRequestInfo setSessionTaskStartDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2658cc

// -[SCAPIRequestInfo sessionTaskEndDate]
// Type encoding: @16@0:8
// Implementation: 0x10b2658fc

// -[SCAPIRequestInfo setSessionTaskEndDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b265904

// -[SCAPIRequestInfo countOfBytesReceived]
// Type encoding: q16@0:8
// Implementation: 0x10b265934

// -[SCAPIRequestInfo setCountOfBytesReceived:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26593c

// -[SCAPIRequestInfo countOfBytesSent]
// Type encoding: q16@0:8
// Implementation: 0x10b265944

// -[SCAPIRequestInfo setCountOfBytesSent:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26594c

// -[SCAPIRequestInfo finishTime]
// Type encoding: d16@0:8
// Implementation: 0x10b265954

// -[SCAPIRequestInfo setFinishTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b26595c

// -[SCAPIRequestInfo isDownloadTask]
// Type encoding: B16@0:8
// Implementation: 0x10b265964

// -[SCAPIRequestInfo setIsDownloadTask:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26596c

// -[SCAPIRequestInfo isPaused]
// Type encoding: B16@0:8
// Implementation: 0x10b265974

// -[SCAPIRequestInfo setIsPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26597c

// -[SCAPIRequestInfo isResumed]
// Type encoding: B16@0:8
// Implementation: 0x10b265984

// -[SCAPIRequestInfo setIsResumed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26598c

// -[SCAPIRequestInfo isResumable]
// Type encoding: B16@0:8
// Implementation: 0x10b265994

// -[SCAPIRequestInfo setIsResumable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26599c

// -[SCAPIRequestInfo isNSURLSessionTaskStarted]
// Type encoding: B16@0:8
// Implementation: 0x10b2659a4

// -[SCAPIRequestInfo setIsNSURLSessionTaskStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2659ac

// -[SCAPIRequestInfo isUserInitiated]
// Type encoding: B16@0:8
// Implementation: 0x10b2659b4

// -[SCAPIRequestInfo isStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10b2659bc

// -[SCAPIRequestInfo setIsStreaming:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2659c4

// -[SCAPIRequestInfo resumeDataBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10b2659cc

// -[SCAPIRequestInfo setResumeDataBytes:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b2659d4

// -[SCAPIRequestInfo bytesReceivedByCronet]
// Type encoding: I16@0:8
// Implementation: 0x10b2659dc

// -[SCAPIRequestInfo setBytesReceivedByCronet:]
// Type encoding: v20@0:8I16
// Implementation: 0x10b2659e4

// -[SCAPIRequestInfo lastUserInitiatedTime]
// Type encoding: d16@0:8
// Implementation: 0x10b2659ec

// -[SCAPIRequestInfo setLastUserInitiatedTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2659f4

// -[SCAPIRequestInfo accumulatedUserInitiatedNetworkLatency]
// Type encoding: q16@0:8
// Implementation: 0x10b2659fc

// -[SCAPIRequestInfo setAccumulatedUserInitiatedNetworkLatency:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b265a04

// -[SCAPIRequestInfo appState]
// Type encoding: q16@0:8
// Implementation: 0x10b265a0c

// -[SCAPIRequestInfo setAppState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b265a14

// -[SCAPIRequestInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b265a1c

@end
