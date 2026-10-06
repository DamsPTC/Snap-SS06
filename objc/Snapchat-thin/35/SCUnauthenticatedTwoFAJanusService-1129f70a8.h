// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedTwoFAJanusService
// Superclass: NSObject
// Address: 0x1129f70a8

@interface SCUnauthenticatedTwoFAJanusService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnauthenticatedTwoFAJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:preLoginAttestationProvider:circumstanceEngine:identityRequestLogger:clientIdProvider:cloudAccountIdProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x104d3a980

// -[SCUnauthenticatedTwoFAJanusService resendTwoFACodeToUsernameOrEmail:preAuthToken:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x104d3ac00

// -[SCUnauthenticatedTwoFAJanusService _sendTwoFACodeResponseWithResponse:error:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24d32@?40@?48
// Implementation: 0x104d3b00c

// -[SCUnauthenticatedTwoFAJanusService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d3b1bc

@end
