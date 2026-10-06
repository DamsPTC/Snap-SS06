// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCClientEncryption
// Superclass: NSObject
// Address: 0x112cd3308

@interface SCClientEncryption

// Property: identifier; attributes: T@"NSString",R,N,V_identifier
// Property: encryptionKey; attributes: T@"NSString",R,N,V_encryptionKey
// Property: initializationVector; attributes: T@"NSString",R,N,V_initializationVector

// -[SCClientEncryption init]
// Type encoding: @16@0:8
// Implementation: 0x10b7c33c0

// -[SCClientEncryption initWithEncryptionKey:initializationVector:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b7c3440

// -[SCClientEncryption encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c3500

// -[SCClientEncryption initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x100088c50

// -[SCClientEncryption identifier]
// Type encoding: @16@0:8
// Implementation: 0x10b7c3574

// -[SCClientEncryption encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10b7c357c

// -[SCClientEncryption initializationVector]
// Type encoding: @16@0:8
// Implementation: 0x10b7c3584

// -[SCClientEncryption .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c358c

@end
