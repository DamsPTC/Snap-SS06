// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsGetMyDataCacheImpl
// Superclass: NSObject
// Address: 0x112a3da08

@interface SCBloopsGetMyDataCacheImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBloopsGetMyDataCacheImpl initWithCache:config:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054be764

// -[SCBloopsGetMyDataCacheImpl getUserBloopsTargetDataFromCacheForApiVersion:locale:useCase:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1054be808

// -[SCBloopsGetMyDataCacheImpl addUserBloopsTargetDataToCache:apiVersion:locale:useCase:responseStatusCode:]
// Type encoding: v56@0:8@16@24@32q40Q48
// Implementation: 0x1054be964

// -[SCBloopsGetMyDataCacheImpl cleanCachedUserBloopsTargetData]
// Type encoding: v16@0:8
// Implementation: 0x1054bea8c

// -[SCBloopsGetMyDataCacheImpl _cacheKeyForApiVersion:locale:useCase:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1054beac4

// -[SCBloopsGetMyDataCacheImpl _exirationDateForStatusCode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1054bebb4

// -[SCBloopsGetMyDataCacheImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054bec8c

@end
