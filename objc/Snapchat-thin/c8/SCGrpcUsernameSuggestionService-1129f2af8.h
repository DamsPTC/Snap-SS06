// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrpcUsernameSuggestionService
// Superclass: NSObject
// Address: 0x1129f2af8

@interface SCGrpcUsernameSuggestionService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGrpcUsernameSuggestionService initWithUnifiedGRPCClientFactory:supportedLanguagesFetchBlock:allowRecycledUsernameFetchBlock:versionFetchBlock:hostnameFetchBlock:cofDeviceId:blizzardClientId:]
// Type encoding: @72@0:8@16@?24@?32@?40@?48@56@64
// Implementation: 0x104cb1640

// -[SCGrpcUsernameSuggestionService suggestUsernameWithFirstName:lastName:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104cb1914

// -[SCGrpcUsernameSuggestionService suggestUsernameWithRequestedUsername:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104cb1c90

// -[SCGrpcUsernameSuggestionService _suggestUsernameCompletedWithResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104cb1eac

// -[SCGrpcUsernameSuggestionService _checkUsernameCompletedWithRequestedUsername:response:error:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104cb1fc0

// -[SCGrpcUsernameSuggestionService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cb2398

@end
