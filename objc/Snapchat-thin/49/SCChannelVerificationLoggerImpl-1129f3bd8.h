// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChannelVerificationLoggerImpl
// Superclass: NSObject
// Address: 0x1129f3bd8

@interface SCChannelVerificationLoggerImpl


// -[SCChannelVerificationLoggerImpl initWithStateTransitionMomentLogger:userNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:deviceInfoProvider:authenticationSessionInfoProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104cc442c

// -[SCChannelVerificationLoggerImpl logChannelVerificationLandingPageView:]
// Type encoding: v24@0:8q16
// Implementation: 0x104cc45e4

// -[SCChannelVerificationLoggerImpl logChannelVerificationVerificationPageView:]
// Type encoding: v24@0:8q16
// Implementation: 0x104cc45f0

// -[SCChannelVerificationLoggerImpl logChannelVerificationRequestCodeSubmit:usernameOrEmail:loginSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104cc45fc

// -[SCChannelVerificationLoggerImpl logChannelVerificationRequestCodeSucceed:usernameOrEmail:loginSource:grpcStatusCode:protoStatusCode:success:]
// Type encoding: v60@0:8@16@24q32q40q48B56
// Implementation: 0x104cc4740

// -[SCChannelVerificationLoggerImpl logChannelVerificationVerifyCodeSubmit:usernameOrEmail:loginSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104cc484c

// -[SCChannelVerificationLoggerImpl logChannelVerificationVerifyCodeSucceed:usernameOrEmail:loginSource:grpcStatusCode:protoStatusCode:success:]
// Type encoding: v60@0:8@16@24q32q40q48B56
// Implementation: 0x104cc4924

// -[SCChannelVerificationLoggerImpl _logLoginFlowPageView:loginSource:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x104cc4a30

// -[SCChannelVerificationLoggerImpl _logRequestBlizzardEvent:clientNetworkRequestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104cc4af4

// -[SCChannelVerificationLoggerImpl _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cc4c44

// -[SCChannelVerificationLoggerImpl _getLoginMetadata]
// Type encoding: @16@0:8
// Implementation: 0x104cc4d00

// -[SCChannelVerificationLoggerImpl _getPageTypeFromLoginSource:]
// Type encoding: q24@0:8q16
// Implementation: 0x104cc4e04

// -[SCChannelVerificationLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cc4e24

@end
