// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMSessionFetcherService
// Superclass: NSObject
// Address: 0x1129ed238

@interface GTMSessionFetcherService

// Property: delayedFetchersByHost; attributes: T@"NSDictionary",&
// Property: runningFetchersByHost; attributes: T@"NSDictionary",&
// Property: decoratorsPointerArray; attributes: T@"NSPointerArray",R,V_decoratorsPointerArray
// Property: maxRunningFetchersPerHost; attributes: TQ,V_maxRunningFetchersPerHost
// Property: configuration; attributes: T@"NSURLSessionConfiguration",&,V_configuration
// Property: configurationBlock; attributes: T@?,C,V_configurationBlock
// Property: cookieStorage; attributes: T@"NSHTTPCookieStorage",&,V_cookieStorage
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",&
// Property: challengeBlock; attributes: T@?,C,V_challengeBlock
// Property: credential; attributes: T@"NSURLCredential",&,V_credential
// Property: proxyCredential; attributes: T@"NSURLCredential",&,V_proxyCredential
// Property: allowedInsecureSchemes; attributes: T@"NSArray",C,V_allowedInsecureSchemes
// Property: allowLocalhostRequest; attributes: TB,V_allowLocalhostRequest
// Property: allowInvalidServerCertificates; attributes: TB,V_allowInvalidServerCertificates
// Property: retryEnabled; attributes: TB,GisRetryEnabled,V_retryEnabled
// Property: retryBlock; attributes: T@?,C,V_retryBlock
// Property: maxRetryInterval; attributes: Td,V_maxRetryInterval
// Property: minRetryInterval; attributes: Td,V_minRetryInterval
// Property: properties; attributes: T@"NSDictionary",C,V_properties
// Property: metricsCollectionBlock; attributes: T@?,C,V_metricsCollectionBlock
// Property: stopFetchingTriggersCompletionHandler; attributes: TB,V_stopFetchingTriggersCompletionHandler
// Property: skipBackgroundTask; attributes: TB,V_skipBackgroundTask
// Property: userAgentProvider; attributes: T@"<GTMUserAgentProvider>",&,V_userAgentProvider
// Property: userAgent; attributes: T@"NSString",C
// Property: authorizer; attributes: T@"<GTMFetcherAuthorizationProtocol>",&
// Property: delegateQueue; attributes: T@"NSOperationQueue",R
// Property: sessionDelegateQueue; attributes: T@"NSOperationQueue",&
// Property: reuseSession; attributes: TB
// Property: unusedSessionTimeout; attributes: Td,V_unusedSessionTimeout
// Property: decorators; attributes: T@"NSArray",R
// Property: testBlock; attributes: T@?,C,V_testBlock
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GTMSessionFetcherService waitForCompletionOfAllFetchersWithTimeout:]
// Type encoding: B24@0:8d16
// Implementation: 0x104a5ac8c

// -[GTMSessionFetcherService init]
// Type encoding: @16@0:8
// Implementation: 0x10097b040

// -[GTMSessionFetcherService dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104a581dc

// -[GTMSessionFetcherService serialQueueForNewFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a58228

// -[GTMSessionFetcherService fetcherWithRequest:fetcherClass:]
// Type encoding: @32@0:8@16#24
// Implementation: 0x104a5828c

// -[GTMSessionFetcherService fetcherWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a585cc

// -[GTMSessionFetcherService fetcherWithURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a58634

// -[GTMSessionFetcherService fetcherWithURLString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a5868c

// -[GTMSessionFetcherService addDecorator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a586e4

// -[GTMSessionFetcherService decorators]
// Type encoding: @16@0:8
// Implementation: 0x104a5877c

// -[GTMSessionFetcherService removeDecorator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a587dc

// -[GTMSessionFetcherService session]
// Type encoding: @16@0:8
// Implementation: 0x104a58970

// -[GTMSessionFetcherService sessionWithCreationBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104a589d0

// -[GTMSessionFetcherService sessionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x104a58b24

// -[GTMSessionFetcherService addRunningFetcher:forHost:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a58b68

// -[GTMSessionFetcherService addDelayedFetcher:forHost:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a58c24

// -[GTMSessionFetcherService isDelayingFetcher:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a58ce0

// -[GTMSessionFetcherService fetcherShouldBeginFetching:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a58df0

// -[GTMSessionFetcherService startFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a58fac

// -[GTMSessionFetcherService delegateDispatcherForFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a58fc0

// -[GTMSessionFetcherService fetcherDidBeginFetching:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5903c

// -[GTMSessionFetcherService stopFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a59110

// -[GTMSessionFetcherService fetcherDidStop:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a59118

// -[GTMSessionFetcherService fetcherDidStop:callbacksPending:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104a59120

// -[GTMSessionFetcherService numberOfFetchers]
// Type encoding: Q16@0:8
// Implementation: 0x104a59504

// -[GTMSessionFetcherService numberOfRunningFetchers]
// Type encoding: Q16@0:8
// Implementation: 0x104a59534

// -[GTMSessionFetcherService numberOfDelayedFetchers]
// Type encoding: Q16@0:8
// Implementation: 0x104a596a0

// -[GTMSessionFetcherService issuedFetchers]
// Type encoding: @16@0:8
// Implementation: 0x104a5980c

// -[GTMSessionFetcherService issuedFetchersWithRequestURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a59914

// -[GTMSessionFetcherService stopAllFetchers]
// Type encoding: v16@0:8
// Implementation: 0x104a59ad0

// -[GTMSessionFetcherService stoppedAllFetchersDate]
// Type encoding: @16@0:8
// Implementation: 0x104a59e10

// -[GTMSessionFetcherService reuseSession]
// Type encoding: B16@0:8
// Implementation: 0x104a59e54

// -[GTMSessionFetcherService setReuseSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a59e98

// -[GTMSessionFetcherService resetSession]
// Type encoding: v16@0:8
// Implementation: 0x104a59f30

// -[GTMSessionFetcherService resetSessionInternal]
// Type encoding: v16@0:8
// Implementation: 0x104a59f94

// -[GTMSessionFetcherService resetSessionForDispatcherDiscardTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a59fe4

// -[GTMSessionFetcherService unusedSessionTimeout]
// Type encoding: d16@0:8
// Implementation: 0x104a5a084

// -[GTMSessionFetcherService setUnusedSessionTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a5a0c8

// -[GTMSessionFetcherService abandonDispatcher]
// Type encoding: v16@0:8
// Implementation: 0x104a5a128

// -[GTMSessionFetcherService runningFetchersByHost]
// Type encoding: @16@0:8
// Implementation: 0x104a5a130

// -[GTMSessionFetcherService setRunningFetchersByHost:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a188

// -[GTMSessionFetcherService delayedFetchersByHost]
// Type encoding: @16@0:8
// Implementation: 0x104a5a200

// -[GTMSessionFetcherService setDelayedFetchersByHost:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a258

// -[GTMSessionFetcherService authorizer]
// Type encoding: @16@0:8
// Implementation: 0x104a5a2d0

// -[GTMSessionFetcherService setAuthorizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a314

// -[GTMSessionFetcherService detachAuthorizer]
// Type encoding: v16@0:8
// Implementation: 0x104a5a3c4

// -[GTMSessionFetcherService callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a5a42c

// -[GTMSessionFetcherService setCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a470

// -[GTMSessionFetcherService setConcurrentCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a478

// -[GTMSessionFetcherService setCallbackQueue:isConcurrent:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104a5a480

// -[GTMSessionFetcherService sessionDelegateQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a5a51c

// -[GTMSessionFetcherService setSessionDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10097b564

// -[GTMSessionFetcherService userAgent]
// Type encoding: @16@0:8
// Implementation: 0x104a5a560

// -[GTMSessionFetcherService setUserAgent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a5c0

// -[GTMSessionFetcherService userAgentProvider]
// Type encoding: @16@0:8
// Implementation: 0x104a5a650

// -[GTMSessionFetcherService setUserAgentProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a694

// -[GTMSessionFetcherService delegateQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a5a6e4

// -[GTMSessionFetcherService maxRunningFetchersPerHost]
// Type encoding: Q16@0:8
// Implementation: 0x104a5a7f0

// -[GTMSessionFetcherService setMaxRunningFetchersPerHost:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104a5a7f8

// -[GTMSessionFetcherService configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a5a800

// -[GTMSessionFetcherService setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a80c

// -[GTMSessionFetcherService configurationBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a5a814

// -[GTMSessionFetcherService setConfigurationBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5a820

// -[GTMSessionFetcherService cookieStorage]
// Type encoding: @16@0:8
// Implementation: 0x104a5a828

// -[GTMSessionFetcherService setCookieStorage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a834

// -[GTMSessionFetcherService challengeBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a5a83c

// -[GTMSessionFetcherService setChallengeBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5a848

// -[GTMSessionFetcherService credential]
// Type encoding: @16@0:8
// Implementation: 0x104a5a850

// -[GTMSessionFetcherService setCredential:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a85c

// -[GTMSessionFetcherService proxyCredential]
// Type encoding: @16@0:8
// Implementation: 0x104a5a864

// -[GTMSessionFetcherService setProxyCredential:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a870

// -[GTMSessionFetcherService allowedInsecureSchemes]
// Type encoding: @16@0:8
// Implementation: 0x104a5a878

// -[GTMSessionFetcherService setAllowedInsecureSchemes:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a884

// -[GTMSessionFetcherService allowLocalhostRequest]
// Type encoding: B16@0:8
// Implementation: 0x104a5a88c

// -[GTMSessionFetcherService setAllowLocalhostRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5a898

// -[GTMSessionFetcherService allowInvalidServerCertificates]
// Type encoding: B16@0:8
// Implementation: 0x104a5a8a0

// -[GTMSessionFetcherService setAllowInvalidServerCertificates:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5a8ac

// -[GTMSessionFetcherService isRetryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104a5a8b4

// -[GTMSessionFetcherService setRetryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5a8c0

// -[GTMSessionFetcherService retryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a5a8c8

// -[GTMSessionFetcherService setRetryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5a8d4

// -[GTMSessionFetcherService maxRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a5a8dc

// -[GTMSessionFetcherService setMaxRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a5a8e4

// -[GTMSessionFetcherService minRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a5a8ec

// -[GTMSessionFetcherService setMinRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a5a8f4

// -[GTMSessionFetcherService metricsCollectionBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a5a8fc

// -[GTMSessionFetcherService setMetricsCollectionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5a908

// -[GTMSessionFetcherService properties]
// Type encoding: @16@0:8
// Implementation: 0x104a5a910

// -[GTMSessionFetcherService setProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5a91c

// -[GTMSessionFetcherService decoratorsPointerArray]
// Type encoding: @16@0:8
// Implementation: 0x104a5a924

// -[GTMSessionFetcherService testBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a5a930

// -[GTMSessionFetcherService setTestBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5a93c

// -[GTMSessionFetcherService stopFetchingTriggersCompletionHandler]
// Type encoding: B16@0:8
// Implementation: 0x104a5a944

// -[GTMSessionFetcherService setStopFetchingTriggersCompletionHandler:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5a950

// -[GTMSessionFetcherService skipBackgroundTask]
// Type encoding: B16@0:8
// Implementation: 0x104a5a958

// -[GTMSessionFetcherService setSkipBackgroundTask:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5a964

// -[GTMSessionFetcherService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a5a96c

// +[GTMSessionFetcherService mockFetcherServiceWithFakedData:fakedError:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a5aa80

// +[GTMSessionFetcherService mockFetcherServiceWithFakedData:fakedResponse:fakedError:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a5ab64

// +[GTMSessionFetcherService numberOfNonBackgroundSessionFetchers:]
// Type encoding: Q24@0:8@16
// Implementation: 0x104a5a6ec

@end
