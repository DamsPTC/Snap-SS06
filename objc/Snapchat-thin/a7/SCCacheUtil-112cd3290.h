// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCacheUtil
// Superclass: NSObject
// Address: 0x112cd3290

@interface SCCacheUtil


// +[SCCacheUtil rootSCCachePath]
// Type encoding: @16@0:8
// Implementation: 0x1006e12cc

// +[SCCacheUtil cacheURLForName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c2a78

// +[SCCacheUtil _scopedCacheURLForName:baseDirectory:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100449a70

// +[SCCacheUtil _migrateDiskCache:to:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b7c2b00

// +[SCCacheUtil prepareDiskCacheInstance:evictPolicy:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1006e1198

// +[SCCacheUtil prepareScopedDiskCacheInstance:baseDirectory:evictPolicy:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1004498a8

// +[SCCacheUtil doesCacheExist:baseDirectory:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b7c2ba8

// +[SCCacheUtil forceUserSessionDataRemoval:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c2c30

// +[SCCacheUtil diskCacheSerializer]
// Type encoding: @?16@0:8
// Implementation: 0x10044a424

// +[SCCacheUtil diskCacheDeserializer]
// Type encoding: @?16@0:8
// Implementation: 0x10044a430

@end
