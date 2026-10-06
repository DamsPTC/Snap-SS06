// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCloudFSFileDownloadSingleMediaEntity
// Superclass: NSObject
// Address: 0x112b92a98

@interface SCMemoriesCloudFSFileDownloadSingleMediaEntity

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delayNetworkDownloadEnabled; attributes: TB,V_delayNetworkDownloadEnabled
// Property: allMediaLocallyAvailable; attributes: TB,V_allMediaLocallyAvailable

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity initWithSnap:snapRepresentation:circumstanceEngine:streamingBytesReuser:decryptionContextProvider:thumbnailResolutionContextLogger:thumbnailDownloadResultLogger:userTrackedLogger:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x108010254

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity snapDocKeyForEntity]
// Type encoding: @16@0:8
// Implementation: 0x1080103e4

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity snapDocForLocalOpsWithMediaReferenceFactory:snapDocKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10801044c

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity prepareDownloadInfoWithSnapInfoFetcher:memoriesGrapheneContext:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108010500

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity retrieveMediaWithSnapDocManager:mediaReferenceFactory:accessToken:mdpCommonTrigger:progressHandler:completionQueue:completion:]
// Type encoding: @72@0:8@16@24@32@40@?48@56@?64
// Implementation: 0x1080106e8

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity continueToStreamIfAvailableCompletionPerformer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1080110b8

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _snapDocForSingleMediaWithMediaReferenceFactory:snapDocKey:mediaMetadata:shouldAddNetworkConfig:accessToken:]
// Type encoding: @52@0:8@16@24^@32B40@44
// Implementation: 0x108011290

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _shouldRemoteFetchUrls]
// Type encoding: B16@0:8
// Implementation: 0x1080116a8

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _requireEdits]
// Type encoding: B16@0:8
// Implementation: 0x1080116b4

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity isDirectDownloadAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1080116dc

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity _networkDownloadDelayInSec]
// Type encoding: d16@0:8
// Implementation: 0x108011718

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity delayNetworkDownloadEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108011780

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity setDelayNetworkDownloadEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10801178c

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity allMediaLocallyAvailable]
// Type encoding: B16@0:8
// Implementation: 0x108011794

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity setAllMediaLocallyAvailable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080117a0

// -[SCMemoriesCloudFSFileDownloadSingleMediaEntity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080117a8

@end
