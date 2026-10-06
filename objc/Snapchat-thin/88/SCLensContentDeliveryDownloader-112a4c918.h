// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensContentDeliveryDownloader
// Superclass: NSObject
// Address: 0x112a4c918

@interface SCLensContentDeliveryDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensContentDeliveryDownloader initWithContentDelivery:lensPerformerProvider:pageHierarchy:expirationDays:mediaType:]
// Type encoding: @56@0:8@16@24@32Q40q48
// Implementation: 0x1055d1300

// -[SCLensContentDeliveryDownloader contentForURLString:cacheKey:contentType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1055d1424

// -[SCLensContentDeliveryDownloader imageForURLString:cacheKey:contentType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1055d14cc

// -[SCLensContentDeliveryDownloader contentResultForURLString:cacheKey:contentType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1055d1670

// -[SCLensContentDeliveryDownloader cachedContentForCacheKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055d192c

// -[SCLensContentDeliveryDownloader cacheContentData:forCacheKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055d1c2c

// -[SCLensContentDeliveryDownloader cancelRequestsForCacheKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d1cf4

// -[SCLensContentDeliveryDownloader cancelAllRequests]
// Type encoding: v16@0:8
// Implementation: 0x1055d1cf8

// -[SCLensContentDeliveryDownloader _retrieveCachedContentForContentKey:contentStatus:contentRetrievalMetrics:isFromCache:resultPromise:]
// Type encoding: v52@0:8@16q24@32B40@44
// Implementation: 0x1055d1cfc

// -[SCLensContentDeliveryDownloader _retrieveContentForURLString:cacheKey:contentType:contentStatus:resultPromise:]
// Type encoding: v56@0:8@16@24q32q40@48
// Implementation: 0x1055d2068

// -[SCLensContentDeliveryDownloader _downloadContentForURLString:cacheKey:contentType:resultPromise:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1055d2134

// -[SCLensContentDeliveryDownloader _contentKeyForCacheKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055d2458

// -[SCLensContentDeliveryDownloader _nativeUrlRequestForURLString:cacheKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055d24a8

// -[SCLensContentDeliveryDownloader _generateExpirationDate]
// Type encoding: @16@0:8
// Implementation: 0x1055d2568

// -[SCLensContentDeliveryDownloader _serializedFeatureMetadataForContentType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1055d2588

// -[SCLensContentDeliveryDownloader _storeCanceling:forCacheKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055d25f0

// -[SCLensContentDeliveryDownloader _removeCancelingForCacheKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d266c

// -[SCLensContentDeliveryDownloader _cancelRequestsForCacheKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d26cc

// -[SCLensContentDeliveryDownloader _cancelAllRequests]
// Type encoding: v16@0:8
// Implementation: 0x1055d274c

// -[SCLensContentDeliveryDownloader _unsafeCancelRequestsForCacheKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d27b0

// -[SCLensContentDeliveryDownloader _attachCanceling:cacheKey:resolveFuture:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055d28dc

// -[SCLensContentDeliveryDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055d2a5c

@end
