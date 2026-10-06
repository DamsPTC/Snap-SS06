// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEncryptedCache
// Superclass: SCCacheWrapper
// Address: 0x112cd33a8

@interface SCEncryptedCache


// -[SCEncryptedCache initWithCache:encryptionKeyManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b7c39d0

// -[SCEncryptedCache initWithCache:encryptionKeyManager:encryptionOption:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10b7c39d8

// -[SCEncryptedCache setObject:dataEncoding:forKey:expiration:block:]
// Type encoding: v56@0:8@16@?24@32@40@?48
// Implementation: 0x10b7c3a7c

// -[SCEncryptedCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:]
// Type encoding: v56@0:8@16@?24@32d40@?48
// Implementation: 0x10b7c3e0c

// -[SCEncryptedCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:]
// Type encoding: v60@0:8@16@?24@32d40@?48B56
// Implementation: 0x10b7c3e14

// -[SCEncryptedCache objectForKey:dataDecoding:block:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10b7c418c

// -[SCEncryptedCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c41a8

@end
