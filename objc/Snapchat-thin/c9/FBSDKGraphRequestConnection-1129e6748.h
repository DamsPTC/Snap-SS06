// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKGraphRequestConnection
// Superclass: NSObject
// Address: 0x1129e6748

@interface FBSDKGraphRequestConnection

// Property: logger; attributes: T@"FBSDKLogger",&,N,V_logger
// Property: requests; attributes: T@"NSMutableArray",&,N,V_requests
// Property: state; attributes: TQ,N,V_state
// Property: requestStartTime; attributes: TQ,N,V_requestStartTime
// Property: session; attributes: T@"<FBSDKURLSessionProxying>",&,N,V_session
// Property: overriddenVersionPart; attributes: T@"NSString",&,N,V_overriddenVersionPart
// Property: expectingResults; attributes: TQ,N,V_expectingResults
// Property: recoveringRequestMetadata; attributes: T@"FBSDKGraphRequestMetadata",&,N,V_recoveringRequestMetadata
// Property: errorRecoveryProcessor; attributes: T@"FBSDKGraphErrorRecoveryProcessor",&,N,V_errorRecoveryProcessor
// Property: delegate; attributes: T@"<FBSDKGraphRequestConnectionDelegate>",W,N,V_delegate
// Property: timeout; attributes: Td,N,V_timeout
// Property: urlResponse; attributes: T@"NSHTTPURLResponse",R,&,N,V_urlResponse
// Property: delegateQueue; attributes: T@"NSOperationQueue",&,N,V_delegateQueue
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKGraphRequestConnection init]
// Type encoding: @16@0:8
// Implementation: 0x1049638f4

// -[FBSDKGraphRequestConnection dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1049639d8

// -[FBSDKGraphRequestConnection addRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104963a54

// -[FBSDKGraphRequestConnection addRequest:name:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104963a64

// -[FBSDKGraphRequestConnection addRequest:parameters:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104963b68

// -[FBSDKGraphRequestConnection shouldPiggyBackRequests]
// Type encoding: B16@0:8
// Implementation: 0x104963d08

// -[FBSDKGraphRequestConnection cancel]
// Type encoding: v16@0:8
// Implementation: 0x104963e74

// -[FBSDKGraphRequestConnection overrideGraphAPIVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x104963eb4

// -[FBSDKGraphRequestConnection start]
// Type encoding: v16@0:8
// Implementation: 0x104963eec

// -[FBSDKGraphRequestConnection setDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049643c4

// -[FBSDKGraphRequestConnection addRequest:toBatch:attachments:batchToken:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104964458

// -[FBSDKGraphRequestConnection appendAttachments:toBody:addFormData:logger:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x104964878

// -[FBSDKGraphRequestConnection appendJSONRequests:toBody:andNameAttachments:logger:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104964ab0

// -[FBSDKGraphRequestConnection _shouldWarnOnMissingFieldsParam:]
// Type encoding: B24@0:8@16
// Implementation: 0x104964d9c

// -[FBSDKGraphRequestConnection _validateFieldsParamForGetRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x104964e30

// -[FBSDKGraphRequestConnection requestWithBatch:timeout:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1049650c4

// -[FBSDKGraphRequestConnection addBody:toPostRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1049656a8

// -[FBSDKGraphRequestConnection getURLParamsForRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104965764

// -[FBSDKGraphRequestConnection urlStringForRequestInBatch:]
// Type encoding: @24@0:8@16
// Implementation: 0x104965814

// -[FBSDKGraphRequestConnection urlStringForSingleRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104965914

// -[FBSDKGraphRequestConnection completeFBSDKURLSessionWithResponse:data:networkError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104965b64

// -[FBSDKGraphRequestConnection parseJSONResponse:error:statusCode:]
// Type encoding: @40@0:8@16^@24q32
// Implementation: 0x104965f2c

// -[FBSDKGraphRequestConnection parseJSONOrOtherwise:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x104966638

// -[FBSDKGraphRequestConnection _completeWithResults:networkError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1049667c8

// -[FBSDKGraphRequestConnection processResultBody:error:metadata:canNotifyDelegate:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x104966ce8

// -[FBSDKGraphRequestConnection processResultDebugDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496730c

// -[FBSDKGraphRequestConnection errorFromResult:request:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1049675b4

// -[FBSDKGraphRequestConnection logAndInvokeHandler:error:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x104967cc4

// -[FBSDKGraphRequestConnection logAndInvokeHandler:response:responseData:requestStartTime:]
// Type encoding: v48@0:8@?16@24@32Q40
// Implementation: 0x104967dcc

// -[FBSDKGraphRequestConnection invokeHandler:error:response:responseData:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x104967f58

// -[FBSDKGraphRequestConnection logMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104968080

// -[FBSDKGraphRequestConnection taskDidCompleteWithResponse:data:requestStartTime:handler:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x10496809c

// -[FBSDKGraphRequestConnection _taskDidCompleteWithError:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104968144

// -[FBSDKGraphRequestConnection logRequest:bodyLength:bodyLogger:attachmentLogger:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x104968238

// -[FBSDKGraphRequestConnection accessTokenWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049685d4

// -[FBSDKGraphRequestConnection registerTokenToOmitFromLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x104968818

// -[FBSDKGraphRequestConnection raiseExceptionIfMissingClientToken]
// Type encoding: v16@0:8
// Implementation: 0x1049688b4

// -[FBSDKGraphRequestConnection userAgent]
// Type encoding: @16@0:8
// Implementation: 0x1049689d8

// -[FBSDKGraphRequestConnection URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x104968bc0

// -[FBSDKGraphRequestConnection processorDidAttemptRecovery:didRecover:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104968c34

// -[FBSDKGraphRequestConnection description]
// Type encoding: @16@0:8
// Implementation: 0x104968fb8

// -[FBSDKGraphRequestConnection delegate]
// Type encoding: @16@0:8
// Implementation: 0x104969198

// -[FBSDKGraphRequestConnection setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049691b0

// -[FBSDKGraphRequestConnection timeout]
// Type encoding: d16@0:8
// Implementation: 0x1049691bc

// -[FBSDKGraphRequestConnection setTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x1049691c4

// -[FBSDKGraphRequestConnection urlResponse]
// Type encoding: @16@0:8
// Implementation: 0x1049691cc

// -[FBSDKGraphRequestConnection delegateQueue]
// Type encoding: @16@0:8
// Implementation: 0x1049691d4

// -[FBSDKGraphRequestConnection logger]
// Type encoding: @16@0:8
// Implementation: 0x1049691dc

// -[FBSDKGraphRequestConnection setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049691e4

// -[FBSDKGraphRequestConnection requests]
// Type encoding: @16@0:8
// Implementation: 0x1049691f0

// -[FBSDKGraphRequestConnection setRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049691f8

// -[FBSDKGraphRequestConnection state]
// Type encoding: Q16@0:8
// Implementation: 0x104969204

// -[FBSDKGraphRequestConnection setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10496920c

// -[FBSDKGraphRequestConnection requestStartTime]
// Type encoding: Q16@0:8
// Implementation: 0x104969214

// -[FBSDKGraphRequestConnection setRequestStartTime:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10496921c

// -[FBSDKGraphRequestConnection session]
// Type encoding: @16@0:8
// Implementation: 0x104969224

// -[FBSDKGraphRequestConnection setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496922c

// -[FBSDKGraphRequestConnection overriddenVersionPart]
// Type encoding: @16@0:8
// Implementation: 0x104969238

// -[FBSDKGraphRequestConnection setOverriddenVersionPart:]
// Type encoding: v24@0:8@16
// Implementation: 0x104969240

// -[FBSDKGraphRequestConnection expectingResults]
// Type encoding: Q16@0:8
// Implementation: 0x10496924c

// -[FBSDKGraphRequestConnection setExpectingResults:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104969254

// -[FBSDKGraphRequestConnection recoveringRequestMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10496925c

// -[FBSDKGraphRequestConnection setRecoveringRequestMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x104969264

// -[FBSDKGraphRequestConnection errorRecoveryProcessor]
// Type encoding: @16@0:8
// Implementation: 0x104969270

// -[FBSDKGraphRequestConnection setErrorRecoveryProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x104969278

// -[FBSDKGraphRequestConnection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104969284

// +[FBSDKGraphRequestConnection hasBeenConfigured]
// Type encoding: B16@0:8
// Implementation: 0x1049635f4

// +[FBSDKGraphRequestConnection setHasBeenConfigured:]
// Type encoding: v20@0:8B16
// Implementation: 0x104963600

// +[FBSDKGraphRequestConnection sessionProxyFactory]
// Type encoding: @16@0:8
// Implementation: 0x10496360c

// +[FBSDKGraphRequestConnection setSessionProxyFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104963618

// +[FBSDKGraphRequestConnection errorConfigurationProvider]
// Type encoding: @16@0:8
// Implementation: 0x104963628

// +[FBSDKGraphRequestConnection setErrorConfigurationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104963634

// +[FBSDKGraphRequestConnection piggybackManager]
// Type encoding: #16@0:8
// Implementation: 0x104963644

// +[FBSDKGraphRequestConnection setPiggybackManager:]
// Type encoding: v24@0:8#16
// Implementation: 0x104963650

// +[FBSDKGraphRequestConnection settings]
// Type encoding: @16@0:8
// Implementation: 0x10496365c

// +[FBSDKGraphRequestConnection setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x104963668

// +[FBSDKGraphRequestConnection graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x104963678

// +[FBSDKGraphRequestConnection setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104963684

// +[FBSDKGraphRequestConnection eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x104963694

// +[FBSDKGraphRequestConnection setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049636a0

// +[FBSDKGraphRequestConnection operatingSystemVersionComparer]
// Type encoding: @16@0:8
// Implementation: 0x1049636b0

// +[FBSDKGraphRequestConnection setOperatingSystemVersionComparer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049636bc

// +[FBSDKGraphRequestConnection macCatalystDeterminator]
// Type encoding: @16@0:8
// Implementation: 0x1049636cc

// +[FBSDKGraphRequestConnection setMacCatalystDeterminator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049636d8

// +[FBSDKGraphRequestConnection accessTokenProvider]
// Type encoding: #16@0:8
// Implementation: 0x1049636e8

// +[FBSDKGraphRequestConnection setAccessTokenProvider:]
// Type encoding: v24@0:8#16
// Implementation: 0x1049636f4

// +[FBSDKGraphRequestConnection errorFactory]
// Type encoding: @16@0:8
// Implementation: 0x104963700

// +[FBSDKGraphRequestConnection setErrorFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496370c

// +[FBSDKGraphRequestConnection authenticationTokenProvider]
// Type encoding: #16@0:8
// Implementation: 0x10496371c

// +[FBSDKGraphRequestConnection setAuthenticationTokenProvider:]
// Type encoding: v24@0:8#16
// Implementation: 0x104963728

// +[FBSDKGraphRequestConnection configureWithURLSessionProxyFactory:errorConfigurationProvider:piggybackManager:settings:graphRequestConnectionFactory:eventLogger:operatingSystemVersionComparer:macCatalystDeterminator:accessTokenProvider:errorFactory:authenticationTokenProvider:]
// Type encoding: v104@0:8@16@24@32@40@48@56@64@72#80@88#96
// Implementation: 0x104963734

// +[FBSDKGraphRequestConnection setDefaultConnectionTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x104963a34

// +[FBSDKGraphRequestConnection defaultConnectionTimeout]
// Type encoding: d16@0:8
// Implementation: 0x104963a48

// +[FBSDKGraphRequestConnection setCanMakeRequests]
// Type encoding: v16@0:8
// Implementation: 0x104964420

// +[FBSDKGraphRequestConnection canMakeRequests]
// Type encoding: B16@0:8
// Implementation: 0x104964430

// +[FBSDKGraphRequestConnection setDidFetchDomainConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10496443c

// +[FBSDKGraphRequestConnection didFetchDomainConfiguration]
// Type encoding: B16@0:8
// Implementation: 0x10496444c

@end
