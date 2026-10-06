// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationWorkflow
// Superclass: NSObject
// Address: 0x112a2ced8

@interface SCRegistrationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRegistrationWorkflow initWithRouter:changeUsernameStorageService:resumeRegistrationStorage:registrationUser:registrationChallenge:redirectToRegInfoProvider:usernameAvailabilityChecker:delegate:stateTransition:initialRegistrationState:usernameSuggestionFetcher:applicationLifecycleEvents:registrationFeatureLogger:shouldSkipUsernameIfPossible:registrationVerificationLogger:signupTransitionLogger:registrationService:registrationRequestPublisher:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@?120@128@136@144@152
// Implementation: 0x1053755b8

// -[SCRegistrationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x1053759e4

// -[SCRegistrationWorkflow subscreenExited]
// Type encoding: v16@0:8
// Implementation: 0x105375b08

// -[SCRegistrationWorkflow birthdaySubmitted:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105375b78

// -[SCRegistrationWorkflow _continueOrDone]
// Type encoding: v16@0:8
// Implementation: 0x105375c74

// -[SCRegistrationWorkflow suggestedUsernameFinishedWithUsername:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105376098

// -[SCRegistrationWorkflow displayNameFinishedWithFirstName:lastName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053760f4

// -[SCRegistrationWorkflow displayNameSelectedLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10537615c

// -[SCRegistrationWorkflow usernameFinishedWithUsername:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053761f8

// -[SCRegistrationWorkflow passwordFinishedWithRegistrationSuccess:password:optedIn1TL:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105376254

// -[SCRegistrationWorkflow _markUserSkippedUsernameWhenRegIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053763c8

// -[SCRegistrationWorkflow _proceedPasswordFinishedWithRegistrationSuccess:password:optedIn1TL:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105376428

// -[SCRegistrationWorkflow passwordFailedWithErrorType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10537659c

// -[SCRegistrationWorkflow passwordLinkSelectedWithURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x105376754

// -[SCRegistrationWorkflow _presentRegistrationChallengeWithChallengeData:authSessionPayload:clientRequestId:optedIn1TL:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1053767f0

// -[SCRegistrationWorkflow passwordChallenged:authSessionPayload:clientRequestId:password:optedIn1TL:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x105376954

// -[SCRegistrationWorkflow passwordChallengeFinishedWithRegistrationSuccess:password:optedIn1TL:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105376a18

// -[SCRegistrationWorkflow passwordChallengeFailedWithErrorType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105376a1c

// -[SCRegistrationWorkflow passwordChallengeAbandonedWithIsFromResumedData:]
// Type encoding: v20@0:8B16
// Implementation: 0x105376a20

// -[SCRegistrationWorkflow birthdayExitedWithUserUnderageError]
// Type encoding: v16@0:8
// Implementation: 0x105376b18

// -[SCRegistrationWorkflow birthdayScreenExited]
// Type encoding: v16@0:8
// Implementation: 0x105376bac

// -[SCRegistrationWorkflow _removeBirthdayScreen]
// Type encoding: v16@0:8
// Implementation: 0x105376bd0

// -[SCRegistrationWorkflow birthdayExitSignUp]
// Type encoding: v16@0:8
// Implementation: 0x105376be8

// -[SCRegistrationWorkflow birthdaySelectedLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x105376c60

// -[SCRegistrationWorkflow _removeBirthdayBearingScreenIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105376cfc

// -[SCRegistrationWorkflow displayNameBirthdaySubmittedWithFirstName:lastName:birthday:optedIn1TL:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x105376df4

// -[SCRegistrationWorkflow displayNameBirthdayExitedWithUserUnderageError]
// Type encoding: v16@0:8
// Implementation: 0x105376e84

// -[SCRegistrationWorkflow displayNameBirthdayScreenExited]
// Type encoding: v16@0:8
// Implementation: 0x105376f18

// -[SCRegistrationWorkflow displayNameBirthdayExitSignUp]
// Type encoding: v16@0:8
// Implementation: 0x105376f3c

// -[SCRegistrationWorkflow displayNameBirthdaySelectedLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x105376fb4

// -[SCRegistrationWorkflow _removeDisplayNameBirthdayScreen]
// Type encoding: v16@0:8
// Implementation: 0x105377050

// -[SCRegistrationWorkflow suggestedUsernameSwitchToUsernameWithUsernameSuggestions:]
// Type encoding: v24@0:8@16
// Implementation: 0x105377068

// -[SCRegistrationWorkflow webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053770e0

// -[SCRegistrationWorkflow _presentNextScreen]
// Type encoding: v16@0:8
// Implementation: 0x1053770f8

// -[SCRegistrationWorkflow COSChallengeAbandoned]
// Type encoding: v16@0:8
// Implementation: 0x105377c88

// -[SCRegistrationWorkflow COSChallengeErrorWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105377cb4

// -[SCRegistrationWorkflow COSChallengeCompletedWithBootStrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105377cbc

// -[SCRegistrationWorkflow logOnCOSChallengeReceivedWithChallengeType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105377d4c

// -[SCRegistrationWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105377d54

// -[SCRegistrationWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:]
// Type encoding: v56@0:8q16q24q32q40@48
// Implementation: 0x105377d5c

// -[SCRegistrationWorkflow _appWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1053780a4

// -[SCRegistrationWorkflow _logRegistraterDidSucceedWithUserId:preferredVerificationMethod:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1053783b4

// -[SCRegistrationWorkflow _logEmailSubmittedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1053784d8

// -[SCRegistrationWorkflow _emailDomain:]
// Type encoding: @24@0:8@16
// Implementation: 0x105378630

// -[SCRegistrationWorkflow _saveRegistrationData]
// Type encoding: v16@0:8
// Implementation: 0x105378700

// -[SCRegistrationWorkflow _getRegistrationStateConfig]
// Type encoding: @16@0:8
// Implementation: 0x1053787e8

// -[SCRegistrationWorkflow _verifyLoginPrefilledUserNameAreAvailable]
// Type encoding: v16@0:8
// Implementation: 0x1053787f8

// -[SCRegistrationWorkflow _updatePrefilledUsernameSuggestionWithCheckerResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105378970

// -[SCRegistrationWorkflow _hasPrefilledUsernameFromLoginReroute]
// Type encoding: B16@0:8
// Implementation: 0x105378a6c

// -[SCRegistrationWorkflow _insertPrefilledUsernameAsTheFirstSuggestion:]
// Type encoding: @24@0:8@16
// Implementation: 0x105378ad0

// -[SCRegistrationWorkflow _fetchUsernameSuggestionWhenResumeToBirthday]
// Type encoding: v16@0:8
// Implementation: 0x105378b44

// -[SCRegistrationWorkflow _passwordFailedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105378c58

// -[SCRegistrationWorkflow _confirmedErrorAlert:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105378f2c

// -[SCRegistrationWorkflow _registrationFinishedWithSuccess:password:optedIn1TL:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105378f30

// -[SCRegistrationWorkflow _registrationFinishedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105379018

// -[SCRegistrationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053790e0

@end
