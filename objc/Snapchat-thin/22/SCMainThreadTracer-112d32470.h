// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainThreadTracer
// Superclass: NSObject
// Address: 0x112d32470

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
// Implementation: 0x10bcb8e80

// -[SCMainThreadTracer subscribeOnCurrentPageEvent:disposableObserverLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10bcb8e98

// -[SCMainThreadTracer setMainThreadGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcb8e9c

// -[SCMainThreadTracer init]
// Type encoding: @16@0:8
// Implementation: 0x10bcbe6b8

// -[SCMainThreadTracer grapheneLogger]
// Type encoding: @16@0:8
// Implementation: 0x10bcbe6d0

// -[SCMainThreadTracer setGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcbe6d8

// -[SCMainThreadTracer concurrency]
// Type encoding: i16@0:8
// Implementation: 0x10bcbe6e0

// -[SCMainThreadTracer setConcurrency:]
// Type encoding: v20@0:8i16
// Implementation: 0x10bcbe6e8

// -[SCMainThreadTracer inTransition]
// Type encoding: B16@0:8
// Implementation: 0x10bcbe6f0

// -[SCMainThreadTracer setInTransition:]
// Type encoding: v20@0:8B16
// Implementation: 0x10bcbe6f8

// -[SCMainThreadTracer loggingQueue]
// Type encoding: @16@0:8
// Implementation: 0x10bcbe700

// -[SCMainThreadTracer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bcbe70c

// +[SCMainThreadTracer sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x10bcbe6b0

@end
