// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRetriableSnapAdsNetworkRequest
// Superclass: NSObject
// Address: 0x112aa51f8

@interface SCRetriableSnapAdsNetworkRequest

// Property: request; attributes: T@"SCAdNetworkRequest",R,N,V_request
// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: retryCount; attributes: TQ,N,VretryCount
// Property: numberOfAttempts; attributes: Tq,N,V_numberOfAttempts
// Property: shouldPersist; attributes: TB,N,VshouldPersist
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRetriableSnapAdsNetworkRequest initWithSnapAdsNetworkRequest:requestKey:cookies:useGzipRequestCompression:adConfigProvider:adConfigProviderV2:]
// Type encoding: @60@0:8@16@24@32B40@44@52
// Implementation: 0x105e7ad40

// -[SCRetriableSnapAdsNetworkRequest _numberOfAttemptsFromRequest:]
// Type encoding: q24@0:8@16
// Implementation: 0x105e7aebc

// -[SCRetriableSnapAdsNetworkRequest _logIncorrectConfigSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e7afc4

// -[SCRetriableSnapAdsNetworkRequest _persistenceSetting:adConfigProvider:adConfigProviderV2:]
// Type encoding: B40@0:8q16@24@32
// Implementation: 0x105e7b0a8

// -[SCRetriableSnapAdsNetworkRequest _getServerConfigRetryCount:adConfigProvider:adConfigProviderV2:]
// Type encoding: Q40@0:8q16@24@32
// Implementation: 0x105e7b238

// -[SCRetriableSnapAdsNetworkRequest toSCRequest]
// Type encoding: @16@0:8
// Implementation: 0x105e7b308

// -[SCRetriableSnapAdsNetworkRequest toPersistenceObject:]
// Type encoding: @24@0:8q16
// Implementation: 0x105e7b4dc

// -[SCRetriableSnapAdsNetworkRequest setNumberOfAttempts:]
// Type encoding: v24@0:8q16
// Implementation: 0x105e7b6f4

// -[SCRetriableSnapAdsNetworkRequest _updateBodyWithNumberOfAttempts:error:]
// Type encoding: v32@0:8q16o^@24
// Implementation: 0x105e7b700

// -[SCRetriableSnapAdsNetworkRequest shouldPersist]
// Type encoding: B16@0:8
// Implementation: 0x105e7b818

// -[SCRetriableSnapAdsNetworkRequest setShouldPersist:]
// Type encoding: v20@0:8B16
// Implementation: 0x105e7b820

// -[SCRetriableSnapAdsNetworkRequest retryCount]
// Type encoding: Q16@0:8
// Implementation: 0x105e7b828

// -[SCRetriableSnapAdsNetworkRequest setRetryCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105e7b830

// -[SCRetriableSnapAdsNetworkRequest key]
// Type encoding: @16@0:8
// Implementation: 0x105e7b838

// -[SCRetriableSnapAdsNetworkRequest numberOfAttempts]
// Type encoding: q16@0:8
// Implementation: 0x105e7b840

// -[SCRetriableSnapAdsNetworkRequest request]
// Type encoding: @16@0:8
// Implementation: 0x105e7b848

// -[SCRetriableSnapAdsNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e7b850

@end
