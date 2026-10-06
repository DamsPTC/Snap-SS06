// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDeviceDependentRemoteAssetDownloadOperation
// Superclass: SCLensAssetDownloadOperation
// Address: 0x112c6cf68

@interface SCLensDeviceDependentRemoteAssetDownloadOperation


// -[SCLensDeviceDependentRemoteAssetDownloadOperation initWithLens:requestTiming:asset:assetFetchType:contentDataFetcher:assetLensResourceResolver:lensRemoteAssetLogger:resourceDownloadLogger:]
// Type encoding: @80@0:8@16q24@32q40@48@56@64@72
// Implementation: 0x10b0c5a44

// -[SCLensDeviceDependentRemoteAssetDownloadOperation executeWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c5ba8

// -[SCLensDeviceDependentRemoteAssetDownloadOperation _handleLensResourceLoaded:settings:startTime:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x10b0c5da4

// -[SCLensDeviceDependentRemoteAssetDownloadOperation boostWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c6164

// -[SCLensDeviceDependentRemoteAssetDownloadOperation progressObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0c621c

// -[SCLensDeviceDependentRemoteAssetDownloadOperation _processDataFetcherResponseContentPath:checksum:cached:inputSettings:error:]
// Type encoding: v52@0:8@16@24B32@36@44
// Implementation: 0x10b0c624c

// -[SCLensDeviceDependentRemoteAssetDownloadOperation _logDownloadFinishedWithStartTime:contentResult:requestingLensId:downloadSize:cached:statusCode:]
// Type encoding: v60@0:8d16@24@32Q40B48q52
// Implementation: 0x10b0c6390

// -[SCLensDeviceDependentRemoteAssetDownloadOperation isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0c6448

// -[SCLensDeviceDependentRemoteAssetDownloadOperation hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b0c65a0

// -[SCLensDeviceDependentRemoteAssetDownloadOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0c6660

@end
