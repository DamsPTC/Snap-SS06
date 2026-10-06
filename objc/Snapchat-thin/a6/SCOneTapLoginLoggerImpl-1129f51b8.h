// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginLoggerImpl
// Superclass: NSObject
// Address: 0x1129f51b8

@interface SCOneTapLoginLoggerImpl


// -[SCOneTapLoginLoggerImpl initWithUserNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:authenticationSessionInfoProvider:logInSessionServices:installServices:longClientId:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104cf9dac

// -[SCOneTapLoginLoggerImpl logOneTapLoginLandingPageViewWithAccountsCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104cfa01c

// -[SCOneTapLoginLoggerImpl logOneTapLoginLandingPageAction:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104cfa108

// -[SCOneTapLoginLoggerImpl logOneTapLoginLandingPageAction:position:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x104cfa1f8

// -[SCOneTapLoginLoggerImpl logOneTapLoginLoginAttemptPosition:userId:username:optInSource:networkRequestId:]
// Type encoding: v56@0:8Q16@24@32q40@48
// Implementation: 0x104cfa2e8

// -[SCOneTapLoginLoggerImpl logOneTapLoginLoginFailurePosition:userId:username:optInSource:networkRequestId:]
// Type encoding: v56@0:8Q16@24@32q40@48
// Implementation: 0x104cfa46c

// -[SCOneTapLoginLoggerImpl logOneTapLoginFailureDialogAction:position:userId:username:]
// Type encoding: v48@0:8q16Q24@32@40
// Implementation: 0x104cfa5f0

// -[SCOneTapLoginLoggerImpl logOneTapLoginAuthenticateFailureWithReason:details:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104cfa73c

// -[SCOneTapLoginLoggerImpl logOneTapLoginAuthenticateDuplicateReq]
// Type encoding: v16@0:8
// Implementation: 0x104cfa854

// -[SCOneTapLoginLoggerImpl logRemoveOneTapLoginUserDialog:position:userId:username:optInSource:]
// Type encoding: v56@0:8q16Q24@32@40q48
// Implementation: 0x104cfa898

// -[SCOneTapLoginLoggerImpl logJanusRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cfa9f8

// -[SCOneTapLoginLoggerImpl logJanusResponse:status:grpcStatus:]
// Type encoding: v36@0:8@16i24q28
// Implementation: 0x104cfaab0

// -[SCOneTapLoginLoggerImpl _logOneTapLoginLandingPageViewWithAccountsCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104cfac38

// -[SCOneTapLoginLoggerImpl _logOneTapLoginLandingPageAction:position:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x104cfad44

// -[SCOneTapLoginLoggerImpl _logOneTapLoginLoginAttemptPosition:userId:username:optInSource:networkRequestId:]
// Type encoding: v56@0:8Q16@24@32q40@48
// Implementation: 0x104cfadc0

// -[SCOneTapLoginLoggerImpl _logOneTapLoginLoginFailurePosition:userId:username:optInSource:networkRequestId:]
// Type encoding: v56@0:8Q16@24@32q40@48
// Implementation: 0x104cfaf60

// -[SCOneTapLoginLoggerImpl _logOneTapLoginFailureDialogAction:position:userId:username:]
// Type encoding: v48@0:8q16Q24@32@40
// Implementation: 0x104cfb100

// -[SCOneTapLoginLoggerImpl _logOneTapLoginAuthenticateFailureWithReason:details:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104cfb210

// -[SCOneTapLoginLoggerImpl _logRemoveOneTapLoginUserDialog:position:userId:username:optInSource:]
// Type encoding: v56@0:8q16Q24@32@40q48
// Implementation: 0x104cfb348

// -[SCOneTapLoginLoggerImpl _logBlizzardEvent:username:userGuid:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104cfb460

// -[SCOneTapLoginLoggerImpl _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cfb4d0

// -[SCOneTapLoginLoggerImpl _logGrapheneWithMetric:action:position:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x104cfb520

// -[SCOneTapLoginLoggerImpl _logGrapheneWithMetric:action:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104cfb5e4

// -[SCOneTapLoginLoggerImpl _logGrapheneWithMetric:dimensionKey:dimensionValue:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104cfb5f4

// -[SCOneTapLoginLoggerImpl _logGrapheneEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cfb6ec

// -[SCOneTapLoginLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cfb75c

@end
