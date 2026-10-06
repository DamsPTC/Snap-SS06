// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAsyncCommand
// Superclass: NSObject
// Address: 0x112b58f78

@interface SCAsyncCommand

// Property: state; attributes: TQ,R,N

// -[SCAsyncCommand init]
// Type encoding: @16@0:8
// Implementation: 0x106fd5f84

// -[SCAsyncCommand state]
// Type encoding: Q16@0:8
// Implementation: 0x106fd6008

// -[SCAsyncCommand execute]
// Type encoding: v16@0:8
// Implementation: 0x106fd6038

// -[SCAsyncCommand executeCommand]
// Type encoding: v16@0:8
// Implementation: 0x106fd6040

// -[SCAsyncCommand beginExecutingAsync]
// Type encoding: v16@0:8
// Implementation: 0x106fd6090

// -[SCAsyncCommand endExecutingAsync]
// Type encoding: v16@0:8
// Implementation: 0x106fd6098

// -[SCAsyncCommand didTransitionToState:fromState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x106fd60d8

// -[SCAsyncCommand willTransitionToState:fromState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x106fd60ec

// -[SCAsyncCommand asyncCommandCompletedOperation]
// Type encoding: @16@0:8
// Implementation: 0x106fd60f0

// -[SCAsyncCommand beginWaiting]
// Type encoding: v16@0:8
// Implementation: 0x106fd6118

// -[SCAsyncCommand _transitionToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106fd6120

// -[SCAsyncCommand .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fd61f0

@end
