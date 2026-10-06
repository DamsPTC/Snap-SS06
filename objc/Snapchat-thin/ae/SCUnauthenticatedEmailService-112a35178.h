// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedEmailService
// Superclass: NSObject
// Address: 0x112a35178

@interface SCUnauthenticatedEmailService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnauthenticatedEmailService initWithUnifiedGrpcJanusRegistrationService:deviceIdentifierProvider:authenticationSessionInfoProvider:registrationFlowUUIDService:deviceToken:deviceCheckManager:carrierNetworkInfoProvider:networkConnectivityMonitor:circumstanceEngine:clientIdProvider:registrationLogger:clientRequestIdProvider:cloudAccountIdProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@?104@112
// Implementation: 0x10540612c

// -[SCUnauthenticatedEmailService updateEmail:emailMutatorType:successBlock:failureBlock:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x105406420

// -[SCUnauthenticatedEmailService _checkEmail:deviceCheckToken:cofEtag:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1054066ec

// -[SCUnauthenticatedEmailService _handleCheckEmailWithResponse:error:clientRequestId:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32d40@?48@?56
// Implementation: 0x105406a14

// -[SCUnauthenticatedEmailService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105406c34

@end
