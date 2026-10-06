// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersSuggestServiceImpl
// Superclass: NSObject
// Address: 0x112bb5cc8

@interface SCSnapchattersSuggestServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchattersSuggestServiceImpl initWithNetworkServices:preferences:blizzardSessionIDProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1003e4070

// -[SCSnapchattersSuggestServiceImpl fetchSuggestionWithIsPrefetchForNotification:isLoginOrSignup:isOnDemand:fetchRequestId:callbackQueue:completionBlock:]
// Type encoding: v52@0:8B16B20B24@28@36@?44
// Implementation: 0x108bec160

// -[SCSnapchattersSuggestServiceImpl fetchHiddenSuggestionWithCallbackQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bec434

// -[SCSnapchattersSuggestServiceImpl hideSuggestedSnapchatter:placement:callbackQueue:completionBlock:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bec610

// -[SCSnapchattersSuggestServiceImpl hideSuggestionsWithFeedback:placement:callbackQueue:completionBlock:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bec704

// -[SCSnapchattersSuggestServiceImpl hideAllSuggestionWithPlacement:callbackQueue:completionBlock:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x108becaa0

// -[SCSnapchattersSuggestServiceImpl _submitRequestToSuggestFriendEndpoint:parameters:callbackQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108beccb0

// -[SCSnapchattersSuggestServiceImpl _handleFetchResultWithOutcome:data:error:completionBlock:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x108becf88

// -[SCSnapchattersSuggestServiceImpl _handleHideResultWithOutcome:data:error:completionBlock:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x108bed0c8

// -[SCSnapchattersSuggestServiceImpl _resolveEndPointWithIsPrefetchForNotification:isLoginOrSignup:isOnDemand:]
// Type encoding: @28@0:8B16B20B24
// Implementation: 0x108bed1e4

// -[SCSnapchattersSuggestServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bed220

@end
