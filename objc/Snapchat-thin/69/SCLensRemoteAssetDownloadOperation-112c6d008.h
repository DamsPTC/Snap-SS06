// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetDownloadOperation
// Superclass: SCLensAssetDownloadOperation
// Address: 0x112c6d008

@interface SCLensRemoteAssetDownloadOperation

// Property: contentDataFetcher; attributes: T@"<SCLensContentDataFetching>",&,N,V_contentDataFetcher
// Property: assetURLAccordingResourceType; attributes: T@"NSURL",&,N,V_assetURLAccordingResourceType
// Property: assetChecksum; attributes: T@"NSString",&,N,V_assetChecksum
// Property: assetResourceType; attributes: Tq,N,V_assetResourceType
// Property: assetFetchType; attributes: Tq,N,V_assetFetchType
// Property: progressSubject; attributes: T@"SCBehaviorSubject",&,N,V_progressSubject

// -[SCLensRemoteAssetDownloadOperation initWithLens:requestTiming:asset:assetFetchType:contentDataFetcher:lensRemoteAssetLogger:resourceDownloadLogger:]
// Type encoding: @72@0:8@16q24@32q40@48@56@64
// Implementation: 0x10b0c7770

// -[SCLensRemoteAssetDownloadOperation assetResource]
// Type encoding: @16@0:8
// Implementation: 0x10b0c7a60

// -[SCLensRemoteAssetDownloadOperation executeWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c7b1c

// -[SCLensRemoteAssetDownloadOperation boostWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c7f28

// -[SCLensRemoteAssetDownloadOperation progressObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0c7ff0

// -[SCLensRemoteAssetDownloadOperation processDataFetcherResponseContentPath:checksum:resourceType:cached:cacheKey:inputSettings:error:]
// Type encoding: v68@0:8@16@24q32B40@44@52@60
// Implementation: 0x10b0c8020

// -[SCLensRemoteAssetDownloadOperation processContentVerificationError:withChecksum:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0c8174

// -[SCLensRemoteAssetDownloadOperation _logDownloadFinishedWithStartTime:contentResult:downloadSize:cached:statusCode:]
// Type encoding: v52@0:8d16@24Q32B40q44
// Implementation: 0x10b0c8200

// -[SCLensRemoteAssetDownloadOperation isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0c82b8

// -[SCLensRemoteAssetDownloadOperation hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b0c83d8

// -[SCLensRemoteAssetDownloadOperation contentDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0c8478

// -[SCLensRemoteAssetDownloadOperation setContentDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c8488

// -[SCLensRemoteAssetDownloadOperation assetURLAccordingResourceType]
// Type encoding: @16@0:8
// Implementation: 0x10b0c84c8

// -[SCLensRemoteAssetDownloadOperation setAssetURLAccordingResourceType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c84d8

// -[SCLensRemoteAssetDownloadOperation assetChecksum]
// Type encoding: @16@0:8
// Implementation: 0x10b0c8518

// -[SCLensRemoteAssetDownloadOperation setAssetChecksum:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c8528

// -[SCLensRemoteAssetDownloadOperation assetResourceType]
// Type encoding: q16@0:8
// Implementation: 0x10b0c8568

// -[SCLensRemoteAssetDownloadOperation setAssetResourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0c8578

// -[SCLensRemoteAssetDownloadOperation assetFetchType]
// Type encoding: q16@0:8
// Implementation: 0x10b0c8588

// -[SCLensRemoteAssetDownloadOperation setAssetFetchType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0c8598

// -[SCLensRemoteAssetDownloadOperation progressSubject]
// Type encoding: @16@0:8
// Implementation: 0x10b0c85a8

// -[SCLensRemoteAssetDownloadOperation setProgressSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c85b8

// -[SCLensRemoteAssetDownloadOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0c85f8

@end
