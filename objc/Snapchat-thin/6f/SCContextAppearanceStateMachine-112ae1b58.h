// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextAppearanceStateMachine
// Superclass: NSObject
// Address: 0x112ae1b58

@interface SCContextAppearanceStateMachine

// Property: delegate; attributes: T@"<SCContextAppearanceStateMachineDelegate>",W,N,V_delegate
// Property: state; attributes: TQ,N,V_state

// -[SCContextAppearanceStateMachine initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064afd20

// -[SCContextAppearanceStateMachine initWithInitialState:delegate:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1064afdb4

// -[SCContextAppearanceStateMachine setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1064afe70

// -[SCContextAppearanceStateMachine willAppearFromState:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1064aff10

// -[SCContextAppearanceStateMachine didAppearFromState:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1064aff18

// -[SCContextAppearanceStateMachine willDisappearFromState:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1064aff50

// -[SCContextAppearanceStateMachine didDisappearFromState:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1064aff58

// -[SCContextAppearanceStateMachine didMoveToState:fromState:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x1064aff94

// -[SCContextAppearanceStateMachine delegate]
// Type encoding: @16@0:8
// Implementation: 0x1064affec

// -[SCContextAppearanceStateMachine setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b0004

// -[SCContextAppearanceStateMachine state]
// Type encoding: Q16@0:8
// Implementation: 0x1064b0010

// -[SCContextAppearanceStateMachine .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064b0018

@end
