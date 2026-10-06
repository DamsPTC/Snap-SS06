// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTransitionProperties
// Superclass: NSObject
// Address: 0x112c69ef8

@interface SCTransitionProperties

// Property: customChildTransitioner; attributes: TB,N,V_customChildTransitioner
// Property: deckContainer; attributes: T@"SCDeckContainerBase",&,N,V_deckContainer
// Property: presenter; attributes: T@"<SCPresenter>",&,N,V_presenter
// Property: style; attributes: T@"<SCPresentationStyle>",&,N,V_style
// Property: animated; attributes: TB,N,V_animated
// Property: completion; attributes: T@?,C,N,V_completion

// -[SCTransitionProperties initWithPresentingTransitionPropertiesWithContainer:presenter:animated:completion:]
// Type encoding: @44@0:8@16@24B32@?36
// Implementation: 0x10b098e10

// -[SCTransitionProperties initWithCustomChildTransitionPropertiesWithContainer:presenter:animated:style:completion:]
// Type encoding: @52@0:8@16@24B32@36@?44
// Implementation: 0x1008755a8

// -[SCTransitionProperties customChildTransitioner]
// Type encoding: B16@0:8
// Implementation: 0x10087593c

// -[SCTransitionProperties setCustomChildTransitioner:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b098ef4

// -[SCTransitionProperties deckContainer]
// Type encoding: @16@0:8
// Implementation: 0x100875944

// -[SCTransitionProperties setDeckContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b098efc

// -[SCTransitionProperties presenter]
// Type encoding: @16@0:8
// Implementation: 0x10087594c

// -[SCTransitionProperties setPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b098f2c

// -[SCTransitionProperties style]
// Type encoding: @16@0:8
// Implementation: 0x100875954

// -[SCTransitionProperties setStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b098f5c

// -[SCTransitionProperties animated]
// Type encoding: B16@0:8
// Implementation: 0x100876278

// -[SCTransitionProperties setAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b098f8c

// -[SCTransitionProperties completion]
// Type encoding: @?16@0:8
// Implementation: 0x1008edea4

// -[SCTransitionProperties setCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b098f94

// -[SCTransitionProperties .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008ee3a0

@end
