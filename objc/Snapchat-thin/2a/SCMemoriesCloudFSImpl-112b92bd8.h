// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCloudFSImpl
// Superclass: NSObject
// Address: 0x112b92bd8

@interface SCMemoriesCloudFSImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCloudFSImpl initWithSnapDocManager:snapInfoFetcher:mediaReferenceFactory:snapTokenProvider:circumstanceEngine:grapheneRegistry:contentDelivery:encryptedContentManager:memoriesExperimentService:userTrackedLogger:decryptionContextProvider:invalidStreamingContentRemover:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x108013260

// -[SCMemoriesCloudFSImpl transientLocalContent]
// Type encoding: @16@0:8
// Implementation: 0x1080135bc

// -[SCMemoriesCloudFSImpl addSnap:baseMediaContent:mediaOverlayContent:isSnapSynced:]
// Type encoding: B44@0:8@16@24@32B40
// Implementation: 0x108013758

// -[SCMemoriesCloudFSImpl addThumbnailForMemoriesSnap:thumbnailContent:isSnapSynced:]
// Type encoding: B36@0:8@16@24B32
// Implementation: 0x108013904

// -[SCMemoriesCloudFSImpl addSnapAssetForSnap:assetType:assetContent:isSnapSynced:]
// Type encoding: B44@0:8@16q24@32B40
// Implementation: 0x108013a44

// -[SCMemoriesCloudFSImpl addAssetWithEntryId:assetId:assetType:assetContent:isSynced:]
// Type encoding: B52@0:8@16@24q32@40B48
// Implementation: 0x108013b74

// -[SCMemoriesCloudFSImpl updateMediaReferenceForSnapLevelSnapDoc:mediaId:memoriesContent:snapDocKey:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x108013ca8

// -[SCMemoriesCloudFSImpl cloneAndReplaceMediaReferencesSnapDoc:mediaIdToContentReference:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108014060

// -[SCMemoriesCloudFSImpl fetchEntrySnapDocForEntryId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1080140f0

// -[SCMemoriesCloudFSImpl resolveFileForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x108014178

// -[SCMemoriesCloudFSImpl resolveBaseMediaFileForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x108014560

// -[SCMemoriesCloudFSImpl resolveFileForSnap:assetType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108014600

// -[SCMemoriesCloudFSImpl resolveRenderedLowresMediaFileForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080146dc

// -[SCMemoriesCloudFSImpl resolveRenderedLowresMediaFileForSnap:delayNetworkDownloadEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1080146e4

// -[SCMemoriesCloudFSImpl resolveSnapOverlayFileForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080147bc

// -[SCMemoriesCloudFSImpl resolveFileForEntryId:assetId:assetType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x108014868

// -[SCMemoriesCloudFSImpl resolveFileForMemoriesSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x108014b30

// -[SCMemoriesCloudFSImpl resolveFileForMemoriesSnap:assetType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108014b84

// -[SCMemoriesCloudFSImpl resolveRenderedLowresMediaFileForMemoriesSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x108014be8

// -[SCMemoriesCloudFSImpl resolveSnapOverlayFileForMemoriesSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x108014c3c

// -[SCMemoriesCloudFSImpl downloadWithEntity:memoriesGrapheneContext:progressHandler:resultHandler:]
// Type encoding: @48@0:8@16@24@?32@?40
// Implementation: 0x108014c90

// -[SCMemoriesCloudFSImpl markAsSyncedEntity:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080150a4

// -[SCMemoriesCloudFSImpl invalidateEntity:]
// Type encoding: v24@0:8@16
// Implementation: 0x108015164

// -[SCMemoriesCloudFSImpl _retrieveAccessTokenAndMediaForEntity:mdpCommonTrigger:progressHandler:downloadRequest:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x108015228

// -[SCMemoriesCloudFSImpl _retrieveMediaForEntity:accessToken:mdpCommonTrigger:progressHandler:downloadRequest:]
// Type encoding: v56@0:8@16@24@32@?40@48
// Implementation: 0x10801543c

// -[SCMemoriesCloudFSImpl _resolveSingleMediaForSnap:snapRepresentation:snapDocKey:delayNetworkDownloadEnabled:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1080156b4

// -[SCMemoriesCloudFSImpl _resolveSingleMediaResultFromSnapDocForSnap:snapRepresentation:snapDocKey:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1080159fc

// -[SCMemoriesCloudFSImpl _addMediaReferenceForKey:snapDoc:newLocalContentKeyString:memoriesContent:shouldMarkAsSynced:]
// Type encoding: B52@0:8@16@24@32@40B48
// Implementation: 0x108015b1c

// -[SCMemoriesCloudFSImpl _newContentWriterForContentKey:memoriesContent:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108015db0

// -[SCMemoriesCloudFSImpl _snapRepresentationToMediaResultMapForLocalContentEntityId:hasOverlayImage:snapDocKey:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x108015fd4

// -[SCMemoriesCloudFSImpl _snapRepresentationToMediaResultMapForSnapDoc:snapDocKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1080160f0

// -[SCMemoriesCloudFSImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108016284

@end
