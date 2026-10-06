// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapEncryption
// Superclass: NSObject
// Address: 0x112ca4e68

@interface SCMemoriesSnapEncryption

// Property: key; attributes: T@"NSData",R,C,N,V_key
// Property: IV; attributes: T@"NSData",R,C,N,V_IV
// Property: isEncrypted; attributes: TB,R,N,V_isEncrypted

// -[SCMemoriesSnapEncryption initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6f8838

// -[SCMemoriesSnapEncryption initWithKey:IV:isEncrypted:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b6f88fc

// -[SCMemoriesSnapEncryption copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6f89b0

// -[SCMemoriesSnapEncryption encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6f89d4

// -[SCMemoriesSnapEncryption hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6f8a48

// -[SCMemoriesSnapEncryption isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6f8ac0

// -[SCMemoriesSnapEncryption key]
// Type encoding: @16@0:8
// Implementation: 0x10b6f8b78

// -[SCMemoriesSnapEncryption IV]
// Type encoding: @16@0:8
// Implementation: 0x10b6f8b80

// -[SCMemoriesSnapEncryption isEncrypted]
// Type encoding: B16@0:8
// Implementation: 0x10b6f8b88

// -[SCMemoriesSnapEncryption .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6f8b90

@end
