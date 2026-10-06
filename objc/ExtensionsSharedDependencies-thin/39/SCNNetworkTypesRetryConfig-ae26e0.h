// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNetworkTypesRetryConfig
// Superclass: NSObject
// Address: 0xae26e0

@interface SCNNetworkTypesRetryConfig

// Property: retryQuota; attributes: Ti,R,N,V_retryQuota
// Property: retryAttempt; attributes: Ti,R,N,V_retryAttempt
// Property: retryPolicy; attributes: Tq,R,N,V_retryPolicy
// Property: retryIntervalInMillis; attributes: Tq,R,N,V_retryIntervalInMillis
// Property: retryableResponseStatusCode; attributes: T@"NSSet",R,N,V_retryableResponseStatusCode
// Property: retryTtlMs; attributes: Tq,R,N,V_retryTtlMs

// -[SCNNetworkTypesRetryConfig initWithRetryQuota:retryAttempt:retryPolicy:retryIntervalInMillis:retryableResponseStatusCode:retryTtlMs:]
// Type encoding: @56@0:8i16i20q24q32@40q48
// Implementation: 0x637194

// -[SCNNetworkTypesRetryConfig retryQuota]
// Type encoding: i16@0:8
// Implementation: 0x637268

// -[SCNNetworkTypesRetryConfig retryAttempt]
// Type encoding: i16@0:8
// Implementation: 0x637270

// -[SCNNetworkTypesRetryConfig retryPolicy]
// Type encoding: q16@0:8
// Implementation: 0x637278

// -[SCNNetworkTypesRetryConfig retryIntervalInMillis]
// Type encoding: q16@0:8
// Implementation: 0x637280

// -[SCNNetworkTypesRetryConfig retryableResponseStatusCode]
// Type encoding: @16@0:8
// Implementation: 0x637288

// -[SCNNetworkTypesRetryConfig retryTtlMs]
// Type encoding: q16@0:8
// Implementation: 0x637290

// -[SCNNetworkTypesRetryConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x637298

@end
