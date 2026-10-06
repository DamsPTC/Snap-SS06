// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStateMachineTransition
// Superclass: NSObject
// Address: 0x112c2b798

@interface SCStateMachineTransition

// Property: toState; attributes: Tq,R,N,V_toState
// Property: fromState; attributes: Tq,R,N,V_fromState
// Property: event; attributes: Tq,R,N,V_event
// Property: action; attributes: T:,R,N,V_action
// Property: target; attributes: T@,R,W,N,V_target

// -[SCStateMachineTransition _initWithFromState:toState:onEvent:action:target:]
// Type encoding: @56@0:8q16q24q32:40@48
// Implementation: 0x1005d4f48

// -[SCStateMachineTransition canHandleData]
// Type encoding: B16@0:8
// Implementation: 0x10af85388

// -[SCStateMachineTransition toState]
// Type encoding: q16@0:8
// Implementation: 0x1008b6d30

// -[SCStateMachineTransition fromState]
// Type encoding: q16@0:8
// Implementation: 0x1008b6d28

// -[SCStateMachineTransition event]
// Type encoding: q16@0:8
// Implementation: 0x1005d581c

// -[SCStateMachineTransition action]
// Type encoding: :16@0:8
// Implementation: 0x1008b6d50

// -[SCStateMachineTransition target]
// Type encoding: @16@0:8
// Implementation: 0x1008b6d38

// -[SCStateMachineTransition .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af853ec

// +[SCStateMachineTransition transitionWithFromState:toState:onEvent:action:target:]
// Type encoding: @56@0:8q16q24q32:40@48
// Implementation: 0x1005d4ecc

@end
