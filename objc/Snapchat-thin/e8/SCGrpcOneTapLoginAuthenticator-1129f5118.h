// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrpcOneTapLoginAuthenticator
// Superclass: NSObject
// Address: 0x1129f5118

@interface SCGrpcOneTapLoginAuthenticator


// -[SCGrpcOneTapLoginAuthenticator initWithMultiAccountRepositories:janusLoginService:deviceIdManager:deviceIdentifierProvider:fideliusClientInitInfoProvider:logInSessionService:authenticationSessionInfoProvider:preLoginAttestationProvider:networkConnectivityMonitor:circumstanceEngine:loginStateTransitionLogger:lazyOneTapLoginLogger:clientIdProvider:configVersionProvider:cloudAccountIdProvider:networkLoggingService:deviceCheckManager:performerProvider:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x104cf6824

// -[SCGrpcOneTapLoginAuthenticator removeOneTapLoginWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cf6c2c

// -[SCGrpcOneTapLoginAuthenticator removeOneTapLoginTokenWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cf6c34

// -[SCGrpcOneTapLoginAuthenticator authenticateWithUserId:reactivationToken:confirmedReactivation:networkRequestId:success:failure:]
// Type encoding: v60@0:8@16@24B32@36@?44@?52
// Implementation: 0x104cf6c3c

// -[SCGrpcOneTapLoginAuthenticator authenticateWithUserId:deviceCheckToken:cofEtag:reactivationToken:confirmedReactivation:networkRequestId:success:failure:]
// Type encoding: v76@0:8@16@24@32@40B48@52@?60@?68
// Implementation: 0x104cf6ebc

// -[SCGrpcOneTapLoginAuthenticator _submitV3Request:username:fidIdentity:networkRequestId:success:failure:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x104cf75a8

// -[SCGrpcOneTapLoginAuthenticator _handleReactivateResponse:error:username:tempIdentity:networkRequestId:onSuccess:onFailure:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x104cf78ac

// -[SCGrpcOneTapLoginAuthenticator _handleV3LoginResponse:error:tempIdentity:username:networkRequestId:onSuccess:onFailure:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x104cf7cc0

// -[SCGrpcOneTapLoginAuthenticator _logAuthenticationFailureReason:loginError:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104cf8188

// -[SCGrpcOneTapLoginAuthenticator _logJanusRespone:status:grpcStatus:]
// Type encoding: v36@0:8@16i24q28
// Implementation: 0x104cf8440

// -[SCGrpcOneTapLoginAuthenticator _computeLogInErrorFromError:isEmptyResponse:protoStatusCode:]
// Type encoding: @36@0:8@16B24q28
// Implementation: 0x104cf84a8

// -[SCGrpcOneTapLoginAuthenticator _prepareRequestForEndpoint:networkRequestId:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x104cf8658

// -[SCGrpcOneTapLoginAuthenticator _prepareRequestConcurrentlytForEndpoint:networkRequestId:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x104cf865c

// -[SCGrpcOneTapLoginAuthenticator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cf8b64

@end
