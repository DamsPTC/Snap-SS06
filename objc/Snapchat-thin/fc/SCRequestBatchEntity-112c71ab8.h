// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestBatchEntity
// Superclass: NSObject
// Address: 0x112c71ab8

@interface SCRequestBatchEntity

// Property: batchId; attributes: T@"NSString",R,C,N,V_batchId
// Property: entityType; attributes: Tq,R,N,V_entityType
// Property: request; attributes: T@"SCRequest",R,N,V_request
// Property: successCallbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_successCallbackQueue
// Property: failureCallbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_failureCallbackQueue
// Property: successBlock; attributes: T@?,R,C,N,V_successBlock
// Property: failureBlock; attributes: T@?,R,C,N,V_failureBlock
// Property: completionQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_completionQueue
// Property: completionBlock; attributes: T@?,R,C,N,V_completionBlock

// -[SCRequestBatchEntity initWithRequest:batchId:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10b26787c

// -[SCRequestBatchEntity initWithRequest:batchId:completionQueue:completionBlock:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b2679e0

// -[SCRequestBatchEntity batchId]
// Type encoding: @16@0:8
// Implementation: 0x10b267ae4

// -[SCRequestBatchEntity entityType]
// Type encoding: q16@0:8
// Implementation: 0x10b267aec

// -[SCRequestBatchEntity request]
// Type encoding: @16@0:8
// Implementation: 0x10b267af4

// -[SCRequestBatchEntity successCallbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b267afc

// -[SCRequestBatchEntity failureCallbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b267b04

// -[SCRequestBatchEntity successBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b267b0c

// -[SCRequestBatchEntity failureBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b267b14

// -[SCRequestBatchEntity completionQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b267b1c

// -[SCRequestBatchEntity completionBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b267b24

// -[SCRequestBatchEntity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b267b2c

@end
