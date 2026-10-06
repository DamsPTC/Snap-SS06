// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeckContainerBranchChangeTransition
// Superclass: NSObject
// Address: 0x112c69db8

@interface SCDeckContainerBranchChangeTransition

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeckContainerBranchChangeTransition initWithFrom:fromLeavingHierarchy:to:toEnteringHierarchy:byParenting:to:cleaningUpUntil:presenter:style:transitionEventAnnouncer:]
// Type encoding: @88@0:8@16B24@28B36@40@48@56@64@72@80
// Implementation: 0x1008760c0

// -[SCDeckContainerBranchChangeTransition beginWithAppearance:interactionType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x100876758

// -[SCDeckContainerBranchChangeTransition endWithAppearance:interactionType:completed:]
// Type encoding: B36@0:8@16q24B32
// Implementation: 0x1008ecba0

// -[SCDeckContainerBranchChangeTransition performAnimated:withCompletion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x100876280

// -[SCDeckContainerBranchChangeTransition _performAnimated:withCompletion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x100876584

// -[SCDeckContainerBranchChangeTransition _dismissUIKitPresentedVCsRecusivelyWithContainer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100878b18

// -[SCDeckContainerBranchChangeTransition performInteractivelyWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b098770

// -[SCDeckContainerBranchChangeTransition _performInteractivelyWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b0988a8

// -[SCDeckContainerBranchChangeTransition _shouldRecoverCompletedDismissalAfterIncompleteTransition]
// Type encoding: B16@0:8
// Implementation: 0x10b098b18

// -[SCDeckContainerBranchChangeTransition _eventTypeWithFromLeavingHierarchy:toEnteringHierarchy:]
// Type encoding: q24@0:8B16B20
// Implementation: 0x100876e18

// -[SCDeckContainerBranchChangeTransition .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008ee328

@end
