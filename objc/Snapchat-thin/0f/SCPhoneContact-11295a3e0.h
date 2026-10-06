// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhoneContact
// Superclass: NSObject
// Address: 0x11295a3e0

@interface SCPhoneContact

// Property: contactIdentifier; attributes: T@"NSString",N,R
// Property: phoneNumbers; attributes: T@"NSArray",N,R
// Property: displayName; attributes: T@"NSString",N,R
// Property: metadata; attributes: T@"SCPhoneContactMetadata",N,&,Vmetadata

// -[SCPhoneContact contactIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x103e6f858

// -[SCPhoneContact phoneNumbers]
// Type encoding: @16@0:8
// Implementation: 0x103e6f864

// -[SCPhoneContact displayName]
// Type encoding: @16@0:8
// Implementation: 0x103e6f8ac

// -[SCPhoneContact metadata]
// Type encoding: @16@0:8
// Implementation: 0x103e6f900

// -[SCPhoneContact setMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x103e6f994

// -[SCPhoneContact initWithContactIdentifier:phoneNumbers:displayName:metadata:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x103e6fb78

// -[SCPhoneContact init]
// Type encoding: @16@0:8
// Implementation: 0x103e6fc58

// -[SCPhoneContact .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103e6fcb4

// +[SCPhoneContact phoneNumberToDisplayNameWithPhoneContacts:]
// Type encoding: @24@0:8@16
// Implementation: 0x103e6fd14

@end
