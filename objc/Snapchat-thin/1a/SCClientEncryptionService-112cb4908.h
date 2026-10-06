// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCClientEncryptionService
// Superclass: NSObject
// Address: 0x112cb4908

@interface SCClientEncryptionService

// Property: encryptor; attributes: T@"SCClientEncryption",R,N,V_encryptor
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCClientEncryptionService init]
// Type encoding: @16@0:8
// Implementation: 0x10b737aa8

// -[SCClientEncryptionService initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b737b0c

// -[SCClientEncryptionService encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b737b94

// -[SCClientEncryptionService _saveState]
// Type encoding: B16@0:8
// Implementation: 0x10b737bac

// -[SCClientEncryptionService setEncryptor:forKey:kind:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b737c7c

// -[SCClientEncryptionService encryptorForKey:kind:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b737c80

// -[SCClientEncryptionService encryptor]
// Type encoding: @16@0:8
// Implementation: 0x10b737ca8

// -[SCClientEncryptionService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b737cb0

// +[SCClientEncryptionService shared]
// Type encoding: @16@0:8
// Implementation: 0x10b737918

// +[SCClientEncryptionService path]
// Type encoding: @16@0:8
// Implementation: 0x10b737c28

@end
