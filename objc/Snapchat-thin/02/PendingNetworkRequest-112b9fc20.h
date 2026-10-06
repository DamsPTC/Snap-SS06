// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: PendingNetworkRequest
// Superclass: NSObject
// Address: 0x112b9fc20

@interface PendingNetworkRequest

// Property: request; attributes: T@"SCAdNetworkRequest",&,N,V_request
// Property: successBlock; attributes: T@?,C,N,V_successBlock
// Property: failureBlock; attributes: T@?,C,N,V_failureBlock
// Property: useMainThread; attributes: TB,N,V_useMainThread
// Property: requestStartTs; attributes: Td,N,V_requestStartTs
// Property: queueWaitTraceCookie; attributes: TQ,N,V_queueWaitTraceCookie

// -[PendingNetworkRequest request]
// Type encoding: @16@0:8
// Implementation: 0x108489a50

// -[PendingNetworkRequest setRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108489a58

// -[PendingNetworkRequest successBlock]
// Type encoding: @?16@0:8
// Implementation: 0x108489a88

// -[PendingNetworkRequest setSuccessBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108489a90

// -[PendingNetworkRequest failureBlock]
// Type encoding: @?16@0:8
// Implementation: 0x108489a98

// -[PendingNetworkRequest setFailureBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108489aa0

// -[PendingNetworkRequest useMainThread]
// Type encoding: B16@0:8
// Implementation: 0x108489aa8

// -[PendingNetworkRequest setUseMainThread:]
// Type encoding: v20@0:8B16
// Implementation: 0x108489ab0

// -[PendingNetworkRequest requestStartTs]
// Type encoding: d16@0:8
// Implementation: 0x108489ab8

// -[PendingNetworkRequest setRequestStartTs:]
// Type encoding: v24@0:8d16
// Implementation: 0x108489ac0

// -[PendingNetworkRequest queueWaitTraceCookie]
// Type encoding: Q16@0:8
// Implementation: 0x108489ac8

// -[PendingNetworkRequest setQueueWaitTraceCookie:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108489ad0

// -[PendingNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108489ad8

@end
