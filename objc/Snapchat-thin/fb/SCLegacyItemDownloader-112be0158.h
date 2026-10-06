// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyItemDownloader
// Superclass: NSObject
// Address: 0x112be0158

@interface SCLegacyItemDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyItemDownloader init]
// Type encoding: @16@0:8
// Implementation: 0x109003628

// -[SCLegacyItemDownloader loadItem:completion:failure:callbackQueue:]
// Type encoding: @48@0:8@16@?24@?32@40
// Implementation: 0x1090036ac

// -[SCLegacyItemDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:]
// Type encoding: @56@0:8@16@24@?32@?40@48
// Implementation: 0x1090036e0

// -[SCLegacyItemDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:skipDedup:enableContentManager:isEligibleForStreaming:]
// Type encoding: @68@0:8@16@24@?32@?40@48B56B60B64
// Implementation: 0x109003704

// -[SCLegacyItemDownloader resetCache]
// Type encoding: v16@0:8
// Implementation: 0x1090043e0

// -[SCLegacyItemDownloader recordConsumptionOfTrackingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109004414

// -[SCLegacyItemDownloader itemDownloaderHandler:didCancelWithKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109004464

// -[SCLegacyItemDownloader itemDownloaderHandler:didCancelWithCancelableItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109004588

// -[SCLegacyItemDownloader _logGrapheneMetricsForContentManagerForCacheKey:mediaContextType:startFetchTime:success:]
// Type encoding: v44@0:8@16q24d32B40
// Implementation: 0x109004618

// -[SCLegacyItemDownloader _allHandlersCanceledWithKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x109004870

// -[SCLegacyItemDownloader _cancelWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090049b0

// -[SCLegacyItemDownloader _loadItem:remoteDownloader:handler:skipDedup:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x109004a38

// -[SCLegacyItemDownloader _loadItemRemotely:remoteDownloader:handler:skipDedup:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x109004bac

// -[SCLegacyItemDownloader _dataLoadedForItem:decryptedData:isFromCache:handler:skipDedup:]
// Type encoding: v48@0:8@16@24B32@36B44
// Implementation: 0x109004f18

// -[SCLegacyItemDownloader _dataFailedToLoadForKey:handler:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1090052e4

// -[SCLegacyItemDownloader _disposeLoaderHandlerIfNeededForKey:handler:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1090052e8

// -[SCLegacyItemDownloader _downloadItem:completionBlock:retry:]
// Type encoding: v40@0:8@16@?24Q32
// Implementation: 0x1090055d0

// -[SCLegacyItemDownloader isItemValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090059d8

// -[SCLegacyItemDownloader requestContexts:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090059e0

// -[SCLegacyItemDownloader resultFromData:withItem:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090059e8

// -[SCLegacyItemDownloader resultFromContentResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090059f0

// -[SCLegacyItemDownloader cacheKeyForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090059f8

// -[SCLegacyItemDownloader requestForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x109005a00

// -[SCLegacyItemDownloader requestManager]
// Type encoding: @16@0:8
// Implementation: 0x109005a08

// -[SCLegacyItemDownloader contentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x109005a10

// -[SCLegacyItemDownloader cache]
// Type encoding: @16@0:8
// Implementation: 0x109005a18

// -[SCLegacyItemDownloader cacheExpirationTimeInSecs]
// Type encoding: Q16@0:8
// Implementation: 0x109005a20

// -[SCLegacyItemDownloader shouldCache:]
// Type encoding: B24@0:8@16
// Implementation: 0x109005a28

// -[SCLegacyItemDownloader maxRetryCount]
// Type encoding: Q16@0:8
// Implementation: 0x109005a30

// -[SCLegacyItemDownloader downloadPerformer]
// Type encoding: @16@0:8
// Implementation: 0x109005a38

// -[SCLegacyItemDownloader mediaContextTypeForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x109005aa8

// -[SCLegacyItemDownloader debugLogForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x109005ab0

// -[SCLegacyItemDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109005abc

@end
