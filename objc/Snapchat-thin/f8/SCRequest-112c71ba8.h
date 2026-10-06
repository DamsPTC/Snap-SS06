// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequest
// Superclass: NSObject
// Address: 0x112c71ba8

@interface SCRequest

// Property: mediaOrchestrationAttemptId; attributes: T@"NSString",C
// Property: task; attributes: T@"NSURLSessionTask",&,N,V_task
// Property: requestParser; attributes: T@"<SCRequestParser>",&,N,V_requestParser
// Property: requestInfoContainer; attributes: T@"SCRequestInfoContainer",&,N,V_requestInfoContainer
// Property: info; attributes: T@"SCAPIRequestInfo",&,N,V_info
// Property: trackingInfo; attributes: T@"SCRequestTrackingInfo",&,N,V_trackingInfo
// Property: session; attributes: T@"SCAPIURLSession",R,N,V_session
// Property: isResumable; attributes: TB,N,V_isResumable
// Property: schedulingState; attributes: TQ,N,V_schedulingState
// Property: clientSBConfig; attributes: T@"SCNClientSwitchboardClientSwitchboardConfig",&,N,V_clientSBConfig
// Property: originalHost; attributes: T@"NSString",&,N,V_originalHost
// Property: taskId; attributes: T@"NSString",C,N,V_taskId
// Property: tracingId; attributes: TQ,N,V_tracingId
// Property: queuingLatency; attributes: Tq,N,V_queuingLatency
// Property: accumulatedUserInitiatedQueuingLatency; attributes: Tq,R,N,V_accumulatedUserInitiatedQueuingLatency
// Property: lastUserInitiatedTime; attributes: Td,R,N,V_lastUserInitiatedTime
// Property: willUseBackgroundSession; attributes: TB,N,V_willUseBackgroundSession
// Property: estimatedRequestSize; attributes: Tq,N,V_estimatedRequestSize
// Property: enqueueTime; attributes: Td,N,V_enqueueTime
// Property: authLatency; attributes: Td,N,V_authLatency
// Property: attestationLatency; attributes: Td,N,V_attestationLatency
// Property: argosSuccess; attributes: TB,N,V_argosSuccess
// Property: urlRequestResponseInfo; attributes: T@"SCNNetworkTypesRequestResponseInfo",&,N,V_urlRequestResponseInfo
// Property: failoverAdvice; attributes: T@"SCNMdpCommonFailoverAdvice",&,V_failoverAdvice
// Property: userContextWhenEnqueued; attributes: T@"NSString",C,N,V_userContextWhenEnqueued
// Property: taskContextWhenCompleted; attributes: T@"NSString",C,N,V_taskContextWhenCompleted
// Property: hasSubmitted; attributes: TB,N,V_hasSubmitted
// Property: isAppSessionRetry; attributes: TB,N,V_isAppSessionRetry
// Property: compressionConfig; attributes: T@"SCNNetworkTypesCompressionConfig",&,N,V_compressionConfig
// Property: baseHeaders; attributes: T@"NSMutableDictionary",&,N,V_baseHeaders
// Property: uploadData; attributes: T@,C,N,V_uploadData
// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: displayContext; attributes: T@"SCDisplayContext",&,N,V_displayContext
// Property: currentDisplayContext; attributes: T@"SCDisplayContext",&,N,V_currentDisplayContext
// Property: priority; attributes: Tq,N,V_priority
// Property: userInitiated; attributes: TB,N,V_userInitiated
// Property: importance; attributes: Tq,N,V_importance
// Property: requestTrigger; attributes: Tq,N,V_requestTrigger
// Property: fallbackUrlProvider; attributes: T@"SCNMdpCommonFallbackUrlProvider",&,N,V_fallbackUrlProvider
// Property: loggingInfo; attributes: T@"DJFuture",&,N,V_loggingInfo
// Property: pageId; attributes: Ti,N,V_pageId
// Property: isUIAssetRequest; attributes: TB,N,V_isUIAssetRequest
// Property: URLSessionTaskPriority; attributes: Tf,N,V_URLSessionTaskPriority
// Property: connectivity; attributes: Tq,N,V_connectivity
// Property: index; attributes: TQ,N,V_index
// Property: isStreamingRequest; attributes: TB,N,V_isStreamingRequest
// Property: requestBatchId; attributes: T@"NSString",C,N,V_requestBatchId
// Property: estimatedResponseSizeBytes; attributes: Tq,R,N,V_estimatedResponseSizeBytes
// Property: shouldTrace; attributes: TB,N,V_shouldTrace
// Property: contextScore; attributes: TQ,R,N,V_contextScore
// Property: requestId; attributes: T@"NSString",R,C,N,V_requestId
// Property: payloadSize; attributes: TQ,R,N
// Property: requestType; attributes: Tq,R,N,V_requestType
// Property: method; attributes: Tq,R,N,V_method
// Property: authenticated; attributes: TB,R,N,V_authenticated
// Property: requestTimestamp; attributes: Td,R,N,V_requestTimestamp
// Property: maxNumOfRequestAttempts; attributes: TQ,N,V_maxNumOfRequestAttempts
// Property: retryPolicy; attributes: Tq,N,V_retryPolicy
// Property: retryIntervalInMs; attributes: Tq,N,V_retryIntervalInMs
// Property: retryableResponseStatusCodes; attributes: T@"NSSet",C,N,V_retryableResponseStatusCodes
// Property: appState; attributes: Tq,R,N,V_appState
// Property: isMatchaRequest; attributes: TB,N,V_isMatchaRequest
// Property: isFSNAuthInPayload; attributes: TB,N,V_isFSNAuthInPayload

// -[SCRequest domainType]
// Type encoding: q16@0:8
// Implementation: 0x10b268ee8

// -[SCRequest domainTypeString]
// Type encoding: @16@0:8
// Implementation: 0x10b268fbc

// -[SCRequest isDefaultRetryAttempts]
// Type encoding: B16@0:8
// Implementation: 0x100679e80

// -[SCRequest mediaOrchestrationAttemptId]
// Type encoding: @16@0:8
// Implementation: 0x10b268e74

// -[SCRequest setMediaOrchestrationAttemptId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b268e80

// -[SCRequest initWithKey:contexts:priority:connectivity:requestType:requestParser:method:authenticated:requestTimestamp:estimatedResponseSizeBytes:]
// Type encoding: @92@0:8@16@24q32q40q48@56q64B72d76q84
// Implementation: 0x10059dc08

// -[SCRequest initializeURLRequestWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a1150

// -[SCRequest didEnqueueWithTimestamp:refreshEnqueueTime:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1005a8670

// -[SCRequest didExecute]
// Type encoding: v16@0:8
// Implementation: 0x10b269f90

// -[SCRequest didComplete]
// Type encoding: v16@0:8
// Implementation: 0x1008a243c

// -[SCRequest executeWithAuthenticator:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b269fe8

// -[SCRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b26a064

// -[SCRequest pause]
// Type encoding: v16@0:8
// Implementation: 0x10b26a0b0

// -[SCRequest resumeWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b26a0b4

// -[SCRequest cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x10b26a0b8

// -[SCRequest timeoutInterval]
// Type encoding: d16@0:8
// Implementation: 0x10b26a0bc

// -[SCRequest sessionTimeoutInterval]
// Type encoding: d16@0:8
// Implementation: 0x10b26a0c4

// -[SCRequest path]
// Type encoding: @16@0:8
// Implementation: 0x10b26a108

// -[SCRequest url]
// Type encoding: @16@0:8
// Implementation: 0x10b26a15c

// -[SCRequest urlRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b26a1b0

// -[SCRequest approximateRequestSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b26a204

// -[SCRequest resumableDownloadedData]
// Type encoding: @16@0:8
// Implementation: 0x10b26a258

// -[SCRequest session]
// Type encoding: @16@0:8
// Implementation: 0x10b26a260

// -[SCRequest requestTypeStr]
// Type encoding: @16@0:8
// Implementation: 0x10068c474

// -[SCRequest addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a2c4

// -[SCRequest removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a2cc

// -[SCRequest addRequestConcurrencyObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a956c

// -[SCRequest setUserInitiated:]
// Type encoding: v20@0:8B16
// Implementation: 0x100b441cc

// -[SCRequest setDisplayContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a2d4

// -[SCRequest setTrackingInfoWithId:type:mediaType:expirationInDays:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x10b26a30c

// -[SCRequest setTrackingInfoWithId:mediaId:type:mediaType:expirationInDays:]
// Type encoding: v56@0:8@16@24@32@40Q48
// Implementation: 0x10b26a320

// -[SCRequest setTrackingInfoWithId:mediaId:type:mediaType:contentResolveTime:mediaContextType:expirationInDays:]
// Type encoding: v72@0:8@16@24@32@40@48q56Q64
// Implementation: 0x10b26a348

// -[SCRequest setRequestBatchId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a43c

// -[SCRequest setSchedulingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1005a86fc

// -[SCRequest setTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a488

// -[SCRequest setRequestId]
// Type encoding: v16@0:8
// Implementation: 0x1005ab680

// -[SCRequest taskContextWhenCompleted]
// Type encoding: @16@0:8
// Implementation: 0x10b26a598

// -[SCRequest setCurrentDisplayContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a9ba0

// -[SCRequest updateWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a5e0

// -[SCRequest updateRequestContext]
// Type encoding: v16@0:8
// Implementation: 0x1005a9bd8

// -[SCRequest setPriority:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26a7c8

// -[SCRequest setImportance:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26a7d0

// -[SCRequest setRequestTrigger:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26a7d8

// -[SCRequest setLoggingInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a7e0

// -[SCRequest setTimeoutInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b26a810

// -[SCRequest updateClientSwitchboardConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a04e8

// -[SCRequest preprocess]
// Type encoding: v16@0:8
// Implementation: 0x1005a056c

// -[SCRequest urlWithClientSwitchboardConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26a814

// -[SCRequest _tracingIdForUrlRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b26ab1c

// -[SCRequest _addClientSBConfigHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ac0c

// -[SCRequest logId]
// Type encoding: @16@0:8
// Implementation: 0x10059eb10

// -[SCRequest payloadSize]
// Type encoding: Q16@0:8
// Implementation: 0x1008a4ec8

// -[SCRequest clientSwitchboardConfigKey]
// Type encoding: @16@0:8
// Implementation: 0x10059ef3c

// -[SCRequest setClientSwitchboardConfigKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ae3c

// -[SCRequest downloadProgress]
// Type encoding: @16@0:8
// Implementation: 0x10b26ae6c

// -[SCRequest uploadProgress]
// Type encoding: @16@0:8
// Implementation: 0x10b26aeb0

// -[SCRequest monitorDownloadProgressWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b26aef4

// -[SCRequest monitorDownloadProgressWithQueue:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b26af44

// -[SCRequest monitorUploadProgressWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b26afb4

// -[SCRequest removeDownloadProgressMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x10b26b004

// -[SCRequest progressiveUpdateWithQueue:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b26b034

// -[SCRequest key]
// Type encoding: @16@0:8
// Implementation: 0x10059eb08

// -[SCRequest displayContext]
// Type encoding: @16@0:8
// Implementation: 0x1005a9c80

// -[SCRequest currentDisplayContext]
// Type encoding: @16@0:8
// Implementation: 0x1005a9c90

// -[SCRequest priority]
// Type encoding: q16@0:8
// Implementation: 0x1005a9ed8

// -[SCRequest userInitiated]
// Type encoding: B16@0:8
// Implementation: 0x1005a8840

// -[SCRequest importance]
// Type encoding: q16@0:8
// Implementation: 0x100679918

// -[SCRequest requestTrigger]
// Type encoding: q16@0:8
// Implementation: 0x100679928

// -[SCRequest fallbackUrlProvider]
// Type encoding: @16@0:8
// Implementation: 0x1005acd30

// -[SCRequest setFallbackUrlProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b188

// -[SCRequest failoverAdvice]
// Type encoding: @16@0:8
// Implementation: 0x10089ea1c

// -[SCRequest setFailoverAdvice:]
// Type encoding: v24@0:8@16
// Implementation: 0x10089106c

// -[SCRequest loggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b26b1b8

// -[SCRequest pageId]
// Type encoding: i16@0:8
// Implementation: 0x100679920

// -[SCRequest setPageId:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b26b1c0

// -[SCRequest isUIAssetRequest]
// Type encoding: B16@0:8
// Implementation: 0x1005a9ef0

// -[SCRequest setIsUIAssetRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x10059e2ac

// -[SCRequest URLSessionTaskPriority]
// Type encoding: f16@0:8
// Implementation: 0x10b26b1c8

// -[SCRequest setURLSessionTaskPriority:]
// Type encoding: v20@0:8f16
// Implementation: 0x10b26b1d0

// -[SCRequest connectivity]
// Type encoding: q16@0:8
// Implementation: 0x1005ab5b4

// -[SCRequest setConnectivity:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26b1d8

// -[SCRequest index]
// Type encoding: Q16@0:8
// Implementation: 0x10b26b1e0

// -[SCRequest setIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b26b1e8

// -[SCRequest isStreamingRequest]
// Type encoding: B16@0:8
// Implementation: 0x10b26b1f0

// -[SCRequest setIsStreamingRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26b1f8

// -[SCRequest requestBatchId]
// Type encoding: @16@0:8
// Implementation: 0x10b26b200

// -[SCRequest estimatedResponseSizeBytes]
// Type encoding: q16@0:8
// Implementation: 0x10b26b208

// -[SCRequest shouldTrace]
// Type encoding: B16@0:8
// Implementation: 0x10b26b210

// -[SCRequest setShouldTrace:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26b218

// -[SCRequest isResumable]
// Type encoding: B16@0:8
// Implementation: 0x10b26b220

// -[SCRequest setIsResumable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10059e26c

// -[SCRequest contextScore]
// Type encoding: Q16@0:8
// Implementation: 0x10b26b228

// -[SCRequest requestId]
// Type encoding: @16@0:8
// Implementation: 0x10b26b230

// -[SCRequest requestType]
// Type encoding: q16@0:8
// Implementation: 0x1005ab55c

// -[SCRequest method]
// Type encoding: q16@0:8
// Implementation: 0x1005a11d0

// -[SCRequest authenticated]
// Type encoding: B16@0:8
// Implementation: 0x1005a0dc4

// -[SCRequest requestTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10b26b238

// -[SCRequest trackingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10059eb90

// -[SCRequest setTrackingInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b240

// -[SCRequest maxNumOfRequestAttempts]
// Type encoding: Q16@0:8
// Implementation: 0x100679ca8

// -[SCRequest setMaxNumOfRequestAttempts:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10059e048

// -[SCRequest retryPolicy]
// Type encoding: q16@0:8
// Implementation: 0x100679ee0

// -[SCRequest setRetryPolicy:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26b270

// -[SCRequest retryIntervalInMs]
// Type encoding: q16@0:8
// Implementation: 0x100679ee8

// -[SCRequest setRetryIntervalInMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b26b278

// -[SCRequest retryableResponseStatusCodes]
// Type encoding: @16@0:8
// Implementation: 0x100679ef0

// -[SCRequest setRetryableResponseStatusCodes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b280

// -[SCRequest schedulingState]
// Type encoding: Q16@0:8
// Implementation: 0x100b44244

// -[SCRequest appState]
// Type encoding: q16@0:8
// Implementation: 0x10b26b288

// -[SCRequest isMatchaRequest]
// Type encoding: B16@0:8
// Implementation: 0x10059ef34

// -[SCRequest setIsMatchaRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x100b42f78

// -[SCRequest isFSNAuthInPayload]
// Type encoding: B16@0:8
// Implementation: 0x1005a8064

// -[SCRequest setIsFSNAuthInPayload:]
// Type encoding: v20@0:8B16
// Implementation: 0x10059e2b4

// -[SCRequest task]
// Type encoding: @16@0:8
// Implementation: 0x10b26b290

// -[SCRequest requestParser]
// Type encoding: @16@0:8
// Implementation: 0x10089dfb4

// -[SCRequest setRequestParser:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b298

// -[SCRequest requestInfoContainer]
// Type encoding: @16@0:8
// Implementation: 0x10059e6b0

// -[SCRequest setRequestInfoContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b2c8

// -[SCRequest info]
// Type encoding: @16@0:8
// Implementation: 0x1008a4f04

// -[SCRequest setInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b2f8

// -[SCRequest clientSBConfig]
// Type encoding: @16@0:8
// Implementation: 0x1005a11b8

// -[SCRequest setClientSBConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b328

// -[SCRequest originalHost]
// Type encoding: @16@0:8
// Implementation: 0x10b26b358

// -[SCRequest setOriginalHost:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b360

// -[SCRequest taskId]
// Type encoding: @16@0:8
// Implementation: 0x10b26b390

// -[SCRequest setTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a0dbc

// -[SCRequest tracingId]
// Type encoding: Q16@0:8
// Implementation: 0x1008a3e14

// -[SCRequest setTracingId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b26b398

// -[SCRequest queuingLatency]
// Type encoding: q16@0:8
// Implementation: 0x10b26b3a0

// -[SCRequest setQueuingLatency:]
// Type encoding: v24@0:8q16
// Implementation: 0x10068aec4

// -[SCRequest accumulatedUserInitiatedQueuingLatency]
// Type encoding: q16@0:8
// Implementation: 0x10b26b3a8

// -[SCRequest lastUserInitiatedTime]
// Type encoding: d16@0:8
// Implementation: 0x10b26b3b0

// -[SCRequest willUseBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x1005ab648

// -[SCRequest setWillUseBackgroundSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26b3b8

// -[SCRequest estimatedRequestSize]
// Type encoding: q16@0:8
// Implementation: 0x10b26b3c0

// -[SCRequest setEstimatedRequestSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x1005a805c

// -[SCRequest enqueueTime]
// Type encoding: d16@0:8
// Implementation: 0x10b26b3c8

// -[SCRequest setEnqueueTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x100b431b4

// -[SCRequest authLatency]
// Type encoding: d16@0:8
// Implementation: 0x10b26b3d0

// -[SCRequest setAuthLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x100b430c4

// -[SCRequest attestationLatency]
// Type encoding: d16@0:8
// Implementation: 0x10b26b3d8

// -[SCRequest setAttestationLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x100b430cc

// -[SCRequest argosSuccess]
// Type encoding: B16@0:8
// Implementation: 0x10b26b3e0

// -[SCRequest setArgosSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x100b430d4

// -[SCRequest urlRequestResponseInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b26b3e8

// -[SCRequest setUrlRequestResponseInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10089e9ec

// -[SCRequest userContextWhenEnqueued]
// Type encoding: @16@0:8
// Implementation: 0x10b26b3f0

// -[SCRequest setUserContextWhenEnqueued:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a9dc0

// -[SCRequest setTaskContextWhenCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b3f8

// -[SCRequest hasSubmitted]
// Type encoding: B16@0:8
// Implementation: 0x10b26b400

// -[SCRequest setHasSubmitted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b26b408

// -[SCRequest isAppSessionRetry]
// Type encoding: B16@0:8
// Implementation: 0x1005ac69c

// -[SCRequest setIsAppSessionRetry:]
// Type encoding: v20@0:8B16
// Implementation: 0x10059e050

// -[SCRequest compressionConfig]
// Type encoding: @16@0:8
// Implementation: 0x1005a11c0

// -[SCRequest setCompressionConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10059e27c

// -[SCRequest baseHeaders]
// Type encoding: @16@0:8
// Implementation: 0x1005a2270

// -[SCRequest setBaseHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26b410

// -[SCRequest uploadData]
// Type encoding: @16@0:8
// Implementation: 0x1005a11c8

// -[SCRequest setUploadData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10059e274

// -[SCRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008aabb8

// +[SCRequest createProtoRequestWithEndpoint:proto:additionalHeaders:key:contexts:priority:requestType:authenticated:]
// Type encoding: @76@0:8@16@24@32@40@48q56q64B72
// Implementation: 0x10b268ff0

// +[SCRequest createProtoRequestWithURL:proto:additionalHeaders:key:contexts:priority:requestType:authenticated:]
// Type encoding: @76@0:8@16@24@32@40@48q56q64B72
// Implementation: 0x10b269138

// +[SCRequest performProtoRequestWithEndpoint:proto:additionalHeaders:key:contexts:priority:requestType:authenticated:userSession:responseClass:completionQueue:completion:]
// Type encoding: v108@0:8@16@24@32@40@48q56q64B72@76#84@92@?100
// Implementation: 0x10b269284

// +[SCRequest getDefaultRetryAttempts:]
// Type encoding: Q24@0:8q16
// Implementation: 0x10059e028

// +[SCRequest hideStoryRequestWithBaseUrl:accessToken:lensId:userId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b0dcfe4

// +[SCRequest createRequestFromGtqNetworkRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af3899c

// +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:priority:connectivity:requestType:method:authenticated:]
// Type encoding: @92@0:8@16@24@32@40@48q56q64q72q80B88
// Implementation: 0x10b26938c

// +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:]
// Type encoding: @100@0:8@16@24@32@40@48@56q64q72q80q88B96
// Implementation: 0x10b2694b0

// +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:useGzipRequestCompression:]
// Type encoding: @104@0:8@16@24@32@40@48@56q64q72q80q88B96B100
// Implementation: 0x10b2694e8

// +[SCRequest createRequestWithEndpoint:parameters:uploadData:key:contexts:priority:connectivity:requestType:method:authenticated:readTimeoutInterval:]
// Type encoding: @100@0:8@16@24@32@40@48q56q64q72q80B88d92
// Implementation: 0x10b26953c

// +[SCRequest createRequestWithEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64q72q80q88q96B104
// Implementation: 0x10b269674

// +[SCRequest createRequestWithEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:useGzipRequestCompression:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64q72q80q88q96B104B108
// Implementation: 0x10b2696ac

// +[SCRequest createPostRequestWithEndpoint:postData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:authenticated:]
// Type encoding: @84@0:8@16@24@32@40@48q56q64q72B80
// Implementation: 0x10b2696c4

// +[SCRequest createPostRequestWithEndpoint:postData:additionalHTTPHeaders:key:contexts:requestParser:priority:connectivity:requestType:authenticated:]
// Type encoding: @92@0:8@16@24@32@40@48@56q64q72q80B88
// Implementation: 0x10b2697ec

// +[SCRequest createRequestWithEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:priority:connectivity:requestType:method:authenticated:readTimeoutInterval:useGzipRequestCompression:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64q72q80q88q96B104d108B116
// Implementation: 0x10b26984c

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:]
// Type encoding: @96@0:8@16@24@32@40@48@56q64q72q80q88
// Implementation: 0x10059d5d4

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:authenticated:]
// Type encoding: @100@0:8@16@24@32@40@48@56q64q72q80q88B96
// Implementation: 0x10059d604

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:authenticated:useGzipRequestCompression:]
// Type encoding: @104@0:8@16@24@32@40@48@56q64q72q80q88B96B100
// Implementation: 0x10059d63c

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:readTimeoutInterval:]
// Type encoding: @104@0:8@16@24@32@40@48@56q64q72q80q88d96
// Implementation: 0x10b269a20

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:]
// Type encoding: @104@0:8@16@24@32@40@48@56q64q72@80q88q96
// Implementation: 0x10b269b60

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:useGzipRequestCompression:]
// Type encoding: @112@0:8@16@24@32@40@48@56q64q72@80q88q96B104B108
// Implementation: 0x10b269b94

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:authenticated:compressionConfig:]
// Type encoding: @108@0:8@16@24@32@40@48@56q64q72q80q88B96@100
// Implementation: 0x100b42dc4

// +[SCRequest createRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:readTimeoutInterval:useGzipRequestCompression:]
// Type encoding: @120@0:8@16@24@32@40@48@56q64q72@80q88q96B104d108B116
// Implementation: 0x10059d80c

// +[SCRequest createUploadRequestWithURL:parameters:uploadFileURL:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:]
// Type encoding: @96@0:8@16@24@32@40@48@56q64q72q80q88
// Implementation: 0x10b269bac

// +[SCRequest createBackgroundRequestWithURL:parameters:uploadFileURL:additionalHTTPHeaders:key:contexts:requestType:method:]
// Type encoding: @80@0:8@16@24@32@40@48@56q64q72
// Implementation: 0x10b269cf4

// +[SCRequest createStreamingRequestWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:method:authenticated:estimatedSizeBytes:]
// Type encoding: @108@0:8@16@24@32@40@48@56q64q72q80q88B96q100
// Implementation: 0x10b269e30

// +[SCRequest computeContextScoreWithContexts:currentContexts:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x1005a9c98

// +[SCRequest perfectMatchScoreWithDisplayContext:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10b26b0a4

// +[SCRequest mainPageScoreWithDisplayContext:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10b26b0ec

@end
