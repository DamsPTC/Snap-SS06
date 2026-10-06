// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionAPIRequestInfo
// Superclass: NSObject
// Address: 0xada080

@interface SCExtensionAPIRequestInfo

// Property: path; attributes: T@"NSString",R,C,N,V_path
// Property: requestTypeStr; attributes: T@"NSString",R,C,N,V_requestTypeStr
// Property: taskId; attributes: T@"NSString",R,C,N,V_taskId
// Property: startTime; attributes: Td,R,N,V_startTime
// Property: startDate; attributes: T@"NSDate",R,C,N,V_startDate
// Property: requestSize; attributes: TQ,R,N,V_requestSize
// Property: completionQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_completionQueue
// Property: responseData; attributes: T@"NSMutableArray",&,N,V_responseData
// Property: request; attributes: T@"NSURLRequest",&,N,V_request
// Property: response; attributes: T@"NSHTTPURLResponse",&,N,V_response
// Property: error; attributes: T@"NSError",&,N,V_error
// Property: location; attributes: T@"NSURL",&,N,V_location
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
// Property: requestCompleteBlock; attributes: T@?,C,N,V_requestCompleteBlock
// Property: downloadCompleteBlock; attributes: T@?,C,N,V_downloadCompleteBlock
// Property: trackingId; attributes: T@"NSString",&,N,V_trackingId
// Property: requestTrigger; attributes: Tq,N,V_requestTrigger
// Property: contentAttribution; attributes: Tq,N,V_contentAttribution

// -[SCExtensionAPIRequestInfo initWithPath:taskId:startTime:startDate:requestSize:]
// Type encoding: @56@0:8@16@24d32@40Q48
// Implementation: 0x58b858

// -[SCExtensionAPIRequestInfo addUserInfoEntriesFromDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x58b98c

// -[SCExtensionAPIRequestInfo userInfo]
// Type encoding: @16@0:8
// Implementation: 0x58b994

// -[SCExtensionAPIRequestInfo path]
// Type encoding: @16@0:8
// Implementation: 0x58b9ac

// -[SCExtensionAPIRequestInfo requestTypeStr]
// Type encoding: @16@0:8
// Implementation: 0x58b9b4

// -[SCExtensionAPIRequestInfo taskId]
// Type encoding: @16@0:8
// Implementation: 0x58b9bc

// -[SCExtensionAPIRequestInfo startTime]
// Type encoding: d16@0:8
// Implementation: 0x58b9c4

// -[SCExtensionAPIRequestInfo startDate]
// Type encoding: @16@0:8
// Implementation: 0x58b9cc

// -[SCExtensionAPIRequestInfo requestSize]
// Type encoding: Q16@0:8
// Implementation: 0x58b9d4

// -[SCExtensionAPIRequestInfo completionQueue]
// Type encoding: @16@0:8
// Implementation: 0x58b9dc

// -[SCExtensionAPIRequestInfo responseData]
// Type encoding: @16@0:8
// Implementation: 0x58b9e4

// -[SCExtensionAPIRequestInfo setResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x58b9ec

// -[SCExtensionAPIRequestInfo request]
// Type encoding: @16@0:8
// Implementation: 0x58ba1c

// -[SCExtensionAPIRequestInfo setRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x58ba24

// -[SCExtensionAPIRequestInfo response]
// Type encoding: @16@0:8
// Implementation: 0x58ba54

// -[SCExtensionAPIRequestInfo setResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x58ba5c

// -[SCExtensionAPIRequestInfo error]
// Type encoding: @16@0:8
// Implementation: 0x58ba8c

// -[SCExtensionAPIRequestInfo setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x58ba94

// -[SCExtensionAPIRequestInfo location]
// Type encoding: @16@0:8
// Implementation: 0x58bac4

// -[SCExtensionAPIRequestInfo setLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x58bacc

// -[SCExtensionAPIRequestInfo sessionTaskStartDate]
// Type encoding: @16@0:8
// Implementation: 0x58bafc

// -[SCExtensionAPIRequestInfo setSessionTaskStartDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x58bb04

// -[SCExtensionAPIRequestInfo sessionTaskEndDate]
// Type encoding: @16@0:8
// Implementation: 0x58bb34

// -[SCExtensionAPIRequestInfo setSessionTaskEndDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x58bb3c

// -[SCExtensionAPIRequestInfo countOfBytesReceived]
// Type encoding: q16@0:8
// Implementation: 0x58bb6c

// -[SCExtensionAPIRequestInfo setCountOfBytesReceived:]
// Type encoding: v24@0:8q16
// Implementation: 0x58bb74

// -[SCExtensionAPIRequestInfo countOfBytesSent]
// Type encoding: q16@0:8
// Implementation: 0x58bb7c

// -[SCExtensionAPIRequestInfo setCountOfBytesSent:]
// Type encoding: v24@0:8q16
// Implementation: 0x58bb84

// -[SCExtensionAPIRequestInfo finishTime]
// Type encoding: d16@0:8
// Implementation: 0x58bb8c

// -[SCExtensionAPIRequestInfo setFinishTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x58bb94

// -[SCExtensionAPIRequestInfo isDownloadTask]
// Type encoding: B16@0:8
// Implementation: 0x58bb9c

// -[SCExtensionAPIRequestInfo setIsDownloadTask:]
// Type encoding: v20@0:8B16
// Implementation: 0x58bba4

// -[SCExtensionAPIRequestInfo isPaused]
// Type encoding: B16@0:8
// Implementation: 0x58bbac

// -[SCExtensionAPIRequestInfo setIsPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x58bbb4

// -[SCExtensionAPIRequestInfo isResumed]
// Type encoding: B16@0:8
// Implementation: 0x58bbbc

// -[SCExtensionAPIRequestInfo setIsResumed:]
// Type encoding: v20@0:8B16
// Implementation: 0x58bbc4

// -[SCExtensionAPIRequestInfo isResumable]
// Type encoding: B16@0:8
// Implementation: 0x58bbcc

// -[SCExtensionAPIRequestInfo setIsResumable:]
// Type encoding: v20@0:8B16
// Implementation: 0x58bbd4

// -[SCExtensionAPIRequestInfo isNSURLSessionTaskStarted]
// Type encoding: B16@0:8
// Implementation: 0x58bbdc

// -[SCExtensionAPIRequestInfo setIsNSURLSessionTaskStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x58bbe4

// -[SCExtensionAPIRequestInfo isUserInitiated]
// Type encoding: B16@0:8
// Implementation: 0x58bbec

// -[SCExtensionAPIRequestInfo setIsUserInitiated:]
// Type encoding: v20@0:8B16
// Implementation: 0x58bbf4

// -[SCExtensionAPIRequestInfo isStreaming]
// Type encoding: B16@0:8
// Implementation: 0x58bbfc

// -[SCExtensionAPIRequestInfo setIsStreaming:]
// Type encoding: v20@0:8B16
// Implementation: 0x58bc04

// -[SCExtensionAPIRequestInfo resumeDataBytes]
// Type encoding: Q16@0:8
// Implementation: 0x58bc0c

// -[SCExtensionAPIRequestInfo setResumeDataBytes:]
// Type encoding: v24@0:8Q16
// Implementation: 0x58bc14

// -[SCExtensionAPIRequestInfo bytesReceivedByCronet]
// Type encoding: I16@0:8
// Implementation: 0x58bc1c

// -[SCExtensionAPIRequestInfo setBytesReceivedByCronet:]
// Type encoding: v20@0:8I16
// Implementation: 0x58bc24

// -[SCExtensionAPIRequestInfo lastUserInitiatedTime]
// Type encoding: d16@0:8
// Implementation: 0x58bc2c

// -[SCExtensionAPIRequestInfo setLastUserInitiatedTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x58bc34

// -[SCExtensionAPIRequestInfo accumulatedUserInitiatedNetworkLatency]
// Type encoding: q16@0:8
// Implementation: 0x58bc3c

// -[SCExtensionAPIRequestInfo setAccumulatedUserInitiatedNetworkLatency:]
// Type encoding: v24@0:8q16
// Implementation: 0x58bc44

// -[SCExtensionAPIRequestInfo requestCompleteBlock]
// Type encoding: @?16@0:8
// Implementation: 0x58bc4c

// -[SCExtensionAPIRequestInfo setRequestCompleteBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x58bc54

// -[SCExtensionAPIRequestInfo downloadCompleteBlock]
// Type encoding: @?16@0:8
// Implementation: 0x58bc5c

// -[SCExtensionAPIRequestInfo setDownloadCompleteBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x58bc64

// -[SCExtensionAPIRequestInfo trackingId]
// Type encoding: @16@0:8
// Implementation: 0x58bc6c

// -[SCExtensionAPIRequestInfo setTrackingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x58bc74

// -[SCExtensionAPIRequestInfo requestTrigger]
// Type encoding: q16@0:8
// Implementation: 0x58bca4

// -[SCExtensionAPIRequestInfo setRequestTrigger:]
// Type encoding: v24@0:8q16
// Implementation: 0x58bcac

// -[SCExtensionAPIRequestInfo contentAttribution]
// Type encoding: q16@0:8
// Implementation: 0x58bcb4

// -[SCExtensionAPIRequestInfo setContentAttribution:]
// Type encoding: v24@0:8q16
// Implementation: 0x58bcbc

// -[SCExtensionAPIRequestInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x58bcc4

@end
