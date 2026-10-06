// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesECBPacketEncryptor
// Superclass: NSObject
// Address: 0x112925758

@interface SCSpectaclesECBPacketEncryptor

// Property: encryptorContext; attributes: T^v,N,V_encryptorContext

// -[SCSpectaclesECBPacketEncryptor init]
// Type encoding: @16@0:8
// Implementation: 0x103aeb744

// -[SCSpectaclesECBPacketEncryptor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x103aeb7c4

// -[SCSpectaclesECBPacketEncryptor setEncryptionKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aeb80c

// -[SCSpectaclesECBPacketEncryptor setTxNonce:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aeb878

// -[SCSpectaclesECBPacketEncryptor setRxNonce:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aeb8e4

// -[SCSpectaclesECBPacketEncryptor setTxSalt:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aeb950

// -[SCSpectaclesECBPacketEncryptor setRxSalt:]
// Type encoding: B24@0:8@16
// Implementation: 0x103aeb9bc

// -[SCSpectaclesECBPacketEncryptor connectionReady]
// Type encoding: B16@0:8
// Implementation: 0x103aeba28

// -[SCSpectaclesECBPacketEncryptor decryptMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x103aeba64

// -[SCSpectaclesECBPacketEncryptor encryptMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x103aebb6c

// -[SCSpectaclesECBPacketEncryptor encryptorContext]
// Type encoding: ^v16@0:8
// Implementation: 0x103aebc88

// -[SCSpectaclesECBPacketEncryptor setEncryptorContext:]
// Type encoding: v24@0:8^v16
// Implementation: 0x103aebc90

@end
