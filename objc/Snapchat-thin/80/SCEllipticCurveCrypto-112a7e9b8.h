// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEllipticCurveCrypto
// Superclass: NSObject
// Address: 0x112a7e9b8

@interface SCEllipticCurveCrypto

// Property: publicKey; attributes: T@"NSData",R,N,V_publicKey
// Property: privateKey; attributes: T@"NSMutableData",R,N,V_privateKey
// Property: publicKeyDERBase64; attributes: T@"NSString",R,N,V_publicKeyDERBase64

// -[SCEllipticCurveCrypto dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1006006bc

// -[SCEllipticCurveCrypto initForCurve:publicKey:privateKey:]
// Type encoding: @36@0:8i16@20@28
// Implementation: 0x100410200

// -[SCEllipticCurveCrypto initWithCurveAndGenerateKeyPair:]
// Type encoding: @20@0:8i16
// Implementation: 0x105955854

// -[SCEllipticCurveCrypto initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059558c8

// -[SCEllipticCurveCrypto encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105955998

// -[SCEllipticCurveCrypto sharedSecretForPublicKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105955a30

// -[SCEllipticCurveCrypto exportPublicKeyToDERBase64]
// Type encoding: v16@0:8
// Implementation: 0x100413ef4

// -[SCEllipticCurveCrypto updateECKey:]
// Type encoding: v20@0:8i16
// Implementation: 0x100410470

// -[SCEllipticCurveCrypto updateRawKeyPair:]
// Type encoding: v20@0:8i16
// Implementation: 0x105955c58

// -[SCEllipticCurveCrypto publicKey]
// Type encoding: @16@0:8
// Implementation: 0x1006144c0

// -[SCEllipticCurveCrypto privateKey]
// Type encoding: @16@0:8
// Implementation: 0x105955d6c

// -[SCEllipticCurveCrypto publicKeyDERBase64]
// Type encoding: @16@0:8
// Implementation: 0x105955d74

// -[SCEllipticCurveCrypto .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100600728

// +[SCEllipticCurveCrypto generateKeyPair]
// Type encoding: @16@0:8
// Implementation: 0x105955830

@end
