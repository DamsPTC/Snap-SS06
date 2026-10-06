// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedOdlvJanusService
// Superclass: NSObject
// Address: 0x1129f7058

@interface SCUnauthenticatedOdlvJanusService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnauthenticatedOdlvJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:preLoginAttestationProvider:circumstanceEngine:identityRequestLogger:clientIdProvider:cloudAccountIdProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x104d39e84

// -[SCUnauthenticatedOdlvJanusService sendOdlvAuthRequestWithOdlvOtpType:challenge:successBlock:failureBlock:]
// Type encoding: v48@0:8Q16@24@?32@?40
// Implementation: 0x104d3a104

// -[SCUnauthenticatedOdlvJanusService _sendODLVCodeResponseWithResponse:error:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24d32@?40@?48
// Implementation: 0x104d3a688

// -[SCUnauthenticatedOdlvJanusService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d3a8e4

@end
