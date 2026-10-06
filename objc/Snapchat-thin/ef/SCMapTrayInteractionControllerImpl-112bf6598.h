// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapTrayInteractionControllerImpl
// Superclass: NSObject
// Address: 0x112bf6598

@interface SCMapTrayInteractionControllerImpl

// Property: scrollView; attributes: T@"UIScrollView",R,N
// Property: hostSize; attributes: T{CGSize=dd},R,N
// Property: autoSizingEnabled; attributes: TB,R,N
// Property: autoSizingFullishEnabled; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: trayViewController; attributes: T@"UIViewController<SCMapTrayViewController>",R,N,V_trayViewController
// Property: currentPosition; attributes: TQ,R,N,V_currentPosition
// Property: possibleInteractivePositions; attributes: TQ,R,N,V_possibleInteractivePositions
// Property: interactionObservable; attributes: T@"SCObservable",R,N

// -[SCMapTrayInteractionControllerImpl initWithParentViewController:trayViewController:accessoryViewController:sizingDelegate:configuration:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x109203e48

// -[SCMapTrayInteractionControllerImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109204088

// -[SCMapTrayInteractionControllerImpl createSnapshotImage]
// Type encoding: @16@0:8
// Implementation: 0x109204254

// -[SCMapTrayInteractionControllerImpl createSnapshotView]
// Type encoding: @16@0:8
// Implementation: 0x1092042bc

// -[SCMapTrayInteractionControllerImpl containerViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1092043d0

// -[SCMapTrayInteractionControllerImpl setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092043d8

// -[SCMapTrayInteractionControllerImpl show]
// Type encoding: v16@0:8
// Implementation: 0x109204494

// -[SCMapTrayInteractionControllerImpl showWithPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1092044ac

// -[SCMapTrayInteractionControllerImpl hideAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092044c4

// -[SCMapTrayInteractionControllerImpl interactionObservable]
// Type encoding: @16@0:8
// Implementation: 0x1092044d0

// -[SCMapTrayInteractionControllerImpl setTrayPosition:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1092044f8

// -[SCMapTrayInteractionControllerImpl setTrayPosition:animated:interactionMethod:]
// Type encoding: v36@0:8Q16B24Q28
// Implementation: 0x109204510

// -[SCMapTrayInteractionControllerImpl resizeTrayAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x109204524

// -[SCMapTrayInteractionControllerImpl trayHeightForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x109204540

// -[SCMapTrayInteractionControllerImpl trayAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x109204588

// -[SCMapTrayInteractionControllerImpl scrollView]
// Type encoding: @16@0:8
// Implementation: 0x109204590

// -[SCMapTrayInteractionControllerImpl hostSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x109204598

// -[SCMapTrayInteractionControllerImpl autoSizingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1092045e0

// -[SCMapTrayInteractionControllerImpl autoSizingFullishEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109204624

// -[SCMapTrayInteractionControllerImpl _registerForKeyboardNotifications]
// Type encoding: v16@0:8
// Implementation: 0x109204668

// -[SCMapTrayInteractionControllerImpl _keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x109204704

// -[SCMapTrayInteractionControllerImpl _keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x109204954

// -[SCMapTrayInteractionControllerImpl _viewAnimationOpitonFromAnimationCurve:]
// Type encoding: Q24@0:8q16
// Implementation: 0x109204ad0

// -[SCMapTrayInteractionControllerImpl _setupEventHandling]
// Type encoding: v16@0:8
// Implementation: 0x109204ae8

// -[SCMapTrayInteractionControllerImpl _tearDownEventHandling]
// Type encoding: v16@0:8
// Implementation: 0x109204b70

// -[SCMapTrayInteractionControllerImpl _setupEventHandlingForScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x109204bd4

// -[SCMapTrayInteractionControllerImpl _tearDownEventHandlingForScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x109204cc4

// -[SCMapTrayInteractionControllerImpl _isInvisibleTray]
// Type encoding: B16@0:8
// Implementation: 0x109204d98

// -[SCMapTrayInteractionControllerImpl _setupGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x109204e54

// -[SCMapTrayInteractionControllerImpl _setupCollapsedTrayTapGesture]
// Type encoding: v16@0:8
// Implementation: 0x109204f80

// -[SCMapTrayInteractionControllerImpl _removeCollapsedTrayTapGesture]
// Type encoding: v16@0:8
// Implementation: 0x109204fe8

// -[SCMapTrayInteractionControllerImpl _setupViewHierarchyInParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x109205020

// -[SCMapTrayInteractionControllerImpl _styleViews]
// Type encoding: v16@0:8
// Implementation: 0x109205668

// -[SCMapTrayInteractionControllerImpl _setupGripper]
// Type encoding: v16@0:8
// Implementation: 0x109205928

// -[SCMapTrayInteractionControllerImpl _setupBlurEffectWithStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x109205db4

// -[SCMapTrayInteractionControllerImpl _setupBackgroundShadow]
// Type encoding: v16@0:8
// Implementation: 0x109205e4c

// -[SCMapTrayInteractionControllerImpl _setupTrayBottomShadow]
// Type encoding: v16@0:8
// Implementation: 0x109205f2c

// -[SCMapTrayInteractionControllerImpl _moveTrayToPosition:animated:interactionMethod:]
// Type encoding: v36@0:8Q16B24Q28
// Implementation: 0x109206318

// -[SCMapTrayInteractionControllerImpl _addAccessoryViewController]
// Type encoding: v16@0:8
// Implementation: 0x109206580

// -[SCMapTrayInteractionControllerImpl _handleAnimationToPosition:wasHidden:animated:hostSize:trayHeight:trayY:trayPositionChanged:]
// Type encoding: v68@0:8Q16B24B28{CGSize=dd}32d48d56B64
// Implementation: 0x1092068ec

// -[SCMapTrayInteractionControllerImpl _updateTrayBottomShadowForOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x109206d70

// -[SCMapTrayInteractionControllerImpl _updateGripperForOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x109206e30

// -[SCMapTrayInteractionControllerImpl _updateTrayVerticalTransform:]
// Type encoding: v24@0:8d16
// Implementation: 0x109206ecc

// -[SCMapTrayInteractionControllerImpl _absoluteOffsetForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10920700c

// -[SCMapTrayInteractionControllerImpl _offsetForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10920718c

// -[SCMapTrayInteractionControllerImpl _getNeighboringPositionForPosition:yVelocity:]
// Type encoding: Q32@0:8Q16d24
// Implementation: 0x109207224

// -[SCMapTrayInteractionControllerImpl _getNearestPositionToTrayY:]
// Type encoding: Q24@0:8d16
// Implementation: 0x109207274

// -[SCMapTrayInteractionControllerImpl _setPositionForMinTrayHeight]
// Type encoding: v16@0:8
// Implementation: 0x1092073bc

// -[SCMapTrayInteractionControllerImpl _setupAutoSizeTimer]
// Type encoding: v16@0:8
// Implementation: 0x1092073f4

// -[SCMapTrayInteractionControllerImpl _handleAutoSizeTimerFire]
// Type encoding: v16@0:8
// Implementation: 0x109207504

// -[SCMapTrayInteractionControllerImpl _cancelAutoSizeTimer]
// Type encoding: v16@0:8
// Implementation: 0x10920754c

// -[SCMapTrayInteractionControllerImpl _panGestureUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x109207578

// -[SCMapTrayInteractionControllerImpl _handleGripperTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x109207aa8

// -[SCMapTrayInteractionControllerImpl _handleCollapsedTrayTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x109207ae8

// -[SCMapTrayInteractionControllerImpl gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x109207b2c

// -[SCMapTrayInteractionControllerImpl scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x109207b34

// -[SCMapTrayInteractionControllerImpl _handleScrollViewScroll:userIsTracking:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x109207b5c

// -[SCMapTrayInteractionControllerImpl _handleContentSizeChanged]
// Type encoding: v16@0:8
// Implementation: 0x109207e54

// -[SCMapTrayInteractionControllerImpl observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x109207fc8

// -[SCMapTrayInteractionControllerImpl trayViewController]
// Type encoding: @16@0:8
// Implementation: 0x1092081d0

// -[SCMapTrayInteractionControllerImpl currentPosition]
// Type encoding: Q16@0:8
// Implementation: 0x1092081d8

// -[SCMapTrayInteractionControllerImpl possibleInteractivePositions]
// Type encoding: Q16@0:8
// Implementation: 0x1092081e0

// -[SCMapTrayInteractionControllerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1092081e8

@end
