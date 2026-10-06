// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlacesCacheItem
// Superclass: SCDocObject
// Address: 0x112af62d8

@interface SCMapPlacesCacheItem

// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: serializedItem; attributes: T@"NSData",R,C,N,V_serializedItem
// Property: expirationTimestamp; attributes: TQ,R,N,V_expirationTimestamp

// -[SCMapPlacesCacheItem initWithKey:serializedItem:expirationTimestamp:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x106766268

// -[SCMapPlacesCacheItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106766338

// -[SCMapPlacesCacheItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x10676635c

// -[SCMapPlacesCacheItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1067663e8

// -[SCMapPlacesCacheItem key]
// Type encoding: @16@0:8
// Implementation: 0x1067664b8

// -[SCMapPlacesCacheItem serializedItem]
// Type encoding: @16@0:8
// Implementation: 0x1067664c8

// -[SCMapPlacesCacheItem expirationTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x1067664d8

// -[SCMapPlacesCacheItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067664e8

// +[SCMapPlacesCacheItem table]
// Type encoding: r*16@0:8
// Implementation: 0x1067667e8

// +[SCMapPlacesCacheItem immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x1067667f4

// +[SCMapPlacesCacheItem objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x106766964

@end
