// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationPhoneNumber
// Superclass: NSObject
// Address: 0xac84b0

@interface SCRegistrationPhoneNumber

// Property: phoneNumber; attributes: T@"SCUserPhoneNumber",N,R,VphoneNumber
// Property: state; attributes: TQ,N,R,Vstate
// Property: phoneVerifyToken; attributes: T@"NSData",N,R
// Property: authSessionPayload; attributes: T@"NSData",N,R
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCRegistrationPhoneNumber phoneNumber]
// Type encoding: @16@0:8
// Implementation: 0x645f0

// -[SCRegistrationPhoneNumber state]
// Type encoding: Q16@0:8
// Implementation: 0x64600

// -[SCRegistrationPhoneNumber phoneVerifyToken]
// Type encoding: @16@0:8
// Implementation: 0x64610

// -[SCRegistrationPhoneNumber authSessionPayload]
// Type encoding: @16@0:8
// Implementation: 0x6461c

// -[SCRegistrationPhoneNumber initWithPhoneNumber:state:phoneVerifyToken:authSessionPayload:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x6473c

// -[SCRegistrationPhoneNumber hash]
// Type encoding: q16@0:8
// Implementation: 0x64898

// -[SCRegistrationPhoneNumber isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x64d34

// -[SCRegistrationPhoneNumber copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x64db4

// -[SCRegistrationPhoneNumber encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x64f48

// -[SCRegistrationPhoneNumber initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x65388

// -[SCRegistrationPhoneNumber description]
// Type encoding: @16@0:8
// Implementation: 0x653b0

// -[SCRegistrationPhoneNumber init]
// Type encoding: @16@0:8
// Implementation: 0x653e4

// -[SCRegistrationPhoneNumber .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x65460

@end
