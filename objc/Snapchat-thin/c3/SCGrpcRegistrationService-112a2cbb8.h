// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrpcRegistrationService
// Superclass: NSObject
// Address: 0x112a2cbb8

@interface SCGrpcRegistrationService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGrpcRegistrationService initWithUnifiedGrpcJanusRegistrationService:deviceIdentifierProvider:registrationFlowUUIDService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:appAttestStateManager:fideliusClientInitInfoProvider:preLoginAttestationProvider:carrierNetworkInfoProvider:networkConnectivityMonitor:circumstanceEngine:transitionMomentLogger:identityRequestLogger:registrationLogger:clientIdProvider:deviceIdHoldoutStateProvider:configVersionProvider:cloudAccountIdProvider:networkLoggingService:performerProvider:isPhoneEmailFirstEnabled:]
// Type encoding: @188@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176B184
// Implementation: 0x105368670

// -[SCGrpcRegistrationService registerWithUser:successBlock:challengeBlock:failureBlock:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x105368b2c

// -[SCGrpcRegistrationService _registerWithUser:vendorAttestation:deviceCheckToken:tempIdentity:clientInit:cofEtag:attemptNumber:clientNetworkRequestId:isNGO:successBlock:challengeBlock:failureBlock:]
// Type encoding: v104@0:8@16@24@32@40@48@56I64@68B76@?80@?88@?96
// Implementation: 0x105369704

// -[SCGrpcRegistrationService _handleRegisterUsernamePasswordWithResponse:error:user:username:tempIdentity:clientNetworkRequestId:submitRequestTime:attemptNumber:endpoint:successBlock:challengeBlock:failureBlock:]
// Type encoding: v108@0:8@16@24@32@40@48@56d64I72@76@?84@?92@?100
// Implementation: 0x10536a350

// -[SCGrpcRegistrationService _oAuthRegisterWithUser:vendorAttestation:deviceCheckToken:tempIdentity:clientInit:cofEtag:attemptNumber:clientNetworkRequestId:successBlock:challengeBlock:failureBlock:]
// Type encoding: v100@0:8@16@24@32@40@48@56I64@68@?76@?84@?92
// Implementation: 0x10536b1c4

// -[SCGrpcRegistrationService _handleOAuthRegisterUsernamePasswordWithResponse:error:user:username:tempIdentity:clientNetworkRequestId:submitRequestTime:attemptNumber:endpoint:successBlock:challengeBlock:failureBlock:]
// Type encoding: v108@0:8@16@24@32@40@48@56d64I72@76@?84@?92@?100
// Implementation: 0x10536bb30

// -[SCGrpcRegistrationService _googleRegisterWithUser:vendorAttestation:deviceCheckToken:tempIdentity:clientInit:cofEtag:attemptNumber:clientNetworkRequestId:successBlock:challengeBlock:failureBlock:]
// Type encoding: v100@0:8@16@24@32@40@48@56I64@68@?76@?84@?92
// Implementation: 0x10536c348

// -[SCGrpcRegistrationService _handleRegisterWithGoogleErrorWithResponse:error:user:clientNetworkRequestId:submitRequestTime:endpoint:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40d48@56@?64
// Implementation: 0x10536cc7c

// -[SCGrpcRegistrationService _withUsername:registrationMethod:requestParams:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10536cf98

// -[SCGrpcRegistrationService _prepareRequestWithUsername:registrationMethod:clientNetworkRequestId:requestParams:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10536d060

// -[SCGrpcRegistrationService _gTPDateFromDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x10536d9c0

// -[SCGrpcRegistrationService _carrierCountryCodeFromSIM]
// Type encoding: @16@0:8
// Implementation: 0x10536da9c

// -[SCGrpcRegistrationService _computeRegistrationErrorMessageFromError:isEmptyResponse:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10536db1c

// -[SCGrpcRegistrationService _logAppAttestRetryWithCount:]
// Type encoding: v20@0:8I16
// Implementation: 0x10536dc3c

// -[SCGrpcRegistrationService _logRegistrationNetworkState:registrationMethod:clientNetworkRequestId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10536dd44

// -[SCGrpcRegistrationService _logRequestPreparationTaskState:registrationMethod:task:clientNetworkRequestId:]
// Type encoding: v48@0:8q16@24q32@40
// Implementation: 0x10536df70

// -[SCGrpcRegistrationService _logGrpcResponse:status:grpcStatus:latencyMs:]
// Type encoding: v44@0:8@16i24q28q36
// Implementation: 0x10536e19c

// -[SCGrpcRegistrationService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10536e3f4

@end
