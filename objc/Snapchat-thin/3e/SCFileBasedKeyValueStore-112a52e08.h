// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFileBasedKeyValueStore
// Superclass: NSObject
// Address: 0x112a52e08

@interface SCFileBasedKeyValueStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFileBasedKeyValueStore initWithDirectoryURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x105618d78

// -[SCFileBasedKeyValueStore allKeys]
// Type encoding: @16@0:8
// Implementation: 0x105618df8

// -[SCFileBasedKeyValueStore setObject:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105618e8c

// -[SCFileBasedKeyValueStore objectForKey:deserializeToClass:]
// Type encoding: @32@0:8@16#24
// Implementation: 0x105618ff4

// -[SCFileBasedKeyValueStore removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056190e0

// -[SCFileBasedKeyValueStore _fileURLWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105619168

// -[SCFileBasedKeyValueStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105619170

@end
