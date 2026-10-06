// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationUsernameSuggestionFetcherImpl
// Superclass: NSObject
// Address: 0x1129f6338

@interface SCRegistrationUsernameSuggestionFetcherImpl

// Property: usernameSuggestions; attributes: T@"NSArray",R,N,V_usernameSuggestions
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRegistrationUsernameSuggestionFetcherImpl initWithUsernameSuggester:clientUsernameSuggester:usernameSuggestionLogger:transitionMomentLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104d1e794

// -[SCRegistrationUsernameSuggestionFetcherImpl usernameSuggestions]
// Type encoding: @16@0:8
// Implementation: 0x104d1e894

// -[SCRegistrationUsernameSuggestionFetcherImpl _updateSuggestions:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d1e9b0

// -[SCRegistrationUsernameSuggestionFetcherImpl fetchUsernameSuggestionWithFirstName:lastName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d1e9f0

// -[SCRegistrationUsernameSuggestionFetcherImpl _suggestUsernameCompletedWithResponse:firstName:lastName:requestId:submitRequestTime:]
// Type encoding: v56@0:8@16@24@32@40d48
// Implementation: 0x104d1ec40

// -[SCRegistrationUsernameSuggestionFetcherImpl _isTheLatestRequest:requestedLastName:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104d1ef70

// -[SCRegistrationUsernameSuggestionFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d1f07c

@end
