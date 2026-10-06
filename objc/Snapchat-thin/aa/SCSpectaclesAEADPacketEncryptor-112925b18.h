// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAEADPacketEncryptor
// Superclass: NSObject
// Address: 0x112925b18

@interface SCSpectaclesAEADPacketEncryptor

// Property: ctxt; attributes: T^v,N,V_ctxt
// Property: aEncryptionKey; attributes: T@"NSData",&,N,V_aEncryptionKey
// Property: aTxNonce; attributes: T@"NSData",&,N,V_aTxNonce
// Property: aRxNonce; attributes: T@"NSData",&,N,V_aRxNonce

// -[SCSpectaclesAEADPacketEncryptor _attemptSetupEncryptor]
// Type encoding: v16@0:8
// Implementation: 0x103af071c

// -[SCSpectaclesAEADPacketEncryptor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x103af0854

// -[SCSpectaclesAEADPacketEncryptor setEncryptionKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x103af08a8

// -[SCSpectaclesAEADPacketEncryptor setTxNonce:]
// Type encoding: B24@0:8@16
// Implementation: 0x103af0928

// -[SCSpectaclesAEADPacketEncryptor setRxNonce:]
// Type encoding: B24@0:8@16
// Implementation: 0x103af09a8

// -[SCSpectaclesAEADPacketEncryptor connectionReady]
// Type encoding: B16@0:8
// Implementation: 0x103af0a28

// -[SCSpectaclesAEADPacketEncryptor decryptMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x103af0a44

// -[SCSpectaclesAEADPacketEncryptor encryptMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x103af0b58

// -[SCSpectaclesAEADPacketEncryptor ctxt]
// Type encoding: ^v16@0:8
// Implementation: 0x103af0c6c

// -[SCSpectaclesAEADPacketEncryptor setCtxt:]
// Type encoding: v24@0:8^v16
// Implementation: 0x103af0c74

// -[SCSpectaclesAEADPacketEncryptor aEncryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x103af0c7c

// -[SCSpectaclesAEADPacketEncryptor setAEncryptionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x103af0c84

// -[SCSpectaclesAEADPacketEncryptor aTxNonce]
// Type encoding: @16@0:8
// Implementation: 0x103af0c90

// -[SCSpectaclesAEADPacketEncryptor setATxNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x103af0c98

// -[SCSpectaclesAEADPacketEncryptor aRxNonce]
// Type encoding: @16@0:8
// Implementation: 0x103af0ca4

// -[SCSpectaclesAEADPacketEncryptor setARxNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x103af0cac

// -[SCSpectaclesAEADPacketEncryptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103af0cb8

@end
