// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNetworkTypesNetworkApiRetryConfiguration
// Superclass: NSObject
// Address: 0x112ceb408

@interface SCNNetworkTypesNetworkApiRetryConfiguration

// Property: errorsWorthRetry; attributes: T@"NSSet",R,N,V_errorsWorthRetry
// Property: defaultRetryConfigMap; attributes: T@"NSDictionary",R,N,V_defaultRetryConfigMap
// Property: shouldResumeProgressiveRequests; attributes: TB,R,N,V_shouldResumeProgressiveRequests
// Property: shouldResumeNonProgressiveRequests; attributes: TB,R,N,V_shouldResumeNonProgressiveRequests
// Property: retryAWS500ErrorOnly; attributes: TB,R,N,V_retryAWS500ErrorOnly
// Property: retry5xxErrors; attributes: TB,R,N,V_retry5xxErrors

// -[SCNNetworkTypesNetworkApiRetryConfiguration initWithErrorsWorthRetry:defaultRetryConfigMap:shouldResumeProgressiveRequests:shouldResumeNonProgressiveRequests:retryAWS500ErrorOnly:retry5xxErrors:]
// Type encoding: @48@0:8@16@24B32B36B40B44
// Implementation: 0x1005c91bc

// -[SCNNetworkTypesNetworkApiRetryConfiguration errorsWorthRetry]
// Type encoding: @16@0:8
// Implementation: 0x1005ca250

// -[SCNNetworkTypesNetworkApiRetryConfiguration defaultRetryConfigMap]
// Type encoding: @16@0:8
// Implementation: 0x1005ca718

// -[SCNNetworkTypesNetworkApiRetryConfiguration shouldResumeProgressiveRequests]
// Type encoding: B16@0:8
// Implementation: 0x1005caa58

// -[SCNNetworkTypesNetworkApiRetryConfiguration shouldResumeNonProgressiveRequests]
// Type encoding: B16@0:8
// Implementation: 0x1005caa60

// -[SCNNetworkTypesNetworkApiRetryConfiguration retryAWS500ErrorOnly]
// Type encoding: B16@0:8
// Implementation: 0x1005caa68

// -[SCNNetworkTypesNetworkApiRetryConfiguration retry5xxErrors]
// Type encoding: B16@0:8
// Implementation: 0x1005caa70

// -[SCNNetworkTypesNetworkApiRetryConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100677c28

@end
