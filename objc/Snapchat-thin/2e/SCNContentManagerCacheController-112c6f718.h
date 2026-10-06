// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNContentManagerCacheController
// Superclass: NSObject
// Address: 0x112c6f718

@interface SCNContentManagerCacheController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNContentManagerCacheController getTotalDiskSizeInBytes]
// Type encoding: q16@0:8
// Implementation: 0x1053966bc

// -[SCNContentManagerCacheController clearAllCachedContentWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053966c0

// -[SCNContentManagerCacheController initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10b0f23f8

// -[SCNContentManagerCacheController clearAllCachedContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0f25c8

// -[SCNContentManagerCacheController estimateTotalDiskUsage]
// Type encoding: q16@0:8
// Implementation: 0x10b0f2670

// -[SCNContentManagerCacheController getDiskSizeInBytes]
// Type encoding: @16@0:8
// Implementation: 0x10b0f26c8

// -[SCNContentManagerCacheController evictLRUBy:bytesToEvict:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0f2818

// -[SCNContentManagerCacheController evictUntilHaving:mediaContextType:freeDiskSpace:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0f28c4

// -[SCNContentManagerCacheController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0f2c58

// -[SCNContentManagerCacheController .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10b0f2cac

// +[SCNContentManagerCacheController create:rootDirectory:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0f2470

@end
