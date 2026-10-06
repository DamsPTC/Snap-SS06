// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationChallenge
// Superclass: NSObject
// Address: 0xac8670

@interface SCRegistrationChallenge

// Property: registrationChallengeServerResponse; attributes: T@"SCRegistrationChallengeServerResponse",N,R,VregistrationChallengeServerResponse
// Property: authSessionPayload; attributes: T@"NSData",N,R
// Property: clientRequestId; attributes: T@"NSString",N,R
// Property: isFromResuming; attributes: TB,N,R,VisFromResuming
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCRegistrationChallenge registrationChallengeServerResponse]
// Type encoding: @16@0:8
// Implementation: 0x6620c

// -[SCRegistrationChallenge authSessionPayload]
// Type encoding: @16@0:8
// Implementation: 0x6621c

// -[SCRegistrationChallenge clientRequestId]
// Type encoding: @16@0:8
// Implementation: 0x66278

// -[SCRegistrationChallenge isFromResuming]
// Type encoding: B16@0:8
// Implementation: 0x662c4

// -[SCRegistrationChallenge initWithRegistrationChallengeServerResponse:authSessionPayload:clientRequestId:isFromResuming:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x66378

// -[SCRegistrationChallenge hash]
// Type encoding: q16@0:8
// Implementation: 0x66470

// -[SCRegistrationChallenge isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x664a4

// -[SCRegistrationChallenge copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x66524

// -[SCRegistrationChallenge encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x66684

// -[SCRegistrationChallenge initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x66a60

// -[SCRegistrationChallenge description]
// Type encoding: @16@0:8
// Implementation: 0x66a88

// -[SCRegistrationChallenge init]
// Type encoding: @16@0:8
// Implementation: 0x66abc

// -[SCRegistrationChallenge .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x66b38

@end
