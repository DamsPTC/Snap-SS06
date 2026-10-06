// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusMessageEncryptionKeyRecord
// Superclass: NSObject
// Address: 0x112a7db08

@interface SCFideliusMessageEncryptionKeyRecord

// Property: conversationId; attributes: T@"NSData",R,C,N,V_conversationId
// Property: messageId; attributes: Tq,R,N,V_messageId
// Property: encryptionKey; attributes: T@"NSData",R,C,N,V_encryptionKey
// Property: timestamp; attributes: T@"NSNumber",R,C,N,V_timestamp
// Property: purgePolicy; attributes: T@"NSString",R,C,N,V_purgePolicy

// -[SCFideliusMessageEncryptionKeyRecord initWithConversationId:messageId:encryptionKey:timestamp:purgePolicy:]
// Type encoding: @56@0:8@16q24@32@40@48
// Implementation: 0x10594dae4

// -[SCFideliusMessageEncryptionKeyRecord copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10594dbf8

// -[SCFideliusMessageEncryptionKeyRecord hash]
// Type encoding: Q16@0:8
// Implementation: 0x10594dc1c

// -[SCFideliusMessageEncryptionKeyRecord isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10594dcb4

// -[SCFideliusMessageEncryptionKeyRecord conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10594dd9c

// -[SCFideliusMessageEncryptionKeyRecord messageId]
// Type encoding: q16@0:8
// Implementation: 0x10594dda4

// -[SCFideliusMessageEncryptionKeyRecord encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10594ddac

// -[SCFideliusMessageEncryptionKeyRecord timestamp]
// Type encoding: @16@0:8
// Implementation: 0x10594ddb4

// -[SCFideliusMessageEncryptionKeyRecord purgePolicy]
// Type encoding: @16@0:8
// Implementation: 0x10594ddbc

// -[SCFideliusMessageEncryptionKeyRecord .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10594ddc4

@end
