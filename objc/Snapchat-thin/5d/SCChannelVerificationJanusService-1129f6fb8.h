// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChannelVerificationJanusService
// Superclass: NSObject
// Address: 0x1129f6fb8

@interface SCChannelVerificationJanusService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChannelVerificationJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:preLoginAttestationProvider:circumstanceEngine:identityRequestLogger:clientIdProvider:cloudAccountIdProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x104d310f4

// -[SCChannelVerificationJanusService requestChannelVerificationCodeWithVerification:networkRequestId:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x104d31374

// -[SCChannelVerificationJanusService _requestChannelVerificationCodeWithDeviceCheckToken:verification:networkRequestId:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x104d31544

// -[SCChannelVerificationJanusService _requestChannelVerificationCodeWithResponse:error:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24d32@?40@?48
// Implementation: 0x104d318e8

// -[SCChannelVerificationJanusService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d31b84

@end
