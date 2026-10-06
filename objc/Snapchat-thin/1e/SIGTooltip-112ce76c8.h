// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGTooltip
// Superclass: UIView
// Address: 0x112ce76c8

@interface SIGTooltip

// Property: trailingAccessoryView; attributes: T@"UIView",&,N,V_trailingAccessoryView
// Property: caretCanSlideToImproveLayout; attributes: TB,N,V_caretCanSlideToImproveLayout
// Property: caretView; attributes: T@"UIView",R,N,V_caretView
// Property: delegate; attributes: T@"<SIGTooltipDelegate>",W,N,V_delegate
// Property: position; attributes: TQ,R,N,V_position
// Property: text; attributes: T@"NSString",C,N
// Property: textAlignment; attributes: Tq,N
// Property: shouldAnimateDismissal; attributes: TB,N,V_shouldAnimateDismissal
// Property: style; attributes: TQ,N,V_style
// Property: leadingAccessoryView; attributes: T@"UIView",&,N,V_leadingAccessoryView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGTooltip initWithText:style:position:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10b84c8e0

// -[SIGTooltip initWithText:style:position:widthCategory:]
// Type encoding: @48@0:8@16Q24Q32Q40
// Implementation: 0x10b84c8e8

// -[SIGTooltip dismiss]
// Type encoding: v16@0:8
// Implementation: 0x10b84ccf4

// -[SIGTooltip presentFromPoint:inView:forDuration:]
// Type encoding: v48@0:8{CGPoint=dd}16@32d40
// Implementation: 0x10b84cd80

// -[SIGTooltip presentInView:forDuration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10b84cef4

// -[SIGTooltip setCaretCanSlideToImproveLayout:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b84d044

// -[SIGTooltip setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b84d0e4

// -[SIGTooltip setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b84d250

// -[SIGTooltip setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b84d270

// -[SIGTooltip text]
// Type encoding: @16@0:8
// Implementation: 0x10b84d2d8

// -[SIGTooltip setTextAlignment:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b84d2e8

// -[SIGTooltip setTrailingAccessoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b84d2f8

// -[SIGTooltip setLeadingAccessoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b84d37c

// -[SIGTooltip textAlignment]
// Type encoding: q16@0:8
// Implementation: 0x10b84d400

// -[SIGTooltip tappedTooltipView]
// Type encoding: v16@0:8
// Implementation: 0x10b84d410

// -[SIGTooltip gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b84d48c

// -[SIGTooltip _completeDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10b84d4cc

// -[SIGTooltip _animateIn:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b84d510

// -[SIGTooltip _animateOut:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b84d66c

// -[SIGTooltip _invalidateDismissalTimerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10b84d810

// -[SIGTooltip _setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b84d844

// -[SIGTooltip _activateConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b84d90c

// -[SIGTooltip _caretConstraints]
// Type encoding: @16@0:8
// Implementation: 0x10b84e150

// -[SIGTooltip _maxTooltipWidth]
// Type encoding: d16@0:8
// Implementation: 0x10b84e89c

// -[SIGTooltip _setupCaretCenterWithPresentationPoint:inView:]
// Type encoding: v40@0:8{CGPoint=dd}16@32
// Implementation: 0x10b84e920

// -[SIGTooltip caretCanSlideToImproveLayout]
// Type encoding: B16@0:8
// Implementation: 0x10b84eb78

// -[SIGTooltip caretView]
// Type encoding: @16@0:8
// Implementation: 0x10b84eb88

// -[SIGTooltip delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b84eb98

// -[SIGTooltip setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b84ebb8

// -[SIGTooltip position]
// Type encoding: Q16@0:8
// Implementation: 0x10b84ebcc

// -[SIGTooltip shouldAnimateDismissal]
// Type encoding: B16@0:8
// Implementation: 0x10b84ebdc

// -[SIGTooltip setShouldAnimateDismissal:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b84ebec

// -[SIGTooltip style]
// Type encoding: Q16@0:8
// Implementation: 0x10b84ebfc

// -[SIGTooltip leadingAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x10b84ec0c

// -[SIGTooltip trailingAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x10b84ec1c

// -[SIGTooltip .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b84ec2c

@end
