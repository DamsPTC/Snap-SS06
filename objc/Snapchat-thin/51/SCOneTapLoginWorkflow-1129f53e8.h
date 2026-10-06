// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginWorkflow
// Superclass: NSObject
// Address: 0x1129f53e8

@interface SCOneTapLoginWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOneTapLoginWorkflow initWithRouter:authenticator:provider:delegate:loginStateTransitionLogger:loginLogger:oneTapLoginLogger:loginCos:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104d03ee8

// -[SCOneTapLoginWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104d0408c

// -[SCOneTapLoginWorkflow logInSelected]
// Type encoding: v16@0:8
// Implementation: 0x104d04164

// -[SCOneTapLoginWorkflow signUpSelected]
// Type encoding: v16@0:8
// Implementation: 0x104d041b8

// -[SCOneTapLoginWorkflow signInWithOAuthSelectedWithOAuthType:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d0420c

// -[SCOneTapLoginWorkflow oneTapLoginLandingPageExitedWithUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d04338

// -[SCOneTapLoginWorkflow oneTapLoginExitedWithPasswordLogInInstead:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d04380

// -[SCOneTapLoginWorkflow oneTapLoginAuthenticationFinishedWithUserId:loginSuccess:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d043c8

// -[SCOneTapLoginWorkflow oneTapLoginLandingPageSelectedLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d04444

// -[SCOneTapLoginWorkflow channelVerificationFinishedWithLoginSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d044e0

// -[SCOneTapLoginWorkflow channelVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104d0455c

// -[SCOneTapLoginWorkflow odlvFinishedWithLoginSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d045f8

// -[SCOneTapLoginWorkflow odlvExited]
// Type encoding: v16@0:8
// Implementation: 0x104d04674

// -[SCOneTapLoginWorkflow twoFAFinishedWithLoginSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d04710

// -[SCOneTapLoginWorkflow twoFAExited]
// Type encoding: v16@0:8
// Implementation: 0x104d0478c

// -[SCOneTapLoginWorkflow oneTapLoginNeedsAppeal:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d04828

// -[SCOneTapLoginWorkflow appealScopeDidCompleteWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d048c4

// -[SCOneTapLoginWorkflow webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d048dc

// -[SCOneTapLoginWorkflow _featureScreenFinishedWithUserId:loginSuccess:route:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d048f4

// -[SCOneTapLoginWorkflow _showOneTapLoginLandingPageWithRouteActions:reactivationStatus:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d051c0

// -[SCOneTapLoginWorkflow _displayDataIndexFromUserId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x104d05294

// -[SCOneTapLoginWorkflow COSChallengeAbandoned]
// Type encoding: v16@0:8
// Implementation: 0x104d05420

// -[SCOneTapLoginWorkflow COSChallengeErrorWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d05488

// -[SCOneTapLoginWorkflow COSChallengeCompletedWithBootStrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d0548c

// -[SCOneTapLoginWorkflow logOnCOSChallengeReceivedWithChallengeType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d0554c

// -[SCOneTapLoginWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104d05594

// -[SCOneTapLoginWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:]
// Type encoding: v56@0:8q16q24q32q40@48
// Implementation: 0x104d05598

// -[SCOneTapLoginWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d0559c

@end
