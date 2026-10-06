// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGTray
// Superclass: NSObject
// Address: 0x112ce9338

@interface SIGTray

// Property: automaticallyDismissOnTouch; attributes: TB,N,GwillAutomaticallyDismissOnTouch,V_automaticallyDismissOnTouch
// Property: allowedPositions; attributes: TQ,N,V_allowedPositions
// Property: transparentBackground; attributes: TB,N,GhasTransparentBackground,V_transparentBackground
// Property: trayBackgroundStyle; attributes: TQ,N,V_trayBackgroundStyle
// Property: trayBackgroundBlur; attributes: TB,N,V_trayBackgroundBlur
// Property: showHandle; attributes: TB,N,V_showHandle
// Property: cornerRadius; attributes: Td,N,V_cornerRadius
// Property: backgroundAlpha; attributes: Td,N,V_backgroundAlpha
// Property: passThroughTouchesWhenUsingUIContainer; attributes: TB,N,V_passThroughTouchesWhenUsingUIContainer
// Property: bounceOnDismissAttempt; attributes: TB,N,V_bounceOnDismissAttempt
// Property: skipInitialPresentationAnimation; attributes: TB,N,V_skipInitialPresentationAnimation
// Property: trayHostDelegate; attributes: T@"<SIGTrayHostDelegate>",W,N,V_trayHostDelegate
// Property: trayAnimationDelegate; attributes: T@"<SIGTrayAnimationDelegate>",W,N,V_trayAnimationDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGTray initWithTrayViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b8795b8

// -[SIGTray initWithTrayViewController:useSpringAnimation:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b8795c0

// -[SIGTray initWithTrayViewController:useSpringAnimation:initialTrayPosition:]
// Type encoding: @36@0:8@16B24Q28
// Implementation: 0x10b8795c8

// -[SIGTray presentInUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b87986c

// -[SIGTray presentInUIContainer:withPullBar:withDefaultTrayHeightPercentage:withInitialPosition:]
// Type encoding: v48@0:8@16Q24d32Q40
// Implementation: 0x10b87987c

// -[SIGTray presentIn:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b879928

// -[SIGTray _setupBackgroundViews]
// Type encoding: v16@0:8
// Implementation: 0x10b879b1c

// -[SIGTray presentIn:withPullBar:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b879c58

// -[SIGTray presentIn:withPullBar:withDefaultTrayHeightPercentage:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x10b879c9c

// -[SIGTray presentIn:withPullBar:withDefaultTrayHeightPercentage:withInitialPosition:]
// Type encoding: v48@0:8@16Q24d32Q40
// Implementation: 0x10b879ca4

// -[SIGTray dismissAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b879cac

// -[SIGTray setAutomaticallyDismissOnTouch:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b879cc0

// -[SIGTray setFullScreenTrayHeightPercentage:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b879d10

// -[SIGTray setPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b879d28

// -[SIGTray setTransparentBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b879d40

// -[SIGTray setTrayBackgroundStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b879d58

// -[SIGTray setTrayBackgroundBlur:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b879d70

// -[SIGTray setShowHandle:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b879d88

// -[SIGTray setAllowedPositions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b879da0

// -[SIGTray setCornerRadius:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b879db8

// -[SIGTray _setupOverscrollBackgroundWithPullBarType:trayViewController:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b879e98

// -[SIGTray _setupPullBar]
// Type encoding: v16@0:8
// Implementation: 0x10b879f6c

// -[SIGTray _installGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x10b87a170

// -[SIGTray _maxNonBounceTrayViewHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b87a1bc

// -[SIGTray _setupLayoutConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b87a1f4

// -[SIGTray _updateTrayContentHeight]
// Type encoding: v16@0:8
// Implementation: 0x10b87b034

// -[SIGTray _setTrayPosition:forPresentation:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10b87b088

// -[SIGTray _setTrayPosition:forPresentation:withVelocity:]
// Type encoding: v44@0:8Q16B24{CGPoint=dd}28
// Implementation: 0x10b87b094

// -[SIGTray _startAnimationDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x10b87b494

// -[SIGTray _stopAnimationDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x10b87b534

// -[SIGTray _onFrameTick]
// Type encoding: v16@0:8
// Implementation: 0x10b87b570

// -[SIGTray _performBounceAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10b87b668

// -[SIGTray _getCurrentHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b87b85c

// -[SIGTray _updateConstraintForPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b87b894

// -[SIGTray _trayAnimationCompleted:forPresentation:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10b87b938

// -[SIGTray _dismiss]
// Type encoding: v16@0:8
// Implementation: 0x10b87b9e0

// -[SIGTray _handleTrayHostDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10b87bb68

// -[SIGTray _refreshAllowedHeights]
// Type encoding: v16@0:8
// Implementation: 0x10b87bbdc

// -[SIGTray _stylize]
// Type encoding: v16@0:8
// Implementation: 0x10b87bcd4

// -[SIGTray _installPanGestureRecognizerOnView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b87be14

// -[SIGTray _resolveTrayPosition:newOffset:]
// Type encoding: v32@0:8Q16d24
// Implementation: 0x10b87becc

// -[SIGTray _getNextTrayPosition:newOffset:]
// Type encoding: Q32@0:8Q16d24
// Implementation: 0x10b87bf18

// -[SIGTray _flingTrayWithVelocityFromGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b87bf74

// -[SIGTray _panGestureUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b87c068

// -[SIGTray _topMostPosition]
// Type encoding: Q16@0:8
// Implementation: 0x10b87c43c

// -[SIGTray _getMaxHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b87c46c

// -[SIGTray _allowedPositionsArray]
// Type encoding: @16@0:8
// Implementation: 0x10b87c494

// -[SIGTray _getHeightForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10b87c534

// -[SIGTray _getPositionForHeight:]
// Type encoding: Q24@0:8d16
// Implementation: 0x10b87c6f0

// -[SIGTray _backgroundViewTapped]
// Type encoding: v16@0:8
// Implementation: 0x10b87c848

// -[SIGTray _backgroundColorForCurrentStyle]
// Type encoding: @16@0:8
// Implementation: 0x10b87c86c

// -[SIGTray _handleBackgroundColorForCurrentStyle]
// Type encoding: @16@0:8
// Implementation: 0x10b87c930

// -[SIGTray _blurEffectForCurrentStyle]
// Type encoding: @16@0:8
// Implementation: 0x10b87caf8

// -[SIGTray _tryGetTrayHostLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x10b87cbb0

// -[SIGTray _trayHostTopLayoutAnchor]
// Type encoding: @16@0:8
// Implementation: 0x10b87cc30

// -[SIGTray _trayHostBottomLayoutAnchor]
// Type encoding: @16@0:8
// Implementation: 0x10b87ccc8

// -[SIGTray _trayHostWidthLayoutAnchor]
// Type encoding: @16@0:8
// Implementation: 0x10b87cd60

// -[SIGTray _trayHostHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b87cdf8

// -[SIGTray gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b87ce88

// -[SIGTray _getScrollViewContentOffset]
// Type encoding: d16@0:8
// Implementation: 0x10b87cf94

// -[SIGTray _getScrollViewMaxOffset]
// Type encoding: d16@0:8
// Implementation: 0x10b87cfec

// -[SIGTray willAutomaticallyDismissOnTouch]
// Type encoding: B16@0:8
// Implementation: 0x10b87d050

// -[SIGTray allowedPositions]
// Type encoding: Q16@0:8
// Implementation: 0x10b87d058

// -[SIGTray hasTransparentBackground]
// Type encoding: B16@0:8
// Implementation: 0x10b87d060

// -[SIGTray trayBackgroundStyle]
// Type encoding: Q16@0:8
// Implementation: 0x10b87d068

// -[SIGTray trayBackgroundBlur]
// Type encoding: B16@0:8
// Implementation: 0x10b87d070

// -[SIGTray showHandle]
// Type encoding: B16@0:8
// Implementation: 0x10b87d078

// -[SIGTray cornerRadius]
// Type encoding: d16@0:8
// Implementation: 0x10b87d080

// -[SIGTray backgroundAlpha]
// Type encoding: d16@0:8
// Implementation: 0x10b87d088

// -[SIGTray setBackgroundAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b87d090

// -[SIGTray passThroughTouchesWhenUsingUIContainer]
// Type encoding: B16@0:8
// Implementation: 0x10b87d098

// -[SIGTray setPassThroughTouchesWhenUsingUIContainer:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b87d0a0

// -[SIGTray bounceOnDismissAttempt]
// Type encoding: B16@0:8
// Implementation: 0x10b87d0a8

// -[SIGTray setBounceOnDismissAttempt:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b87d0b0

// -[SIGTray skipInitialPresentationAnimation]
// Type encoding: B16@0:8
// Implementation: 0x10b87d0b8

// -[SIGTray setSkipInitialPresentationAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b87d0c0

// -[SIGTray trayHostDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b87d0c8

// -[SIGTray setTrayHostDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b87d0e0

// -[SIGTray trayAnimationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b87d0ec

// -[SIGTray setTrayAnimationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b87d104

// -[SIGTray .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b87d110

@end
