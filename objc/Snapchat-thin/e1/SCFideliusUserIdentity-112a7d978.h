// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusUserIdentity
// Superclass: NSObject
// Address: 0x112a7d978

@interface SCFideliusUserIdentity

// Property: hashedBeta; attributes: T@"NSString",C,N,V_hashedBeta
// Property: outBeta; attributes: T@"NSData",C,N,V_outBeta
// Property: inBeta; attributes: T@"NSData",C,N,V_inBeta
// Property: iwek; attributes: T@"NSString",C,N,V_iwek
// Property: version; attributes: Tq,N,V_version

// -[SCFideliusUserIdentity initWithHashedBeta:outBeta:inBeta:iwek:version:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x100600338

// -[SCFideliusUserIdentity initWithHashedBeta:outBeta:inBeta:iwek:version:beta:]
// Type encoding: @64@0:8@16@24@32@40q48@56
// Implementation: 0x1059498b8

// -[SCFideliusUserIdentity createBeta]
// Type encoding: @16@0:8
// Implementation: 0x1004101cc

// -[SCFideliusUserIdentity beta]
// Type encoding: @16@0:8
// Implementation: 0x100436214

// -[SCFideliusUserIdentity encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059499d4

// -[SCFideliusUserIdentity initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10040c4a8

// -[SCFideliusUserIdentity isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105949ae4

// -[SCFideliusUserIdentity copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105949cd8

// -[SCFideliusUserIdentity hashedBeta]
// Type encoding: @16@0:8
// Implementation: 0x100418f80

// -[SCFideliusUserIdentity setHashedBeta:]
// Type encoding: v24@0:8@16
// Implementation: 0x100410184

// -[SCFideliusUserIdentity outBeta]
// Type encoding: @16@0:8
// Implementation: 0x1006e8368

// -[SCFideliusUserIdentity setOutBeta:]
// Type encoding: v24@0:8@16
// Implementation: 0x10041018c

// -[SCFideliusUserIdentity inBeta]
// Type encoding: @16@0:8
// Implementation: 0x1006e8354

// -[SCFideliusUserIdentity setInBeta:]
// Type encoding: v24@0:8@16
// Implementation: 0x100410194

// -[SCFideliusUserIdentity iwek]
// Type encoding: @16@0:8
// Implementation: 0x100436f04

// -[SCFideliusUserIdentity setIwek:]
// Type encoding: v24@0:8@16
// Implementation: 0x10041019c

// -[SCFideliusUserIdentity version]
// Type encoding: q16@0:8
// Implementation: 0x100414c7c

// -[SCFideliusUserIdentity setVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x1004101c4

// -[SCFideliusUserIdentity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100600668

@end
