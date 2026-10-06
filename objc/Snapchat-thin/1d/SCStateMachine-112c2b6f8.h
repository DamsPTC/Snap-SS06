// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStateMachine
// Superclass: NSObject
// Address: 0x112c2b6f8

@interface SCStateMachine

// Property: state; attributes: Tq,V_state
// Property: initialState; attributes: Tq,R,N,V_initialState
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: transitionTable; attributes: T@"NSDictionary",R,N,V_transitionTable
// Property: assertUnhandledEvents; attributes: TB,N,V_assertUnhandledEvents
// Property: reentryEnabled; attributes: TB,N,V_reentryEnabled

// -[SCStateMachine initWithTransitions:initialState:name:logContext:]
// Type encoding: @44@0:8@16q24@32S40
// Implementation: 0x1005d5510

// -[SCStateMachine _tableFromSet:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005d55fc

// -[SCStateMachine handleEvent:]
// Type encoding: B24@0:8q16
// Implementation: 0x1008b6a40

// -[SCStateMachine handleEvent:withData:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x1008b6a48

// -[SCStateMachine _printAvailableTransitions]
// Type encoding: v16@0:8
// Implementation: 0x10af84b58

// -[SCStateMachine state]
// Type encoding: q16@0:8
// Implementation: 0x1008b6d20

// -[SCStateMachine setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1005d55f4

// -[SCStateMachine assertUnhandledEvents]
// Type encoding: B16@0:8
// Implementation: 0x10af84c2c

// -[SCStateMachine setAssertUnhandledEvents:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af84c34

// -[SCStateMachine reentryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10af84c3c

// -[SCStateMachine setReentryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af84c44

// -[SCStateMachine initialState]
// Type encoding: q16@0:8
// Implementation: 0x10af84c4c

// -[SCStateMachine name]
// Type encoding: @16@0:8
// Implementation: 0x10af84c54

// -[SCStateMachine transitionTable]
// Type encoding: @16@0:8
// Implementation: 0x10af84c5c

// -[SCStateMachine .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af84c64

@end
