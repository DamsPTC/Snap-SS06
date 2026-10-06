// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionNetworkingAPIClient
// Superclass: AFHTTPClient
// Address: 0xad9f90

@interface SCExtensionNetworkingAPIClient

// Property: session; attributes: T@"NSURLSession",&,N,V_session
// Property: requestInfoKeyedByTasks; attributes: T@"NSMutableDictionary",&,N,V_requestInfoKeyedByTasks
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExtensionNetworkingAPIClient _initWithBaseURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x586a14

// -[SCExtensionNetworkingAPIClient requestWithMethod:path:parameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x586c94

// -[SCExtensionNetworkingAPIClient makeNoAuthGetRequestWithURL:additionalHttpHeaders:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x586d70

// -[SCExtensionNetworkingAPIClient makeNoAuthGetRequestWithURL:additionalHttpHeaders:timeoutInMs:completionBlock:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x586d7c

// -[SCExtensionNetworkingAPIClient makeNoAuthPutRequestWithURL:additionalHttpHeaders:data:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x586d98

// -[SCExtensionNetworkingAPIClient makeNoAuthPostRequestWithURL:additionalHttpHeaders:data:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x586db4

// -[SCExtensionNetworkingAPIClient makeNoAuthPostRequestWithURL:additionalHttpHeaders:data:timeoutInMs:completionBlock:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x586dc0

// -[SCExtensionNetworkingAPIClient makeNoAuthPostRequestUsingRetryStrategy:URL:additionalHttpHeaders:data:timeoutInMs:completionBlock:]
// Type encoding: v64@0:8q16@24@32@40Q48@?56
// Implementation: 0x586ddc

// -[SCExtensionNetworkingAPIClient _makeNoAuthRequestWithURL:requestType:additionalHttpHeaders:data:timeoutInMs:completionBlock:]
// Type encoding: v64@0:8@16@24@32@40Q48@?56
// Implementation: 0x586ebc

// -[SCExtensionNetworkingAPIClient _makeNoRetryNoAuthRequestWithURL:requestType:additionalHttpHeaders:data:timeoutInMs:completionBlock:]
// Type encoding: v64@0:8@16@24@32@40Q48@?56
// Implementation: 0x586ed4

// -[SCExtensionNetworkingAPIClient _makeRetriableNoAuthRequestWithURL:requestType:additionalHttpHeaders:data:timeoutInMs:completionBlock:]
// Type encoding: v64@0:8@16@24@32@40Q48@?56
// Implementation: 0x58704c

// -[SCExtensionNetworkingAPIClient makeNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:completionBlock:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x5871d8

// -[SCExtensionNetworkingAPIClient _makeNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:extensionRequestParams:completionBlock:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x5871fc

// -[SCExtensionNetworkingAPIClient _makeRetriableNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:extensionRequestParams:completionBlock:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x587360

// -[SCExtensionNetworkingAPIClient makePostRequestWithEndpoint:parameters:authToken:username:userId:successBlock:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x5874d8

// -[SCExtensionNetworkingAPIClient makePostRequestWithEndpoint:parameters:additionalHttpHeaders:authToken:username:userId:successBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x587530

// -[SCExtensionNetworkingAPIClient makeRetriablePostRequestWithEndpoint:parameters:additionalHttpHeaders:authToken:username:userId:successBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x587808

// -[SCExtensionNetworkingAPIClient makePostRequestWithEndpoint:data:isMultipart:parameters:additionalHttpHeaders:authToken:username:userId:successBlock:]
// Type encoding: v84@0:8@16@24B32@36@44@52@60@68@?76
// Implementation: 0x587ab8

// -[SCExtensionNetworkingAPIClient addInfo:task:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x587e4c

// -[SCExtensionNetworkingAPIClient removeInfoForTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x587efc

// -[SCExtensionNetworkingAPIClient infoForTask:]
// Type encoding: @24@0:8@16
// Implementation: 0x587f8c

// -[SCExtensionNetworkingAPIClient updateSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x588030

// -[SCExtensionNetworkingAPIClient dispatchWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x588034

// -[SCExtensionNetworkingAPIClient URLSession:didReceiveChallenge:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x588050

// -[SCExtensionNetworkingAPIClient logTaskStarted:request:taskId:extensionRequestParams:requestCompleteBlock:downloadCompleteBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x588118

// -[SCExtensionNetworkingAPIClient URLSession:task:didFinishCollectingMetrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x588514

// -[SCExtensionNetworkingAPIClient URLSession:task:didCompleteWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x588d0c

// -[SCExtensionNetworkingAPIClient URLSession:dataTask:didReceiveData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x58915c

// -[SCExtensionNetworkingAPIClient URLSession:dataTask:didReceiveResponse:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x589218

// -[SCExtensionNetworkingAPIClient URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x589228

// -[SCExtensionNetworkingAPIClient URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x58922c

// -[SCExtensionNetworkingAPIClient URLSession:downloadTask:didFinishDownloadingToURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x589230

// -[SCExtensionNetworkingAPIClient retriableDataTaskSendRequest:taskId:retryIntervalSecs:maxRetries:currentTryNumber:completionBlock:]
// Type encoding: v64@0:8@16@24d32Q40Q48@?56
// Implementation: 0x58937c

// -[SCExtensionNetworkingAPIClient retriableDownloadTaskRequest:taskId:retryIntervalSecs:maxRetries:currentTryNumber:extensionRequestParams:completionBlock:]
// Type encoding: v72@0:8@16@24d32Q40Q48@56@?64
// Implementation: 0x589748

// -[SCExtensionNetworkingAPIClient _dataTaskWithRequest:taskId:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x589b68

// -[SCExtensionNetworkingAPIClient _downloadTaskWithRequest:taskId:extensionRequestParams:downloadCompleteBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x589e84

// -[SCExtensionNetworkingAPIClient makeNoAuthDownloadToDiskRequestWithURL:additionalHttpHeaders:timeoutInMs:extensionRequestParams:completionBlock:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x58a1b4

// -[SCExtensionNetworkingAPIClient session]
// Type encoding: @16@0:8
// Implementation: 0x58a1cc

// -[SCExtensionNetworkingAPIClient setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x58a1dc

// -[SCExtensionNetworkingAPIClient requestInfoKeyedByTasks]
// Type encoding: @16@0:8
// Implementation: 0x58a21c

// -[SCExtensionNetworkingAPIClient setRequestInfoKeyedByTasks:]
// Type encoding: v24@0:8@16
// Implementation: 0x58a22c

// -[SCExtensionNetworkingAPIClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x58a26c

// +[SCExtensionNetworkingAPIClient sharedClient]
// Type encoding: @16@0:8
// Implementation: 0x5862f8

// +[SCExtensionNetworkingAPIClient sharedAuthServiceClient]
// Type encoding: @16@0:8
// Implementation: 0x586410

// +[SCExtensionNetworkingAPIClient sharedApiGatewayServiceClient]
// Type encoding: @16@0:8
// Implementation: 0x586528

// +[SCExtensionNetworkingAPIClient sharedGrapheneServiceClient]
// Type encoding: @16@0:8
// Implementation: 0x58661c

// +[SCExtensionNetworkingAPIClient sharedGCPServiceClient]
// Type encoding: @16@0:8
// Implementation: 0x58670c

// +[SCExtensionNetworkingAPIClient isRequestSuccess:error:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x5867fc

// +[SCExtensionNetworkingAPIClient connectedToWifi]
// Type encoding: B16@0:8
// Implementation: 0x58685c

// +[SCExtensionNetworkingAPIClient setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x5868f0

// +[SCExtensionNetworkingAPIClient enableGrpcLogging]
// Type encoding: v16@0:8
// Implementation: 0x586940

// +[SCExtensionNetworkingAPIClient enableDefaultRetryOnFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x586980

// +[SCExtensionNetworkingAPIClient enableNetworkClientConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x5869e8

// +[SCExtensionNetworkingAPIClient isLoggingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x586a08

// +[SCExtensionNetworkingAPIClient disableLogging]
// Type encoding: v16@0:8
// Implementation: 0x588044

@end
