// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatMediaContentDownloader
// Superclass: NSObject
// Address: 0x112a14748

@interface SCProfileChatMediaContentDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileChatMediaContentDownloader initWithRequestManager:chatRequestManager:imageDownloader:contentDelivery:circumstanceEngine:chatMediaFetcher:eventAnnouncer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10508ac6c

// -[SCProfileChatMediaContentDownloader loadItem:completion:failure:callbackQueue:]
// Type encoding: @48@0:8@16@?24@?32@40
// Implementation: 0x10508ae6c

// -[SCProfileChatMediaContentDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:]
// Type encoding: @56@0:8@16@24@?32@?40@48
// Implementation: 0x10508b0e0

// -[SCProfileChatMediaContentDownloader resetCache]
// Type encoding: v16@0:8
// Implementation: 0x10508b0e8

// -[SCProfileChatMediaContentDownloader recordConsumptionOfTrackingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10508b0ec

// -[SCProfileChatMediaContentDownloader itemDownloaderHandler:didCancelWithKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10508b0f0

// -[SCProfileChatMediaContentDownloader itemDownloaderHandler:didCancelWithCancelableItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10508b214

// -[SCProfileChatMediaContentDownloader _cancelWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10508b218

// -[SCProfileChatMediaContentDownloader _allHandlersCanceledWithKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x10508b288

// -[SCProfileChatMediaContentDownloader _loadThumbnailImageForMedia:inDataMode:handler:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10508b3c8

// -[SCProfileChatMediaContentDownloader _fetchThumbnailImageForMedia:arroyoDataMode:dataMode:handler:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x10508b538

// -[SCProfileChatMediaContentDownloader _fetchThumbnailForMedia:dataModel:handler:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10508b5e8

// -[SCProfileChatMediaContentDownloader _fetchThumbnailFromRawImageForMedia:dataModel:handler:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10508b6c4

// -[SCProfileChatMediaContentDownloader _fetchImageForMedia:mediaId:contentObject:dataModel:downloadThumbnail:handler:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x10508b780

// -[SCProfileChatMediaContentDownloader _didSuccessFetchingChatMediaWithChatMediaContent:handler:isFromCache:isThumbnail:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x10508bde0

// -[SCProfileChatMediaContentDownloader _handleChatMediaFetchForChatMediaContent:errorKey:image:handler:isFromCache:isThumbnail:]
// Type encoding: v56@0:8@16@24@32@40B48B52
// Implementation: 0x10508c2b8

// -[SCProfileChatMediaContentDownloader _dataLoadedForKey:image:handler:isFromCache:isThumbnail:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x10508c430

// -[SCProfileChatMediaContentDownloader _dataFailedToLoadForKey:handler:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10508c7cc

// -[SCProfileChatMediaContentDownloader _shouldEarlyReturnForHandler:]
// Type encoding: B24@0:8@16
// Implementation: 0x10508cb5c

// -[SCProfileChatMediaContentDownloader _announceDidLoadEventWithIsFromCache:isThumbnail:item:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x10508cbe8

// -[SCProfileChatMediaContentDownloader _announceEvent:item:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10508cc58

// -[SCProfileChatMediaContentDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10508cdbc

@end
