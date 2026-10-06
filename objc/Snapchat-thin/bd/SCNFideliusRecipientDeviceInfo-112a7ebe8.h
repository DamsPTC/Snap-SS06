// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNFideliusRecipientDeviceInfo
// Superclass: NSObject
// Address: 0x112a7ebe8

@interface SCNFideliusRecipientDeviceInfo

// Property: senderId; attributes: T@"NSString",R,N,V_senderId
// Property: recipientId; attributes: T@"NSString",R,N,V_recipientId
// Property: recipientPublicKey; attributes: T@"NSData",R,N,V_recipientPublicKey
// Property: salt; attributes: T@"NSData",R,N,V_salt
// Property: phi; attributes: T@"NSData",R,N,V_phi
// Property: macTag; attributes: T@"NSData",R,N,V_macTag
// Property: recipientVersion; attributes: Ti,R,N,V_recipientVersion

// -[SCNFideliusRecipientDeviceInfo initWithSenderId:recipientId:recipientPublicKey:salt:phi:macTag:recipientVersion:]
// Type encoding: @68@0:8@16@24@32@40@48@56i64
// Implementation: 0x105958ef0

// -[SCNFideliusRecipientDeviceInfo senderId]
// Type encoding: @16@0:8
// Implementation: 0x1059590ac

// -[SCNFideliusRecipientDeviceInfo recipientId]
// Type encoding: @16@0:8
// Implementation: 0x1059590b4

// -[SCNFideliusRecipientDeviceInfo recipientPublicKey]
// Type encoding: @16@0:8
// Implementation: 0x1059590bc

// -[SCNFideliusRecipientDeviceInfo salt]
// Type encoding: @16@0:8
// Implementation: 0x1059590c4

// -[SCNFideliusRecipientDeviceInfo phi]
// Type encoding: @16@0:8
// Implementation: 0x1059590cc

// -[SCNFideliusRecipientDeviceInfo macTag]
// Type encoding: @16@0:8
// Implementation: 0x1059590d4

// -[SCNFideliusRecipientDeviceInfo recipientVersion]
// Type encoding: i16@0:8
// Implementation: 0x1059590dc

// -[SCNFideliusRecipientDeviceInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059590e4

@end
