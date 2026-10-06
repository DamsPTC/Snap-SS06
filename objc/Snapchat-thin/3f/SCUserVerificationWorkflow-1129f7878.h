// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserVerificationWorkflow
// Superclass: NSObject
// Address: 0x1129f7878

@interface SCUserVerificationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserVerificationWorkflow initWithRouter:delegate:verificationFlowMethod:context:stateTransition:resumeRegistrationStorage:codeVerificationService:redirectToRegInfoProvider:applicationLifecycleEvents:userVerificationEventLogger:]
// Type encoding: @96@0:8@16@24Q32@40@48@56@64@72@80@88
// Implementation: 0x104d47588

// -[SCUserVerificationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104d47774

// -[SCUserVerificationWorkflow emailCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d477a8

// -[SCUserVerificationWorkflow emailSwitchedWithEmail:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d47834

// -[SCUserVerificationWorkflow emailRerouteToLoginWithEmail:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d4785c

// -[SCUserVerificationWorkflow emailCompletedWithEmail:magicCodeAdaptor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d478a4

// -[SCUserVerificationWorkflow phoneEntryCompletedWithPhoneNumber:magicCodeAdaptor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d47980

// -[SCUserVerificationWorkflow phoneEntrySwitchedWithPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d47bb8

// -[SCUserVerificationWorkflow phoneEntryRerouteToLogInWithPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d47bdc

// -[SCUserVerificationWorkflow phoneEntrySelectedCountryCodePickerWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d47c58

// -[SCUserVerificationWorkflow phoneEntryFinishedCountryCodePicker]
// Type encoding: v16@0:8
// Implementation: 0x104d47c60

// -[SCUserVerificationWorkflow phoneEntryLinkSelectedWithURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d47c68

// -[SCUserVerificationWorkflow _subscreenFinished]
// Type encoding: v16@0:8
// Implementation: 0x104d47c74

// -[SCUserVerificationWorkflow _subscreenSkipVerification]
// Type encoding: v16@0:8
// Implementation: 0x104d47ce4

// -[SCUserVerificationWorkflow phoneVerificationSucceededWithVerifyResponse:phoneVerifyToken:authSessionPayload:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d47d54

// -[SCUserVerificationWorkflow phoneCodeExited]
// Type encoding: v16@0:8
// Implementation: 0x104d47ec8

// -[SCUserVerificationWorkflow phoneCodeSkipVerification]
// Type encoding: v16@0:8
// Implementation: 0x104d47ef0

// -[SCUserVerificationWorkflow phoneCodeSwitched]
// Type encoding: v16@0:8
// Implementation: 0x104d48014

// -[SCUserVerificationWorkflow endWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104d4803c

// -[SCUserVerificationWorkflow subscreenExited]
// Type encoding: v16@0:8
// Implementation: 0x104d4808c

// -[SCUserVerificationWorkflow subscreenSkipped]
// Type encoding: v16@0:8
// Implementation: 0x104d480f4

// -[SCUserVerificationWorkflow subscreenSwitched]
// Type encoding: v16@0:8
// Implementation: 0x104d48164

// -[SCUserVerificationWorkflow didConfirmExitAlert]
// Type encoding: v16@0:8
// Implementation: 0x104d481d4

// -[SCUserVerificationWorkflow didDismissExitAlert]
// Type encoding: v16@0:8
// Implementation: 0x104d48244

// -[SCUserVerificationWorkflow codeVerificationFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d48248

// -[SCUserVerificationWorkflow codeVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104d482f0

// -[SCUserVerificationWorkflow codeVerificationExitedWithUnretryableError]
// Type encoding: v16@0:8
// Implementation: 0x104d482f8

// -[SCUserVerificationWorkflow _presentNextScreen]
// Type encoding: v16@0:8
// Implementation: 0x104d48300

// -[SCUserVerificationWorkflow _prefillEmailOrPhoneFromLoginReroute]
// Type encoding: v16@0:8
// Implementation: 0x104d489bc

// -[SCUserVerificationWorkflow _determineStartState]
// Type encoding: v16@0:8
// Implementation: 0x104d48b34

// -[SCUserVerificationWorkflow _startWithEmailOnly]
// Type encoding: v16@0:8
// Implementation: 0x104d48c14

// -[SCUserVerificationWorkflow _startWithEmailPreferred]
// Type encoding: v16@0:8
// Implementation: 0x104d48c80

// -[SCUserVerificationWorkflow _startWithEmailPreferredPhoneBypassed]
// Type encoding: v16@0:8
// Implementation: 0x104d48d74

// -[SCUserVerificationWorkflow _startWithPhonePreferred]
// Type encoding: v16@0:8
// Implementation: 0x104d48de0

// -[SCUserVerificationWorkflow _startWithPhoneRequired]
// Type encoding: v16@0:8
// Implementation: 0x104d48e4c

// -[SCUserVerificationWorkflow _startWithPhoneSkippableOnly]
// Type encoding: v16@0:8
// Implementation: 0x104d48eb8

// -[SCUserVerificationWorkflow _observeApplicationLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x104d48f24

// -[SCUserVerificationWorkflow webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d49004

// -[SCUserVerificationWorkflow _persistEmail:state:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104d4900c

// -[SCUserVerificationWorkflow _persistPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d490e8

// -[SCUserVerificationWorkflow _getOrCreateRegistrationUser]
// Type encoding: @16@0:8
// Implementation: 0x104d491a8

// -[SCUserVerificationWorkflow _verificationChannel]
// Type encoding: q16@0:8
// Implementation: 0x104d49298

// -[SCUserVerificationWorkflow _updateVerifyResultIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d49348

// -[SCUserVerificationWorkflow _isEmailSubmitted:]
// Type encoding: B24@0:8@16
// Implementation: 0x104d49548

// -[SCUserVerificationWorkflow _isPhoneVerified:]
// Type encoding: B24@0:8@16
// Implementation: 0x104d49574

// -[SCUserVerificationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d495a0

@end
