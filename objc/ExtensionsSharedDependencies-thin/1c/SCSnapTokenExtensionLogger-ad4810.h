// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenExtensionLogger
// Superclass: NSObject
// Address: 0xad4810

@interface SCSnapTokenExtensionLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapTokenExtensionLogger initWithBlizzardExtensionLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x42a534

// -[SCSnapTokenExtensionLogger logAccessTokenRetrievalSuccessLatencyWithMetricsInfo:token:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x42a5a8

// -[SCSnapTokenExtensionLogger logAccessTokenRetrievalErrorWithError:forMetricsInfo:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x42a61c

// -[SCSnapTokenExtensionLogger logSnapTokenSessionRequestSuccessWithLatencySecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x42a664

// -[SCSnapTokenExtensionLogger logSnapTokenSessionRequestErrorWithError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x42a668

// -[SCSnapTokenExtensionLogger logAccessTokenWithAgeInSeconds:asMeasuredOn:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x42a6b0

// -[SCSnapTokenExtensionLogger logAccessTokenPrefetchInThePastErrorWithMagnitudeSecs:forType:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x42a6b4

// -[SCSnapTokenExtensionLogger logSnapTokensOnLoginProcessedWithStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x42a6b8

// -[SCSnapTokenExtensionLogger logSnapTokensOnJanusLoginProcessedWithStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x42a6bc

// -[SCSnapTokenExtensionLogger logInvalidRefreshTokenOnAccessTokenFetchWithStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x42a6c0

// -[SCSnapTokenExtensionLogger logInvalidRefreshTokenOnSnapSessionFetchWithStatus:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x42a6c4

// -[SCSnapTokenExtensionLogger logSuccesfulRefreshTokenOnSessionFetchWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x42a6c8

// -[SCSnapTokenExtensionLogger logSnapTokenStorageHadToBeBackedUpWithOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x42a6cc

// -[SCSnapTokenExtensionLogger logSnapSessionStartWithoutRefreshToken]
// Type encoding: v16@0:8
// Implementation: 0x42a6d0

// -[SCSnapTokenExtensionLogger logAttestationTotalLatencyWithSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x42a6d4

// -[SCSnapTokenExtensionLogger logAttestationGenerationLatencyWithSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x42a6d8

// -[SCSnapTokenExtensionLogger logSnapTokenStorageLatency:forMethodWithName:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x42a6dc

// -[SCSnapTokenExtensionLogger logAccessTokenFetchWithNeedsCloud1TLToken:]
// Type encoding: v20@0:8B16
// Implementation: 0x42a6e0

// -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageTokenDeleteOperationWithSuccess:errorCode:tokenType:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x42a6e4

// -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageTokenReadOperationWithSuccess:errorCode:tokenType:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x42a6e8

// -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageTokenWriteOperationWithSuccess:errorCode:tokenType:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x42a6ec

// -[SCSnapTokenExtensionLogger logSnapTokenAccessPostInvalidation]
// Type encoding: v16@0:8
// Implementation: 0x42a6f0

// -[SCSnapTokenExtensionLogger logSnapTokenDiskStorageAccessPostInvalidationWithOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x42a6f4

// -[SCSnapTokenExtensionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x42a6f8

@end
