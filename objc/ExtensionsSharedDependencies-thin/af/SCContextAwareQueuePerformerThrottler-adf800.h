// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextAwareQueuePerformerThrottler
// Superclass: NSObject
// Address: 0xadf800

@interface SCContextAwareQueuePerformerThrottler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextAwareQueuePerformerThrottler init]
// Type encoding: @16@0:8
// Implementation: 0x6112f8

// -[SCContextAwareQueuePerformerThrottler enqueueStopThrottlingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x6113ec

// -[SCContextAwareQueuePerformerThrottler enqueueStartThrottlingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x611540

// -[SCContextAwareQueuePerformerThrottler resetForNextAppStart]
// Type encoding: v16@0:8
// Implementation: 0x611630

// -[SCContextAwareQueuePerformerThrottler clearCurrentRequest:]
// Type encoding: v24@0:8r*16
// Implementation: 0x611694

// -[SCContextAwareQueuePerformerThrottler registerPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x611738

// -[SCContextAwareQueuePerformerThrottler unregisterPerformer:withCompletionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x611864

// -[SCContextAwareQueuePerformerThrottler appStartStateChanged:]
// Type encoding: v24@0:8Q16
// Implementation: 0x6119cc

// -[SCContextAwareQueuePerformerThrottler _initializePerformerDict]
// Type encoding: @16@0:8
// Implementation: 0x611a3c

// -[SCContextAwareQueuePerformerThrottler _isAppStartupThrottleRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x611af4

// -[SCContextAwareQueuePerformerThrottler _handleNextRequest]
// Type encoding: v16@0:8
// Implementation: 0x611b4c

// -[SCContextAwareQueuePerformerThrottler _handleCurrentRequest]
// Type encoding: v16@0:8
// Implementation: 0x611bb0

// -[SCContextAwareQueuePerformerThrottler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x611d18

// +[SCContextAwareQueuePerformerThrottler shared]
// Type encoding: @16@0:8
// Implementation: 0x611278

@end
