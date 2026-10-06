// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenAccessTokenFetchOperation
// Superclass: NSObject
// Address: 0x112c2b1f8

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
// Implementation: 0x10035216c

// -[SCSnapTokenAccessTokenFetchOperation sendSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003b9f8c

// -[SCSnapTokenAccessTokenFetchOperation sendFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af79cd8

// -[SCSnapTokenAccessTokenFetchOperation accessType]
// Type encoding: Q16@0:8
// Implementation: 0x100355a0c

// -[SCSnapTokenAccessTokenFetchOperation isSyncBlockExecution]
// Type encoding: B16@0:8
// Implementation: 0x10af79da4

// -[SCSnapTokenAccessTokenFetchOperation setIsSyncBlockExecution:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af79dac

// -[SCSnapTokenAccessTokenFetchOperation successQueue]
// Type encoding: @16@0:8
// Implementation: 0x10af79db4

// -[SCSnapTokenAccessTokenFetchOperation failureQueue]
// Type encoding: @16@0:8
// Implementation: 0x10af79dbc

// -[SCSnapTokenAccessTokenFetchOperation successBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10af79dc4

// -[SCSnapTokenAccessTokenFetchOperation setSuccessBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10af79dcc

// -[SCSnapTokenAccessTokenFetchOperation failureBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10af79dd4

// -[SCSnapTokenAccessTokenFetchOperation setFailureBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10af79ddc

// -[SCSnapTokenAccessTokenFetchOperation metricsInfo]
// Type encoding: @16@0:8
// Implementation: 0x1003554fc

// -[SCSnapTokenAccessTokenFetchOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10035dab0

@end
