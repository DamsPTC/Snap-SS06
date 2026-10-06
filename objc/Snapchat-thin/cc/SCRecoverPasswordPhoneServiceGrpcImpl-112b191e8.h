// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecoverPasswordPhoneServiceGrpcImpl
// Superclass: NSObject
// Address: 0x112b191e8

@interface SCRecoverPasswordPhoneServiceGrpcImpl


// -[SCRecoverPasswordPhoneServiceGrpcImpl initWithAccountRecoveryService:clientRequestIdProvider:clientIdProvider:deviceIdentifierProvider:preLoginAttestationProvider:deviceCheckManager:identityRequestLogger:skipDeviceCheckToken:]
// Type encoding: @80@0:8@16@?24@32@40@48@56@64@?72
// Implementation: 0x106b60aa8

// -[SCRecoverPasswordPhoneServiceGrpcImpl requestCodeWithPhoneNumber:countryCode:usernameOrEmail:isResolvingChallenge:preAuthToken:phoneCall:completion:]
// Type encoding: v64@0:8@16@24@32B40@44B52@?56
// Implementation: 0x106b60c58

// -[SCRecoverPasswordPhoneServiceGrpcImpl _requestCodeWithPhoneNumber:countryCode:usernameOrEmail:isResolvingChallenge:preAuthToken:phoneCall:requestHeader:completion:]
// Type encoding: v72@0:8@16@24@32B40@44B52@56@?64
// Implementation: 0x106b60eb4

// -[SCRecoverPasswordPhoneServiceGrpcImpl _handleRequestCodeResponse:error:submitRequestTime:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x106b612e8

// -[SCRecoverPasswordPhoneServiceGrpcImpl verifyChallengeResponseWithCountryCode:phoneNumber:type:response:completion:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106b61534

// -[SCRecoverPasswordPhoneServiceGrpcImpl verifyPhoneWithCode:countryCode:usernameOrEmail:preAuthToken:phoneNumber:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x106b615bc

// -[SCRecoverPasswordPhoneServiceGrpcImpl _verifyPhoneWithCode:countryCode:usernameOrEmail:preAuthToken:phoneNumber:requestHeader:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x106b61858

// -[SCRecoverPasswordPhoneServiceGrpcImpl _handleVerifyCodeResponse:error:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24d32@?40@?48
// Implementation: 0x106b61b68

// -[SCRecoverPasswordPhoneServiceGrpcImpl _errorMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b61d70

// -[SCRecoverPasswordPhoneServiceGrpcImpl _requestHeaderWithClientRequestId:clientAttestationPayload:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106b61e18

// -[SCRecoverPasswordPhoneServiceGrpcImpl _clientAttestationPayload:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b61ff8

// -[SCRecoverPasswordPhoneServiceGrpcImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b620c8

@end
