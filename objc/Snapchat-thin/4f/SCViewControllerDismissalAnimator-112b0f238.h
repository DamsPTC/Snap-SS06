// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewControllerDismissalAnimator
// Superclass: NSObject
// Address: 0x112b0f238

@interface SCViewControllerDismissalAnimator

// Property: dismissPanRecognizer; attributes: T@"UIPanGestureRecognizer",&,N,V_dismissPanRecognizer
// Property: delegate; attributes: T@"<SCViewControllerDismissalAnimatorDelegate>",W,N,V_delegate
// Property: baseView; attributes: T@"UIView",&,N,V_baseView
// Property: darkBackgroundView; attributes: T@"UIView",&,N,V_darkBackgroundView
// Property: destinationFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_destinationFrame
// Property: operaBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_operaBounds
// Property: shouldUseOperaBounds; attributes: TB,N,V_shouldUseOperaBounds
// Property: destinationeFrameOrientation; attributes: Tq,N,V_destinationeFrameOrientation
// Property: volumeController; attributes: T@"<SCPullToDismissVolumeController>",W,N,V_volumeController
// Property: topInset; attributes: Td,N,V_topInset
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCViewControllerDismissalAnimator initWithParentViewController:childViewController:presentationAnimator:transitionMode:transitionConfigProvider:configProvider:]
// Type encoding: @64@0:8@16@24@32q40@48@56
// Implementation: 0x106a846b4

// -[SCViewControllerDismissalAnimator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a848c0

// -[SCViewControllerDismissalAnimator startTransition]
// Type encoding: v16@0:8
// Implementation: 0x106a84928

// -[SCViewControllerDismissalAnimator updateBaseView:topInset:transitionMode:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x106a84a10

// -[SCViewControllerDismissalAnimator updateTransitionMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a84a64

// -[SCViewControllerDismissalAnimator _shouldUseConfiguredDismissTargetForAdSlideDown]
// Type encoding: B16@0:8
// Implementation: 0x106a84a6c

// -[SCViewControllerDismissalAnimator _isCircleTransition]
// Type encoding: B16@0:8
// Implementation: 0x106a84ab0

// -[SCViewControllerDismissalAnimator _circleMaskLayer]
// Type encoding: @16@0:8
// Implementation: 0x106a84ac4

// -[SCViewControllerDismissalAnimator _setupMaskLayerView]
// Type encoding: v16@0:8
// Implementation: 0x106a84d30

// -[SCViewControllerDismissalAnimator _clearMaskLayerView]
// Type encoding: v16@0:8
// Implementation: 0x106a85244

// -[SCViewControllerDismissalAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a852c8

// -[SCViewControllerDismissalAnimator animationEnded:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a852d4

// -[SCViewControllerDismissalAnimator dismissCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a85378

// -[SCViewControllerDismissalAnimator setupDismissPanRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x106a85430

// -[SCViewControllerDismissalAnimator gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a854bc

// -[SCViewControllerDismissalAnimator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106a8557c

// -[SCViewControllerDismissalAnimator _didPan:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a855fc

// -[SCViewControllerDismissalAnimator handlePanChangeWithGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a85734

// -[SCViewControllerDismissalAnimator _handlePanChangeWithGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a85748

// -[SCViewControllerDismissalAnimator _sourceBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a858ec

// -[SCViewControllerDismissalAnimator _handlePanChangeForSlideToDismissWithGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8597c

// -[SCViewControllerDismissalAnimator _finishPan:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a85df4

// -[SCViewControllerDismissalAnimator _percentageForValue:fromValue:toValue:]
// Type encoding: d40@0:8d16d24d32
// Implementation: 0x106a85f38

// -[SCViewControllerDismissalAnimator dismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a85f5c

// -[SCViewControllerDismissalAnimator _containerMaskView]
// Type encoding: @16@0:8
// Implementation: 0x106a85fb4

// -[SCViewControllerDismissalAnimator _performDismissalAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106a86134

// -[SCViewControllerDismissalAnimator _animateDismissWithContainerMaskView:useDismissalMask:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a86d10

// -[SCViewControllerDismissalAnimator _animateSlideToDismissWithContainerMaskView:useDismissalMask:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a874cc

// -[SCViewControllerDismissalAnimator _cancelTransition]
// Type encoding: v16@0:8
// Implementation: 0x106a87988

// -[SCViewControllerDismissalAnimator _canCancelTransitionWithoutAnimation]
// Type encoding: B16@0:8
// Implementation: 0x106a87f6c

// -[SCViewControllerDismissalAnimator _setDarkBackgroundViewAlpha:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x106a88038

// -[SCViewControllerDismissalAnimator _isPostDismissalCircleMode]
// Type encoding: B16@0:8
// Implementation: 0x106a88104

// -[SCViewControllerDismissalAnimator _isDismissSlideDown]
// Type encoding: B16@0:8
// Implementation: 0x106a88114

// -[SCViewControllerDismissalAnimator _getDismissGestureConfig]
// Type encoding: {SCOperaSessionDismissGestureConfiguration=Bdd}16@0:8
// Implementation: 0x106a88124

// -[SCViewControllerDismissalAnimator _swipeDistanceForDismissalThreshold]
// Type encoding: d16@0:8
// Implementation: 0x106a8818c

// -[SCViewControllerDismissalAnimator _ratio:]
// Type encoding: d24@0:8d16
// Implementation: 0x106a881b0

// -[SCViewControllerDismissalAnimator _layoutViewsForTranslation:currentPosition:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x106a88294

// -[SCViewControllerDismissalAnimator _circleLayoutViewsForVerticalTranslation:currentPosition:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x106a8836c

// -[SCViewControllerDismissalAnimator _circleLayoutViewsForHorizontalTranslation:currentPosition:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x106a88750

// -[SCViewControllerDismissalAnimator _rectLayoutViewsForTranslation:currentPosition:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x106a889e8

// -[SCViewControllerDismissalAnimator _fadeLayoutViewsForTranslation:currentPosition:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x106a88bfc

// -[SCViewControllerDismissalAnimator _shouldDismissWithVelocity:translation:]
// Type encoding: B48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x106a88f24

// -[SCViewControllerDismissalAnimator _swipeProgressForTranslation:]
// Type encoding: d32@0:8{CGPoint=dd}16
// Implementation: 0x106a89048

// -[SCViewControllerDismissalAnimator gestureDescription]
// Type encoding: @16@0:8
// Implementation: 0x106a89094

// -[SCViewControllerDismissalAnimator resetGestureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106a8909c

// -[SCViewControllerDismissalAnimator enableFadeTransition:fadingViews:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a89120

// -[SCViewControllerDismissalAnimator disableFadeTransition]
// Type encoding: v16@0:8
// Implementation: 0x106a891c8

// -[SCViewControllerDismissalAnimator swipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x106a89210

// -[SCViewControllerDismissalAnimator _iOS_simulator_swipeDirectionForAboutToBeginDismissGesture:]
// Type encoding: q24@0:8q16
// Implementation: 0x106a89218

// -[SCViewControllerDismissalAnimator _iOS_simulator_velocityOfPanGestureInTargetView]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x106a89220

// -[SCViewControllerDismissalAnimator dismissPanRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x106a892d4

// -[SCViewControllerDismissalAnimator setDismissPanRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a892dc

// -[SCViewControllerDismissalAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a8930c

// -[SCViewControllerDismissalAnimator baseView]
// Type encoding: @16@0:8
// Implementation: 0x106a89324

// -[SCViewControllerDismissalAnimator setBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8932c

// -[SCViewControllerDismissalAnimator darkBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x106a8935c

// -[SCViewControllerDismissalAnimator setDarkBackgroundView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a89364

// -[SCViewControllerDismissalAnimator destinationFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a89394

// -[SCViewControllerDismissalAnimator setDestinationFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a893a0

// -[SCViewControllerDismissalAnimator operaBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106a893ac

// -[SCViewControllerDismissalAnimator setOperaBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106a893b8

// -[SCViewControllerDismissalAnimator shouldUseOperaBounds]
// Type encoding: B16@0:8
// Implementation: 0x106a893c4

// -[SCViewControllerDismissalAnimator setShouldUseOperaBounds:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a893cc

// -[SCViewControllerDismissalAnimator destinationeFrameOrientation]
// Type encoding: q16@0:8
// Implementation: 0x106a893d4

// -[SCViewControllerDismissalAnimator setDestinationeFrameOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a893dc

// -[SCViewControllerDismissalAnimator volumeController]
// Type encoding: @16@0:8
// Implementation: 0x106a893e4

// -[SCViewControllerDismissalAnimator setVolumeController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a893fc

// -[SCViewControllerDismissalAnimator topInset]
// Type encoding: d16@0:8
// Implementation: 0x106a89408

// -[SCViewControllerDismissalAnimator setTopInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106a89410

// -[SCViewControllerDismissalAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a89418

@end
