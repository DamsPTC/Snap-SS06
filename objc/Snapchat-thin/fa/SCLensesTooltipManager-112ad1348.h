// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensesTooltipManager
// Superclass: SCOnboardingTooltipManager
// Address: 0x112ad1348

@interface SCLensesTooltipManager

// Property: swipeTooltip; attributes: T@"SCLensesSwipeTooltip",&,N,V_swipeTooltip
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensesTooltipManager initWithFeatureSettingsService:circumstanceEngine:alwaysOnCarouselEnabled:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x100c2a418

// -[SCLensesTooltipManager setupWithParentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2a61c

// -[SCLensesTooltipManager areLensesOnboardingTooltipsCompleted]
// Type encoding: B16@0:8
// Implementation: 0x100c2a640

// -[SCLensesTooltipManager setTooltipSuppressed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061c6b80

// -[SCLensesTooltipManager hideTooltip]
// Type encoding: v16@0:8
// Implementation: 0x1061c6be8

// -[SCLensesTooltipManager swipeTooltip]
// Type encoding: @16@0:8
// Implementation: 0x1061c6bec

// -[SCLensesTooltipManager _didSelectAnotherLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061c6cb4

// -[SCLensesTooltipManager _showSwipeTooltipCheckingSuppression]
// Type encoding: v16@0:8
// Implementation: 0x1061c6d0c

// -[SCLensesTooltipManager _hideSwipeTooltip]
// Type encoding: v16@0:8
// Implementation: 0x1061c6ddc

// -[SCLensesTooltipManager _seenLensesButtonTooltip]
// Type encoding: B16@0:8
// Implementation: 0x100c2a68c

// -[SCLensesTooltipManager _seenLensesSwipeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x100c2a6b4

// -[SCLensesTooltipManager didEndDisplayingLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061c6e14

// -[SCLensesTooltipManager didDrawIcon:forLens:atIndex:withContext:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x1061c6e18

// -[SCLensesTooltipManager didHideLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061c6e1c

// -[SCLensesTooltipManager didActivateLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061c6ec0

// -[SCLensesTooltipManager didSelectLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061c7020

// -[SCLensesTooltipManager didUpdateActiveLensOrder:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061c7024

// -[SCLensesTooltipManager willDisplayLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061c7028

// -[SCLensesTooltipManager didUpdateDisplayedLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061c70d8

// -[SCLensesTooltipManager willShowLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061c70dc

// -[SCLensesTooltipManager setSwipeTooltip:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061c70e0

// -[SCLensesTooltipManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061c7120

@end
