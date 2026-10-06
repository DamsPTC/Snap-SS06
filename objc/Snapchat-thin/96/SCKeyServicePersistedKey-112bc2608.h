// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCKeyServicePersistedKey
// Superclass: NSObject
// Address: 0x112bc2608

@interface SCKeyServicePersistedKey

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: keyTag; attributes: T@"NSString",R,C,N,V_keyTag
// Property: masterKey; attributes: T@"NSData",R,C,N,V_masterKey
// Property: initializationVector; attributes: T@"NSData",R,C,N,V_initializationVector
// Property: passphrase; attributes: T@"NSData",R,C,N,V_passphrase
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCKeyServicePersistedKey initWithUserId:keyTag:masterKey:initializationVector:passphrase:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108de55ec

// -[SCKeyServicePersistedKey copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108de5724

// -[SCKeyServicePersistedKey initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108de5748

// -[SCKeyServicePersistedKey encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de5870

// -[SCKeyServicePersistedKey preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x108de590c

// -[SCKeyServicePersistedKey encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de5914

// -[SCKeyServicePersistedKey decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de5988

// -[SCKeyServicePersistedKey setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108de5a5c

// -[SCKeyServicePersistedKey isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108de5b7c

// -[SCKeyServicePersistedKey hash]
// Type encoding: Q16@0:8
// Implementation: 0x108de5b98

// -[SCKeyServicePersistedKey userId]
// Type encoding: @16@0:8
// Implementation: 0x108de5bac

// -[SCKeyServicePersistedKey keyTag]
// Type encoding: @16@0:8
// Implementation: 0x108de5bb4

// -[SCKeyServicePersistedKey masterKey]
// Type encoding: @16@0:8
// Implementation: 0x108de5bbc

// -[SCKeyServicePersistedKey initializationVector]
// Type encoding: @16@0:8
// Implementation: 0x108de5bc4

// -[SCKeyServicePersistedKey passphrase]
// Type encoding: @16@0:8
// Implementation: 0x108de5bcc

// -[SCKeyServicePersistedKey .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108de5bd4

// +[SCKeyServicePersistedKey fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x108de5b5c

// +[SCKeyServicePersistedKey fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x108de5b70

@end
