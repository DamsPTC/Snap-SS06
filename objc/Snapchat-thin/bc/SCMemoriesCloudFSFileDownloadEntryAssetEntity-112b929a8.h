// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCloudFSFileDownloadEntryAssetEntity
// Superclass: NSObject
// Address: 0x112b929a8

@interface SCMemoriesCloudFSFileDownloadEntryAssetEntity

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delayNetworkDownloadEnabled; attributes: TB,V_delayNetworkDownloadEnabled
// Property: allMediaLocallyAvailable; attributes: TB,V_allMediaLocallyAvailable

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity initWithEntryId:assetId:snapRepresentation:assetType:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x10800ded4

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity snapDocKeyForEntity]
// Type encoding: @16@0:8
// Implementation: 0x10800dfb8

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity isDirectDownloadAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10800dfc0

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity snapDocForLocalOpsWithMediaReferenceFactory:snapDocKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10800dfc8

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity prepareDownloadInfoWithSnapInfoFetcher:memoriesGrapheneContext:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10800e080

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity retrieveMediaWithSnapDocManager:mediaReferenceFactory:accessToken:mdpCommonTrigger:progressHandler:completionQueue:completion:]
// Type encoding: @72@0:8@16@24@32@40@?48@56@?64
// Implementation: 0x10800e284

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity continueToStreamIfAvailableCompletionPerformer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10800ea54

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity _snapDocForSingleMediaWithMediaReferenceFactory:snapDocKey:mediaMetadata:shouldAddNetworkConfig:accessToken:hardcodeAPIGatewayHost:]
// Type encoding: @56@0:8@16@24^@32B40@44B52
// Implementation: 0x10800ea64

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity delayNetworkDownloadEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10800eba8

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity setDelayNetworkDownloadEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10800ebb4

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity allMediaLocallyAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10800ebbc

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity setAllMediaLocallyAvailable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10800ebc8

// -[SCMemoriesCloudFSFileDownloadEntryAssetEntity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10800ebd0

@end
