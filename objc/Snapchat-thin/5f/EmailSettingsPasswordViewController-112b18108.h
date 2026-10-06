// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: EmailSettingsPasswordViewController
// Superclass: GenericSettingsPasswordViewController
// Address: 0x112b18108

@interface EmailSettingsPasswordViewController

// Property: email; attributes: T@"NSString",&,N,V_email
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[EmailSettingsPasswordViewController init]
// Type encoding: @16@0:8
// Implementation: 0x106b2bd44

// -[EmailSettingsPasswordViewController initWithUserSession:emailInfoProvider:newEmail:circumstanceEngineServices:reauthenticationService:challengeOrchestrationService:passwordNetworkRequester:emailMutator:searchabilityService:settingsEventLogger:userPhoneVerificationScopeExposer:connectedAccountsService:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x106b2bd5c

// -[EmailSettingsPasswordViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106b2bef0

// -[EmailSettingsPasswordViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b2bef8

// -[EmailSettingsPasswordViewController getInfo]
// Type encoding: @16@0:8
// Implementation: 0x106b2bf08

// -[EmailSettingsPasswordViewController continueButtonBarPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b2bf18

// -[EmailSettingsPasswordViewController _verifyChallengeWithEmail:password:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b2bfb0

// -[EmailSettingsPasswordViewController _verifyChallengeCompleteWithNewEmail:response:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b2c258

// -[EmailSettingsPasswordViewController _reauthAndUpdateEmail:password:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b2c390

// -[EmailSettingsPasswordViewController _retryUpdateEmail:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b2c5a8

// -[EmailSettingsPasswordViewController _reauthFailureWithMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b2caac

// -[EmailSettingsPasswordViewController _popIfTopViewController]
// Type encoding: v16@0:8
// Implementation: 0x106b2caf8

// -[EmailSettingsPasswordViewController _showLinkedAccountsAlertThenPop]
// Type encoding: v16@0:8
// Implementation: 0x106b2cb94

// -[EmailSettingsPasswordViewController email]
// Type encoding: @16@0:8
// Implementation: 0x106b2ce74

// -[EmailSettingsPasswordViewController setEmail:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b2ce84

// -[EmailSettingsPasswordViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b2cec4

@end
