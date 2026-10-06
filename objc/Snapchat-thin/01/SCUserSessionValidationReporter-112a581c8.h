// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSessionValidationReporter
// Superclass: NSObject
// Address: 0x112a581c8

@interface SCUserSessionValidationReporter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserSessionValidationReporter initWithHttpMetadataService:httpRequestModifier:grapheneRegistry:snapTokenInternalManager:oneTapLoginRegistry:circumstanceEngine:userSessionDelegate:nativeValidationService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1056c7838

// -[SCUserSessionValidationReporter validateSessionWithReferrer:logoutSource:onBeforeLogout:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1056c7a08

// -[SCUserSessionValidationReporter _reportSessionWithReferrer:logoutSource:onBeforeLogout:refreshToken:requestUrl:]
// Type encoding: v56@0:8@16q24@?32@40@48
// Implementation: 0x1056c7c20

// -[SCUserSessionValidationReporter _validateViaHttpWithRequest:startTime:referrer:requestUrl:logoutSource:onBeforeLogout:]
// Type encoding: v64@0:8@16d24@32@40q48@?56
// Implementation: 0x1056c7d90

// -[SCUserSessionValidationReporter _validateViaCppWithRequest:startTime:referrer:requestUrl:logoutSource:onBeforeLogout:]
// Type encoding: v64@0:8@16d24@32@40q48@?56
// Implementation: 0x1056c8048

// -[SCUserSessionValidationReporter _processResponseWithStartTime:outcome:request:response:data:referrer:error:logoutSource:onBeforeLogout:]
// Type encoding: v88@0:8d16Q24@32@40@48@56@64q72@?80
// Implementation: 0x1056c8450

// -[SCUserSessionValidationReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056c88d4

// +[SCUserSessionValidationReporter parseEndpointResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056c87c4

// +[SCUserSessionValidationReporter hasLogoutFlagsWithAuthResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056c8844

@end
