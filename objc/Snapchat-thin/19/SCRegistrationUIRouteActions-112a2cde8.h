// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationUIRouteActions
// Superclass: NSObject
// Address: 0x112a2cde8

@interface SCRegistrationUIRouteActions

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRegistrationUIRouteActions initWithUIContainer:signupTransitionLogger:registrationFeatureLogger:registrationLogger:deviceCheckManager:registrationService:usernameSuggestionFetcher:usernameAvailabilityChecker:birthdayScopeExposer:displayNameBirthdayScopeExposer:webBrowsingScopeExposer:privacyPolicyViewFactory:shouldShowCombinedDisplayNameLabel:shouldShowKoreanUserConsentChecklist:usernameValidator:circumstanceEngine:inputValidationServiceFactory:asciiOnlyPassword:disablePredictiveText:cos:currentPageTracker:notificationPool:registrationRequestObservable:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88@96@104B112B116@120@128@136@?144@?152@160@168@176@184
// Implementation: 0x1053735b4

// -[SCRegistrationUIRouteActions showDisplayNamePageWithFirstName:lastName:viewConfig:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105373b38

// -[SCRegistrationUIRouteActions showBirthdayPageWithBirthday:viewConfig:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105373ce4

// -[SCRegistrationUIRouteActions removeBirthdayPage]
// Type encoding: v16@0:8
// Implementation: 0x105373d88

// -[SCRegistrationUIRouteActions showDisplayNameBirthdayPageWithFirstName:lastName:birthday:viewConfig:delegate:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105373da8

// -[SCRegistrationUIRouteActions removeDisplayNameBirthdayPage]
// Type encoding: v16@0:8
// Implementation: 0x105373e90

// -[SCRegistrationUIRouteActions showPasswordPage:viewConfig:withRegistrationUser:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105373eb0

// -[SCRegistrationUIRouteActions showUsernamePageWithUsername:viewConfig:delegate:usernameSuggestions:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105374024

// -[SCRegistrationUIRouteActions showSuggestedUsernamePageWithDelegate:viewConfig:usernameSuggestions:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1053741a0

// -[SCRegistrationUIRouteActions showWebBrowserWithUrl:browsingDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053742bc

// -[SCRegistrationUIRouteActions dismissWebBrowser]
// Type encoding: v16@0:8
// Implementation: 0x105374490

// -[SCRegistrationUIRouteActions showChallenge:viewConfig:delegate:registrationUser:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1053744b0

// -[SCRegistrationUIRouteActions showErrorNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053747f4

// -[SCRegistrationUIRouteActions showErrorDialog:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105374854

// -[SCRegistrationUIRouteActions _usernameValidationService]
// Type encoding: @16@0:8
// Implementation: 0x1053749f4

// -[SCRegistrationUIRouteActions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105374a24

@end
