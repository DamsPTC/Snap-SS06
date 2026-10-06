// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedFeatureUIRouteActions
// Superclass: NSObject
// Address: 0x1129f6ab8

@interface SCUnauthenticatedFeatureUIRouteActions

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnauthenticatedFeatureUIRouteActions initWithUnauthenticatedUIContainer:oneTapLoginScopeExposer:preRegistrationScopeExposer:privacyPolicyViewFactory:registrationScopeExposer:registrationScopeServices:logInScopeExposer:userVerificationScopeExposer:userVerificationScopeServices:ngoRegistrationScopeExposer:tivNonceLoginScopeExposer:registrationDataResumingScopeExposer:oAuthScopeExposer:lazyAppTerminator:splashPageABRetriever:oAuthLoginABRetriever:currentPageTracker:circumstanceEngine:phoneEmailFirstLogInScopeExposer:cos:ghostImageService:]
// Type encoding: @184@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176
// Implementation: 0x104d252c0

// -[SCUnauthenticatedFeatureUIRouteActions showUnauthenticatedLandingPage]
// Type encoding: @16@0:8
// Implementation: 0x104d25730

// -[SCUnauthenticatedFeatureUIRouteActions startOneTapLogin:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2598c

// -[SCUnauthenticatedFeatureUIRouteActions endOneTapLogin]
// Type encoding: v16@0:8
// Implementation: 0x104d259f4

// -[SCUnauthenticatedFeatureUIRouteActions startRegistration:registrationMethod:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d25a64

// -[SCUnauthenticatedFeatureUIRouteActions startRegistration:birthday:email:registrationPhoneNumber:registrationMethod:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104d25a78

// -[SCUnauthenticatedFeatureUIRouteActions endRegistration]
// Type encoding: v16@0:8
// Implementation: 0x104d25b70

// -[SCUnauthenticatedFeatureUIRouteActions startResumeRegistrationDataWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d25be0

// -[SCUnauthenticatedFeatureUIRouteActions endResumeRegistrationData]
// Type encoding: v16@0:8
// Implementation: 0x104d25c78

// -[SCUnauthenticatedFeatureUIRouteActions startPreRegistration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d25cc0

// -[SCUnauthenticatedFeatureUIRouteActions endPreRegistration]
// Type encoding: v16@0:8
// Implementation: 0x104d25d28

// -[SCUnauthenticatedFeatureUIRouteActions startPhoneEmailFirstLogIn:lastLoginUsername:lastLoginPhoneNumber:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d25d98

// -[SCUnauthenticatedFeatureUIRouteActions endPhoneEmailFirstLogIn]
// Type encoding: v16@0:8
// Implementation: 0x104d25e38

// -[SCUnauthenticatedFeatureUIRouteActions startLogIn:lastLoginUsername:lastLoginPhoneNumber:isFromPhoneEmailFirstPage:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x104d25e58

// -[SCUnauthenticatedFeatureUIRouteActions endLogIn]
// Type encoding: v16@0:8
// Implementation: 0x104d25f00

// -[SCUnauthenticatedFeatureUIRouteActions startUserVerificationWithUserId:username:authToken:verificationFlowMethod:context:delegate:]
// Type encoding: v64@0:8@16@24@32Q40@48@56
// Implementation: 0x104d25f70

// -[SCUnauthenticatedFeatureUIRouteActions endUserVerification]
// Type encoding: v16@0:8
// Implementation: 0x104d25fe0

// -[SCUnauthenticatedFeatureUIRouteActions startNGORegistrationWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d26050

// -[SCUnauthenticatedFeatureUIRouteActions endNGORegistration]
// Type encoding: v16@0:8
// Implementation: 0x104d260c0

// -[SCUnauthenticatedFeatureUIRouteActions startTIVNonceLogin:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d26130

// -[SCUnauthenticatedFeatureUIRouteActions endTIVNonceLogin]
// Type encoding: v16@0:8
// Implementation: 0x104d26294

// -[SCUnauthenticatedFeatureUIRouteActions _endTIVNonceLogin:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104d2629c

// -[SCUnauthenticatedFeatureUIRouteActions _startTIVNonceLogin:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d26350

// -[SCUnauthenticatedFeatureUIRouteActions showRegistrationInCooldownDialog]
// Type encoding: v16@0:8
// Implementation: 0x104d26358

// -[SCUnauthenticatedFeatureUIRouteActions _dismissRegistrationInCooldownDialog]
// Type encoding: v16@0:8
// Implementation: 0x104d26544

// -[SCUnauthenticatedFeatureUIRouteActions startOAuthSignInWithDelegate:oAuthType:optedIn1TLStatus:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d26554

// -[SCUnauthenticatedFeatureUIRouteActions endOAuthSignIn]
// Type encoding: v16@0:8
// Implementation: 0x104d26618

// -[SCUnauthenticatedFeatureUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104d26638

// -[SCUnauthenticatedFeatureUIRouteActions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d26704

@end
