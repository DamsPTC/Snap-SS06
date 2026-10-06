// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaScrollView
// Superclass: UIView
// Address: 0x11289dba8

@interface SCOperaScrollView

// Property: transitionDuration; attributes: Td,N,VtransitionDuration
// Property: tapInterceptors; attributes: T@"NSArray",N,C
// Property: currentInteractiveTransition; attributes: T@"<SCOperaInteractiveTransitioning>",N,&,VcurrentInteractiveTransition
// Property: operaScrollViewDelegate; attributes: T@"<SCOperaScrollViewDelegate>",N,W,VoperaScrollViewDelegate
// Property: targetContentOffset; attributes: T{CGPoint=dd},N,VtargetContentOffset
// Property: contentOffset; attributes: T{CGPoint=dd},N,VcontentOffset
// Property: contentSize; attributes: T{CGSize=dd},N,VcontentSize
// Property: scrollEnabled; attributes: TB,N,VscrollEnabled
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",N,&,VpanGestureRecognizer
// Property: longPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",N,&,VlongPressGestureRecognizer
// Property: noClipViewHitTestEnabled; attributes: TB,N,VnoClipViewHitTestEnabled

// -[SCOperaScrollView operaInteractiveTransition:updateTransition:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x102cc45e4

// -[SCOperaScrollView operaInteractiveTransitionCancel:animated:progressBlock:completionBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x102cc4d98

// -[SCOperaScrollView operaInteractiveTransitionComplete:progressBlock:completionBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x102cc4ea8

// -[SCOperaScrollView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x102cc3cd4

// -[SCOperaScrollView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x102cc3f00

// -[SCOperaScrollView gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x102cc405c

// -[SCOperaScrollView gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x102cc43b0

// -[SCOperaScrollView transitionDuration]
// Type encoding: d16@0:8
// Implementation: 0x102cc0118

// -[SCOperaScrollView setTransitionDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x102cc015c

// -[SCOperaScrollView tapInterceptors]
// Type encoding: @16@0:8
// Implementation: 0x102cc01ac

// -[SCOperaScrollView setTapInterceptors:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cc0228

// -[SCOperaScrollView currentInteractiveTransition]
// Type encoding: @16@0:8
// Implementation: 0x102cc02a4

// -[SCOperaScrollView setCurrentInteractiveTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cc02ec

// -[SCOperaScrollView initWithFrame:navigationStyle:configProvider:internalConfigProvider:transitionResolver:debugServices:displayLinkProvider:]
// Type encoding: @96@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48@56@64@72@80@88
// Implementation: 0x102cc0d5c

// -[SCOperaScrollView initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x102cc0e20

// -[SCOperaScrollView didLongPressWithSender:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cc0f3c

// -[SCOperaScrollView didLongPressGestureRecognizerStateChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x102cc103c

// -[SCOperaScrollView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x102cc106c

// -[SCOperaScrollView operaScrollViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x102cc111c

// -[SCOperaScrollView setOperaScrollViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cc1164

// -[SCOperaScrollView targetContentOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x102cc11bc

// -[SCOperaScrollView setTargetContentOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x102cc11c8

// -[SCOperaScrollView contentOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x102cc11d4

// -[SCOperaScrollView setContentOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x102cc11e0

// -[SCOperaScrollView contentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x102cc1420

// -[SCOperaScrollView setContentSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x102cc146c

// -[SCOperaScrollView scrollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cc14c8

// -[SCOperaScrollView setScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x102cc150c

// -[SCOperaScrollView panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x102cc155c

// -[SCOperaScrollView setPanGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cc15a4

// -[SCOperaScrollView longPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x102cc1608

// -[SCOperaScrollView setLongPressGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cc1618

// -[SCOperaScrollView noClipViewHitTestEnabled]
// Type encoding: B16@0:8
// Implementation: 0x102cc164c

// -[SCOperaScrollView setNoClipViewHitTestEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x102cc1690

// -[SCOperaScrollView setContentOffsetWithoutCallback:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x102cc17a8

// -[SCOperaScrollView isScrolling]
// Type encoding: B16@0:8
// Implementation: 0x102cc17e8

// -[SCOperaScrollView subviewScrollViewDidStopScrollingWithBoundaryHit:]
// Type encoding: v20@0:8B16
// Implementation: 0x102cc1800

// -[SCOperaScrollView subviewScrollViewDidStartScrolling]
// Type encoding: v16@0:8
// Implementation: 0x102cc1804

// -[SCOperaScrollView subviewScrollViewIsAtTopBoundary:isVisible:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x102cc18ac

// -[SCOperaScrollView stopRecognizingGestures]
// Type encoding: v16@0:8
// Implementation: 0x102cc18f0

// -[SCOperaScrollView resetGestureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x102cc19bc

// -[SCOperaScrollView setContentOffset:animated:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x102cc1de0

// -[SCOperaScrollView setContentOffset:animationConfig:]
// Type encoding: v40@0:8{CGPoint=dd}16@32
// Implementation: 0x102cc1e2c

// -[SCOperaScrollView startInteractiveTransitionInDirection:velocity:touchPoint:]
// Type encoding: @56@0:8q16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x102cc20ec

// -[SCOperaScrollView onPanWithPanGestureRecogizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x102cc2f04

// -[SCOperaScrollView handleTakeoverFromProgrammaticDraggingWithInteractiveTransition:locationInSelf:velocityInSelf:]
// Type encoding: v56@0:8@16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x102cc323c

// -[SCOperaScrollView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x102cc3a34

// -[SCOperaScrollView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102cc3a94

// +[SCOperaScrollView adaptedAnimationDurationWithBaseDuration:from:to:pageSize:]
// Type encoding: d72@0:8d16{CGPoint=dd}24{CGPoint=dd}40{CGSize=dd}56
// Implementation: 0x102cc2a98

@end
