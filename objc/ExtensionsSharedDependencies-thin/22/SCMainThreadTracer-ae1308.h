// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainThreadTracer
// Superclass: NSObject
// Address: 0xae1308

@interface SCMainThreadTracer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: grapheneLogger; attributes: T@,N,V_grapheneLogger
// Property: concurrency; attributes: Ti,V_concurrency
// Property: inTransition; attributes: TB,N,V_inTransition
// Property: loggingQueue; attributes: T@"NSOperationQueue",R,V_loggingQueue

// -[SCMainThreadTracer traceBlock:caller:]
// Type encoding: @?32@0:8@?16@24
// Implementation: 0x6143a8

// -[SCMainThreadTracer subscribeOnCurrentPageEvent:disposableObserverLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x6143c0

// -[SCMainThreadTracer setMainThreadGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x6143c4

// -[SCMainThreadTracer init]
// Type encoding: @16@0:8
// Implementation: 0x620f38

// -[SCMainThreadTracer grapheneLogger]
// Type encoding: @16@0:8
// Implementation: 0x620f50

// -[SCMainThreadTracer setGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x620f58

// -[SCMainThreadTracer concurrency]
// Type encoding: i16@0:8
// Implementation: 0x620f60

// -[SCMainThreadTracer setConcurrency:]
// Type encoding: v20@0:8i16
// Implementation: 0x620f68

// -[SCMainThreadTracer inTransition]
// Type encoding: B16@0:8
// Implementation: 0x620f70

// -[SCMainThreadTracer setInTransition:]
// Type encoding: v20@0:8B16
// Implementation: 0x620f78

// -[SCMainThreadTracer loggingQueue]
// Type encoding: @16@0:8
// Implementation: 0x620f80

// -[SCMainThreadTracer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x620f8c

// +[SCMainThreadTracer sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x620f30

@end
