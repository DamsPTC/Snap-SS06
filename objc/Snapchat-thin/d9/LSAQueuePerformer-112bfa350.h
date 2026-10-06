// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAQueuePerformer
// Superclass: NSObject
// Address: 0x112bfa350

@interface LSAQueuePerformer

// Property: cancelationDelegate; attributes: T@"<LSAQueuePerformingCancelationDelegate>",W,N,VcancelationDelegate
// Property: delegate; attributes: T@"<LSAQueuePerformingDelegate>",W,N,Vdelegate
// Property: queue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_queue
// Property: isValid; attributes: TB,R,N,V_isValid
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAQueuePerformer initWithMainQueue]
// Type encoding: @16@0:8
// Implementation: 0x10addcf0c

// -[LSAQueuePerformer initWithLabel:qualityOfService:]
// Type encoding: @28@0:8r*16I24
// Implementation: 0x10addcf9c

// -[LSAQueuePerformer initWithLabel:qualityOfService:wrappingExecutionBlock:]
// Type encoding: @36@0:8r*16I24@?28
// Implementation: 0x10addcfa4

// -[LSAQueuePerformer _makeDispatchBlock:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x10addd1e4

// -[LSAQueuePerformer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10addd2f0

// -[LSAQueuePerformer setShouldCatchExceptions:]
// Type encoding: v20@0:8B16
// Implementation: 0x10addd390

// -[LSAQueuePerformer setShouldCatchLensJSExceptions:]
// Type encoding: v20@0:8B16
// Implementation: 0x10addd398

// -[LSAQueuePerformer perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10addd3a0

// -[LSAQueuePerformer performV2:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10addd3dc

// -[LSAQueuePerformer perform:after:]
// Type encoding: v32@0:8@?16d24
// Implementation: 0x10addd3e0

// -[LSAQueuePerformer performImmediatelyIfCurrentPerformer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10addd484

// -[LSAQueuePerformer performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10addd4f8

// -[LSAQueuePerformer performAndWaitWithSemaphore:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10addd5bc

// -[LSAQueuePerformer performUnsafeBlockWithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10addd6b8

// -[LSAQueuePerformer performUnsafeBlockV2WithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10addd838

// -[LSAQueuePerformer performUnsafeBlockImmediatelyIfCurrentPerformerWithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10addd83c

// -[LSAQueuePerformer performUnsafeBlockAndWaitWithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10addd960

// -[LSAQueuePerformer isCurrentPerformer]
// Type encoding: B16@0:8
// Implementation: 0x10adddbf8

// -[LSAQueuePerformer tryToExecuteUnsafeBlock:blockInfo:completion:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x10adddc44

// -[LSAQueuePerformer queue]
// Type encoding: @16@0:8
// Implementation: 0x10adddd64

// -[LSAQueuePerformer isValid]
// Type encoding: B16@0:8
// Implementation: 0x10adddd6c

// -[LSAQueuePerformer cancelationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10adddd74

// -[LSAQueuePerformer setCancelationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adddd8c

// -[LSAQueuePerformer delegate]
// Type encoding: @16@0:8
// Implementation: 0x10adddd98

// -[LSAQueuePerformer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10addddb0

// -[LSAQueuePerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10addddbc

// +[LSAQueuePerformer mainQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10addce88

@end
