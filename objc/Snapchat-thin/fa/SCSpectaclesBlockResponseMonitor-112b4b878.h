// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBlockResponseMonitor
// Superclass: NSObject
// Address: 0x112b4b878

@interface SCSpectaclesBlockResponseMonitor

// Property: handlerBlock; attributes: T@?,C,N,V_handlerBlock
// Property: successBlock; attributes: T@?,C,N,V_successBlock
// Property: failureBlock; attributes: T@?,C,N,V_failureBlock
// Property: timeoutBlock; attributes: T@?,C,N,V_timeoutBlock
// Property: timer; attributes: T@"SCWeakTimer",&,N,V_timer
// Property: responseMonitorState; attributes: Tq,N,V_responseMonitorState
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesBlockResponseMonitor initWithHandler:successBlock:failureBlock:timeoutBlock:]
// Type encoding: @48@0:8@?16@?24@?32@?40
// Implementation: 0x106f733f0

// -[SCSpectaclesBlockResponseMonitor initWithHandler:successBlock:failureBlock:timeoutBlock:timeout:]
// Type encoding: @56@0:8@?16@?24@?32@?40d48
// Implementation: 0x106f733f8

// -[SCSpectaclesBlockResponseMonitor _didTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106f7354c

// -[SCSpectaclesBlockResponseMonitor handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f7359c

// -[SCSpectaclesBlockResponseMonitor handlerBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106f73658

// -[SCSpectaclesBlockResponseMonitor setHandlerBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f73660

// -[SCSpectaclesBlockResponseMonitor successBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106f73668

// -[SCSpectaclesBlockResponseMonitor setSuccessBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f73670

// -[SCSpectaclesBlockResponseMonitor failureBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106f73678

// -[SCSpectaclesBlockResponseMonitor setFailureBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f73680

// -[SCSpectaclesBlockResponseMonitor timeoutBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106f73688

// -[SCSpectaclesBlockResponseMonitor setTimeoutBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f73690

// -[SCSpectaclesBlockResponseMonitor timer]
// Type encoding: @16@0:8
// Implementation: 0x106f73698

// -[SCSpectaclesBlockResponseMonitor setTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f736a0

// -[SCSpectaclesBlockResponseMonitor responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106f736d0

// -[SCSpectaclesBlockResponseMonitor setResponseMonitorState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106f736d8

// -[SCSpectaclesBlockResponseMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f736e0

@end
