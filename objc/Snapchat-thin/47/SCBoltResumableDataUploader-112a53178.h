// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoltResumableDataUploader
// Superclass: NSObject
// Address: 0x112a53178

@interface SCBoltResumableDataUploader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoltResumableDataUploader initWithPreferences:itemValidationChecker:urlExpirationSafetyMargin:requestManager:contentDeliveryLazy:configProviderLazy:grapheneRegistryLazy:userBlizzardLoggerLazy:uploadProgressMonitorLazy:circumstanceEngine:]
// Type encoding: @96@0:8@16@24d32@40@48@56@64@72@80@88
// Implementation: 0x105621528

// -[SCBoltResumableDataUploader uploadStateForUniqueMediaId:uploadStepMetricsTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105621914

// -[SCBoltResumableDataUploader cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x105621a0c

// -[SCBoltResumableDataUploader cancelUploadWithUniqueMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105621a10

// -[SCBoltResumableDataUploader uploadData:uniqueMediaId:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x105621aa0

// -[SCBoltResumableDataUploader uploadWithRequest:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x105621aa4

// -[SCBoltResumableDataUploader isBackgroundUploadComplete:]
// Type encoding: B24@0:8@16
// Implementation: 0x105621c7c

// -[SCBoltResumableDataUploader uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x105621c84

// -[SCBoltResumableDataUploader _uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x105622298

// -[SCBoltResumableDataUploader _startStateMachineWithDataToUpload:cachedDataToUpload:uploadState:dulpUploadLocation:uniqueMediaId:requestKeySuffix:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v104@0:8@16@24@32@40@48@56@64q72@80@?88@?96
// Implementation: 0x10562286c

// -[SCBoltResumableDataUploader _startStateMachineWithChunkDataToUpload:chunkMetadata:uploadState:dulpUploadLocation:uniqueMediaId:requestKeySuffix:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v104@0:8@16@24@32@40@48@56@64q72@80@?88@?96
// Implementation: 0x105622b90

// -[SCBoltResumableDataUploader _persistAndStartUploadWithUploadData:dulpUploadLocation:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40q48@56@?64@?72
// Implementation: 0x105623380

// -[SCBoltResumableDataUploader startMonitoringUploadProgressWithUniqueMediaId:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105623800

// -[SCBoltResumableDataUploader _startNewUploadSessionWithUploadData:dulpUploadLocation:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40q48@56@?64@?72
// Implementation: 0x105623870

// -[SCBoltResumableDataUploader _fetchNewSessionUriAndUploadWithUploadLocation:dataToUpload:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40q48@56@?64@?72
// Implementation: 0x105623890

// -[SCBoltResumableDataUploader _uploadToNewSessionUriFromBeginning:uploadLocation:response:error:uploadData:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v104@0:8@16@24@32@40@48@56@64q72@80@?88@?96
// Implementation: 0x105623b58

// -[SCBoltResumableDataUploader _resumeUploadSessionWithUploadState:uploadData:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40q48@56@?64@?72
// Implementation: 0x10562414c

// -[SCBoltResumableDataUploader _handleRequestStartByteFetch:response:error:resumableURI:uploadLocation:uploadData:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v112@0:8q16@24@32@40@48@56@64@72q80@88@?96@?104
// Implementation: 0x10562448c

// -[SCBoltResumableDataUploader _fetchSessionUriWithUploadLocation:uniqueMediaId:uploadSize:uploadStepMetricsTracker:priority:callbackPerformer:failureBlock:uriBlock:]
// Type encoding: v80@0:8@16@24Q32@40q48@56@?64@?72
// Implementation: 0x105624c0c

// -[SCBoltResumableDataUploader _getUploadStartByteWithDataLength:uniqueMediaId:uploadStepMetricsTracker:uploadState:priority:callbackPerformer:uploadStartByteBlock:]
// Type encoding: v72@0:8q16@24@32@40q48@56@?64
// Implementation: 0x105625114

// -[SCBoltResumableDataUploader _uploadFromByteWithSessionURI:uniqueMediaId:uploadStepMetricsTracker:uploadStartByte:uploadData:uploadLocation:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v96@0:8@16@24@32q40@48@56q64@72@?80@?88
// Implementation: 0x1056255d0

// -[SCBoltResumableDataUploader _uploadChunkDataWithSessionURI:chunkData:chunkMetadata:uniqueMediaId:uploadStepMetricsTracker:uploadLocation:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v96@0:8@16@24@32@40@48@56q64@72@?80@?88
// Implementation: 0x105626700

// -[SCBoltResumableDataUploader _clearExpiredUploadStates]
// Type encoding: v16@0:8
// Implementation: 0x105627620

// -[SCBoltResumableDataUploader _upsertUploadStateWithBlock:forMediaId:clearUploadState:uploadStepMetricsTracker:]
// Type encoding: v44@0:8@?16@24B32@36
// Implementation: 0x10562790c

// -[SCBoltResumableDataUploader _removeUploadStateForMediaId:uploadStepMetricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105627ae0

// -[SCBoltResumableDataUploader _uploadRequestDidProgress:uniqueMediaId:uploadStartByte:croppedDataLength:reportStartByte:totalBytes:chunked:uploadStepMetricsTracker:]
// Type encoding: v76@0:8@16@24q32q40q48@56B64@68
// Implementation: 0x105627c08

// -[SCBoltResumableDataUploader _clearAllUploadStates]
// Type encoding: v16@0:8
// Implementation: 0x105627e18

// -[SCBoltResumableDataUploader setUploadStatusDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105627e6c

// -[SCBoltResumableDataUploader _clearUploadStatusTrackingForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105627e78

// -[SCBoltResumableDataUploader _reportUploadSentBytes:requestSentBytes:totalBytes:chunked:uploadStepMetricsTracker:mediaId:]
// Type encoding: v60@0:8q16q24@32B40@44@52
// Implementation: 0x105627fa4

// -[SCBoltResumableDataUploader _recordServerConfirmedOffset:totalBytes:mediaId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10562825c

// -[SCBoltResumableDataUploader _uploadLocalFileWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x1056283ec

// -[SCBoltResumableDataUploader _fetchNewSessionUriAndUploadLocalFile:fileSize:dulpUploadLocation:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v88@0:8@16Q24@32@40@48q56@64@?72@?80
// Implementation: 0x105628c6c

// -[SCBoltResumableDataUploader _resumeLocalFileUploadWithUploadState:localFileUrl:fileSize:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v88@0:8@16@24Q32@40@48q56@64@?72@?80
// Implementation: 0x1056293b4

// -[SCBoltResumableDataUploader _handleLocalFileStartByteFetch:response:error:resumableURI:uploadLocation:localFileUrl:fileSize:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v120@0:8q16@24@32@40@48@56Q64@72@80q88@96@?104@?112
// Implementation: 0x1056296e8

// -[SCBoltResumableDataUploader _uploadLocalFileFromByteWithSessionURI:localFileUrl:fileSize:uniqueMediaId:uploadStepMetricsTracker:uploadStartByte:uploadLocation:priority:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v104@0:8@16@24Q32@40@48q56@64q72@80@?88@?96
// Implementation: 0x105629df8

// -[SCBoltResumableDataUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10562b754

@end
