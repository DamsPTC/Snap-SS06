// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTLRService
// Superclass: NSObject
// Address: 0x1129ea150

@interface GTLRService

// Property: shouldFetchNextPages; attributes: TB,N,V_shouldFetchNextPages
// Property: APIKey; attributes: T@"NSString",C,N,V_apiKey
// Property: APIKeyRestrictionBundleID; attributes: T@"NSString",C,N,V_apiKeyRestrictionBundleID
// Property: authorizer; attributes: T@"<GTMFetcherAuthorizationProtocol>",&,N
// Property: retryEnabled; attributes: TB,N,GisRetryEnabled,V_retryEnabled
// Property: retryBlock; attributes: T@?,C,V_retryBlock
// Property: maxRetryInterval; attributes: Td,N,V_maxRetryInterval
// Property: testBlock; attributes: T@?,C,N,V_testBlock
// Property: serviceProperties; attributes: T@"NSDictionary",C,N
// Property: objectClassResolver; attributes: T@"<GTLRObjectClassResolver>",&,N,V_objectClassResolver
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_callbackQueue
// Property: allowInsecureQueries; attributes: TB,N,V_allowInsecureQueries
// Property: fetcherService; attributes: T@"GTMSessionFetcherService",&,N,V_fetcherService
// Property: userAgentAddition; attributes: T@"NSString",C,N,V_userAgentAddition
// Property: userAgent; attributes: T@"NSString",C,N
// Property: requestUserAgent; attributes: T@"NSString",R,N
// Property: additionalURLQueryParameters; attributes: T@"NSDictionary",C,V_additionalURLQueryParameters
// Property: additionalHTTPHeaders; attributes: T@"NSDictionary",C,V_additionalHTTPHeaders
// Property: rootURLString; attributes: T@"NSString",C,N,V_rootURLString
// Property: servicePath; attributes: T@"NSString",C,N,V_servicePath
// Property: resumableUploadPath; attributes: T@"NSString",C,N,V_resumableUploadPath
// Property: simpleUploadPath; attributes: T@"NSString",C,N,V_simpleUploadPath
// Property: batchPath; attributes: T@"NSString",C,N,V_batchPath
// Property: uploadProgressBlock; attributes: T@?,C,N,V_uploadProgressBlock
// Property: serviceUploadChunkSize; attributes: TQ,N
// Property: parseQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_parseQueue
// Property: prettyPrintQueryParameterNames; attributes: T@"NSArray",&,N,V_prettyPrintQueryParameterNames
// Property: dataWrapperRequired; attributes: TB,N,GisDataWrapperRequired,V_dataWrapperRequired

// -[GTLRService waitForTicket:timeout:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x104a19470

// -[GTLRService init]
// Type encoding: @16@0:8
// Implementation: 0x10097aef8

// -[GTLRService requestUserAgent]
// Type encoding: @16@0:8
// Implementation: 0x104a121a8

// -[GTLRService setMainBundleIDRestrictionWithAPIKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a123a8

// -[GTLRService requestForURL:ETag:httpMethod:ticket:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x104a12410

// -[GTLRService createRequestForURL:ETag:httpMethod:ticket:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104a12644

// -[GTLRService objectRequestForURL:object:contentType:contentLength:ETag:httpMethod:additionalHeaders:ticket:completion:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@72@?80
// Implementation: 0x104a127d8

// -[GTLRService handleRequestCompletion:contentType:contentLength:additionalHeaders:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104a12ab4

// -[GTLRService requestForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a12d70

// -[GTLRService requestForQuery:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a12f5c

// -[GTLRService requestForQuery:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a12fd8

// -[GTLRService handleRequestCompletion:forQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a13398

// -[GTLRService fetchObjectWithURL:objectClass:bodyObject:dataToPost:ETag:httpMethod:mayAuthorize:completionHandler:executingQuery:ticket:]
// Type encoding: @92@0:8@16#24@32@40@48@56B64@?68@76@84
// Implementation: 0x104a13608

// -[GTLRService handleObjectRequestCompletionWithRequest:objectClass:dataToPost:mayAuthorize:completionHandler:executingQuery:ticket:]
// Type encoding: v68@0:8@16#24@32B40@?44@52@60
// Implementation: 0x104a13d80

// -[GTLRService uploadFetcherWithRequest:fetcherService:params:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a1495c

// -[GTLRService executeBatchQuery:completionHandler:ticket:]
// Type encoding: @40@0:8@16@?24@32
// Implementation: 0x104a14b24

// -[GTLRService fetchObjectWithURL:objectClass:bodyObject:ETag:httpMethod:mayAuthorize:completionHandler:executingQuery:ticket:]
// Type encoding: @84@0:8@16#24@32@40@48B56@?60@68@76
// Implementation: 0x104a15354

// -[GTLRService invokeProgressCallbackForTicket:deliveredBytes:totalBytes:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x104a155b4

// -[GTLRService prepareToParseObjectForFetcher:executingQuery:ticket:error:defaultClass:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40#48@?56
// Implementation: 0x104a156fc

// -[GTLRService parseObjectFromDataOfFetcher:executingQuery:ticket:error:defaultClass:batchClassMap:hasSentParsingStartNotification:completionHandler:]
// Type encoding: v76@0:8@16@24@32@40#48@56B64@?68
// Implementation: 0x104a15990

// -[GTLRService handleParsedObjectForFetcher:executingQuery:ticket:error:parsedObject:hasSentParsingStartNotification:completionHandler:]
// Type encoding: v68@0:8@16@24@32@40@48B56@?60
// Implementation: 0x104a15d48

// -[GTLRService isContentTypeMultipart:boundary:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x104a16114

// -[GTLRService responsePartsWithMIMEParts:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a161ac

// -[GTLRService responsePartWithMIMEPart:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a16304

// -[GTLRService getResponseLineFromData:statusCode:statusString:]
// Type encoding: v40@0:8@16^q24^@32
// Implementation: 0x104a16868

// -[GTLRService batchResultWithResponseParts:batchClassMap:objectClassResolver:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a1698c

// -[GTLRService invokeBatchCompletionsWithTicket:batchQuery:batchResult:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104a16e40

// -[GTLRService simulateFetchWithTicket:testBlock:dataToPost:completionHandler:]
// Type encoding: v48@0:8@16@?24@32@?40
// Implementation: 0x104a170f8

// -[GTLRService simulatedUploadLengthForQuery:dataToPost:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x104a17600

// -[GTLRService nextPageQueryForQuery:result:ticket:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a17738

// -[GTLRService fetchNextPageWithQuery:completionHandler:ticket:]
// Type encoding: B40@0:8@16@?24@32
// Implementation: 0x104a17a5c

// -[GTLRService mergedNewResultObject:oldResultObject:forQuery:ticket:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104a17c08

// -[GTLRService URLFromQueryObject:usePartialPaths:includeServiceURLQueryParams:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x104a180c0

// -[GTLRService executeQuery:delegate:didFinishSelector:]
// Type encoding: @40@0:8@16@24:32
// Implementation: 0x104a185a0

// -[GTLRService executeQuery:completionHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x104a1879c

// -[GTLRService fetchObjectWithURL:objectClass:executionParameters:completionHandler:]
// Type encoding: @48@0:8@16#24@32@?40
// Implementation: 0x104a18ac8

// -[GTLRService userAgent]
// Type encoding: @16@0:8
// Implementation: 0x104a18b7c

// -[GTLRService setExactUserAgent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a18b84

// -[GTLRService setUserAgent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a18bb4

// -[GTLRService overrideRequestUserAgent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a18bf4

// -[GTLRService setServiceProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a18c24

// -[GTLRService serviceProperties]
// Type encoding: @16@0:8
// Implementation: 0x104a18c54

// -[GTLRService setAuthorizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a18c6c

// -[GTLRService authorizer]
// Type encoding: @16@0:8
// Implementation: 0x104a18cbc

// -[GTLRService serviceUploadChunkSize]
// Type encoding: Q16@0:8
// Implementation: 0x104a18d08

// -[GTLRService setServiceUploadChunkSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104a18d2c

// -[GTLRService setSurrogates:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a18d34

// -[GTLRService additionalHTTPHeaders]
// Type encoding: @16@0:8
// Implementation: 0x104a190c4

// -[GTLRService setAdditionalHTTPHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a190d0

// -[GTLRService additionalURLQueryParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a190d8

// -[GTLRService setAdditionalURLQueryParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a190e4

// -[GTLRService allowInsecureQueries]
// Type encoding: B16@0:8
// Implementation: 0x104a190ec

// -[GTLRService setAllowInsecureQueries:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a190f4

// -[GTLRService callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a190fc

// -[GTLRService setCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a19104

// -[GTLRService APIKey]
// Type encoding: @16@0:8
// Implementation: 0x104a19110

// -[GTLRService setAPIKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a19118

// -[GTLRService APIKeyRestrictionBundleID]
// Type encoding: @16@0:8
// Implementation: 0x104a19120

// -[GTLRService setAPIKeyRestrictionBundleID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a19128

// -[GTLRService batchPath]
// Type encoding: @16@0:8
// Implementation: 0x104a19130

// -[GTLRService setBatchPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10097b708

// -[GTLRService isDataWrapperRequired]
// Type encoding: B16@0:8
// Implementation: 0x104a19138

// -[GTLRService setDataWrapperRequired:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a19140

// -[GTLRService fetcherService]
// Type encoding: @16@0:8
// Implementation: 0x104a19148

// -[GTLRService setFetcherService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a19150

// -[GTLRService maxRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a1915c

// -[GTLRService setMaxRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a19164

// -[GTLRService parseQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a1916c

// -[GTLRService setParseQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a19174

// -[GTLRService prettyPrintQueryParameterNames]
// Type encoding: @16@0:8
// Implementation: 0x104a19180

// -[GTLRService setPrettyPrintQueryParameterNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x10097b710

// -[GTLRService resumableUploadPath]
// Type encoding: @16@0:8
// Implementation: 0x104a19188

// -[GTLRService setResumableUploadPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a19190

// -[GTLRService retryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a19198

// -[GTLRService setRetryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a191a4

// -[GTLRService isRetryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104a191ac

// -[GTLRService setRetryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a191b4

// -[GTLRService rootURLString]
// Type encoding: @16@0:8
// Implementation: 0x104a191bc

// -[GTLRService setRootURLString:]
// Type encoding: v24@0:8@16
// Implementation: 0x10097b700

// -[GTLRService servicePath]
// Type encoding: @16@0:8
// Implementation: 0x104a191c4

// -[GTLRService setServicePath:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a191cc

// -[GTLRService shouldFetchNextPages]
// Type encoding: B16@0:8
// Implementation: 0x104a191d4

// -[GTLRService setShouldFetchNextPages:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a191dc

// -[GTLRService simpleUploadPath]
// Type encoding: @16@0:8
// Implementation: 0x104a191e4

// -[GTLRService setSimpleUploadPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a191ec

// -[GTLRService objectClassResolver]
// Type encoding: @16@0:8
// Implementation: 0x104a191f4

// -[GTLRService setObjectClassResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a191fc

// -[GTLRService testBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a19208

// -[GTLRService setTestBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a19210

// -[GTLRService uploadProgressBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a19218

// -[GTLRService setUploadProgressBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a19220

// -[GTLRService userAgentAddition]
// Type encoding: @16@0:8
// Implementation: 0x104a19228

// -[GTLRService setUserAgentAddition:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a19230

// -[GTLRService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a19238

// +[GTLRService mockServiceWithFakedObject:fakedError:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a19358

// +[GTLRService kindStringToClassMap]
// Type encoding: @16@0:8
// Implementation: 0x10097b5f8

// +[GTLRService defaultServiceUploadChunkSize]
// Type encoding: Q16@0:8
// Implementation: 0x104a18d00

// +[GTLRService URLWithString:queryParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a18dbc

@end
