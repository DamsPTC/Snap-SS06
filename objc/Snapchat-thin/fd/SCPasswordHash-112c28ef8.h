// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPasswordHash
// Superclass: NSObject
// Address: 0x112c28ef8

@interface SCPasswordHash

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: passwordHash; attributes: T@"NSData",R,C,N,V_passwordHash
// Property: passwordLength; attributes: TQ,R,N,V_passwordLength
// Property: ASCII; attributes: TB,R,N,V_ASCII

// -[SCPasswordHash initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af61b1c

// -[SCPasswordHash initWithUserId:passwordHash:passwordLength:ASCII:]
// Type encoding: @44@0:8@16@24Q32B40
// Implementation: 0x10af61bf4

// -[SCPasswordHash copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10af61cb8

// -[SCPasswordHash encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af61cdc

// -[SCPasswordHash hash]
// Type encoding: Q16@0:8
// Implementation: 0x10af61d64

// -[SCPasswordHash isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af61de4

// -[SCPasswordHash userId]
// Type encoding: @16@0:8
// Implementation: 0x10af61eac

// -[SCPasswordHash passwordHash]
// Type encoding: @16@0:8
// Implementation: 0x10af61eb4

// -[SCPasswordHash passwordLength]
// Type encoding: Q16@0:8
// Implementation: 0x10af61ebc

// -[SCPasswordHash ASCII]
// Type encoding: B16@0:8
// Implementation: 0x10af61ec4

// -[SCPasswordHash .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af61ecc

@end
