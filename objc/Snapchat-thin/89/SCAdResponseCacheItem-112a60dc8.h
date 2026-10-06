// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdResponseCacheItem
// Superclass: SCDocObject
// Address: 0x112a60dc8

@interface SCAdResponseCacheItem

// Property: adRequestClientId; attributes: T@"NSString",R,C,N,V_adRequestClientId
// Property: cacheURL; attributes: T@"NSString",R,C,N,V_cacheURL
// Property: expirationTimestamp; attributes: TQ,R,N,V_expirationTimestamp
// Property: resolvedTimestamp; attributes: TQ,R,N,V_resolvedTimestamp
// Property: encodedAdResponse; attributes: T@"NSData",R,C,N,V_encodedAdResponse
// Property: version; attributes: Ti,R,N,V_version
// Property: isPrefetchEnabled; attributes: TB,R,N,V_isPrefetchEnabled
// Property: prefetchRequest; attributes: TB,R,N,V_prefetchRequest

// -[SCAdResponseCacheItem initWithAdRequestClientId:cacheURL:expirationTimestamp:resolvedTimestamp:encodedAdResponse:version:isPrefetchEnabled:prefetchRequest:]
// Type encoding: @68@0:8@16@24Q32Q40@48i56B60B64
// Implementation: 0x105754ba8

// -[SCAdResponseCacheItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105754ce8

// -[SCAdResponseCacheItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x105754d0c

// -[SCAdResponseCacheItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105754dc8

// -[SCAdResponseCacheItem adRequestClientId]
// Type encoding: @16@0:8
// Implementation: 0x105754f18

// -[SCAdResponseCacheItem cacheURL]
// Type encoding: @16@0:8
// Implementation: 0x105754f28

// -[SCAdResponseCacheItem expirationTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x105754f38

// -[SCAdResponseCacheItem resolvedTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x105754f48

// -[SCAdResponseCacheItem encodedAdResponse]
// Type encoding: @16@0:8
// Implementation: 0x105754f58

// -[SCAdResponseCacheItem version]
// Type encoding: i16@0:8
// Implementation: 0x105754f68

// -[SCAdResponseCacheItem isPrefetchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105754f78

// -[SCAdResponseCacheItem prefetchRequest]
// Type encoding: B16@0:8
// Implementation: 0x105754f88

// -[SCAdResponseCacheItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105754f98

// +[SCAdResponseCacheItem table]
// Type encoding: r*16@0:8
// Implementation: 0x1057556ac

// +[SCAdResponseCacheItem immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x1057556b8

// +[SCAdResponseCacheItem objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x10575594c

@end
