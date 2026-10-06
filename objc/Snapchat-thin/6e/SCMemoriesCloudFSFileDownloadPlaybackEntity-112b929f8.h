// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCloudFSFileDownloadPlaybackEntity
// Superclass: NSObject
// Address: 0x112b929f8

@interface SCMemoriesCloudFSFileDownloadPlaybackEntity

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delayNetworkDownloadEnabled; attributes: TB,V_delayNetworkDownloadEnabled
// Property: allMediaLocallyAvailable; attributes: TB,V_allMediaLocallyAvailable

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity initWithSnap:snapRepresentations:enableContentReuse:circumstanceEngine:streamingBytesReuser:decryptionContextProvider:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x10800ec18

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity snapDocKeyForEntity]
// Type encoding: @16@0:8
// Implementation: 0x10800ed44

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity snapDocForLocalOpsWithMediaReferenceFactory:snapDocKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10800ed90

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity prepareDownloadInfoWithSnapInfoFetcher:memoriesGrapheneContext:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10800ed98

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity retrieveMediaWithSnapDocManager:mediaReferenceFactory:accessToken:mdpCommonTrigger:progressHandler:completionQueue:completion:]
// Type encoding: @72@0:8@16@24@32@40@?48@56@?64
// Implementation: 0x10800ef74

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity continueToStreamIfAvailableCompletionPerformer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10800f7cc

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity _snapDocForPlaybackWithMediaReferenceFactory:snapDocKey:networkConfigParams:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10800f964

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity _shouldRemoteFetchUrls]
// Type encoding: B16@0:8
// Implementation: 0x10800fb9c

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity isDirectDownloadAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10800fca8

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity delayNetworkDownloadEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10800fdcc

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity setDelayNetworkDownloadEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10800fdd8

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity allMediaLocallyAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10800fde0

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity setAllMediaLocallyAvailable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10800fdec

// -[SCMemoriesCloudFSFileDownloadPlaybackEntity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10800fdf4

@end
