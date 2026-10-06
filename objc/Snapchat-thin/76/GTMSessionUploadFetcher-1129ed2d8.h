// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMSessionUploadFetcher
// Superclass: GTMSessionFetcher
// Address: 0x1129ed2d8

@interface GTMSessionUploadFetcher

// Property: lastChunkRequest; attributes: T@"NSURLRequest",&,V_lastChunkRequest
// Property: currentOffset; attributes: Tq,V_currentOffset
// Property: fetcherInFlight; attributes: T@"GTMSessionFetcher",&,D
// Property: subdataGenerating; attributes: TB,GisSubdataGenerating,V_subdataGenerating
// Property: shouldInitiateOffsetQuery; attributes: TB,V_shouldInitiateOffsetQuery
// Property: uploadGranularity; attributes: Tq,V_uploadGranularity
// Property: allowsCellularAccess; attributes: TB,V_allowsCellularAccess
// Property: uploadLocationURL; attributes: T@"NSURL",&
// Property: uploadData; attributes: T@"NSData",&
// Property: uploadFileURL; attributes: T@"NSURL",&
// Property: uploadFileHandle; attributes: T@"NSFileHandle",&
// Property: uploadDataProvider; attributes: T@?,R,C
// Property: uploadMIMEType; attributes: T@"NSString",C
// Property: chunkSize; attributes: Tq,R
// Property: uploadRetryFactor; attributes: Td,V_uploadRetryFactor
// Property: maxUploadRetryInterval; attributes: Td
// Property: minUploadRetryInterval; attributes: Td
// Property: chunkFetcher; attributes: T@"GTMSessionFetcher",&,V_chunkFetcher
// Property: activeFetcher; attributes: T@"GTMSessionFetcher",R,D
// Property: statusCode; attributes: Tq,D
// Property: cancellationHandler; attributes: T@?,C
// Property: delegateCallbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,D
// Property: delegateCompletionHandler; attributes: T@?,R,V_delegateCompletionHandler

// -[GTMSessionUploadFetcher nextUploadRetryIntervalUnsynchronized]
// Type encoding: d16@0:8
// Implementation: 0x104a5bff8

// -[GTMSessionUploadFetcher setUploadData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5c69c

// -[GTMSessionUploadFetcher uploadData]
// Type encoding: @16@0:8
// Implementation: 0x104a5c730

// -[GTMSessionUploadFetcher setUploadFileHandle:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5c77c

// -[GTMSessionUploadFetcher uploadFileHandle]
// Type encoding: @16@0:8
// Implementation: 0x104a5c810

// -[GTMSessionUploadFetcher setUploadFileURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5c85c

// -[GTMSessionUploadFetcher uploadFileURL]
// Type encoding: @16@0:8
// Implementation: 0x104a5c8f0

// -[GTMSessionUploadFetcher setUploadFileLength:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a5c93c

// -[GTMSessionUploadFetcher setUploadDataLength:provider:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x104a5c990

// -[GTMSessionUploadFetcher uploadDataProvider]
// Type encoding: @?16@0:8
// Implementation: 0x104a5ca30

// -[GTMSessionUploadFetcher setUploadMIMEType:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5ca7c

// -[GTMSessionUploadFetcher uploadMIMEType]
// Type encoding: @16@0:8
// Implementation: 0x104a5cad4

// -[GTMSessionUploadFetcher chunkSize]
// Type encoding: q16@0:8
// Implementation: 0x104a5cb20

// -[GTMSessionUploadFetcher setupRequestHeaders]
// Type encoding: v16@0:8
// Implementation: 0x104a5cb64

// -[GTMSessionUploadFetcher setLocationURL:uploadMIMEType:chunkSize:allowsCellularAccess:]
// Type encoding: v44@0:8@16@24q32B40
// Implementation: 0x104a5cd6c

// -[GTMSessionUploadFetcher fullUploadLength]
// Type encoding: q16@0:8
// Implementation: 0x104a5ce60

// -[GTMSessionUploadFetcher generateChunkSubdataWithOffset:length:response:]
// Type encoding: v40@0:8q16q24@?32
// Implementation: 0x104a5cfa4

// -[GTMSessionUploadFetcher generateChunkSubdataFromFileHandle:offset:length:response:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x104a5d33c

// -[GTMSessionUploadFetcher generateChunkSubdataFromFileURL:offset:length:response:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x104a5d45c

// -[GTMSessionUploadFetcher uploadChunkUnavailableErrorWithDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a5d684

// -[GTMSessionUploadFetcher prematureFailureErrorWithUserInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a5d758

// -[GTMSessionUploadFetcher setCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5d808

// -[GTMSessionUploadFetcher setDelegateCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5d87c

// -[GTMSessionUploadFetcher delegateCallbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a5d8d4

// -[GTMSessionUploadFetcher isRestartedUpload]
// Type encoding: B16@0:8
// Implementation: 0x104a5d920

// -[GTMSessionUploadFetcher chunkFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104a5d964

// -[GTMSessionUploadFetcher setChunkFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5d9b0

// -[GTMSessionUploadFetcher setFetcherInFlight:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5da08

// -[GTMSessionUploadFetcher fetcherInFlight]
// Type encoding: @16@0:8
// Implementation: 0x104a5da60

// -[GTMSessionUploadFetcher setCancellationHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5daac

// -[GTMSessionUploadFetcher cancellationHandler]
// Type encoding: @?16@0:8
// Implementation: 0x104a5db20

// -[GTMSessionUploadFetcher beginFetchForRetry]
// Type encoding: v16@0:8
// Implementation: 0x104a5db6c

// -[GTMSessionUploadFetcher destroyUploadRetryTimer]
// Type encoding: v16@0:8
// Implementation: 0x104a5dbc8

// -[GTMSessionUploadFetcher beginFetchWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a5dc28

// -[GTMSessionUploadFetcher beginChunkFetches]
// Type encoding: v16@0:8
// Implementation: 0x104a5df2c

// -[GTMSessionUploadFetcher URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x104a5e120

// -[GTMSessionUploadFetcher shouldReleaseCallbacksUponCompletion]
// Type encoding: B16@0:8
// Implementation: 0x104a5e164

// -[GTMSessionUploadFetcher invokeFinalCallbackWithData:error:shouldInvalidateLocation:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104a5e16c

// -[GTMSessionUploadFetcher releaseUploadAndBaseCallbacks:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5e2f0

// -[GTMSessionUploadFetcher stopFetchReleasingCallbacks:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a5e380

// -[GTMSessionUploadFetcher uploadNextChunkWithOffset:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a5e414

// -[GTMSessionUploadFetcher sendQueryForUploadOffsetWithFetcherProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5e460

// -[GTMSessionUploadFetcher queryFetcher:finishedWithData:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5e548

// -[GTMSessionUploadFetcher sendCancelUploadWithFetcherProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5e754

// -[GTMSessionUploadFetcher uploadNextChunkWithOffset:fetcherProperties:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104a5e960

// -[GTMSessionUploadFetcher beginUploadRetryTimer]
// Type encoding: v16@0:8
// Implementation: 0x104a5ee34

// -[GTMSessionUploadFetcher uploadRetryTimerFired:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5f048

// -[GTMSessionUploadFetcher uploadRetryTimer]
// Type encoding: @16@0:8
// Implementation: 0x104a5f108

// -[GTMSessionUploadFetcher maxUploadRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a5f154

// -[GTMSessionUploadFetcher setMaxUploadRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a5f1a0

// -[GTMSessionUploadFetcher setMinUploadRetryInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a5f1f8

// -[GTMSessionUploadFetcher minUploadRetryInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a5f24c

// -[GTMSessionUploadFetcher beginChunkFetcher:offset:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104a5f298

// -[GTMSessionUploadFetcher attachSendProgressBlockToChunkFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5f388

// -[GTMSessionUploadFetcher uploadSessionIdentifierMetadata]
// Type encoding: @16@0:8
// Implementation: 0x104a5f44c

// -[GTMSessionUploadFetcher uploadFetcherWithProperties:isQueryFetch:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104a5f6bc

// -[GTMSessionUploadFetcher chunkFetcher:finishedWithData:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5fb98

// -[GTMSessionUploadFetcher destroyChunkFetcher]
// Type encoding: v16@0:8
// Implementation: 0x104a60044

// -[GTMSessionUploadFetcher invokeDelegateWithDidSendBytes:totalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x104a60230

// -[GTMSessionUploadFetcher retrieveUploadChunkGranularityFromResponseHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a603b4

// -[GTMSessionUploadFetcher isPaused]
// Type encoding: B16@0:8
// Implementation: 0x104a60404

// -[GTMSessionUploadFetcher pauseFetching]
// Type encoding: v16@0:8
// Implementation: 0x104a60448

// -[GTMSessionUploadFetcher resumeFetching]
// Type encoding: v16@0:8
// Implementation: 0x104a60490

// -[GTMSessionUploadFetcher stopFetching]
// Type encoding: v16@0:8
// Implementation: 0x104a6050c

// -[GTMSessionUploadFetcher triggerCancellationHandlerForFetch:data:error:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104a60678

// -[GTMSessionUploadFetcher updateChunkFetcher:forChunkAtOffset:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x104a60738

// -[GTMSessionUploadFetcher useBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x104a60a5c

// -[GTMSessionUploadFetcher setUseBackgroundSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a60aa0

// -[GTMSessionUploadFetcher canFetchWithBackgroundSession]
// Type encoding: B16@0:8
// Implementation: 0x104a60b80

// -[GTMSessionUploadFetcher responseHeaders]
// Type encoding: @16@0:8
// Implementation: 0x104a60b88

// -[GTMSessionUploadFetcher statusCodeUnsynchronized]
// Type encoding: q16@0:8
// Implementation: 0x104a60c6c

// -[GTMSessionUploadFetcher setStatusCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a60cbc

// -[GTMSessionUploadFetcher initialBodyLength]
// Type encoding: q16@0:8
// Implementation: 0x104a60cfc

// -[GTMSessionUploadFetcher setInitialBodyLength:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a60d40

// -[GTMSessionUploadFetcher initialBodySent]
// Type encoding: q16@0:8
// Implementation: 0x104a60d80

// -[GTMSessionUploadFetcher setInitialBodySent:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a60dc4

// -[GTMSessionUploadFetcher uploadLocationURL]
// Type encoding: @16@0:8
// Implementation: 0x104a60e04

// -[GTMSessionUploadFetcher setUploadLocationURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a60e50

// -[GTMSessionUploadFetcher activeFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104a60ea8

// -[GTMSessionUploadFetcher isFetching]
// Type encoding: B16@0:8
// Implementation: 0x104a60ef0

// -[GTMSessionUploadFetcher waitForCompletionWithTimeout:]
// Type encoding: B24@0:8d16
// Implementation: 0x104a60f50

// -[GTMSessionUploadFetcher currentOffset]
// Type encoding: q16@0:8
// Implementation: 0x104a610d8

// -[GTMSessionUploadFetcher setCurrentOffset:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a610e8

// -[GTMSessionUploadFetcher allowsCellularAccess]
// Type encoding: B16@0:8
// Implementation: 0x104a610f8

// -[GTMSessionUploadFetcher setAllowsCellularAccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a6110c

// -[GTMSessionUploadFetcher delegateCompletionHandler]
// Type encoding: @?16@0:8
// Implementation: 0x104a6111c

// -[GTMSessionUploadFetcher lastChunkRequest]
// Type encoding: @16@0:8
// Implementation: 0x104a6112c

// -[GTMSessionUploadFetcher setLastChunkRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6113c

// -[GTMSessionUploadFetcher isSubdataGenerating]
// Type encoding: B16@0:8
// Implementation: 0x104a61148

// -[GTMSessionUploadFetcher setSubdataGenerating:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a6115c

// -[GTMSessionUploadFetcher shouldInitiateOffsetQuery]
// Type encoding: B16@0:8
// Implementation: 0x104a6116c

// -[GTMSessionUploadFetcher setShouldInitiateOffsetQuery:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a61180

// -[GTMSessionUploadFetcher uploadGranularity]
// Type encoding: q16@0:8
// Implementation: 0x104a61190

// -[GTMSessionUploadFetcher setUploadGranularity:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a611a0

// -[GTMSessionUploadFetcher uploadRetryFactor]
// Type encoding: d16@0:8
// Implementation: 0x104a611b0

// -[GTMSessionUploadFetcher setUploadRetryFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a611c0

// -[GTMSessionUploadFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a611d0

// +[GTMSessionUploadFetcher load]
// Type encoding: v16@0:8
// Implementation: 0x100028058

// +[GTMSessionUploadFetcher reconnectFetchersForBackgroundSessionsOnAppLaunch:]
// Type encoding: v24@0:8@16
// Implementation: 0x100084c3c

// +[GTMSessionUploadFetcher uploadFetcherWithRequest:uploadMIMEType:chunkSize:fetcherService:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x104a5c048

// +[GTMSessionUploadFetcher uploadFetcherWithLocation:uploadMIMEType:chunkSize:fetcherService:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x104a5c0ec

// +[GTMSessionUploadFetcher uploadFetcherWithLocation:uploadMIMEType:chunkSize:allowsCellularAccess:fetcherService:]
// Type encoding: @52@0:8@16@24q32B40@44
// Implementation: 0x104a5c0f8

// +[GTMSessionUploadFetcher uploadFetcherForSessionIdentifierMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a5c190

// +[GTMSessionUploadFetcher uploadFetcherWithRequest:fetcherService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a5c46c

// +[GTMSessionUploadFetcher uploadFetcherPointerArrayForBackgroundSessions]
// Type encoding: @16@0:8
// Implementation: 0x100c33920

// +[GTMSessionUploadFetcher uploadFetcherForSessionIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a5c520

// +[GTMSessionUploadFetcher uploadFetchersForBackgroundSessions]
// Type encoding: @16@0:8
// Implementation: 0x100c33574

// +[GTMSessionUploadFetcher uploadStatusFromResponseHeaders:]
// Type encoding: Q24@0:8@16
// Implementation: 0x104a5d778

// +[GTMSessionUploadFetcher removePointer:fromPointerArray:]
// Type encoding: v32@0:8^v16@24
// Implementation: 0x104a609e8

@end
