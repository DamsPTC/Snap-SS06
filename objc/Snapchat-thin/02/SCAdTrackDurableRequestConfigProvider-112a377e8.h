// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackDurableRequestConfigProvider
// Superclass: NSObject
// Address: 0x112a377e8

@interface SCAdTrackDurableRequestConfigProvider

// Property: remoteConfig; attributes: T@"SCLazy",&,N,V_remoteConfig
// Property: retriableStatusCodes; attributes: T@"NSSet",C,N,V_retriableStatusCodes
// Property: enableAdTrackDurableJob; attributes: TB,R,N
// Property: maxAgeMillis; attributes: Td,R,N
// Property: maxRetryLimit; attributes: TQ,R,N
// Property: retryIntervalSeconds; attributes: Td,R,N
// Property: networkRequestTimeoutSeconds; attributes: Td,R,N
// Property: skipLateTrackRetry; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdTrackDurableRequestConfigProvider initWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x105414184

// -[SCAdTrackDurableRequestConfigProvider enableAdTrackDurableJob]
// Type encoding: B16@0:8
// Implementation: 0x1054142e4

// -[SCAdTrackDurableRequestConfigProvider maxAgeMillis]
// Type encoding: d16@0:8
// Implementation: 0x105414324

// -[SCAdTrackDurableRequestConfigProvider maxRetryLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10541436c

// -[SCAdTrackDurableRequestConfigProvider retryIntervalSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1054143ac

// -[SCAdTrackDurableRequestConfigProvider networkRequestTimeoutSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1054143f4

// -[SCAdTrackDurableRequestConfigProvider skipLateTrackRetry]
// Type encoding: B16@0:8
// Implementation: 0x10541443c

// -[SCAdTrackDurableRequestConfigProvider isStatusCodeRetriable:]
// Type encoding: B24@0:8q16
// Implementation: 0x10541447c

// -[SCAdTrackDurableRequestConfigProvider _fetchRemoteConfig]
// Type encoding: @16@0:8
// Implementation: 0x1054145fc

// -[SCAdTrackDurableRequestConfigProvider remoteConfig]
// Type encoding: @16@0:8
// Implementation: 0x1054146b8

// -[SCAdTrackDurableRequestConfigProvider setRemoteConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054146c0

// -[SCAdTrackDurableRequestConfigProvider retriableStatusCodes]
// Type encoding: @16@0:8
// Implementation: 0x1054146f0

// -[SCAdTrackDurableRequestConfigProvider setRetriableStatusCodes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054146f8

// -[SCAdTrackDurableRequestConfigProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105414700

@end
