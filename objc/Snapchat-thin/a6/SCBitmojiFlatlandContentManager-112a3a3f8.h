// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiFlatlandContentManager
// Superclass: NSObject
// Address: 0x112a3a3f8

@interface SCBitmojiFlatlandContentManager


// -[SCBitmojiFlatlandContentManager initWithContentDelivery:userContentDelivery:opsMetricsLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1003c0de8

// -[SCBitmojiFlatlandContentManager initWithContentDelivery:userContentDelivery:opsMetricsLogger:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1003c0ea8

// -[SCBitmojiFlatlandContentManager fetchContentWithURL:cacheKey:contentType:feature:]
// Type encoding: @44@0:8@16@24Q32i40
// Implementation: 0x10548913c

// -[SCBitmojiFlatlandContentManager fetchContentDataWithURL:cacheKey:contentType:isUserScope:feature:contentAttribution:]
// Type encoding: @52@0:8@16@24Q32B40i44i48
// Implementation: 0x105489234

// -[SCBitmojiFlatlandContentManager imageResultFromDataResult:animated:cacheKey:isUserScope:]
// Type encoding: @40@0:8@16B24@28B36
// Implementation: 0x105489340

// -[SCBitmojiFlatlandContentManager _requestContextFromFeature:]
// Type encoding: @20@0:8i16
// Implementation: 0x105489550

// -[SCBitmojiFlatlandContentManager _calculateJitteredTTLInMinutes]
// Type encoding: Q16@0:8
// Implementation: 0x1054895a4

// -[SCBitmojiFlatlandContentManager _imageResponseResultFromDataResponseResult:cacheKey:isUserScope:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1054895c4

// -[SCBitmojiFlatlandContentManager _imageResponseResultFromDataResponse:cacheKey:isUserScope:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1054897a8

// -[SCBitmojiFlatlandContentManager _imageResultFromData:animated:cacheKey:isUserScope:]
// Type encoding: @40@0:8@16B24@28B36
// Implementation: 0x105489a1c

// -[SCBitmojiFlatlandContentManager _fetchAssetFromContentDelivery:withURL:cacheKey:requestContext:feature:contentAttribution:ttlInMinutes:]
// Type encoding: @64@0:8@16@24@32@40i48i52Q56
// Implementation: 0x105489c38

// -[SCBitmojiFlatlandContentManager _retrieveAssetForContentKey:fromContentDelivery:pageInfo:isFromCache:observer:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x105489f50

// -[SCBitmojiFlatlandContentManager _downloadRequest:withContentDelivery:forKey:pageInfo:featureMetadata:expirationDate:observer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10548a104

// -[SCBitmojiFlatlandContentManager _handleContentCompletionWithResult:fromContentDelivery:contentKey:isFromCache:observer:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x10548a3bc

// -[SCBitmojiFlatlandContentManager _requestWithURLString:feature:ttlMins:]
// Type encoding: @36@0:8@16i24Q28
// Implementation: 0x10548a58c

// -[SCBitmojiFlatlandContentManager _pageInfoWithRequestContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10548a6d0

// -[SCBitmojiFlatlandContentManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10548a78c

@end
