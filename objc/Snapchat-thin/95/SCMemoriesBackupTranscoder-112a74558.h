// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesBackupTranscoder
// Superclass: NSObject
// Address: 0x112a74558

@interface SCMemoriesBackupTranscoder

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesBackupTranscoder initWithVideoProcessor:encryptedContentManager:dataVault:temporaryFileWriter:grapheneRegistry:timeoutInSeconds:transcodeConcurrencyCounter:maxTranscodeConcurrency:transcodingCache:shouldStopOnLowMemory:appLifecycleObservable:fileManager:memoriesDataObjectContext:circumstanceEngine:performer:]
// Type encoding: @132@0:8@16@24@32@40@48d56@64Q72@80B88@92@100@108@116@124
// Implementation: 0x105871eec

// -[SCMemoriesBackupTranscoder _subscribeToLowMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058721cc

// -[SCMemoriesBackupTranscoder transcodeAndEncryptSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10587236c

// -[SCMemoriesBackupTranscoder transcodeVideoData:timeRange:identifier:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105872400

// -[SCMemoriesBackupTranscoder transcodeVideoAsset:identifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105872948

// -[SCMemoriesBackupTranscoder transcodeVideoAsset:timeRange:identifier:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105872958

// -[SCMemoriesBackupTranscoder transcodeVideoAsset:timeRange:identifier:isORT:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105872960

// -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeSnapDocWithLoggingWithTimeoutsWithIdentifier:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105872edc

// -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeGallerySnapWithLoggingWithTimeoutsWithSnap:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058730cc

// -[SCMemoriesBackupTranscoder _timeoutObservableWithTimeout:]
// Type encoding: @24@0:8d16
// Implementation: 0x1058732bc

// -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeSnapDocWithLoggingWithIdentifier:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058734f4

// -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeGallerySnapWithLoggingWithSnap:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105874254

// -[SCMemoriesBackupTranscoder _transcodeSnapDocWithLoggingWithIdentifier:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105874c94

// -[SCMemoriesBackupTranscoder _transcodeGallerySnapWithLoggingWithSnap:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105874e64

// -[SCMemoriesBackupTranscoder _transcodeSnapDocWithIdentifier:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105875034

// -[SCMemoriesBackupTranscoder _transcodeGallerySnapWithSnap:videoProcessorTranscodeObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105875620

// -[SCMemoriesBackupTranscoder _encryptCacheAndGetFileURLForData:forSnap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105875eac

// -[SCMemoriesBackupTranscoder _encryptData:forSnap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105876334

// -[SCMemoriesBackupTranscoder _decryptData:forIdentifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105876828

// -[SCMemoriesBackupTranscoder _saveDataToTemporaryDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x105876d8c

// -[SCMemoriesBackupTranscoder _handleLowMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x105877044

// -[SCMemoriesBackupTranscoder _logCheckpoint:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105877090

// -[SCMemoriesBackupTranscoder _logOverallPerfMetricWithStartTime:didSucceed:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105877108

// -[SCMemoriesBackupTranscoder _logCacheRetrievalPerfMetricsWithStartTime:didSucceed:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1058771d8

// -[SCMemoriesBackupTranscoder _logTranscodingPerfMetricsWithStartTime:didSucceed:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1058772a8

// -[SCMemoriesBackupTranscoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105877378

@end
