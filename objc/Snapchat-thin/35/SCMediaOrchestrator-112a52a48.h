// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaOrchestrator
// Superclass: NSObject
// Address: 0x112a52a48

@interface SCMediaOrchestrator

// Property: videoCodecByMediaId; attributes: T@"NSDictionary",C,V_videoCodecByMediaId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaOrchestrator initWithPerformer:statePersister:mediaDataPackageManaging:mediaDataPackageManagingV2:readFromMediaPackageManagerV2Enabled:writeToMediaPackageManagerV2InsideEnabled:writeToMediaPackageManagerV2OutsideEnabled:writeToMediaPackageManagerV1Disabled:uploadMediaDataManaging:boltDataUploaderLazy:videoFilterCoordinator:encryptionCoordinator:overlayCoordinator:grapheneRegistryLazy:snapUploaderCoordinator:circumstanceEngine:]
// Type encoding: @128@0:8@16@24@32@40B48B52B56B60@64@72@80@88@96@104@112@120
// Implementation: 0x105609a88

// -[SCMediaOrchestrator _registerTranscodeStatusReporterIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x10560a01c

// -[SCMediaOrchestrator transcodeStatusDidUpdateForMediaId:update:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10560a240

// -[SCMediaOrchestrator _registerAsUploadStatusDelegateIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x10560a358

// -[SCMediaOrchestrator _uploadProgressReportingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10560a41c

// -[SCMediaOrchestrator uploadStatusDidUpdateForMediaId:update:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10560a45c

// -[SCMediaOrchestrator _crossPostStoryPreserveEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10560a5dc

// -[SCMediaOrchestrator _overwriteAppSourceOnlyWhenUnsetEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10560a61c

// -[SCMediaOrchestrator _initialLoadSessionInfoStore]
// Type encoding: v16@0:8
// Implementation: 0x10560a65c

// -[SCMediaOrchestrator _loadSessionInfos]
// Type encoding: v16@0:8
// Implementation: 0x10560aa64

// -[SCMediaOrchestrator resumeWithId:appSource:callbackPerformer:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x10560afcc

// -[SCMediaOrchestrator queryUploadStatusWithId:callbackPerformer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10560b238

// -[SCMediaOrchestrator resetUploadWithId:callbackPerformer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10560ba7c

// -[SCMediaOrchestrator _resetUploadWithId:callbackPerformer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10560bbd4

// -[SCMediaOrchestrator _resetInFlightUploadWithId:answer:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10560bee8

// -[SCMediaOrchestrator _resetTranscodeForMediaId:answer:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10560c174

// -[SCMediaOrchestrator _finishResetWithId:outcome:answer:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10560c4c4

// -[SCMediaOrchestrator _resumeWithId:appSource:callbackPerformer:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x10560c66c

// -[SCMediaOrchestrator _startFromTranscodingRetryWithMediaId:isMediaZipped:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10560ce30

// -[SCMediaOrchestrator _startUploadWithPackageHandle:encryptionKey:encryptionIv:mediaType:stepMetrics:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x10560da58

// -[SCMediaOrchestrator didFailPrepareMediaWithId:retriable:debugInfo:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10560df24

// -[SCMediaOrchestrator didFailPrepareMediaWithId:retriable:error:debugInfo:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x10560df30

// -[SCMediaOrchestrator setUploadableMediaWithId:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:completion:]
// Type encoding: v88@0:8@16@24@32@40@48@56q64@72@?80
// Implementation: 0x10560e0a8

// -[SCMediaOrchestrator setUploadableMediaWithId:mediaFileUrl:overlayData:encryptionKey:encryptionIv:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x10560e32c

// -[SCMediaOrchestrator startChunkedTranscodeAndUploadMediaWithId:videoFilter:overlayData:encryptionKey:encryptionIv:captureSessionId:transcodeCompletion:uploadCompletion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x10560e330

// -[SCMediaOrchestrator _setUploadableMediaWithId:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:completion:]
// Type encoding: v88@0:8@16@24@32@40@48@56q64@72@?80
// Implementation: 0x10560e518

// -[SCMediaOrchestrator persistSnapVideoFilter:forMediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10560e730

// -[SCMediaOrchestrator registerSnapDocPersistedForMediaId:captureSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10560e918

// -[SCMediaOrchestrator registerDependentMediaStubForMediaId:encryptionKey:encryptionIv:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10560eb20

// -[SCMediaOrchestrator _handleEmptyMediaWithId:isMediaZipped:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10560ed68

// -[SCMediaOrchestrator _didCompleteTranscodingRetryWithMediaId:outputData:key:iv:retriable:error:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x10560efac

// -[SCMediaOrchestrator _uploadAndUpdateStatusAndPersistDataWithId:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:completion:]
// Type encoding: v88@0:8@16@24@32@40@48@56q64@72@?80
// Implementation: 0x10560f440

// -[SCMediaOrchestrator startMonitoringUploadProgressWithMediaId:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10560fbb0

// -[SCMediaOrchestrator _upload:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:stepMetrics:]
// Type encoding: v88@0:8@16@24@32@40@48@56q64@72@80
// Implementation: 0x10560fbb8

// -[SCMediaOrchestrator _didFailWithId:failureStep:failedStepStatus:failureReason:isMediaZipped:failureEnum:]
// Type encoding: v60@0:8@16Q24Q32@40B48Q52
// Implementation: 0x1056104a0

// -[SCMediaOrchestrator _executeCallbacksWithId:orchestrationResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10561084c

// -[SCMediaOrchestrator setVideoCodecHint:forMediaId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1056109a4

// -[SCMediaOrchestrator _recordVideoCodecHint:forMediaId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105610a5c

// -[SCMediaOrchestrator videoCodecForMediaId:]
// Type encoding: q24@0:8@16
// Implementation: 0x105610b3c

// -[SCMediaOrchestrator _cleanUpDataForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105610bec

// -[SCMediaOrchestrator _enqueueCallbackWithId:callbackPerformer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105610e98

// -[SCMediaOrchestrator _updateMediaId:sessionInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105610f74

// -[SCMediaOrchestrator _flushDeferredDidFailRetriableForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105610fe0

// -[SCMediaOrchestrator _stepMetricsWithMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105611098

// -[SCMediaOrchestrator _startChunkedTranscodeAndUploadMediaWithId:videoFilter:overlayData:encryptionKey:encryptionIv:captureSessionId:transcodeCompletion:uploadCompletion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x105611114

// -[SCMediaOrchestrator _fragmentedTranscodeRespectsRetriable]
// Type encoding: B16@0:8
// Implementation: 0x105611f9c

// -[SCMediaOrchestrator _logPreuploadUpdateGrapheneFatalBreakdown:inRetry:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105611fb4

// -[SCMediaOrchestrator _logNoEncInfoDiagnosticsWithSessionInfo:storeEncryptionInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10561207c

// -[SCMediaOrchestrator videoCodecByMediaId]
// Type encoding: @16@0:8
// Implementation: 0x105612220

// -[SCMediaOrchestrator setVideoCodecByMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10561222c

// -[SCMediaOrchestrator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105612234

@end
