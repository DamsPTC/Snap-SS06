// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenAccessTokenFetchOperation
// Superclass: NSObject
// Address: 0xad4860

@interface SCSnapTokenAccessTokenFetchOperation

// Property: accessType; attributes: TQ,R,N,V_accessType
// Property: isSyncBlockExecution; attributes: TB,N,V_isSyncBlockExecution
// Property: successQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_successQueue
// Property: failureQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_failureQueue
// Property: successBlock; attributes: T@?,C,N,V_successBlock
// Property: failureBlock; attributes: T@?,C,N,V_failureBlock
// Property: metricsInfo; attributes: T@"SCSnapTokenMetricsInfo",R,N,V_metricsInfo

// -[SCSnapTokenAccessTokenFetchOperation initWithAccessType:isPrefetch:isTrySyncFirst:isSyncBlockExecution:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @68@0:8Q16B24B28B32@36@44@?52@?60
// Implementation: 0x42a968

// -[SCSnapTokenAccessTokenFetchOperation sendSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x42aabc

// -[SCSnapTokenAccessTokenFetchOperation sendFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x42ab88

// -[SCSnapTokenAccessTokenFetchOperation accessType]
// Type encoding: Q16@0:8
// Implementation: 0x42ac54

// -[SCSnapTokenAccessTokenFetchOperation isSyncBlockExecution]
// Type encoding: B16@0:8
// Implementation: 0x42ac5c

// -[SCSnapTokenAccessTokenFetchOperation setIsSyncBlockExecution:]
// Type encoding: v20@0:8B16
// Implementation: 0x42ac64

// -[SCSnapTokenAccessTokenFetchOperation successQueue]
// Type encoding: @16@0:8
// Implementation: 0x42ac6c

// -[SCSnapTokenAccessTokenFetchOperation failureQueue]
// Type encoding: @16@0:8
// Implementation: 0x42ac74

// -[SCSnapTokenAccessTokenFetchOperation successBlock]
// Type encoding: @?16@0:8
// Implementation: 0x42ac7c

// -[SCSnapTokenAccessTokenFetchOperation setSuccessBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x42ac84

// -[SCSnapTokenAccessTokenFetchOperation failureBlock]
// Type encoding: @?16@0:8
// Implementation: 0x42ac8c

// -[SCSnapTokenAccessTokenFetchOperation setFailureBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x42ac94

// -[SCSnapTokenAccessTokenFetchOperation metricsInfo]
// Type encoding: @16@0:8
// Implementation: 0x42ac9c

// -[SCSnapTokenAccessTokenFetchOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x42aca4

@end
