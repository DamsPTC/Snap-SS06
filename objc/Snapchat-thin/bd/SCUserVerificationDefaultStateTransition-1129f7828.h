// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserVerificationDefaultStateTransition
// Superclass: NSObject
// Address: 0x1129f7828

@interface SCUserVerificationDefaultStateTransition

// Property: verificationFlowMethod; attributes: TQ,N,V_verificationFlowMethod
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserVerificationDefaultStateTransition init]
// Type encoding: @16@0:8
// Implementation: 0x104d460a4

// -[SCUserVerificationDefaultStateTransition nextStateConfigFromState:action:context:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x104d460e4

// -[SCUserVerificationDefaultStateTransition _stateForExitActionFromCurrentState:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d46210

// -[SCUserVerificationDefaultStateTransition _stateForSubmitActionFromCurrentState:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d465f8

// -[SCUserVerificationDefaultStateTransition _stateForSkipActionFromCurrentState:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d469c8

// -[SCUserVerificationDefaultStateTransition _stateForSwitchActionFromCurrentState:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d46c2c

// -[SCUserVerificationDefaultStateTransition _stateForSkipVerificationActionFromCurrentState:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d46f18

// -[SCUserVerificationDefaultStateTransition stateConfigForState:context:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d470fc

// -[SCUserVerificationDefaultStateTransition _isStateFromPhoneFirstCountrySkippable]
// Type encoding: B16@0:8
// Implementation: 0x104d474dc

// -[SCUserVerificationDefaultStateTransition _isStateFromPhoneFirstCountrySwitchable]
// Type encoding: B16@0:8
// Implementation: 0x104d474ec

// -[SCUserVerificationDefaultStateTransition _stateForSwitchActionOnPhoneEntryAndVerifiyPage]
// Type encoding: @16@0:8
// Implementation: 0x104d47500

// -[SCUserVerificationDefaultStateTransition verificationFlowMethod]
// Type encoding: Q16@0:8
// Implementation: 0x104d47578

// -[SCUserVerificationDefaultStateTransition setVerificationFlowMethod:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104d47580

@end
