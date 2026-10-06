// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapNetworkCacheItem
// Superclass: SCDocObject
// Address: 0x112a51d28

@interface SCMapNetworkCacheItem

// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: serializedItem; attributes: T@"NSData",R,C,N,V_serializedItem
// Property: expirationTimestamp; attributes: TQ,R,N,V_expirationTimestamp

// -[SCMapNetworkCacheItem initWithKey:serializedItem:expirationTimestamp:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x1055f89d4

// -[SCMapNetworkCacheItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1055f8aa4

// -[SCMapNetworkCacheItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x1055f8ac8

// -[SCMapNetworkCacheItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1055f8b54

// -[SCMapNetworkCacheItem key]
// Type encoding: @16@0:8
// Implementation: 0x1055f8c24

// -[SCMapNetworkCacheItem serializedItem]
// Type encoding: @16@0:8
// Implementation: 0x1055f8c34

// -[SCMapNetworkCacheItem expirationTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x1055f8c44

// -[SCMapNetworkCacheItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055f8c54

// +[SCMapNetworkCacheItem table]
// Type encoding: r*16@0:8
// Implementation: 0x1055f8f54

// +[SCMapNetworkCacheItem immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x1055f8f60

// +[SCMapNetworkCacheItem objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x1055f90d0

@end
