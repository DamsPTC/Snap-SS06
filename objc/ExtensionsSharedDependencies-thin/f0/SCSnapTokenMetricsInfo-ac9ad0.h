// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenMetricsInfo
// Superclass: NSObject
// Address: 0xac9ad0

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
// Implementation: 0x7de34

// -[SCSnapTokenMetricsInfo isTrySyncFirst]
// Type encoding: B16@0:8
// Implementation: 0x7de44

// -[SCSnapTokenMetricsInfo isPrefetch]
// Type encoding: B16@0:8
// Implementation: 0x7de54

// -[SCSnapTokenMetricsInfo isCacheHit]
// Type encoding: B16@0:8
// Implementation: 0x7de64

// -[SCSnapTokenMetricsInfo setIsCacheHit:]
// Type encoding: v20@0:8B16
// Implementation: 0x7dee8

// -[SCSnapTokenMetricsInfo operationStartTs]
// Type encoding: d16@0:8
// Implementation: 0x7dfc4

// -[SCSnapTokenMetricsInfo networkStartTs]
// Type encoding: d16@0:8
// Implementation: 0x7dfd4

// -[SCSnapTokenMetricsInfo setNetworkStartTs:]
// Type encoding: v24@0:8d16
// Implementation: 0x7e058

// -[SCSnapTokenMetricsInfo networkEndTs]
// Type encoding: d16@0:8
// Implementation: 0x7e134

// -[SCSnapTokenMetricsInfo setNetworkEndTs:]
// Type encoding: v24@0:8d16
// Implementation: 0x7e1b8

// -[SCSnapTokenMetricsInfo keychainLatency]
// Type encoding: d16@0:8
// Implementation: 0x7e294

// -[SCSnapTokenMetricsInfo setKeychainLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x7e318

// -[SCSnapTokenMetricsInfo lastFetchTokenAgeInSeconds]
// Type encoding: q16@0:8
// Implementation: 0x7e3f4

// -[SCSnapTokenMetricsInfo setLastFetchTokenAgeInSeconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x7e478

// -[SCSnapTokenMetricsInfo getMode]
// Type encoding: Q16@0:8
// Implementation: 0x7e558

// -[SCSnapTokenMetricsInfo setGetMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x7e5dc

// -[SCSnapTokenMetricsInfo requestPath]
// Type encoding: @16@0:8
// Implementation: 0x7e6b8

// -[SCSnapTokenMetricsInfo setRequestPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x7e6d0

// -[SCSnapTokenMetricsInfo requestId]
// Type encoding: @16@0:8
// Implementation: 0x7e728

// -[SCSnapTokenMetricsInfo setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x7e740

// -[SCSnapTokenMetricsInfo referrer]
// Type encoding: @16@0:8
// Implementation: 0x7e798

// -[SCSnapTokenMetricsInfo setReferrer:]
// Type encoding: v24@0:8@16
// Implementation: 0x7e874

// -[SCSnapTokenMetricsInfo prefetchError]
// Type encoding: @16@0:8
// Implementation: 0x7e99c

// -[SCSnapTokenMetricsInfo setPrefetchError:]
// Type encoding: v24@0:8@16
// Implementation: 0x7ea30

// -[SCSnapTokenMetricsInfo initWithAccessType:isTrySyncFirst:isPrefetch:]
// Type encoding: @32@0:8Q16B24B28
// Implementation: 0x7ec7c

// -[SCSnapTokenMetricsInfo setNetworkStartTsNow]
// Type encoding: v16@0:8
// Implementation: 0x7ecb4

// -[SCSnapTokenMetricsInfo setNetworkEndTsNow]
// Type encoding: v16@0:8
// Implementation: 0x7ed1c

// -[SCSnapTokenMetricsInfo elapsedTime]
// Type encoding: d16@0:8
// Implementation: 0x7edac

// -[SCSnapTokenMetricsInfo networkTime]
// Type encoding: d16@0:8
// Implementation: 0x7ee80

// -[SCSnapTokenMetricsInfo responseProcessingTime]
// Type encoding: d16@0:8
// Implementation: 0x7ef90

// -[SCSnapTokenMetricsInfo init]
// Type encoding: @16@0:8
// Implementation: 0x7f028

// -[SCSnapTokenMetricsInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x7f084

@end
