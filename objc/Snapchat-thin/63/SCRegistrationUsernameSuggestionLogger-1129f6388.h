// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationUsernameSuggestionLogger
// Superclass: NSObject
// Address: 0x1129f6388

@interface SCRegistrationUsernameSuggestionLogger


// -[SCRegistrationUsernameSuggestionLogger initWithRegistrationFeatureLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d1f8d0

// -[SCRegistrationUsernameSuggestionLogger logResponseSuggestUsername:success:isAvailable:suggestions:]
// Type encoding: v40@0:8q16B24B28@32
// Implementation: 0x104d1f944

// -[SCRegistrationUsernameSuggestionLogger logRegistrationNetworkRequestWithEndpoint:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d1f9bc

// -[SCRegistrationUsernameSuggestionLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:]
// Type encoding: v60@0:8@16@24B32q36q44q52
// Implementation: 0x104d1fa2c

// -[SCRegistrationUsernameSuggestionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d1facc

@end
