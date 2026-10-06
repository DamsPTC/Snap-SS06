// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDynamicRemoteAssetDownloadOperation
// Superclass: SCLensAssetDownloadOperation
// Address: 0x112c6cfb8

@interface SCLensDynamicRemoteAssetDownloadOperation

// Property: contentDataFetcher; attributes: T@"<SCLensContentDataFetching>",&,N,V_contentDataFetcher
// Property: assetURLAccordingResourceType; attributes: T@"NSURL",&,N,V_assetURLAccordingResourceType
// Property: assetResourceType; attributes: Tq,N,V_assetResourceType
// Property: assetFetchType; attributes: Tq,N,V_assetFetchType
// Property: progressSubject; attributes: T@"SCBehaviorSubject",&,N,V_progressSubject

// -[SCLensDynamicRemoteAssetDownloadOperation initWithLens:requestTiming:asset:assetFetchType:contentDataFetcher:blobDataFetcher:lensRemoteAssetLogger:resourceDownloadLogger:]
// Type encoding: @80@0:8@16q24@32q40@48@56@64@72
// Implementation: 0x10b0c66d0

// -[SCLensDynamicRemoteAssetDownloadOperation executeWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c687c

// -[SCLensDynamicRemoteAssetDownloadOperation boostWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c6fd8

// -[SCLensDynamicRemoteAssetDownloadOperation progressObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0c70a0

// -[SCLensDynamicRemoteAssetDownloadOperation _assetResource]
// Type encoding: @16@0:8
// Implementation: 0x10b0c70d0

// -[SCLensDynamicRemoteAssetDownloadOperation _processDataFetcherResponseContentPath:checksum:resourceType:cached:cacheKey:inputSettings:error:]
// Type encoding: v68@0:8@16@24q32B40@44@52@60
// Implementation: 0x10b0c7168

// -[SCLensDynamicRemoteAssetDownloadOperation processContentVerificationError:withChecksum:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0c72bc

// -[SCLensDynamicRemoteAssetDownloadOperation _logDownloadFinishedWithStartTime:contentResult:downloadSize:cached:statusCode:]
// Type encoding: v52@0:8d16@24Q32B40q44
// Implementation: 0x10b0c7348

// -[SCLensDynamicRemoteAssetDownloadOperation isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0c7400

// -[SCLensDynamicRemoteAssetDownloadOperation hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b0c7520

// -[SCLensDynamicRemoteAssetDownloadOperation contentDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0c75c0

// -[SCLensDynamicRemoteAssetDownloadOperation setContentDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c75d0

// -[SCLensDynamicRemoteAssetDownloadOperation assetURLAccordingResourceType]
// Type encoding: @16@0:8
// Implementation: 0x10b0c7610

// -[SCLensDynamicRemoteAssetDownloadOperation setAssetURLAccordingResourceType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c7620

// -[SCLensDynamicRemoteAssetDownloadOperation assetResourceType]
// Type encoding: q16@0:8
// Implementation: 0x10b0c7660

// -[SCLensDynamicRemoteAssetDownloadOperation setAssetResourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0c7670

// -[SCLensDynamicRemoteAssetDownloadOperation assetFetchType]
// Type encoding: q16@0:8
// Implementation: 0x10b0c7680

// -[SCLensDynamicRemoteAssetDownloadOperation setAssetFetchType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0c7690

// -[SCLensDynamicRemoteAssetDownloadOperation progressSubject]
// Type encoding: @16@0:8
// Implementation: 0x10b0c76a0

// -[SCLensDynamicRemoteAssetDownloadOperation setProgressSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c76b0

// -[SCLensDynamicRemoteAssetDownloadOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0c76f0

@end
