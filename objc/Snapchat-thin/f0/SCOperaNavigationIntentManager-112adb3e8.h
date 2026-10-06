// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaNavigationIntentManager
// Superclass: NSObject
// Address: 0x112adb3e8

@interface SCOperaNavigationIntentManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaNavigationIntentManager initWithNavigationManager:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106315da4

// -[SCOperaNavigationIntentManager cancelPendingIntentsWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106315e74

// -[SCOperaNavigationIntentManager registerTapToAdvanceIntentWithDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x106315e78

// -[SCOperaNavigationIntentManager navigateToPreviousGroupAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106315e88

// -[SCOperaNavigationIntentManager navigateToNextGroupAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106315ee0

// -[SCOperaNavigationIntentManager navigateToParentAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106315f38

// -[SCOperaNavigationIntentManager navigateToAttachmentAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106315f90

// -[SCOperaNavigationIntentManager navigateToPreviousGroupAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106315fe8

// -[SCOperaNavigationIntentManager navigateToNextGroupAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106316048

// -[SCOperaNavigationIntentManager navigateToParentAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1063160a8

// -[SCOperaNavigationIntentManager navigateToAttachmentAnimated:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106316108

// -[SCOperaNavigationIntentManager resetCurrentScrolling]
// Type encoding: v16@0:8
// Implementation: 0x106316168

// -[SCOperaNavigationIntentManager startInteractiveTransitionInDirection:velocity:touchPoint:]
// Type encoding: @56@0:8Q16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x1063161b0

// -[SCOperaNavigationIntentManager _scheduleDelayedTrigger:]
// Type encoding: v24@0:8d16
// Implementation: 0x106316238

// -[SCOperaNavigationIntentManager _cancelDelayedNavigationIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106316394

// -[SCOperaNavigationIntentManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063163a8

@end
