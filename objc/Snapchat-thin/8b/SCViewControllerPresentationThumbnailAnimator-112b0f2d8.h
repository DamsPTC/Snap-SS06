// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewControllerPresentationThumbnailAnimator
// Superclass: NSObject
// Address: 0x112b0f2d8

@interface SCViewControllerPresentationThumbnailAnimator

// Property: delegate; attributes: T@"<SCViewControllerPresentationAnimatorDelegate>",W,N,V_delegate
// Property: baseViewDelegate; attributes: T@"<SCViewControllerPresentationAnimatorBaseViewDelegate>",W,N,V_baseViewDelegate
// Property: darkBackgroundView; attributes: T@"UIView",R,N,V_darkBackgroundView
// Property: baseView; attributes: T@"UIView",R,W,N,V_baseView
// Property: startingFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_startingFrame
// Property: dismissalMask; attributes: T@"CALayer",R,N,V_dismissalMask
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCViewControllerPresentationThumbnailAnimator initWithParentViewController:childViewController:baseView:operaBounds:shouldUseOperaBounds:baseViewBehavior:baseViewOrientation:isCircleTransition:]
// Type encoding: @96@0:8@16@24@32{CGRect={CGPoint=dd}{CGSize=dd}}40B72q76q84B92
// Implementation: 0x106a89d44

// -[SCViewControllerPresentationThumbnailAnimator initWithParentViewController:childViewController:baseView:operaBounds:shouldUseOperaBounds:baseViewBehavior:baseViewOrientation:isCircleTransition:configProvider:thumbnailTransitionDurationMs:]
// Type encoding: @108@0:8@16@24@32{CGRect={CGPoint=dd}{CGSize=dd}}40B72q76q84B92@96i104
// Implementation: 0x106a89d70

// -[SCViewControllerPresentationThumbnailAnimator _scAllowManuallyTriggerAppearanceFix]
// Type encoding: B16@0:8
// Implementation: 0x106a89fb4

// -[SCViewControllerPresentationThumbnailAnimator animateTransition:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a89fbc

// -[SCViewControllerPresentationThumbnailAnimator setupAnimationForBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8b20c

// -[SCViewControllerPresentationThumbnailAnimator updateBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8b33c

// -[SCViewControllerPresentationThumbnailAnimator operaBoundsDidChange:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a8b700

// -[SCViewControllerPresentationThumbnailAnimator _destinationFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a8b72c

// -[SCViewControllerPresentationThumbnailAnimator _onBaseViewImageReady:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8b7bc

// -[SCViewControllerPresentationThumbnailAnimator _prepareBaseViewForAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106a8b824

// -[SCViewControllerPresentationThumbnailAnimator _restoreBaseViewForAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106a8b904

// -[SCViewControllerPresentationThumbnailAnimator _initDarkBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x106a8b9c8

// -[SCViewControllerPresentationThumbnailAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a8ba4c

// -[SCViewControllerPresentationThumbnailAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8ba64

// -[SCViewControllerPresentationThumbnailAnimator baseViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106a8ba70

// -[SCViewControllerPresentationThumbnailAnimator setBaseViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8ba88

// -[SCViewControllerPresentationThumbnailAnimator darkBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x106a8ba94

// -[SCViewControllerPresentationThumbnailAnimator baseView]
// Type encoding: @16@0:8
// Implementation: 0x106a8ba9c

// -[SCViewControllerPresentationThumbnailAnimator startingFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a8bab4

// -[SCViewControllerPresentationThumbnailAnimator setStartingFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a8bac0

// -[SCViewControllerPresentationThumbnailAnimator dismissalMask]
// Type encoding: @16@0:8
// Implementation: 0x106a8bacc

// -[SCViewControllerPresentationThumbnailAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a8bad4

@end
