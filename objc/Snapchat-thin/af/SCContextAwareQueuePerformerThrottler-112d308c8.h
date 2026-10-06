// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextAwareQueuePerformerThrottler
// Superclass: NSObject
// Address: 0x112d308c8

@interface SCContextAwareQueuePerformerThrottler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextAwareQueuePerformerThrottler init]
// Type encoding: @16@0:8
// Implementation: 0x1000735d0

// -[SCContextAwareQueuePerformerThrottler enqueueStopThrottlingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c81a08

// -[SCContextAwareQueuePerformerThrottler enqueueStartThrottlingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a0180c

// -[SCContextAwareQueuePerformerThrottler resetForNextAppStart]
// Type encoding: v16@0:8
// Implementation: 0x10bcb7e80

// -[SCContextAwareQueuePerformerThrottler clearCurrentRequest:]
// Type encoding: v24@0:8r*16
// Implementation: 0x10bcb7ee4

// -[SCContextAwareQueuePerformerThrottler registerPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10007377c

// -[SCContextAwareQueuePerformerThrottler unregisterPerformer:withCompletionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1000d4440

// -[SCContextAwareQueuePerformerThrottler appStartStateChanged:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100a0189c

// -[SCContextAwareQueuePerformerThrottler _initializePerformerDict]
// Type encoding: @16@0:8
// Implementation: 0x1000736c4

// -[SCContextAwareQueuePerformerThrottler _isAppStartupThrottleRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bcb7f88

// -[SCContextAwareQueuePerformerThrottler _handleNextRequest]
// Type encoding: v16@0:8
// Implementation: 0x100a01a7c

// -[SCContextAwareQueuePerformerThrottler _handleCurrentRequest]
// Type encoding: v16@0:8
// Implementation: 0x100a01ae0

// -[SCContextAwareQueuePerformerThrottler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bcb7fe0

// +[SCContextAwareQueuePerformerThrottler shared]
// Type encoding: @16@0:8
// Implementation: 0x100073550

@end
