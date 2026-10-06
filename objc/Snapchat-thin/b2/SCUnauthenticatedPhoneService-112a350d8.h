// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedPhoneService
// Superclass: NSObject
// Address: 0x112a350d8

@interface SCUnauthenticatedPhoneService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnauthenticatedPhoneService initWithUnifiedGrpcJanusRegistrationService:deviceIdentifierProvider:authenticationSessionInfoProvider:registrationFlowUUIDService:deviceToken:deviceCheckManager:carrierNetworkInfoProvider:networkConnectivityMonitor:preLoginAttestationProvider:circumstanceEngine:clientIdProvider:registrationLogger:clientRequestIdProvider:cloudAccountIdProvider:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@?112@120
// Implementation: 0x105403a00

// -[SCUnauthenticatedPhoneService updatePhoneNumber:countryCode:phoneVerifyToken:authSessionPayload:phoneCall:reverified:isForResend:phoneVerificationType:successBlock:failureBlock:]
// Type encoding: v84@0:8@16@24@32@40B48B52B56Q60@?68@?76
// Implementation: 0x105403d20

// -[SCUnauthenticatedPhoneService verifyPhoneWithCode:phoneVerifyToken:authSessionPayload:phoneVerificationType:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32Q40@?48@?56
// Implementation: 0x105404134

// -[SCUnauthenticatedPhoneService _updatePhoneNumber:countryCode:phoneVerifyToken:authSessionPayload:deviceCheckToken:cofEtag:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x1054044a0

// -[SCUnauthenticatedPhoneService _handleUpdatePhoneNumberWithResponse:error:phoneNumber:clientRequestId:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40d48@?56@?64
// Implementation: 0x1054049b4

// -[SCUnauthenticatedPhoneService _handleVerifyPhoneWithCodeResponse:error:authSessionPayload:clientRequestId:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40d48@?56@?64
// Implementation: 0x105404cb0

// -[SCUnauthenticatedPhoneService _carrierCountryCodeFromSIM]
// Type encoding: @16@0:8
// Implementation: 0x105404f58

// -[SCUnauthenticatedPhoneService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105404fd8

@end
