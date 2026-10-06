// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGLoadingIndicatorView
// Superclass: UIView
// Address: 0x112ce8398

@interface SIGLoadingIndicatorView

// Property: isAnimating; attributes: TB,R,N
// Property: hidesWhenStopped; attributes: TB,N,V_hidesWhenStopped
// Property: scaleLineWidth; attributes: TB,N,V_scaleLineWidth

// -[SIGLoadingIndicatorView initWithColor:size:arcStyle:]
// Type encoding: @40@0:8q16Q24Q32
// Implementation: 0x1008247cc

// -[SIGLoadingIndicatorView initWithColor:size:]
// Type encoding: @32@0:8q16Q24
// Implementation: 0x1008247c4

// -[SIGLoadingIndicatorView initBackupSpinner]
// Type encoding: @16@0:8
// Implementation: 0x10b8630c4

// -[SIGLoadingIndicatorView init]
// Type encoding: @16@0:8
// Implementation: 0x10082485c

// -[SIGLoadingIndicatorView addLoadingArcWithIdentifier:configuration:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100824da0

// -[SIGLoadingIndicatorView startAnimating]
// Type encoding: v16@0:8
// Implementation: 0x10b86322c

// -[SIGLoadingIndicatorView stopAnimating]
// Type encoding: v16@0:8
// Implementation: 0x10083d4f8

// -[SIGLoadingIndicatorView setHidesWhenStopped:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8633e0

// -[SIGLoadingIndicatorView setTintColor:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008249d4

// -[SIGLoadingIndicatorView setTintWithUIColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x100824a18

// -[SIGLoadingIndicatorView _configureWithSize:color:arcStyle:]
// Type encoding: v40@0:8Q16q24Q32
// Implementation: 0x100824b64

// -[SIGLoadingIndicatorView _removeLoadingArcWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x100824d04

// -[SIGLoadingIndicatorView _edgeOffsetsForInnerArcForSize:]
// Type encoding: {UIOffset=dd}24@0:8Q16
// Implementation: 0x100824ce0

// -[SIGLoadingIndicatorView _animationEndLineWidthForSize:]
// Type encoding: d24@0:8Q16
// Implementation: 0x100824cc0

// -[SIGLoadingIndicatorView isAnimating]
// Type encoding: B16@0:8
// Implementation: 0x10b863424

// -[SIGLoadingIndicatorView _startAnimatingArcLayer:withConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b8634c8

// -[SIGLoadingIndicatorView _startAnimatingIconLayer:withConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b8635e8

// -[SIGLoadingIndicatorView _startAnimatingCircleArcLayer:startArcWidth:endArcWidth:strokeSecondsPerCycle:strokeStartPercent:strokeEndPercent:secondsPerCycle:rotationStartAngle:rotationEndAngle:direction:]
// Type encoding: v96@0:8@16d24d32d40d48d56d64d72d80q88
// Implementation: 0x10b86369c

// -[SIGLoadingIndicatorView _stopAnimatingArcLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10083d638

// -[SIGLoadingIndicatorView _lineThicknessAnimationWithStartArcWidth:endArcWidth:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x10b8638dc

// -[SIGLoadingIndicatorView _strokeEndAnimationWithStrokeStartPercent:strokeEndPercent:secondsPerCycle:]
// Type encoding: @40@0:8d16d24d32
// Implementation: 0x10b8639a4

// -[SIGLoadingIndicatorView _rotateIndefinitelyAnimationWithRotationStartAngle:secondsPerCycle:direction:onLayer:]
// Type encoding: @48@0:8d16d24q32@40
// Implementation: 0x10b863a7c

// -[SIGLoadingIndicatorView appDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b863b64

// -[SIGLoadingIndicatorView appWillEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b863be0

// -[SIGLoadingIndicatorView layoutSublayersOfLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10083d850

// -[SIGLoadingIndicatorView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10083d6a8

// -[SIGLoadingIndicatorView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10b863bfc

// -[SIGLoadingIndicatorView hidesWhenStopped]
// Type encoding: B16@0:8
// Implementation: 0x10b863c00

// -[SIGLoadingIndicatorView scaleLineWidth]
// Type encoding: B16@0:8
// Implementation: 0x10083da80

// -[SIGLoadingIndicatorView setScaleLineWidth:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b863c10

// -[SIGLoadingIndicatorView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b863c20

@end
