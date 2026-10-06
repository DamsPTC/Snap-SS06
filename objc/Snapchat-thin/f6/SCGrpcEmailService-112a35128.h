// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrpcEmailService
// Superclass: NSObject
// Address: 0x112a35128

@interface SCGrpcEmailService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGrpcEmailService initWithClientIdProvider:performerProvider:grpcClientFactory:registrationLogger:networkLoggingService:hostnameFetchBlock:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x105405098

// -[SCGrpcEmailService updateEmail:emailMutatorType:successBlock:failureBlock:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x1054052dc

// -[SCGrpcEmailService requestEmailVerificationWithType:onComplete:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x105405728

// -[SCGrpcEmailService _updateEmailWithRequest:networkLoggingExtraFields:onCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10540593c

// -[SCGrpcEmailService _updateEmailCompleteWithResponse:error:clientNetworkRequestId:submitRequestTime:networkLoggingExtraFields:onCompletion:]
// Type encoding: v64@0:8@16@24@32d40@48@?56
// Implementation: 0x105405d54

// -[SCGrpcEmailService _accountEmailService:]
// Type encoding: @24@0:8@?16
// Implementation: 0x105405f64

// -[SCGrpcEmailService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054060cc

@end
