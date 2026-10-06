// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoadingIndicatorView
// Superclass: UIView
// Address: 0x112c740d8

@interface SCLoadingIndicatorView

// Property: isAnimating; attributes: TB,R,N
// Property: hidesWhenStopped; attributes: TB,N,V_hidesWhenStopped
// Property: scaleLineWidth; attributes: TB,N,V_scaleLineWidth

// -[SCLoadingIndicatorView initWithColorStyle:size:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x10b2a9c6c

// -[SCLoadingIndicatorView _colorWithColorStyle:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b2a9cc4

// -[SCLoadingIndicatorView initWithColor:size:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b2a9d48

// -[SCLoadingIndicatorView addLoadingArcWithIdentifier:configuration:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b2a9f04

// -[SCLoadingIndicatorView startAnimating]
// Type encoding: v16@0:8
// Implementation: 0x10b2aa090

// -[SCLoadingIndicatorView stopAnimating]
// Type encoding: v16@0:8
// Implementation: 0x10b2aa200

// -[SCLoadingIndicatorView setHidesWhenStopped:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2aa32c

// -[SCLoadingIndicatorView setColorStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b2aa370

// -[SCLoadingIndicatorView setTintColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2aa3ac

// -[SCLoadingIndicatorView _configureWithSize:color:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b2aa428

// -[SCLoadingIndicatorView _removeLoadingArcWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2aa618

// -[SCLoadingIndicatorView _edgeOffsetsForInnerArcForSize:]
// Type encoding: {UIOffset=dd}24@0:8Q16
// Implementation: 0x10b2aa6b4

// -[SCLoadingIndicatorView _animationEndLineWidthForSize:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10b2aa6d4

// -[SCLoadingIndicatorView isAnimating]
// Type encoding: B16@0:8
// Implementation: 0x10b2aa6f0

// -[SCLoadingIndicatorView _startAnimatingArcLayer:withConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2aa760

// -[SCLoadingIndicatorView _startAnimatingCircleArcLayer:startArcWidth:endArcWidth:strokeSecondsPerCycle:strokeStartPercent:strokeEndPercent:secondsPerCycle:rotationStartAngle:rotationEndAngle:direction:]
// Type encoding: v96@0:8@16d24d32d40d48d56d64d72d80q88
// Implementation: 0x10b2aa880

// -[SCLoadingIndicatorView _stopAnimatingArcLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2aaac0

// -[SCLoadingIndicatorView _lineThicknessAnimationWithStartArcWidth:endArcWidth:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x10b2aab20

// -[SCLoadingIndicatorView _strokeEndAnimationWithStrokeStartPercent:strokeEndPercent:secondsPerCycle:]
// Type encoding: @40@0:8d16d24d32
// Implementation: 0x10b2aabe8

// -[SCLoadingIndicatorView _rotateIndefinitelyAnimationWithRotationStartAngle:secondsPerCycle:direction:onLayer:]
// Type encoding: @48@0:8d16d24q32@40
// Implementation: 0x10b2aacc0

// -[SCLoadingIndicatorView appDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2aada8

// -[SCLoadingIndicatorView appWillEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2aae24

// -[SCLoadingIndicatorView layoutSublayersOfLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2aae40

// -[SCLoadingIndicatorView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2ab048

// -[SCLoadingIndicatorView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10b2ab078

// -[SCLoadingIndicatorView hidesWhenStopped]
// Type encoding: B16@0:8
// Implementation: 0x10b2ab07c

// -[SCLoadingIndicatorView scaleLineWidth]
// Type encoding: B16@0:8
// Implementation: 0x10b2ab08c

// -[SCLoadingIndicatorView setScaleLineWidth:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2ab09c

// -[SCLoadingIndicatorView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2ab0ac

@end
