// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogInWorkflow
// Superclass: NSObject
// Address: 0x1129f4628

@interface SCLogInWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLogInWorkflow initWithRouter:delegate:loginStateTransitionLogger:lastLoginUsername:lastLoginPhoneNumber:authenticationOrchestrator:loginLogger:legacyAuthFlowProxy:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104ce2a10

// -[SCLogInWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104ce2bac

// -[SCLogInWorkflow credentialsEntryNeedsMagicCodeWithAdaptor:usernameOrEmail:optedIn1TL:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104ce2be4

// -[SCLogInWorkflow credentialsEntryExited]
// Type encoding: v16@0:8
// Implementation: 0x104ce2cd4

// -[SCLogInWorkflow credentialsEntryNeedsPasswordRecovery:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce2d00

// -[SCLogInWorkflow credentialsEntryNeedsRegisterAccount:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce2d9c

// -[SCLogInWorkflow credentialsEntryFinishedWithUsernameOrEmail:password:wasPasswordAutofilled:isPasswordSecured:optedIn1TL:loginSuccess:loginSource:]
// Type encoding: v60@0:8@16@24B32B36B40@44q52
// Implementation: 0x104ce2de4

// -[SCLogInWorkflow credentialsEntrySelectedCountryCodePickerWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce2ed4

// -[SCLogInWorkflow credentialsEntryFinishedCountryCodePicker]
// Type encoding: v16@0:8
// Implementation: 0x104ce2f68

// -[SCLogInWorkflow credentialsEntrySelectedLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce2f80

// -[SCLogInWorkflow credentialsEntryBeginPasskeyLogin:delegate:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104ce301c

// -[SCLogInWorkflow credentialsEntryFinishedPasskeyLogin:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce323c

// -[SCLogInWorkflow logInWithOAuthSelectedWithOAuthType:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104ce370c

// -[SCLogInWorkflow recoverPasswordExited]
// Type encoding: v16@0:8
// Implementation: 0x104ce3764

// -[SCLogInWorkflow passwordRecoveredWithRetrievedUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce3808

// -[SCLogInWorkflow recoverPasswordFinishedWithLoginSuccess:optedIn1TL:loginSource:loginIdentifier:]
// Type encoding: v44@0:8@16B24q28@36
// Implementation: 0x104ce3840

// -[SCLogInWorkflow recoverPasswordCancelled]
// Type encoding: v16@0:8
// Implementation: 0x104ce3900

// -[SCLogInWorkflow channelVerificationFinishedWithLoginSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce3918

// -[SCLogInWorkflow channelVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104ce3990

// -[SCLogInWorkflow odlvFinishedWithLoginSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce3a34

// -[SCLogInWorkflow odlvExited]
// Type encoding: v16@0:8
// Implementation: 0x104ce3aac

// -[SCLogInWorkflow twoFAFinishedWithLoginSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce3b50

// -[SCLogInWorkflow twoFAExited]
// Type encoding: v16@0:8
// Implementation: 0x104ce3bc8

// -[SCLogInWorkflow credentialsEntryNeedsAppeal:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce3c80

// -[SCLogInWorkflow appealScopeDidCompleteWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ce3d40

// -[SCLogInWorkflow _showCredentialsEntryScreen]
// Type encoding: v16@0:8
// Implementation: 0x104ce3d58

// -[SCLogInWorkflow _showCredentialsEntryScreenWithRouteActions:password:reactivationStatus:reactivationAccountIdentifier:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104ce3dc8

// -[SCLogInWorkflow _featureScreenFinishedWithLoginSuccess:route:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ce3e0c

// -[SCLogInWorkflow magicCodeEntryFishinedWithLoginSuccess:loginSource:optedIn1TL:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x104ce46fc

// -[SCLogInWorkflow magicCodeEntryExited]
// Type encoding: v16@0:8
// Implementation: 0x104ce4784

// -[SCLogInWorkflow magicCodeEntryCancelledWithErrorMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce479c

// -[SCLogInWorkflow webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce4830

// -[SCLogInWorkflow COSChallengeAbandoned]
// Type encoding: v16@0:8
// Implementation: 0x104ce4848

// -[SCLogInWorkflow COSChallengeErrorWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce48b8

// -[SCLogInWorkflow COSChallengeCompletedWithBootStrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ce48bc

// -[SCLogInWorkflow logOnCOSChallengeReceivedWithChallengeType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ce4978

// -[SCLogInWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104ce49c0

// -[SCLogInWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:]
// Type encoding: v56@0:8q16q24q32q40@48
// Implementation: 0x104ce49c4

// -[SCLogInWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ce49c8

@end
