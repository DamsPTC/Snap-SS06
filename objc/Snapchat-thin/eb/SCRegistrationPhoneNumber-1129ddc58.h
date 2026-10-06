// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationPhoneNumber
// Superclass: NSObject
// Address: 0x1129ddc58

@interface SCRegistrationPhoneNumber

// Property: phoneNumber; attributes: T@"SCUserPhoneNumber",N,R,VphoneNumber
// Property: state; attributes: TQ,N,R,Vstate
// Property: phoneVerifyToken; attributes: T@"NSData",N,R
// Property: authSessionPayload; attributes: T@"NSData",N,R
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCRegistrationPhoneNumber phoneNumber]
// Type encoding: @16@0:8
// Implementation: 0x104865bc0

// -[SCRegistrationPhoneNumber state]
// Type encoding: Q16@0:8
// Implementation: 0x104865bd0

// -[SCRegistrationPhoneNumber phoneVerifyToken]
// Type encoding: @16@0:8
// Implementation: 0x104865be0

// -[SCRegistrationPhoneNumber authSessionPayload]
// Type encoding: @16@0:8
// Implementation: 0x104865bec

// -[SCRegistrationPhoneNumber initWithPhoneNumber:state:phoneVerifyToken:authSessionPayload:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x104865db0

// -[SCRegistrationPhoneNumber hash]
// Type encoding: q16@0:8
// Implementation: 0x104865f0c

// -[SCRegistrationPhoneNumber isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1048663a8

// -[SCRegistrationPhoneNumber copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104866428

// -[SCRegistrationPhoneNumber encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048665bc

// -[SCRegistrationPhoneNumber initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1048669fc

// -[SCRegistrationPhoneNumber description]
// Type encoding: @16@0:8
// Implementation: 0x104866a24

// -[SCRegistrationPhoneNumber init]
// Type encoding: @16@0:8
// Implementation: 0x104866a58

// -[SCRegistrationPhoneNumber .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104866ad4

@end
