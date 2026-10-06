// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTLRServiceTicket
// Superclass: NSObject
// Address: 0x1129ea178

@interface GTLRServiceTicket

// Property: originalQuery; attributes: T@"<GTLRQueryProtocol>",&,V_originalQuery
// Property: executingQuery; attributes: T@"<GTLRQueryProtocol>",&,V_executingQuery
// Property: objectFetcher; attributes: T@"GTMSessionFetcher",&,V_objectFetcher
// Property: fetchRequest; attributes: T@"NSURLRequest",&,N,V_fetchRequest
// Property: postedObject; attributes: T@"GTLRObject",&,N,V_postedObject
// Property: fetchedObject; attributes: T@"GTLRObject",&,N,V_fetchedObject
// Property: fetchError; attributes: T@"NSError",&,N,V_fetchError
// Property: hasCalledCallback; attributes: TB,N,V_hasCalledCallback
// Property: pagesFetchedCounter; attributes: TQ,N,V_pagesFetchedCounter
// Property: objectClassResolver; attributes: T@"<GTLRObjectClassResolver>",&,V_objectClassResolver
// Property: allowInsecureQueries; attributes: TB,N,V_allowInsecureQueries
// Property: fetcherService; attributes: T@"GTMSessionFetcherService",&,N,V_fetcherService
// Property: authorizer; attributes: T@"<GTMFetcherAuthorizationProtocol>",&,N,V_authorizer
// Property: retryEnabled; attributes: TB,N,GisRetryEnabled,V_retryEnabled
// Property: maxRetryInterval; attributes: Td,N,V_maxRetryInterval
// Property: retryBlock; attributes: T@?,C,N,V_retryBlock
// Property: uploadProgressBlock; attributes: T@?,C,N
// Property: testBlock; attributes: T@?,C,N,V_testBlock
// Property: shouldFetchNextPages; attributes: TB,N,V_shouldFetchNextPages
// Property: backgroundTaskIdentifier; attributes: TQ,N,V_backgroundTaskIdentifier
// Property: callbackGroup; attributes: T@"NSObject<OS_dispatch_group>",R,N,V_callbackGroup
// Property: service; attributes: T@"GTLRService",R
// Property: creationDate; attributes: T@"NSDate",R,V_creationDate
// Property: uploadPaused; attributes: TB,R,N,GisUploadPaused
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,V_callbackQueue
// Property: APIKey; attributes: T@"NSString",R,V_apiKey
// Property: APIKeyRestrictionBundleID; attributes: T@"NSString",R,V_apiKeyRestrictionBundleID
// Property: statusCode; attributes: Tq,R,N
// Property: cancelled; attributes: TB,R,GisCancelled,V_cancelled
// Property: ticketProperties; attributes: T@"NSDictionary",R,N

// -[GTLRServiceTicket initWithService:executionParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a195a8

// -[GTLRServiceTicket description]
// Type encoding: @16@0:8
// Implementation: 0x104a19a90

// -[GTLRServiceTicket postNotificationOnMainThreadWithName:object:userInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a19bf0

// -[GTLRServiceTicket pauseUpload]
// Type encoding: v16@0:8
// Implementation: 0x104a19da4

// -[GTLRServiceTicket resumeUpload]
// Type encoding: v16@0:8
// Implementation: 0x104a19de8

// -[GTLRServiceTicket isUploadPaused]
// Type encoding: B16@0:8
// Implementation: 0x104a19e2c

// -[GTLRServiceTicket isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x104a19e6c

// -[GTLRServiceTicket cancelTicket]
// Type encoding: v16@0:8
// Implementation: 0x104a19ea8

// -[GTLRServiceTicket startBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x104a1a0b0

// -[GTLRServiceTicket endBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x104a1a34c

// -[GTLRServiceTicket releaseTicketCallbacks]
// Type encoding: v16@0:8
// Implementation: 0x104a1a3fc

// -[GTLRServiceTicket notifyStarting:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a1a428

// -[GTLRServiceTicket service]
// Type encoding: @16@0:8
// Implementation: 0x104a1a48c

// -[GTLRServiceTicket setObjectFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a494

// -[GTLRServiceTicket objectFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104a1a4ec

// -[GTLRServiceTicket ticketProperties]
// Type encoding: @16@0:8
// Implementation: 0x104a1a530

// -[GTLRServiceTicket uploadProgressBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a1a548

// -[GTLRServiceTicket setUploadProgressBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a1a560

// -[GTLRServiceTicket updateObjectFetcherProgressCallbacks]
// Type encoding: v16@0:8
// Implementation: 0x104a1a5a8

// -[GTLRServiceTicket statusCode]
// Type encoding: q16@0:8
// Implementation: 0x104a1a660

// -[GTLRServiceTicket queryForRequestID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a1a668

// -[GTLRServiceTicket APIKey]
// Type encoding: @16@0:8
// Implementation: 0x104a1a6e8

// -[GTLRServiceTicket APIKeyRestrictionBundleID]
// Type encoding: @16@0:8
// Implementation: 0x104a1a6f4

// -[GTLRServiceTicket allowInsecureQueries]
// Type encoding: B16@0:8
// Implementation: 0x104a1a700

// -[GTLRServiceTicket setAllowInsecureQueries:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a1a708

// -[GTLRServiceTicket authorizer]
// Type encoding: @16@0:8
// Implementation: 0x104a1a710

// -[GTLRServiceTicket setAuthorizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a718

// -[GTLRServiceTicket callbackGroup]
// Type encoding: @16@0:8
// Implementation: 0x104a1a724

// -[GTLRServiceTicket callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a1a72c

// -[GTLRServiceTicket creationDate]
// Type encoding: @16@0:8
// Implementation: 0x104a1a738

// -[GTLRServiceTicket executingQuery]
// Type encoding: @16@0:8
// Implementation: 0x104a1a744

// -[GTLRServiceTicket setExecutingQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a750

// -[GTLRServiceTicket fetchedObject]
// Type encoding: @16@0:8
// Implementation: 0x104a1a758

// -[GTLRServiceTicket setFetchedObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a760

// -[GTLRServiceTicket fetchError]
// Type encoding: @16@0:8
// Implementation: 0x104a1a76c

// -[GTLRServiceTicket setFetchError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a774

// -[GTLRServiceTicket fetchRequest]
// Type encoding: @16@0:8
// Implementation: 0x104a1a780

// -[GTLRServiceTicket setFetchRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a788

// -[GTLRServiceTicket fetcherService]
// Type encoding: @16@0:8
// Implementation: 0x104a1a794

// -[GTLRServiceTicket setFetcherService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a79c

// -[GTLRServiceTicket hasCalledCallback]
// Type encoding: B16@0:8
// Implementation: 0x104a1a7a8

// -[GTLRServiceTicket setHasCalledCallback:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a1a7b0

// -[GTLRServiceTicket maxRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a1a7b8

// -[GTLRServiceTicket setMaxRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a1a7c0

// -[GTLRServiceTicket originalQuery]
// Type encoding: @16@0:8
// Implementation: 0x104a1a7c8

// -[GTLRServiceTicket setOriginalQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a7d4

// -[GTLRServiceTicket pagesFetchedCounter]
// Type encoding: Q16@0:8
// Implementation: 0x104a1a7dc

// -[GTLRServiceTicket setPagesFetchedCounter:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104a1a7e4

// -[GTLRServiceTicket postedObject]
// Type encoding: @16@0:8
// Implementation: 0x104a1a7ec

// -[GTLRServiceTicket setPostedObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a7f4

// -[GTLRServiceTicket retryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a1a800

// -[GTLRServiceTicket setRetryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a1a808

// -[GTLRServiceTicket isRetryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104a1a810

// -[GTLRServiceTicket setRetryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a1a818

// -[GTLRServiceTicket shouldFetchNextPages]
// Type encoding: B16@0:8
// Implementation: 0x104a1a820

// -[GTLRServiceTicket setShouldFetchNextPages:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a1a828

// -[GTLRServiceTicket objectClassResolver]
// Type encoding: @16@0:8
// Implementation: 0x104a1a830

// -[GTLRServiceTicket setObjectClassResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1a83c

// -[GTLRServiceTicket testBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a1a844

// -[GTLRServiceTicket setTestBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a1a84c

// -[GTLRServiceTicket backgroundTaskIdentifier]
// Type encoding: Q16@0:8
// Implementation: 0x104a1a854

// -[GTLRServiceTicket setBackgroundTaskIdentifier:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104a1a85c

// -[GTLRServiceTicket .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a1a864

// +[GTLRServiceTicket fetcherUIApplication]
// Type encoding: @16@0:8
// Implementation: 0x104a19f9c

@end
