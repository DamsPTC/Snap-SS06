// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDefaultLogInLogger
// Superclass: NSObject
// Address: 0x1129f4998

@interface SCDefaultLogInLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDefaultLogInLogger initWithUserNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:authenticationSessionInfoProvider:deviceInfoProvider:deepLinkInfoService:authFlowTreatmentInfoService:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104ce77a4

// -[SCDefaultLogInLogger logLoginStart]
// Type encoding: v16@0:8
// Implementation: 0x104ce79e0

// -[SCDefaultLogInLogger logLoginWithSource:usernameOrEmail:userId:isPasswordSecured:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x104ce7aa8

// -[SCDefaultLogInLogger logLoginAttemptWithSource:usernameOrEmail:isPasswordSecured:networkRequestId:]
// Type encoding: v44@0:8q16@24B32@36
// Implementation: 0x104ce7cbc

// -[SCDefaultLogInLogger logLoginFailureWithSource:usernameOrEmail:errorType:grpcStatusCode:protoStatusCode:isPasswordSecured:]
// Type encoding: v60@0:8q16@24q32q40q48B56
// Implementation: 0x104ce7e84

// -[SCDefaultLogInLogger logLoginPageView]
// Type encoding: v16@0:8
// Implementation: 0x104ce8014

// -[SCDefaultLogInLogger logTogglePasswordVisibility]
// Type encoding: v16@0:8
// Implementation: 0x104ce8094

// -[SCDefaultLogInLogger logLoginAttemptResponseWithSource:usernameOrEmail:grpcStatusCode:protoStatusCode:success:networkRequestId:]
// Type encoding: v60@0:8q16@24q32q40B48@52
// Implementation: 0x104ce8110

// -[SCDefaultLogInLogger logToggleUnifiedAccountIdentifierInput]
// Type encoding: v16@0:8
// Implementation: 0x104ce827c

// -[SCDefaultLogInLogger logLoginAttemptUnifiedAccountIdentifierTogglesWithSource:numToggles:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x104ce82f8

// -[SCDefaultLogInLogger logRedirectToRegPromptWithAction:fieldType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x104ce83cc

// -[SCDefaultLogInLogger logRequestLoginCodeAttemptWithContext:deliveryMechanism:networkRequestId:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x104ce842c

// -[SCDefaultLogInLogger logRequestLoginCodeResponseWithContext:deliveryMechanism:networkRequestId:grpcStatusCode:protoStatusCode:latencyMs:success:]
// Type encoding: v68@0:8q16q24@32q40q48q56B64
// Implementation: 0x104ce84c4

// -[SCDefaultLogInLogger _logLoginGrapheneWithMetric:source:isPasswordSecured:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x104ce85ac

// -[SCDefaultLogInLogger _logFsnJanusRolloutGrapheneWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce8708

// -[SCDefaultLogInLogger _requestEventWithLoginSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x104ce8824

// -[SCDefaultLogInLogger _successEventWithLoginSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x104ce888c

// -[SCDefaultLogInLogger _logGrapheneWithPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ce88f4

// -[SCDefaultLogInLogger _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce8a14

// -[SCDefaultLogInLogger _addDeepLinkPropertiesIfAny:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce8b20

// -[SCDefaultLogInLogger _logLoginFailureGrapheneWithSource:errorType:isPasswordSecured:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x104ce8c34

// -[SCDefaultLogInLogger _loginIdentifier:usernameOrEmail:]
// Type encoding: q32@0:8q16@24
// Implementation: 0x104ce8df0

// -[SCDefaultLogInLogger _clearClientAttemptIdIfNeededWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ce8e9c

// -[SCDefaultLogInLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ce8edc

@end
