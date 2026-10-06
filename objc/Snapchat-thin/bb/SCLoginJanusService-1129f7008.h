// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoginJanusService
// Superclass: NSObject
// Address: 0x1129f7008

@interface SCLoginJanusService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLoginJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:authenticationSessionPayloadProvider:deviceIdManager:deviceCheckManager:fideliusClientInitInfoProvider:preLoginAttestationProvider:networkConnectivityMonitor:circumstanceEngine:loginStateTransitionLogger:identityRequestLogger:clientIdProvider:configVersionProvider:cloudAccountIdProvider:networkLoggingService:performerProvider:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x104d31c20

// -[SCLoginJanusService logInWithUsername:passwordSource:networkRequestId:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x104d32028

// -[SCLoginJanusService _loginWithPasswordResponseWithResponse:error:usernameOrEmail:tempIdentity:submitRequestTime:networkRequestId:success:failure:]
// Type encoding: v80@0:8@16@24@32@40d48@56@?64@?72
// Implementation: 0x104d32808

// -[SCLoginJanusService completeChannelVerification:code:networkRequestId:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x104d32e38

// -[SCLoginJanusService _completeChannelVerification:code:networkRequestId:deviceCheckToken:tempIdentity:clientInit:cofTags:success:failure:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@?72@?80
// Implementation: 0x104d330cc

// -[SCLoginJanusService _verifyChannelVerificationResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:]
// Type encoding: v72@0:8@16@24@32d40@48@?56@?64
// Implementation: 0x104d33544

// -[SCLoginJanusService reactivateWithIdentifier:reactivationToken:networkRequestId:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x104d3398c

// -[SCLoginJanusService _reactivateAccountResponseWithResponse:error:usernameOrEmail:tempIdentity:submitRequestTime:networkRequestId:success:failure:]
// Type encoding: v80@0:8@16@24@32@40d48@56@?64@?72
// Implementation: 0x104d33eac

// -[SCLoginJanusService complete2FALogInWithUsernameOrEmail:confirmationCode:twoFAPreAuthToken:rememberDevice:twoFAMethod:success:failure:]
// Type encoding: v68@0:8@16@24@32B40q44@?52@?60
// Implementation: 0x104d3427c

// -[SCLoginJanusService _verifyTwoFAResponseWithResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:]
// Type encoding: v72@0:8@16@24@32d40@48@?56@?64
// Implementation: 0x104d348cc

// -[SCLoginJanusService logInWithOdlvChallenge:solution:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x104d34d04

// -[SCLoginJanusService _verifyODLVResponseWithResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:]
// Type encoding: v72@0:8@16@24@32d40@48@?56@?64
// Implementation: 0x104d3537c

// -[SCLoginJanusService logInWithMagicCode:usernameOrEmail:sessionToken:deliveryMechanism:networkRequestId:useCase:success:failure:]
// Type encoding: v76@0:8@16@24@32q40@48i56@?60@?68
// Implementation: 0x104d357c4

// -[SCLoginJanusService _loginWithMagicCodeRespondWithResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:]
// Type encoding: v72@0:8@16@24@32d40@48@?56@?64
// Implementation: 0x104d35e44

// -[SCLoginJanusService resendMagicCodeWithUsernameOrEmail:sessionToken:deliveryMechanism:useCase:success:failure:]
// Type encoding: v60@0:8@16@24q32i40@?44@?52
// Implementation: 0x104d3628c

// -[SCLoginJanusService _sendLoginCodeResponseWithResponse:error:submitRequestTime:networkRequestId:success:failure:]
// Type encoding: v64@0:8@16@24d32@40@?48@?56
// Implementation: 0x104d36800

// -[SCLoginJanusService appLogin:networkRequestId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104d36ad4

// -[SCLoginJanusService _appLoginResondWithResponse:error:submitRequestTime:networkRequestId:networkEndpoint:completion:]
// Type encoding: v64@0:8@16@24d32@40q48@?56
// Implementation: 0x104d370cc

// -[SCLoginJanusService appLoginAnswerChallenge:authenticationSessionPayload:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104d37378

// -[SCLoginJanusService _appLoginAnswerChallengeRespondWithResponse:error:submitRequestTime:networkRequestId:completion:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x104d37708

// -[SCLoginJanusService fetchLoginOptionsWithNetworkRequestId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104d379a4

// -[SCLoginJanusService _fetchLoginOptionsWithResponse:error:submitRequestTime:networkRequestId:completion:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x104d37ccc

// -[SCLoginJanusService _prepareRequestForEndpoint:networkRequestId:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x104d37f80

// -[SCLoginJanusService _prepareRequestConcurrentlytForEndpoint:networkRequestId:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x104d37f84

// -[SCLoginJanusService _computeLogInErrorMessageFromError:isEmptyResponse:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104d38664

// -[SCLoginJanusService _computeLogInErrorFromError:isEmptyResponse:protoStatusCode:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x104d38760

// -[SCLoginJanusService _computePasswordLogInErrorFromError:isEmptyResponse:protoStatusCode:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x104d38890

// -[SCLoginJanusService _appLoginContext:createLoginIdsIfNotAvailable:networkEndpoint:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x104d38ab4

// -[SCLoginJanusService _appLoginBootstrapParams:cofTags:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d38d18

// -[SCLoginJanusService _appLoginIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d38d94

// -[SCLoginJanusService _appLoginPrincipalCredential:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d39234

// -[SCLoginJanusService _appLoginClientAttestationPayload]
// Type encoding: @16@0:8
// Implementation: 0x104d39410

// -[SCLoginJanusService _deviceToken]
// Type encoding: @16@0:8
// Implementation: 0x104d394c4

// -[SCLoginJanusService _appLoginCallOptionsBuiler:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d39524

// -[SCLoginJanusService _tivNonceLoginTimeoutInMs]
// Type encoding: q16@0:8
// Implementation: 0x104d39658

// -[SCLoginJanusService _appLoginStatusCode:]
// Type encoding: i24@0:8@16
// Implementation: 0x104d39684

// -[SCLoginJanusService _appLoginResultDetail:error:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d39698

// -[SCLoginJanusService _appLoginAnswerChallengeStatusCode:]
// Type encoding: i24@0:8@16
// Implementation: 0x104d39a94

// -[SCLoginJanusService _appLoginAnswerChallengeResultDetail:error:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d39aa8

// -[SCLoginJanusService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d39d30

@end
