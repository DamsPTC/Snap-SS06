// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenMainAppLogger
// Superclass: NSObject
// Address: 0x112c2afc8

@interface SCSnapTokenMainAppLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapTokenMainAppLogger initWithUserNotTrackedLogger:grapheneRegistry:applicationLifecycleEvents:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1001059fc

// -[SCSnapTokenMainAppLogger appStartString]
// Type encoding: @16@0:8
// Implementation: 0x100361f54

// -[SCSnapTokenMainAppLogger timeSinceColdStartDimensionString]
// Type encoding: @16@0:8
// Implementation: 0x1004a0aa4

// -[SCSnapTokenMainAppLogger _logSnapTokenPrefetchWithMetricsInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003b9668

// -[SCSnapTokenMainAppLogger _logSnapTokenPrefetchError:metricsInfo:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10af74630

// -[SCSnapTokenMainAppLogger logAccessTokenRetrievalSuccessLatencyWithMetricsInfo:token:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1003b890c

// -[SCSnapTokenMainAppLogger _logTimeSinceLastAccessTokenNetworkRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003b8d50

// -[SCSnapTokenMainAppLogger _logKeychainLatency:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003b8e58

// -[SCSnapTokenMainAppLogger logAccessTokenRetrievalErrorWithError:forMetricsInfo:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10af7474c

// -[SCSnapTokenMainAppLogger logAccessTokenFetchWithNeedsCloud1TLToken:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af749a0

// -[SCSnapTokenMainAppLogger logSnapTokenSessionRequestSuccessWithLatencySecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10af749b0

// -[SCSnapTokenMainAppLogger logSnapTokenSessionRequestErrorWithError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10af74a38

// -[SCSnapTokenMainAppLogger logAccessTokenWithAgeInSeconds:asMeasuredOn:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x100361ed8

// -[SCSnapTokenMainAppLogger logAccessTokenPrefetchInThePastErrorWithMagnitudeSecs:forType:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x10af74b40

// -[SCSnapTokenMainAppLogger logSnapTokenLoginProcessingLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x10af74ba8

// -[SCSnapTokenMainAppLogger logSnapTokensOnJanusLoginProcessedWithStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af74bc8

// -[SCSnapTokenMainAppLogger logSnapTokensOnLoginEntryPointProcessingWithStatus:referrer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af74bd8

// -[SCSnapTokenMainAppLogger logInvalidRefreshTokenOnAccessTokenFetchWithStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af74bf8

// -[SCSnapTokenMainAppLogger logInvalidRefreshTokenOnSnapSessionFetchWithStatus:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af74c08

// -[SCSnapTokenMainAppLogger logSuccesfulRefreshTokenOnSessionFetchWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af74c1c

// -[SCSnapTokenMainAppLogger logSnapTokenStorageHadToBeBackedUpWithOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af74c2c

// -[SCSnapTokenMainAppLogger logSnapSessionStartWithoutRefreshToken]
// Type encoding: v16@0:8
// Implementation: 0x10af74c3c

// -[SCSnapTokenMainAppLogger logAttestationTotalLatencyWithSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10af74c48

// -[SCSnapTokenMainAppLogger logAttestationGenerationLatencyWithSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10af74c68

// -[SCSnapTokenMainAppLogger logSnapTokenStorageLatency:forMethodWithName:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10af74c88

// -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageTokenReadOperationWithSuccess:errorCode:tokenType:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x10af74c94

// -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageTokenWriteOperationWithSuccess:errorCode:tokenType:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x10af74cac

// -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageTokenDeleteOperationWithSuccess:errorCode:tokenType:]
// Type encoding: v36@0:8B16q20@28
// Implementation: 0x10af74cc4

// -[SCSnapTokenMainAppLogger logSnapTokenAccessPostInvalidation]
// Type encoding: v16@0:8
// Implementation: 0x10af74cdc

// -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageAccessPostInvalidationWithOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af74ce8

// -[SCSnapTokenMainAppLogger _logSnapTokenDiskStorageTokenOperation:success:errorCode:tokenType:]
// Type encoding: v44@0:8@16B24q28@36
// Implementation: 0x10af74cf8

// -[SCSnapTokenMainAppLogger logFatalCondition:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af74db8

// -[SCSnapTokenMainAppLogger beginObserving]
// Type encoding: v16@0:8
// Implementation: 0x100289650

// -[SCSnapTokenMainAppLogger onUserResumed:didLaunchWithDataUnavailable:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x100289488

// -[SCSnapTokenMainAppLogger _onAppWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10af74ea0

// -[SCSnapTokenMainAppLogger _onAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10af74ebc

// -[SCSnapTokenMainAppLogger _onAppWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x10af74ec4

// -[SCSnapTokenMainAppLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af74ecc

@end
