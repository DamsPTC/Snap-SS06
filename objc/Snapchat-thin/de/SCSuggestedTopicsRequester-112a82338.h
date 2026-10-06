// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSuggestedTopicsRequester
// Superclass: NSObject
// Address: 0x112a82338

@interface SCSuggestedTopicsRequester

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSuggestedTopicsRequester initWithUserSession:httpMetadataService:httpRequestModifier:endpointManager:usernameProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1059eb7e0

// -[SCSuggestedTopicsRequester fetchSuggestedTopicsWithQuery:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059eb96c

// -[SCSuggestedTopicsRequester _delayFetchSuggestedTopicsWithQuery:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059ebaa4

// -[SCSuggestedTopicsRequester _fetchSuggestedTopicsIfValidOriginalQuery:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059ebc18

// -[SCSuggestedTopicsRequester _processReponse:query:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059ec0a4

// -[SCSuggestedTopicsRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059ec2a8

@end
