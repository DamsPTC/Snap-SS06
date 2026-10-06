// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOnboardingTooltip
// Superclass: NSObject
// Address: 0x112b597e8

@interface SCOnboardingTooltip

// Property: view; attributes: T@"UIView",R,W,N,V_view
// Property: showing; attributes: TB,R,N,GisShowing,V_showing
// Property: activated; attributes: TB,N,V_activated
// Property: appearance; attributes: T@"SCOnboardingTooltipAppearance",&,N,V_appearance
// Property: duration; attributes: Td,N,V_duration
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOnboardingTooltip initWithView:appearance:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106feb268

// -[SCOnboardingTooltip tooltip]
// Type encoding: @16@0:8
// Implementation: 0x106feb304

// -[SCOnboardingTooltip setAppearance:]
// Type encoding: v24@0:8@16
// Implementation: 0x106feb3a8

// -[SCOnboardingTooltip shouldShow]
// Type encoding: B16@0:8
// Implementation: 0x106feb400

// -[SCOnboardingTooltip willShow]
// Type encoding: v16@0:8
// Implementation: 0x106feb410

// -[SCOnboardingTooltip show]
// Type encoding: v16@0:8
// Implementation: 0x106feb414

// -[SCOnboardingTooltip shouldHide]
// Type encoding: B16@0:8
// Implementation: 0x106feb4c4

// -[SCOnboardingTooltip willHide]
// Type encoding: v16@0:8
// Implementation: 0x106feb4cc

// -[SCOnboardingTooltip hide]
// Type encoding: v16@0:8
// Implementation: 0x106feb4d0

// -[SCOnboardingTooltip markCompleted]
// Type encoding: v16@0:8
// Implementation: 0x106feb510

// -[SCOnboardingTooltip needsToBeCompleted]
// Type encoding: B16@0:8
// Implementation: 0x106feb564

// -[SCOnboardingTooltip positionAtPoint:trianglePosition:]
// Type encoding: v40@0:8{CGPoint=dd}16q32
// Implementation: 0x106feb5b8

// -[SCOnboardingTooltip _trianglePositionRespectingInterfaceLayoutDirection:isRTL:]
// Type encoding: q28@0:8q16B24
// Implementation: 0x106febb2c

// -[SCOnboardingTooltip _triangleOffsetForTrianglePosition:]
// Type encoding: d24@0:8q16
// Implementation: 0x106febb4c

// -[SCOnboardingTooltip _playShowAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106febb68

// -[SCOnboardingTooltip _playHideAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106febd14

// -[SCOnboardingTooltip _triangleFrameForTrianglePosition:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8q16
// Implementation: 0x106febef0

// -[SCOnboardingTooltip _updateTooltip:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fec034

// -[SCOnboardingTooltip _tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fec294

// -[SCOnboardingTooltip duration]
// Type encoding: d16@0:8
// Implementation: 0x106fec298

// -[SCOnboardingTooltip setDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x106fec2a0

// -[SCOnboardingTooltip view]
// Type encoding: @16@0:8
// Implementation: 0x106fec2a8

// -[SCOnboardingTooltip isShowing]
// Type encoding: B16@0:8
// Implementation: 0x106fec2c0

// -[SCOnboardingTooltip activated]
// Type encoding: B16@0:8
// Implementation: 0x106fec2c8

// -[SCOnboardingTooltip setActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fec2d0

// -[SCOnboardingTooltip appearance]
// Type encoding: @16@0:8
// Implementation: 0x106fec2d8

// -[SCOnboardingTooltip .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fec2e0

@end
