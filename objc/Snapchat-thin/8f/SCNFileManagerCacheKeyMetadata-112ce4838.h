// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNFileManagerCacheKeyMetadata
// Superclass: NSObject
// Address: 0x112ce4838

@interface SCNFileManagerCacheKeyMetadata

// Property: key; attributes: T@"NSString",R,N,V_key
// Property: size; attributes: Tq,R,N,V_size
// Property: lastReadTimestamp; attributes: Tq,R,N,V_lastReadTimestamp
// Property: expirationTimestamp; attributes: Tq,R,N,V_expirationTimestamp

// -[SCNFileManagerCacheKeyMetadata initWithKey:size:lastReadTimestamp:expirationTimestamp:]
// Type encoding: @48@0:8@16q24q32q40
// Implementation: 0x10b7f7f70

// -[SCNFileManagerCacheKeyMetadata key]
// Type encoding: @16@0:8
// Implementation: 0x10b7f8030

// -[SCNFileManagerCacheKeyMetadata size]
// Type encoding: q16@0:8
// Implementation: 0x10b7f8038

// -[SCNFileManagerCacheKeyMetadata lastReadTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b7f8040

// -[SCNFileManagerCacheKeyMetadata expirationTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b7f8048

// -[SCNFileManagerCacheKeyMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7f8050

@end
