// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCacheSizePolicy
// Superclass: NSObject
// Address: 0x112cd3218

@interface SCCacheSizePolicy

// Property: evictPolicyBlock; attributes: T@?,R,C,N,V_evictPolicyBlock

// -[SCCacheSizePolicy initWithName:defaultSizeMB:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x100447908

// -[SCCacheSizePolicy initWithName:defaultSizeMB:evictionPolicyBlock:]
// Type encoding: @40@0:8@16Q24@?32
// Implementation: 0x10b7c29d4

// -[SCCacheSizePolicy initWithName:defaultSizeMB:evictPolicyBlock:diskAvailabilityMode:]
// Type encoding: @48@0:8@16Q24@?32Q40
// Implementation: 0x100447c50

// -[SCCacheSizePolicy sizeLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10044b420

// -[SCCacheSizePolicy hardSizeLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10044b3cc

// -[SCCacheSizePolicy evictPolicyBlock]
// Type encoding: @?16@0:8
// Implementation: 0x1004497b0

// -[SCCacheSizePolicy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c2a48

@end
