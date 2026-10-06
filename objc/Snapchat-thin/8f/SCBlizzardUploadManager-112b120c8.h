// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardUploadManager
// Superclass: NSObject
// Address: 0x112b120c8

@interface SCBlizzardUploadManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: config; attributes: T@"SCBlizzardConfigAdapter",&,N,V_config
// Property: appStateProvider; attributes: T@"SCBlizzardAppStateProvider",&,N,V_appStateProvider
// Property: timeProvider; attributes: T@"<SCTimeProviding>",&,N,V_timeProvider
// Property: loggingQueue; attributes: T@"NSOperationQueue",&,N,V_loggingQueue
// Property: urlProvider; attributes: T@"SCBlizzardRequestUrlProvider",&,N,V_urlProvider
// Property: configVersion; attributes: T@"NSString",&,N,V_configVersion
// Property: snapTokenProvider; attributes: T@"SCLazy",R,N,V_snapTokenProvider
// Property: uploadTimer; attributes: T@"SCWeakTimer",&,N,V_uploadTimer
// Property: maxConcurrentRequests; attributes: TQ,N,V_maxConcurrentRequests
// Property: lastUploadUptimeInSeconds; attributes: T@"NSNumber",&,N,V_lastUploadUptimeInSeconds
// Property: isSpectrumUploader; attributes: TB,N,V_isSpectrumUploader
// Property: allTiersFileQueue; attributes: T@"SCBlizzardAllTiersFileQueue",&,N,V_allTiersFileQueue
// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",R,N,V_graphene
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",&,N,V_experimentProvider
// Property: zstdCompressor; attributes: T@"SCBlizzardZstdCompressor",&,N,V_zstdCompressor
// Property: backgroundUploadSession; attributes: T@"NSURLSession",&,N,V_backgroundUploadSession
// Property: backgroundUploadContexts; attributes: T@"NSMutableDictionary",&,N,V_backgroundUploadContexts
// Property: activeBackgroundUploadFilenames; attributes: T@"NSSet",&,N,V_activeBackgroundUploadFilenames
// Property: activeFilenamesFetchComplete; attributes: TB,V_activeFilenamesFetchComplete

// -[SCBlizzardUploadManager _shouldUseForegroundURLSessionForRequestInfo:]
// Type encoding: B24@0:8@16
// Implementation: 0x106addf10

// -[SCBlizzardUploadManager _uploadBlizzardRequestWithForegroundURLSession:uploadRequestInfo:headers:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106addfa0

// -[SCBlizzardUploadManager _uploadForegroundURLSessionBody:bodyHeaders:attempt:eventsData:headers:uploadRequestInfo:onComplete:]
// Type encoding: v72@0:8@16@24Q32@40@48@56@?64
// Implementation: 0x106ade130

// -[SCBlizzardUploadManager _shouldUseBackgroundUploadForRequestInfo:]
// Type encoding: B24@0:8@16
// Implementation: 0x106adb680

// -[SCBlizzardUploadManager _uploadBlizzardRequestInBackground:uploadRequestInfo:headers:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106adb7fc

// -[SCBlizzardUploadManager URLSession:task:didCompleteWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106adbc54

// -[SCBlizzardUploadManager URLSessionDidFinishEventsForBackgroundURLSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106adc478

// -[SCBlizzardUploadManager _writeDataToTempFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x106adc5d4

// -[SCBlizzardUploadManager _createTempFileURLForBackgroundUpload]
// Type encoding: @16@0:8
// Implementation: 0x106adc698

// -[SCBlizzardUploadManager _deserializeFileFromDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x106add0e8

// -[SCBlizzardUploadManager _parseContextFromTaskDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x106add3c8

// -[SCBlizzardUploadManager _fetchActiveBackgroundUploadFilenamesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106add4b8

// -[SCBlizzardUploadManager _filterOutFilesInActiveBackgroundUploads:]
// Type encoding: @24@0:8@16
// Implementation: 0x106add8d8

// -[SCBlizzardUploadManager _addFilesToActiveSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x106addae0

// -[SCBlizzardUploadManager _removeFilesFromActiveSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x106addcdc

// -[SCBlizzardUploadManager initWithAllTiersFileQueue:config:appStateProvider:timeProvider:urlProvider:experimentProvider:grapheneRegistry:configVersion:snapTokenProvider:loggingQueue:isSpectrumUploader:zstdCompressor:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64@72@80@88B96@100
// Implementation: 0x1003221d8

// -[SCBlizzardUploadManager _maybeUploadFromTimerTrigger]
// Type encoding: v16@0:8
// Implementation: 0x106ade654

// -[SCBlizzardUploadManager maybeUploadWithTrigger:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ade754

// -[SCBlizzardUploadManager maybeUploadFromBGWakeUp]
// Type encoding: v16@0:8
// Implementation: 0x106ade844

// -[SCBlizzardUploadManager prepareRequestHeadersWithIsFrame:]
// Type encoding: @20@0:8B16
// Implementation: 0x106ade944

// -[SCBlizzardUploadManager _serializeToLoggedEventListFromFiles:]
// Type encoding: @24@0:8@16
// Implementation: 0x106adeb78

// -[SCBlizzardUploadManager _uploadBlizzardRequest:uploadRequestInfo:headers:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106adef44

// -[SCBlizzardUploadManager _uploadBlizzardRequestViaNativeStack:uploadRequestInfo:headers:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106adf0d4

// -[SCBlizzardUploadManager _maybeUploadSpectrumFromTimerTrigger]
// Type encoding: v16@0:8
// Implementation: 0x106adf510

// -[SCBlizzardUploadManager maybeUploadSpectrumWithTrigger:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106adf610

// -[SCBlizzardUploadManager maybeUploadSpectrumFromBGWakeUp]
// Type encoding: v16@0:8
// Implementation: 0x106adf720

// -[SCBlizzardUploadManager uploadEventsEagerlyWithEventsData:eventCount:priority:region:seqItemsCount:isSpectrum:onComplete:]
// Type encoding: v68@0:8@16Q24Q32Q40Q48B56@?60
// Implementation: 0x106adf820

// -[SCBlizzardUploadManager prepareSpectrumRequestHeadersWithRegion:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106adf8f4

// -[SCBlizzardUploadManager _serializeToSpectrumSequentialItemListFromFiles:]
// Type encoding: @24@0:8@16
// Implementation: 0x106adfa48

// -[SCBlizzardUploadManager _uploadSpectrumRequest:uploadRequestInfo:headers:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106adfe60

// -[SCBlizzardUploadManager _uploadSpectrumAuthenticatedRequest:uploadRequestInfo:headers:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106ae0278

// -[SCBlizzardUploadManager _canUploadFilesForPriority:eventCount:trigger:]
// Type encoding: B40@0:8Q16Q24Q32
// Implementation: 0x106ae0674

// -[SCBlizzardUploadManager _scheduleUploadForPriority:region:trigger:isFrame:isSpectrum:]
// Type encoding: v48@0:8Q16Q24Q32B40B44
// Implementation: 0x106ae075c

// -[SCBlizzardUploadManager _doScheduleUploadForPriority:region:trigger:isFrame:isSpectrum:]
// Type encoding: v48@0:8Q16Q24Q32B40B44
// Implementation: 0x106ae08e8

// -[SCBlizzardUploadManager _createRequestWithPayload:priority:region:numEventsOnDisk:numEventsToUpload:numSeqItemsToUpload:filesToUpload:trigger:isFrame:isSpectrum:onComplete:]
// Type encoding: v96@0:8@16Q24Q32Q40Q48Q56@64Q72B80B84@?88
// Implementation: 0x106ae0de0

// -[SCBlizzardUploadManager _executeCompletionBlockWithRequestInfo:payloadSize:response:responseSizeInBytes:error:onComplete:]
// Type encoding: v64@0:8@16Q24@32Q40@48@?56
// Implementation: 0x106ae11c0

// -[SCBlizzardUploadManager logUploadGrapheneMetricsWithRequestWithInfo:responseInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ae148c

// -[SCBlizzardUploadManager _didCompleteRequestWithInfo:responseInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ae1a9c

// -[SCBlizzardUploadManager _getZstdCompressedData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ae1bb4

// -[SCBlizzardUploadManager config]
// Type encoding: @16@0:8
// Implementation: 0x106ae1c2c

// -[SCBlizzardUploadManager setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1c34

// -[SCBlizzardUploadManager appStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae1c64

// -[SCBlizzardUploadManager setAppStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1c6c

// -[SCBlizzardUploadManager timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae1c9c

// -[SCBlizzardUploadManager setTimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1ca4

// -[SCBlizzardUploadManager loggingQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ae1cd4

// -[SCBlizzardUploadManager setLoggingQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1cdc

// -[SCBlizzardUploadManager urlProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae1d0c

// -[SCBlizzardUploadManager setUrlProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1d14

// -[SCBlizzardUploadManager configVersion]
// Type encoding: @16@0:8
// Implementation: 0x106ae1d44

// -[SCBlizzardUploadManager setConfigVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1d4c

// -[SCBlizzardUploadManager snapTokenProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae1d7c

// -[SCBlizzardUploadManager uploadTimer]
// Type encoding: @16@0:8
// Implementation: 0x106ae1d84

// -[SCBlizzardUploadManager setUploadTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1d8c

// -[SCBlizzardUploadManager maxConcurrentRequests]
// Type encoding: Q16@0:8
// Implementation: 0x106ae1dbc

// -[SCBlizzardUploadManager setMaxConcurrentRequests:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ae1dc4

// -[SCBlizzardUploadManager lastUploadUptimeInSeconds]
// Type encoding: @16@0:8
// Implementation: 0x106ae1dcc

// -[SCBlizzardUploadManager setLastUploadUptimeInSeconds:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1dd4

// -[SCBlizzardUploadManager isSpectrumUploader]
// Type encoding: B16@0:8
// Implementation: 0x106ae1e04

// -[SCBlizzardUploadManager setIsSpectrumUploader:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ae1e0c

// -[SCBlizzardUploadManager allTiersFileQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ae1e14

// -[SCBlizzardUploadManager setAllTiersFileQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1e1c

// -[SCBlizzardUploadManager graphene]
// Type encoding: @16@0:8
// Implementation: 0x106ae1e4c

// -[SCBlizzardUploadManager experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae1e54

// -[SCBlizzardUploadManager setExperimentProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1e5c

// -[SCBlizzardUploadManager zstdCompressor]
// Type encoding: @16@0:8
// Implementation: 0x106ae1e8c

// -[SCBlizzardUploadManager setZstdCompressor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1e94

// -[SCBlizzardUploadManager backgroundUploadSession]
// Type encoding: @16@0:8
// Implementation: 0x106ae1ec4

// -[SCBlizzardUploadManager setBackgroundUploadSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1ecc

// -[SCBlizzardUploadManager backgroundUploadContexts]
// Type encoding: @16@0:8
// Implementation: 0x106ae1efc

// -[SCBlizzardUploadManager setBackgroundUploadContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1f04

// -[SCBlizzardUploadManager activeBackgroundUploadFilenames]
// Type encoding: @16@0:8
// Implementation: 0x106ae1f34

// -[SCBlizzardUploadManager setActiveBackgroundUploadFilenames:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae1f3c

// -[SCBlizzardUploadManager activeFilenamesFetchComplete]
// Type encoding: B16@0:8
// Implementation: 0x106ae1f6c

// -[SCBlizzardUploadManager setActiveFilenamesFetchComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ae1f78

// -[SCBlizzardUploadManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae1f80

// +[SCBlizzardUploadManager setBackgroundSessionCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106adc48c

// +[SCBlizzardUploadManager ensureBackgroundSessionExists]
// Type encoding: v16@0:8
// Implementation: 0x106adc4b4

// +[SCBlizzardUploadManager _setTaskDescription:withUploadRequestInfo:tempFileURL:payloadSize:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x106adc7d8

// +[SCBlizzardUploadManager _serializeContextToDict:tempFileURL:payloadSize:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x106adc8a4

// +[SCBlizzardUploadManager setNetworkServices:connectivityMonitor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100110188

// +[SCBlizzardUploadManager setConnectivityStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ade624

// +[SCBlizzardUploadManager setUserNetworkServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003cf254

@end
