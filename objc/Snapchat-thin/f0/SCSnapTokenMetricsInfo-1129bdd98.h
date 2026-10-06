// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenMetricsInfo
// Superclass: NSObject
// Address: 0x1129bdd98

@interface SCSnapTokenMetricsInfo

// Property: accessType; attributes: TQ,N,R,VaccessType
// Property: isTrySyncFirst; attributes: TB,N,R,VisTrySyncFirst
// Property: isPrefetch; attributes: TB,N,R,VisPrefetch
// Property: isCacheHit; attributes: TB,N,VisCacheHit
// Property: operationStartTs; attributes: Td,N,R,VoperationStartTs
// Property: networkStartTs; attributes: Td,N,VnetworkStartTs
// Property: networkEndTs; attributes: Td,N,VnetworkEndTs
// Property: keychainLatency; attributes: Td,N,VkeychainLatency
// Property: lastFetchTokenAgeInSeconds; attributes: Tq,N,VlastFetchTokenAgeInSeconds
// Property: getMode; attributes: TQ,N,VgetMode
// Property: requestPath; attributes: T@"NSString",N,C
// Property: requestId; attributes: T@"NSString",N,C
// Property: referrer; attributes: T@"NSString",N,C
// Property: prefetchError; attributes: T@"NSError",N,&,VprefetchError

// -[SCSnapTokenMetricsInfo accessType]
// Type encoding: Q16@0:8
// Implementation: 0x1003b90d8

// -[SCSnapTokenMetricsInfo isTrySyncFirst]
// Type encoding: B16@0:8
// Implementation: 0x1003b90e8

// -[SCSnapTokenMetricsInfo isPrefetch]
// Type encoding: B16@0:8
// Implementation: 0x1003559fc

// -[SCSnapTokenMetricsInfo isCacheHit]
// Type encoding: B16@0:8
// Implementation: 0x100499f78

// -[SCSnapTokenMetricsInfo setIsCacheHit:]
// Type encoding: v20@0:8B16
// Implementation: 0x1003b8760

// -[SCSnapTokenMetricsInfo operationStartTs]
// Type encoding: d16@0:8
// Implementation: 0x10448e6e8

// -[SCSnapTokenMetricsInfo networkStartTs]
// Type encoding: d16@0:8
// Implementation: 0x10448e6f8

// -[SCSnapTokenMetricsInfo setNetworkStartTs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10448e77c

// -[SCSnapTokenMetricsInfo networkEndTs]
// Type encoding: d16@0:8
// Implementation: 0x10448e858

// -[SCSnapTokenMetricsInfo setNetworkEndTs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10448e8dc

// -[SCSnapTokenMetricsInfo keychainLatency]
// Type encoding: d16@0:8
// Implementation: 0x1003b9178

// -[SCSnapTokenMetricsInfo setKeychainLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x10035da60

// -[SCSnapTokenMetricsInfo lastFetchTokenAgeInSeconds]
// Type encoding: q16@0:8
// Implementation: 0x10448ea84

// -[SCSnapTokenMetricsInfo setLastFetchTokenAgeInSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x100355588

// -[SCSnapTokenMetricsInfo getMode]
// Type encoding: Q16@0:8
// Implementation: 0x1003b8e14

// -[SCSnapTokenMetricsInfo setGetMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10036312c

// -[SCSnapTokenMetricsInfo requestPath]
// Type encoding: @16@0:8
// Implementation: 0x1004a0544

// -[SCSnapTokenMetricsInfo setRequestPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x100499a24

// -[SCSnapTokenMetricsInfo requestId]
// Type encoding: @16@0:8
// Implementation: 0x1004a0568

// -[SCSnapTokenMetricsInfo setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x100499a30

// -[SCSnapTokenMetricsInfo referrer]
// Type encoding: @16@0:8
// Implementation: 0x1003b90f8

// -[SCSnapTokenMetricsInfo setReferrer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100355504

// -[SCSnapTokenMetricsInfo prefetchError]
// Type encoding: @16@0:8
// Implementation: 0x10448ee14

// -[SCSnapTokenMetricsInfo setPrefetchError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10448eea8

// -[SCSnapTokenMetricsInfo initWithAccessType:isTrySyncFirst:isPrefetch:]
// Type encoding: @32@0:8Q16B24B28
// Implementation: 0x1003523ac

// -[SCSnapTokenMetricsInfo setNetworkStartTsNow]
// Type encoding: v16@0:8
// Implementation: 0x10448eff4

// -[SCSnapTokenMetricsInfo setNetworkEndTsNow]
// Type encoding: v16@0:8
// Implementation: 0x10448f05c

// -[SCSnapTokenMetricsInfo elapsedTime]
// Type encoding: d16@0:8
// Implementation: 0x1003b98cc

// -[SCSnapTokenMetricsInfo networkTime]
// Type encoding: d16@0:8
// Implementation: 0x10448f178

// -[SCSnapTokenMetricsInfo responseProcessingTime]
// Type encoding: d16@0:8
// Implementation: 0x10448f288

// -[SCSnapTokenMetricsInfo init]
// Type encoding: @16@0:8
// Implementation: 0x10448f320

// -[SCSnapTokenMetricsInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10035db04

@end
