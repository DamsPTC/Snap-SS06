// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedWorkflow
// Superclass: NSObject
// Address: 0x1129f6ba8

@interface SCUnauthenticatedWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnauthenticatedWorkflow initWithRouter:applicationPreferences:delegate:loggerServices:loginLogger:unauthenticatedFeatureLogger:resumeRegistrationStorage:oneTapLoginRepositories:deviceIdentifierProvider:legacyAuthFlowProxy:lastLoginInfoRepository:redirectToRegInfoProvider:isNGORegistrationEnabled:registrationFlowUUIDService:registrationSourceService:passwordHashRepository:contactPrepromptInfoProvider:clientHardcodedABValueRetriever:readinessMetricEmitter:periodicWarmup:durableDeviceIDLogger:tivNonceServices:autoOneTapLoginEventService:authenticationOrchestrator:ageVerificationInfoProvider:isPhoneEmailFirstEnabled:]
// Type encoding: @220@0:8@16@24@32@40@48@56@64@72@80@88@96@104@?112@120@128@136@144@152@160@168@176@184@192@200@208B216
// Implementation: 0x104d28edc

// -[SCUnauthenticatedWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104d293f0

// -[SCUnauthenticatedWorkflow _determineInitialSplashPageToShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29494

// -[SCUnauthenticatedWorkflow _determineSplashPageToShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29498

// -[SCUnauthenticatedWorkflow _determineSplashPageToShowImpl:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d294e4

// -[SCUnauthenticatedWorkflow _showLandingPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29710

// -[SCUnauthenticatedWorkflow _handleLandingPageAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29880

// -[SCUnauthenticatedWorkflow _handleLogInWithRoute:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29a40

// -[SCUnauthenticatedWorkflow _prepareSignUpFromPage:registrationMethod:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104d29be8

// -[SCUnauthenticatedWorkflow _signInWithOAuthFromSource:oAuthType:optedIn1TLStatus:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104d29cc8

// -[SCUnauthenticatedWorkflow logInSelected]
// Type encoding: v16@0:8
// Implementation: 0x104d29d98

// -[SCUnauthenticatedWorkflow signUpSelected]
// Type encoding: v16@0:8
// Implementation: 0x104d29dec

// -[SCUnauthenticatedWorkflow signInWithOAuthSelectedWithOAuthType:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29e58

// -[SCUnauthenticatedWorkflow oneTapLoginExitedWithUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29ec4

// -[SCUnauthenticatedWorkflow oneTapLoginExitedWithPasswordLogInInstead:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29f74

// -[SCUnauthenticatedWorkflow oneTapLoginFinishedWithBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d29fe8

// -[SCUnauthenticatedWorkflow preRegistrationDisallowed]
// Type encoding: v16@0:8
// Implementation: 0x104d2a078

// -[SCUnauthenticatedWorkflow preRegistrationFinished]
// Type encoding: v16@0:8
// Implementation: 0x104d2a0cc

// -[SCUnauthenticatedWorkflow preRegistrationDidStart]
// Type encoding: v16@0:8
// Implementation: 0x104d2a260

// -[SCUnauthenticatedWorkflow ngoRegistrationFinishedWithBirthday:email:registrationPhoneNumber:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d2a308

// -[SCUnauthenticatedWorkflow ngoRegistrationExited]
// Type encoding: v16@0:8
// Implementation: 0x104d2a434

// -[SCUnauthenticatedWorkflow ngoRegistrationSkipped]
// Type encoding: v16@0:8
// Implementation: 0x104d2a488

// -[SCUnauthenticatedWorkflow ngoRegistrationFinishedWithBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2a524

// -[SCUnauthenticatedWorkflow registrationExited]
// Type encoding: v16@0:8
// Implementation: 0x104d2a638

// -[SCUnauthenticatedWorkflow registrationExitedWithUserUnderageError]
// Type encoding: v16@0:8
// Implementation: 0x104d2a794

// -[SCUnauthenticatedWorkflow registrationExitedWithChallengeError]
// Type encoding: v16@0:8
// Implementation: 0x104d2a7e8

// -[SCUnauthenticatedWorkflow registrationExitedWithInvalidAppleIdentityToken]
// Type encoding: v16@0:8
// Implementation: 0x104d2a83c

// -[SCUnauthenticatedWorkflow registrationAccountCreatedWithRegistrationSuccess:password:optedIn1TL:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104d2a890

// -[SCUnauthenticatedWorkflow _registrationAccountCreatedWithJanusBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2a9a0

// -[SCUnauthenticatedWorkflow _handlePreRegRegistrationCompleteWithBootstrapData:userSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d2adb8

// -[SCUnauthenticatedWorkflow logInExited]
// Type encoding: v16@0:8
// Implementation: 0x104d2afac

// -[SCUnauthenticatedWorkflow logInExitedAndRequiredRegisteringNewAccount:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2b020

// -[SCUnauthenticatedWorkflow logInWithOAuthSelectedWithOAuthType:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104d2b0e0

// -[SCUnauthenticatedWorkflow logInFinishedWithBootstrapData:optedIn1TL:password:loginInfo:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x104d2b164

// -[SCUnauthenticatedWorkflow _logInFinishedWithJanusBootstrapData:loginInfo:registrationMethod:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d2b280

// -[SCUnauthenticatedWorkflow _updateLoginInfoRepositoryWithRegistrationBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2b814

// -[SCUnauthenticatedWorkflow userVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104d2b8f8

// -[SCUnauthenticatedWorkflow userVerificationFinishedWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2b95c

// -[SCUnauthenticatedWorkflow userVerificationExitedToLogInWithEmail:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2bb14

// -[SCUnauthenticatedWorkflow userVerificationExitedToLogInWithPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2bb18

// -[SCUnauthenticatedWorkflow userVerificationFinishedWithBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2bbc4

// -[SCUnauthenticatedWorkflow _persistPasswordWithUserId:password:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104d2bc54

// -[SCUnauthenticatedWorkflow _clearPersistedPasswordIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104d2bcd8

// -[SCUnauthenticatedWorkflow _clearOneTapLoginOptInStatus]
// Type encoding: v16@0:8
// Implementation: 0x104d2bd54

// -[SCUnauthenticatedWorkflow _persistUnverifiedBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2bdd0

// -[SCUnauthenticatedWorkflow _clearUnverifiedLogInResponseAndBootstrapData]
// Type encoding: v16@0:8
// Implementation: 0x104d2be9c

// -[SCUnauthenticatedWorkflow _clearResumeRegistrationData]
// Type encoding: v16@0:8
// Implementation: 0x104d2bed4

// -[SCUnauthenticatedWorkflow _clearResumeRegistrationDataExceptUser]
// Type encoding: v16@0:8
// Implementation: 0x104d2bf0c

// -[SCUnauthenticatedWorkflow _clearRedirectToRegInfo]
// Type encoding: v16@0:8
// Implementation: 0x104d2c088

// -[SCUnauthenticatedWorkflow _clearUserRegistrationInfo]
// Type encoding: v16@0:8
// Implementation: 0x104d2c0bc

// -[SCUnauthenticatedWorkflow _userSessionFromBootstrapData:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d2c110

// -[SCUnauthenticatedWorkflow _rerouteToLoginWithLoginUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2c264

// -[SCUnauthenticatedWorkflow _userVerificationResult:phoneNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d2c3ac

// -[SCUnauthenticatedWorkflow _userVerificationChannel:phoneNumber:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x104d2c518

// -[SCUnauthenticatedWorkflow _isEmailSubmitted:]
// Type encoding: B24@0:8@16
// Implementation: 0x104d2c590

// -[SCUnauthenticatedWorkflow _isPhoneVerified:]
// Type encoding: B24@0:8@16
// Implementation: 0x104d2c604

// -[SCUnauthenticatedWorkflow tivNonceLoginSucceededWithBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2c698

// -[SCUnauthenticatedWorkflow tivNonceLoginFailed]
// Type encoding: v16@0:8
// Implementation: 0x104d2c750

// -[SCUnauthenticatedWorkflow tivNonceLoginRequiresCOSChallenge:authSessionPayload:networkRequestId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d2c7a8

// -[SCUnauthenticatedWorkflow COSChallengeAbandoned]
// Type encoding: v16@0:8
// Implementation: 0x104d2c89c

// -[SCUnauthenticatedWorkflow COSChallengeErrorWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2c8a0

// -[SCUnauthenticatedWorkflow COSChallengeCompletedWithBootStrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2c8a4

// -[SCUnauthenticatedWorkflow logOnCOSChallengeReceivedWithChallengeType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d2c958

// -[SCUnauthenticatedWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104d2c95c

// -[SCUnauthenticatedWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:]
// Type encoding: v56@0:8q16q24q32q40@48
// Implementation: 0x104d2c960

// -[SCUnauthenticatedWorkflow _startObservingTIVNonce]
// Type encoding: v16@0:8
// Implementation: 0x104d2c964

// -[SCUnauthenticatedWorkflow _handleTIVNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2ca94

// -[SCUnauthenticatedWorkflow challengeDataResumed]
// Type encoding: v16@0:8
// Implementation: 0x104d2cc40

// -[SCUnauthenticatedWorkflow _handleSignUpFromPhoneEmailFirstPage]
// Type encoding: v16@0:8
// Implementation: 0x104d2cce0

// -[SCUnauthenticatedWorkflow _handleSignUpFromLoginPage]
// Type encoding: v16@0:8
// Implementation: 0x104d2cd60

// -[SCUnauthenticatedWorkflow _handleSignUpFromOneTapLoginTpage]
// Type encoding: v16@0:8
// Implementation: 0x104d2cde0

// -[SCUnauthenticatedWorkflow _handleSignUpFromSplashPage]
// Type encoding: v16@0:8
// Implementation: 0x104d2ce60

// -[SCUnauthenticatedWorkflow _startSignUp]
// Type encoding: v16@0:8
// Implementation: 0x104d2ce8c

// -[SCUnauthenticatedWorkflow _updateRegistrationSource]
// Type encoding: v16@0:8
// Implementation: 0x104d2d81c

// -[SCUnauthenticatedWorkflow _startNewRegistration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2d9fc

// -[SCUnauthenticatedWorkflow _startVerificationFlow:bootstrapData:verificationFlowMethod:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x104d2dac8

// -[SCUnauthenticatedWorkflow didFinishOAuthLoginWithType:result:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d2dcbc

// -[SCUnauthenticatedWorkflow _oAuthSignInExitedAndRequiredRegisteringNewAccount:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2df20

// -[SCUnauthenticatedWorkflow phoneEmailFirstLogInFinishedWithBootstrapData:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104d2df68

// -[SCUnauthenticatedWorkflow phoneEmailFirstLogInRedirectToRegistrationWithLogInIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2e060

// -[SCUnauthenticatedWorkflow phoneEmailFirstLogInRedirectToUsernamePasswordLoginWithLogInIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2e0f8

// -[SCUnauthenticatedWorkflow phoneEmailFirstLogInWithOAuthSelectedWithOAuthType:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2e3bc

// -[SCUnauthenticatedWorkflow _persistLogInIdentifierIntoResumeRegistrationData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d2e428

// -[SCUnauthenticatedWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d2e76c

@end
