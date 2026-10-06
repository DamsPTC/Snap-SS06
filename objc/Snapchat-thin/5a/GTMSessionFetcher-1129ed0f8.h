// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMSessionFetcher
// Superclass: NSObject
// Address: 0x1129ed0f8

@interface GTMSessionFetcher

// Property: parentUploadFetcher; attributes: T@"GTMSessionUploadFetcher",R
// Property: downloadedData; attributes: T@"NSData",&
// Property: downloadResumeData; attributes: T@"NSData",&,V_downloadResumeData
// Property: backgroundTaskIdentifier; attributes: TQ,N,V_backgroundTaskIdentifier
// Property: usingBackgroundSession; attributes: TB,GisUsingBackgroundSession,V_usingBackgroundSession
// Property: request; attributes: T@"NSURLRequest",&
// Property: configuration; attributes: T@"NSURLSessionConfiguration",&,V_configuration
// Property: configurationBlock; attributes: T@?,C,V_configurationBlock
// Property: session; attributes: T@"NSURLSession",&
// Property: sessionTask; attributes: T@"NSURLSessionTask",R,V_sessionTask
// Property: sessionIdentifier; attributes: T@"NSString",R
// Property: wasCreatedFromBackgroundSession; attributes: TB,R,V_wasCreatedFromBackgroundSession
// Property: clientWillReconnectBackgroundSession; attributes: TB,V_clientWillReconnectBackgroundSession
// Property: sessionUserInfo; attributes: T@"NSDictionary",&,V_sessionUserInfo
// Property: taskDescription; attributes: T@"NSString",C,V_taskDescription
// Property: taskPriority; attributes: Tf,V_taskPriority
// Property: userAgentProvider; attributes: T@"<GTMUserAgentProvider>",&,V_userAgentProvider
// Property: useBackgroundSession; attributes: TB
// Property: useUploadTask; attributes: TB
// Property: canShareSession; attributes: TB,R,V_canShareSession
// Property: allowedInsecureSchemes; attributes: T@"NSArray",C,V_allowedInsecureSchemes
// Property: allowLocalhostRequest; attributes: TB,V_allowLocalhostRequest
// Property: allowInvalidServerCertificates; attributes: TB,V_allowInvalidServerCertificates
// Property: cookieStorage; attributes: T@"NSHTTPCookieStorage",&,V_cookieStorage
// Property: credential; attributes: T@"NSURLCredential",&,V_credential
// Property: proxyCredential; attributes: T@"NSURLCredential",&,V_proxyCredential
// Property: bodyData; attributes: T@"NSData",&,V_bodyData
// Property: bodyFileURL; attributes: T@"NSURL",&
// Property: bodyLength; attributes: Tq,R,V_bodyLength
// Property: bodyStreamProvider; attributes: T@?,C
// Property: authorizer; attributes: T@"<GTMFetcherAuthorizationProtocol>",&
// Property: service; attributes: T@"GTMSessionFetcherService",&,V_service
// Property: serviceHost; attributes: T@"NSString",C,V_serviceHost
// Property: servicePriority; attributes: Tq
// Property: didReceiveResponseBlock; attributes: T@?,C,V_didReceiveResponseBlock
// Property: challengeBlock; attributes: T@?,C,V_challengeBlock
// Property: willRedirectBlock; attributes: T@?,C,V_willRedirectBlock
// Property: sendProgressBlock; attributes: T@?,C,V_sendProgressBlock
// Property: accumulateDataBlock; attributes: T@?,C,V_accumulateDataBlock
// Property: receivedProgressBlock; attributes: T@?,C,V_receivedProgressBlock
// Property: downloadProgressBlock; attributes: T@?,C,V_downloadProgressBlock
// Property: willCacheURLResponseBlock; attributes: T@?,C,V_willCacheURLResponseBlock
// Property: retryEnabled; attributes: TB,GisRetryEnabled
// Property: retryBlock; attributes: T@?,C,V_retryBlock
// Property: metricsCollectionBlock; attributes: T@?,C,V_metricsCollectionBlock
// Property: maxRetryInterval; attributes: Td
// Property: minRetryInterval; attributes: Td
// Property: retryFactor; attributes: Td,V_retryFactor
// Property: retryCount; attributes: TQ,R
// Property: nextRetryInterval; attributes: Td,R
// Property: skipBackgroundTask; attributes: TB,V_skipBackgroundTask
// Property: fetching; attributes: TB,R,GisFetching
// Property: stopFetchingTriggersCompletionHandler; attributes: TB,V_stopFetchingTriggersCompletionHandler
// Property: completionHandler; attributes: T@?,C,V_completionHandler
// Property: resumeDataBlock; attributes: T@?,C,V_resumeDataBlock
// Property: statusCode; attributes: Tq,R
// Property: responseHeaders; attributes: T@"NSDictionary",R
// Property: response; attributes: T@"NSURLResponse",R
// Property: downloadedLength; attributes: Tq,R
// Property: destinationFileURL; attributes: T@"NSURL",&
// Property: initialBeginFetchDate; attributes: T@"NSDate",R,V_initialBeginFetchDate
// Property: userData; attributes: T@,&
// Property: properties; attributes: T@"NSDictionary",C
// Property: comment; attributes: T@"NSString",C,V_comment
// Property: log; attributes: T@"NSString",C,V_log
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,V_callbackQueue
// Property: sessionDelegateQueue; attributes: T@"NSOperationQueue",&
// Property: testBlock; attributes: T@?,C,V_testBlock
// Property: testBlockAccumulateDataChunkCount; attributes: TQ,V_testBlockAccumulateDataChunkCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GTMSessionFetcher parentUploadFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104a61300

// -[GTMSessionFetcher init]
// Type encoding: @16@0:8
// Implementation: 0x104a4cd3c

// -[GTMSessionFetcher initWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a4cd48

// -[GTMSessionFetcher initWithRequest:configuration:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a4cd50

// -[GTMSessionFetcher copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a4cec4

// -[GTMSessionFetcher description]
// Type encoding: @16@0:8
// Implementation: 0x104a4cee0

// -[GTMSessionFetcher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104a4cff8

// -[GTMSessionFetcher beginFetchWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a4d03c

// -[GTMSessionFetcher beginFetchForRetry]
// Type encoding: v16@0:8
// Implementation: 0x104a4d080

// -[GTMSessionFetcher completionHandlerWithTarget:didFinishSelector:]
// Type encoding: @?32@0:8@16:24
// Implementation: 0x104a4d090

// -[GTMSessionFetcher beginFetchWithDelegate:didFinishSelector:]
// Type encoding: v32@0:8@16:24
// Implementation: 0x104a4d244

// -[GTMSessionFetcher beginFetchMayDelay:mayAuthorize:mayDecorate:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x104a4d280

// -[GTMSessionFetcher updateUserAgentAsynchronouslyForRequest:userAgentProvider:mayDelay:mayAuthorize:mayDecorate:]
// Type encoding: v44@0:8@16@24B32B36B40
// Implementation: 0x104a4e434

// -[GTMSessionFetcher simulateFetchForTestBlock]
// Type encoding: v16@0:8
// Implementation: 0x104a4e758

// -[GTMSessionFetcher simulateByteTransferReportWithDataLength:block:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x104a4ec4c

// -[GTMSessionFetcher simulateDataCallbacksForTestBlockWithBodyData:response:responseData:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104a4ed44

// -[GTMSessionFetcher simulateByteTransferWithData:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a4f6e4

// -[GTMSessionFetcher setSessionTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a4f848

// -[GTMSessionFetcher sessionTask]
// Type encoding: @16@0:8
// Implementation: 0x104a4f90c

// -[GTMSessionFetcher addPersistedBackgroundSessionToDefaults]
// Type encoding: v16@0:8
// Implementation: 0x104a4f950

// -[GTMSessionFetcher removePersistedBackgroundSessionFromDefaults]
// Type encoding: v16@0:8
// Implementation: 0x104a4fa1c

// -[GTMSessionFetcher sessionIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x104a4fd44

// -[GTMSessionFetcher setSessionIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a4fd88

// -[GTMSessionFetcher setSessionIdentifierInternal:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a4fe14

// -[GTMSessionFetcher sessionUserInfo]
// Type encoding: @16@0:8
// Implementation: 0x104a4fe8c

// -[GTMSessionFetcher setSessionUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a4ff94

// -[GTMSessionFetcher sessionIdentifierDefaultMetadata]
// Type encoding: @16@0:8
// Implementation: 0x104a4ffe4

// -[GTMSessionFetcher restoreDefaultStateForSessionIdentifierMetadata]
// Type encoding: v16@0:8
// Implementation: 0x104a500c8

// -[GTMSessionFetcher sessionIdentifierMetadata]
// Type encoding: @16@0:8
// Implementation: 0x104a501d4

// -[GTMSessionFetcher sessionIdentifierMetadataUnsynchronized]
// Type encoding: @16@0:8
// Implementation: 0x104a50234

// -[GTMSessionFetcher createSessionIdentifierWithMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a503bc

// -[GTMSessionFetcher failToBeginFetchWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a505c4

// -[GTMSessionFetcher endBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x104a506d0

// -[GTMSessionFetcher authorizeRequest]
// Type encoding: v16@0:8
// Implementation: 0x104a50770

// -[GTMSessionFetcher authorizer:request:finishedWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5096c

// -[GTMSessionFetcher applyDecoratorsAtRequestWillStart:startingAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104a509f8

// -[GTMSessionFetcher applyDecoratorsAtRequestDidFinish:withData:error:startingAtIndex:shouldReleaseCallbacks:]
// Type encoding: v52@0:8@16@24@32Q40B48
// Implementation: 0x104a50be8

// -[GTMSessionFetcher canFetchWithBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x104a50dec

// -[GTMSessionFetcher isFetching]
// Type encoding: B16@0:8
// Implementation: 0x104a50df4

// -[GTMSessionFetcher isFetchingUnsynchronized]
// Type encoding: B16@0:8
// Implementation: 0x104a50e4c

// -[GTMSessionFetcher response]
// Type encoding: @16@0:8
// Implementation: 0x104a50e64

// -[GTMSessionFetcher responseUnsynchronized]
// Type encoding: @16@0:8
// Implementation: 0x104a50ec4

// -[GTMSessionFetcher statusCode]
// Type encoding: q16@0:8
// Implementation: 0x104a50efc

// -[GTMSessionFetcher statusCodeUnsynchronized]
// Type encoding: q16@0:8
// Implementation: 0x104a50f54

// -[GTMSessionFetcher responseHeaders]
// Type encoding: @16@0:8
// Implementation: 0x104a50fac

// -[GTMSessionFetcher responseHeadersUnsynchronized]
// Type encoding: @16@0:8
// Implementation: 0x104a5100c

// -[GTMSessionFetcher releaseCallbacks]
// Type encoding: v16@0:8
// Implementation: 0x104a5106c

// -[GTMSessionFetcher forgetSessionIdentifierForFetcher]
// Type encoding: v16@0:8
// Implementation: 0x104a51184

// -[GTMSessionFetcher forgetSessionIdentifierForFetcherWithoutSyncCheck]
// Type encoding: v16@0:8
// Implementation: 0x104a51188

// -[GTMSessionFetcher stopFetching]
// Type encoding: v16@0:8
// Implementation: 0x104a511e0

// -[GTMSessionFetcher stopFetchReleasingCallbacks:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5122c

// -[GTMSessionFetcher setStopNotificationNeeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a515d4

// -[GTMSessionFetcher sendStopNotificationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104a5160c

// -[GTMSessionFetcher retryFetch]
// Type encoding: v16@0:8
// Implementation: 0x104a5167c

// -[GTMSessionFetcher waitForCompletionWithTimeout:]
// Type encoding: B24@0:8d16
// Implementation: 0x104a51718

// -[GTMSessionFetcher URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x104a51a20

// -[GTMSessionFetcher URLSession:dataTask:didReceiveResponse:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a51f10

// -[GTMSessionFetcher URLSession:dataTask:didBecomeDownloadTask:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a522ac

// -[GTMSessionFetcher URLSession:task:didReceiveChallenge:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a522b4

// -[GTMSessionFetcher respondToChallenge:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a52448

// -[GTMSessionFetcher invokeOnCallbackQueueUnlessStopped:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a52a10

// -[GTMSessionFetcher invokeOnCallbackQueueAfterUserStopped:block:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x104a52a1c

// -[GTMSessionFetcher invokeOnCallbackUnsynchronizedQueueAfterUserStopped:block:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x104a52a20

// -[GTMSessionFetcher invokeOnCallbackQueue:afterUserStopped:block:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x104a52a30

// -[GTMSessionFetcher invokeFetchCallbacksOnCallbackQueueWithData:error:mayDecorate:shouldReleaseCallbacks:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x104a52bb8

// -[GTMSessionFetcher postNotificationOnMainThreadWithName:userInfo:requireAsync:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104a52de4

// -[GTMSessionFetcher URLSession:task:needNewBodyStream:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a52f30

// -[GTMSessionFetcher URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x104a53084

// -[GTMSessionFetcher URLSession:dataTask:didReceiveData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a531e8

// -[GTMSessionFetcher URLSession:dataTask:willCacheResponse:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a53448

// -[GTMSessionFetcher URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x104a535d4

// -[GTMSessionFetcher URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x104a53718

// -[GTMSessionFetcher URLSession:downloadTask:didFinishDownloadingToURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a53720

// -[GTMSessionFetcher URLSession:task:didCompleteWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a539d4

// -[GTMSessionFetcher URLSession:task:didFinishCollectingMetrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a53d8c

// -[GTMSessionFetcher URLSessionDidFinishEventsForBackgroundURLSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a53ec0

// -[GTMSessionFetcher URLSession:didBecomeInvalidWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a53fc0

// -[GTMSessionFetcher finishWithError:shouldRetry:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104a54034

// -[GTMSessionFetcher shouldReleaseCallbacksUponCompletion]
// Type encoding: B16@0:8
// Implementation: 0x104a545e8

// -[GTMSessionFetcher logNowWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a545f0

// -[GTMSessionFetcher isRetryError:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a5464c

// -[GTMSessionFetcher shouldRetryNowForStatus:error:forceAssumeRetry:response:]
// Type encoding: v44@0:8q16@24B32@?36
// Implementation: 0x104a54760

// -[GTMSessionFetcher hasRetryAfterInterval]
// Type encoding: B16@0:8
// Implementation: 0x104a54a84

// -[GTMSessionFetcher retryAfterInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a54ad8

// -[GTMSessionFetcher beginRetryTimer]
// Type encoding: v16@0:8
// Implementation: 0x104a54c18

// -[GTMSessionFetcher retryTimerFired:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a54dd0

// -[GTMSessionFetcher destroyRetryTimer]
// Type encoding: v16@0:8
// Implementation: 0x104a54e80

// -[GTMSessionFetcher retryCount]
// Type encoding: Q16@0:8
// Implementation: 0x104a54f0c

// -[GTMSessionFetcher nextRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a54f48

// -[GTMSessionFetcher nextRetryIntervalUnsynchronized]
// Type encoding: d16@0:8
// Implementation: 0x104a54fa8

// -[GTMSessionFetcher retryTimer]
// Type encoding: @16@0:8
// Implementation: 0x104a55010

// -[GTMSessionFetcher isRetryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104a55054

// -[GTMSessionFetcher isRetryEnabledUnsynchronized]
// Type encoding: B16@0:8
// Implementation: 0x104a55090

// -[GTMSessionFetcher setRetryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a55098

// -[GTMSessionFetcher maxRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a55128

// -[GTMSessionFetcher setMaxRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a5516c

// -[GTMSessionFetcher minRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a551b8

// -[GTMSessionFetcher setMinRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a551fc

// -[GTMSessionFetcher systemCompletionHandler]
// Type encoding: @?16@0:8
// Implementation: 0x104a55278

// -[GTMSessionFetcher setSystemCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5529c

// -[GTMSessionFetcher request]
// Type encoding: @16@0:8
// Implementation: 0x104a55488

// -[GTMSessionFetcher setRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a554e0

// -[GTMSessionFetcher mutableRequestForTesting]
// Type encoding: @16@0:8
// Implementation: 0x104a55564

// -[GTMSessionFetcher updateMutableRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5556c

// -[GTMSessionFetcher setRequestValue:forHTTPHeaderField:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a555bc

// -[GTMSessionFetcher updateRequestValue:forHTTPHeaderField:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a55624

// -[GTMSessionFetcher setResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a556b4

// -[GTMSessionFetcher bodyLength]
// Type encoding: q16@0:8
// Implementation: 0x104a55704

// -[GTMSessionFetcher useUploadTask]
// Type encoding: B16@0:8
// Implementation: 0x104a557fc

// -[GTMSessionFetcher setUseUploadTask:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a55838

// -[GTMSessionFetcher bodyFileURL]
// Type encoding: @16@0:8
// Implementation: 0x104a5587c

// -[GTMSessionFetcher setBodyFileURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a558c0

// -[GTMSessionFetcher bodyStreamProvider]
// Type encoding: @?16@0:8
// Implementation: 0x104a55930

// -[GTMSessionFetcher setBodyStreamProvider:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a55974

// -[GTMSessionFetcher authorizer]
// Type encoding: @16@0:8
// Implementation: 0x104a559ec

// -[GTMSessionFetcher setAuthorizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a55a30

// -[GTMSessionFetcher downloadedData]
// Type encoding: @16@0:8
// Implementation: 0x104a55ac4

// -[GTMSessionFetcher setDownloadedData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a55b08

// -[GTMSessionFetcher downloadedLength]
// Type encoding: q16@0:8
// Implementation: 0x104a55b80

// -[GTMSessionFetcher setDownloadedLength:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a55bbc

// -[GTMSessionFetcher callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a55bf4

// -[GTMSessionFetcher setCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a55c38

// -[GTMSessionFetcher session]
// Type encoding: @16@0:8
// Implementation: 0x104a55cc4

// -[GTMSessionFetcher servicePriority]
// Type encoding: q16@0:8
// Implementation: 0x104a55d08

// -[GTMSessionFetcher setServicePriority:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a55d44

// -[GTMSessionFetcher setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a55d88

// -[GTMSessionFetcher canShareSession]
// Type encoding: B16@0:8
// Implementation: 0x104a55dd8

// -[GTMSessionFetcher setCanShareSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a55e14

// -[GTMSessionFetcher useBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x104a55e4c

// -[GTMSessionFetcher setUseBackgroundSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a55e88

// -[GTMSessionFetcher isUsingBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x104a55ecc

// -[GTMSessionFetcher setUsingBackgroundSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a55f08

// -[GTMSessionFetcher stopFetchingTriggersCompletionHandler]
// Type encoding: B16@0:8
// Implementation: 0x104a55f40

// -[GTMSessionFetcher setStopFetchingTriggersCompletionHandler:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a55f48

// -[GTMSessionFetcher sessionNeedingInvalidation]
// Type encoding: @16@0:8
// Implementation: 0x104a55f5c

// -[GTMSessionFetcher setSessionNeedingInvalidation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a55fa0

// -[GTMSessionFetcher sessionDelegateQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a55ff0

// -[GTMSessionFetcher setSessionDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56034

// -[GTMSessionFetcher userStoppedFetching]
// Type encoding: B16@0:8
// Implementation: 0x104a560e0

// -[GTMSessionFetcher userData]
// Type encoding: @16@0:8
// Implementation: 0x104a5611c

// -[GTMSessionFetcher setUserData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56160

// -[GTMSessionFetcher destinationFileURL]
// Type encoding: @16@0:8
// Implementation: 0x104a561b0

// -[GTMSessionFetcher setDestinationFileURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a561f4

// -[GTMSessionFetcher setProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a562b8

// -[GTMSessionFetcher properties]
// Type encoding: @16@0:8
// Implementation: 0x104a56330

// -[GTMSessionFetcher setProperty:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a56374

// -[GTMSessionFetcher propertyForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a5642c

// -[GTMSessionFetcher addPropertiesFromDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a564b4

// -[GTMSessionFetcher setCommentWithFormat:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56554

// -[GTMSessionFetcher downloadResumeData]
// Type encoding: @16@0:8
// Implementation: 0x104a56564

// -[GTMSessionFetcher setDownloadResumeData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56570

// -[GTMSessionFetcher configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a56578

// -[GTMSessionFetcher setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56584

// -[GTMSessionFetcher configurationBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a5658c

// -[GTMSessionFetcher setConfigurationBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a56598

// -[GTMSessionFetcher wasCreatedFromBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x104a565a0

// -[GTMSessionFetcher clientWillReconnectBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x104a565ac

// -[GTMSessionFetcher setClientWillReconnectBackgroundSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a565b8

// -[GTMSessionFetcher taskDescription]
// Type encoding: @16@0:8
// Implementation: 0x104a565c0

// -[GTMSessionFetcher setTaskDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a565cc

// -[GTMSessionFetcher taskPriority]
// Type encoding: f16@0:8
// Implementation: 0x104a565d4

// -[GTMSessionFetcher setTaskPriority:]
// Type encoding: v20@0:8f16
// Implementation: 0x104a565dc

// -[GTMSessionFetcher completionHandler]
// Type encoding: @?16@0:8
// Implementation: 0x104a565e4

// -[GTMSessionFetcher setCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a565f0

// -[GTMSessionFetcher credential]
// Type encoding: @16@0:8
// Implementation: 0x104a565f8

// -[GTMSessionFetcher setCredential:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56604

// -[GTMSessionFetcher proxyCredential]
// Type encoding: @16@0:8
// Implementation: 0x104a5660c

// -[GTMSessionFetcher setProxyCredential:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56618

// -[GTMSessionFetcher bodyData]
// Type encoding: @16@0:8
// Implementation: 0x104a56620

// -[GTMSessionFetcher setBodyData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5662c

// -[GTMSessionFetcher service]
// Type encoding: @16@0:8
// Implementation: 0x104a56634

// -[GTMSessionFetcher setService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56640

// -[GTMSessionFetcher serviceHost]
// Type encoding: @16@0:8
// Implementation: 0x104a56648

// -[GTMSessionFetcher setServiceHost:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56654

// -[GTMSessionFetcher accumulateDataBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a5665c

// -[GTMSessionFetcher setAccumulateDataBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a56668

// -[GTMSessionFetcher receivedProgressBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a56670

// -[GTMSessionFetcher setReceivedProgressBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5667c

// -[GTMSessionFetcher downloadProgressBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a56684

// -[GTMSessionFetcher setDownloadProgressBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a56690

// -[GTMSessionFetcher resumeDataBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a56698

// -[GTMSessionFetcher setResumeDataBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a566a4

// -[GTMSessionFetcher didReceiveResponseBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a566ac

// -[GTMSessionFetcher setDidReceiveResponseBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a566b8

// -[GTMSessionFetcher challengeBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a566c0

// -[GTMSessionFetcher setChallengeBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a566cc

// -[GTMSessionFetcher willRedirectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a566d4

// -[GTMSessionFetcher setWillRedirectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a566e0

// -[GTMSessionFetcher sendProgressBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a566e8

// -[GTMSessionFetcher setSendProgressBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a566f4

// -[GTMSessionFetcher willCacheURLResponseBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a566fc

// -[GTMSessionFetcher setWillCacheURLResponseBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a56708

// -[GTMSessionFetcher retryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a56710

// -[GTMSessionFetcher setRetryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5671c

// -[GTMSessionFetcher metricsCollectionBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a56724

// -[GTMSessionFetcher setMetricsCollectionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a56730

// -[GTMSessionFetcher retryFactor]
// Type encoding: d16@0:8
// Implementation: 0x104a56738

// -[GTMSessionFetcher setRetryFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a56740

// -[GTMSessionFetcher allowedInsecureSchemes]
// Type encoding: @16@0:8
// Implementation: 0x104a56748

// -[GTMSessionFetcher setAllowedInsecureSchemes:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56754

// -[GTMSessionFetcher allowLocalhostRequest]
// Type encoding: B16@0:8
// Implementation: 0x104a5675c

// -[GTMSessionFetcher setAllowLocalhostRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a56768

// -[GTMSessionFetcher allowInvalidServerCertificates]
// Type encoding: B16@0:8
// Implementation: 0x104a56770

// -[GTMSessionFetcher setAllowInvalidServerCertificates:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5677c

// -[GTMSessionFetcher cookieStorage]
// Type encoding: @16@0:8
// Implementation: 0x104a56784

// -[GTMSessionFetcher setCookieStorage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a56790

// -[GTMSessionFetcher initialBeginFetchDate]
// Type encoding: @16@0:8
// Implementation: 0x104a56798

// -[GTMSessionFetcher testBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a567a4

// -[GTMSessionFetcher setTestBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a567b0

// -[GTMSessionFetcher testBlockAccumulateDataChunkCount]
// Type encoding: Q16@0:8
// Implementation: 0x104a567b8

// -[GTMSessionFetcher setTestBlockAccumulateDataChunkCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104a567c0

// -[GTMSessionFetcher comment]
// Type encoding: @16@0:8
// Implementation: 0x104a567c8

// -[GTMSessionFetcher setComment:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a567d4

// -[GTMSessionFetcher log]
// Type encoding: @16@0:8
// Implementation: 0x104a567dc

// -[GTMSessionFetcher setLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a567e8

// -[GTMSessionFetcher userAgentProvider]
// Type encoding: @16@0:8
// Implementation: 0x104a567f0

// -[GTMSessionFetcher setUserAgentProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a567fc

// -[GTMSessionFetcher backgroundTaskIdentifier]
// Type encoding: Q16@0:8
// Implementation: 0x104a56804

// -[GTMSessionFetcher setBackgroundTaskIdentifier:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104a5680c

// -[GTMSessionFetcher skipBackgroundTask]
// Type encoding: B16@0:8
// Implementation: 0x104a56814

// -[GTMSessionFetcher setSkipBackgroundTask:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a56820

// -[GTMSessionFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a56828

// +[GTMSessionFetcher load]
// Type encoding: v16@0:8
// Implementation: 0x100028000

// +[GTMSessionFetcher reconnectFetchersForBackgroundSessionsOnAppLaunch:]
// Type encoding: v24@0:8@16
// Implementation: 0x100084be4

// +[GTMSessionFetcher fetcherWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a4ca30

// +[GTMSessionFetcher fetcherWithURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a4ca7c

// +[GTMSessionFetcher fetcherWithURLString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a4cad4

// +[GTMSessionFetcher fetcherWithDownloadResumeData:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a4cb2c

// +[GTMSessionFetcher fetcherWithSessionIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a4cb90

// +[GTMSessionFetcher sessionIdentifierToFetcherMap]
// Type encoding: @16@0:8
// Implementation: 0x100c334dc

// +[GTMSessionFetcher appAllowsInsecureRequests]
// Type encoding: B16@0:8
// Implementation: 0x104a4cc84

// +[GTMSessionFetcher fetcherUserDefaults]
// Type encoding: @16@0:8
// Implementation: 0x100c33444

// +[GTMSessionFetcher activePersistedBackgroundSessions]
// Type encoding: @16@0:8
// Implementation: 0x104a4fb1c

// +[GTMSessionFetcher fetchersForBackgroundSessions]
// Type encoding: @16@0:8
// Implementation: 0x100c33274

// +[GTMSessionFetcher application:handleEventsForBackgroundURLSession:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a4fcdc

// +[GTMSessionFetcher staticCookieStorage]
// Type encoding: @16@0:8
// Implementation: 0x104a50674

// +[GTMSessionFetcher setGlobalTestBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a518d0

// +[GTMSessionFetcher setSubstituteUIApplication:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a518f8

// +[GTMSessionFetcher substituteUIApplication]
// Type encoding: @16@0:8
// Implementation: 0x104a51908

// +[GTMSessionFetcher fetcherUIApplication]
// Type encoding: @16@0:8
// Implementation: 0x104a51914

// +[GTMSessionFetcher redirectURLWithOriginalRequestURL:redirectRequestURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a5272c

// +[GTMSessionFetcher evaluateServerTrust:forRequest:completionHandler:]
// Type encoding: v40@0:8^{__SecTrust=}16@24@?32
// Implementation: 0x104a528b4

// +[GTMSessionFetcher setSystemCompletionHandler:forSessionIdentifier:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x104a552dc

// +[GTMSessionFetcher systemCompletionHandlerForSessionIdentifier:]
// Type encoding: @?24@0:8@16
// Implementation: 0x104a553e8

// +[GTMSessionFetcher setLoggingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a56558

// +[GTMSessionFetcher isLoggingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104a5655c

@end
