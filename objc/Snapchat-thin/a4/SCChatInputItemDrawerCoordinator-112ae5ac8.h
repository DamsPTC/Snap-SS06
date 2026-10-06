// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputItemDrawerCoordinator
// Superclass: NSObject
// Address: 0x112ae5ac8

@interface SCChatInputItemDrawerCoordinator

// Property: currentItem; attributes: T@"UIButton<SCChatInputItem>",&,N,V_currentItem
// Property: state; attributes: TQ,N,V_state
// Property: currentDrawer; attributes: T@"UIViewController<SCChatInputDrawerRenderable>",W,N,V_currentDrawer
// Property: defaultHeight; attributes: Td,N,V_defaultHeight
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatInputItemDrawerCoordinator willBecomeFirstResponder]
// Type encoding: v16@0:8
// Implementation: 0x106573c64

// -[SCChatInputItemDrawerCoordinator initWithInputController:drawerContainer:keyboardController:sizeEventPublisher:interactiveDrawerEventPublisher:pluginAttachedFuture:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106573c80

// -[SCChatInputItemDrawerCoordinator _registerKeyboardNotifications]
// Type encoding: v16@0:8
// Implementation: 0x1065740a4

// -[SCChatInputItemDrawerCoordinator _registerPanGesture]
// Type encoding: v16@0:8
// Implementation: 0x1065741f4

// -[SCChatInputItemDrawerCoordinator transitionDrawerToState:animated:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x106574278

// -[SCChatInputItemDrawerCoordinator inputStateEvents]
// Type encoding: @16@0:8
// Implementation: 0x106574898

// -[SCChatInputItemDrawerCoordinator keyboardDidHideEvents]
// Type encoding: @16@0:8
// Implementation: 0x1065748c0

// -[SCChatInputItemDrawerCoordinator isKeyboardDrawerActive]
// Type encoding: B16@0:8
// Implementation: 0x1065748e8

// -[SCChatInputItemDrawerCoordinator setDefaultHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x10657491c

// -[SCChatInputItemDrawerCoordinator addFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x106574a30

// -[SCChatInputItemDrawerCoordinator addPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x106574bfc

// -[SCChatInputItemDrawerCoordinator addObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106574d9c

// -[SCChatInputItemDrawerCoordinator registerPanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106574ed8

// -[SCChatInputItemDrawerCoordinator unregisterPanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106574f34

// -[SCChatInputItemDrawerCoordinator selectItemWithDeeplinkIdentifier:subitemDeeplinkIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106574f4c

// -[SCChatInputItemDrawerCoordinator setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1065751e4

// -[SCChatInputItemDrawerCoordinator _heightForDrawer:state:]
// Type encoding: d32@0:8@16Q24
// Implementation: 0x1065751ec

// -[SCChatInputItemDrawerCoordinator heightForTargetState:]
// Type encoding: d24@0:8Q16
// Implementation: 0x106575290

// -[SCChatInputItemDrawerCoordinator setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1065752ec

// -[SCChatInputItemDrawerCoordinator suspendStateAnnouncements]
// Type encoding: v16@0:8
// Implementation: 0x106575494

// -[SCChatInputItemDrawerCoordinator resumeStateAnnouncements]
// Type encoding: v16@0:8
// Implementation: 0x1065754a8

// -[SCChatInputItemDrawerCoordinator inputViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1065754b8

// -[SCChatInputItemDrawerCoordinator inputViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x1065755d0

// -[SCChatInputItemDrawerCoordinator interceptMessageSendAttemptForPlugin:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065756e8

// -[SCChatInputItemDrawerCoordinator deactivateSubmenuDrawerIfShown]
// Type encoding: v16@0:8
// Implementation: 0x106575934

// -[SCChatInputItemDrawerCoordinator _keyboardWillChangeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x106575970

// -[SCChatInputItemDrawerCoordinator _keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106575a14

// -[SCChatInputItemDrawerCoordinator _updateDefaultHeightForEndFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106575afc

// -[SCChatInputItemDrawerCoordinator _keyboardDidShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106575bb8

// -[SCChatInputItemDrawerCoordinator _keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x106575c14

// -[SCChatInputItemDrawerCoordinator _keyboardDidHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x106575c84

// -[SCChatInputItemDrawerCoordinator gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106575d00

// -[SCChatInputItemDrawerCoordinator _addControlEventsForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106575e08

// -[SCChatInputItemDrawerCoordinator _didTouchUpInside:]
// Type encoding: v24@0:8@16
// Implementation: 0x106575e24

// -[SCChatInputItemDrawerCoordinator _isItemInSubmenu:]
// Type encoding: B24@0:8@16
// Implementation: 0x10657611c

// -[SCChatInputItemDrawerCoordinator _targetStateForDrawer:currentState:]
// Type encoding: Q32@0:8@16Q24
// Implementation: 0x1065761c4

// -[SCChatInputItemDrawerCoordinator _externalPan:]
// Type encoding: v24@0:8@16
// Implementation: 0x106576224

// -[SCChatInputItemDrawerCoordinator _externalPanDidBeginAtPanLocation:externalScrollView:velocity:]
// Type encoding: v48@0:8Q16@24{CGPoint=dd}32
// Implementation: 0x106576508

// -[SCChatInputItemDrawerCoordinator _externalPanGestureRecognizer:didChangeLocationInSuperview:panLocation:externalScrollView:translation:velocity:]
// Type encoding: v88@0:8@16{CGPoint=dd}24Q40@48{CGPoint=dd}56{CGPoint=dd}72
// Implementation: 0x106576624

// -[SCChatInputItemDrawerCoordinator _externalPanDidFinishWithTranslation:velocity:completion:]
// Type encoding: v56@0:8{CGPoint=dd}16{CGPoint=dd}32@?48
// Implementation: 0x106576830

// -[SCChatInputItemDrawerCoordinator _panDrawer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065768d0

// -[SCChatInputItemDrawerCoordinator _panDidBegin:]
// Type encoding: v24@0:8@16
// Implementation: 0x106576a44

// -[SCChatInputItemDrawerCoordinator _panDidChangeWithTranslation:velocity:startHeight:gestureRecognizer:]
// Type encoding: v64@0:8{CGPoint=dd}16{CGPoint=dd}32d48@56
// Implementation: 0x106576abc

// -[SCChatInputItemDrawerCoordinator _panDidFinishWithTranslation:velocity:startHeight:completion:]
// Type encoding: v64@0:8{CGPoint=dd}16{CGPoint=dd}32d48@?56
// Implementation: 0x106576dc0

// -[SCChatInputItemDrawerCoordinator _haultDrawerAnimator]
// Type encoding: v16@0:8
// Implementation: 0x106577008

// -[SCChatInputItemDrawerCoordinator _isCurrentDrawerActivated]
// Type encoding: B16@0:8
// Implementation: 0x10657706c

// -[SCChatInputItemDrawerCoordinator _drawerHeightWithTranslation:startHeight:]
// Type encoding: d40@0:8{CGPoint=dd}16d32
// Implementation: 0x1065770f0

// -[SCChatInputItemDrawerCoordinator _endDrawerStateWithTranslation:velocity:startHeight:]
// Type encoding: Q56@0:8{CGPoint=dd}16{CGPoint=dd}32d48
// Implementation: 0x106577198

// -[SCChatInputItemDrawerCoordinator _completeAnimationToState:drawer:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10657730c

// -[SCChatInputItemDrawerCoordinator _deactivateDrawer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657739c

// -[SCChatInputItemDrawerCoordinator _activateDrawer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065774a8

// -[SCChatInputItemDrawerCoordinator _attachItem:toDrawer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065775c4

// -[SCChatInputItemDrawerCoordinator _attachItem:toController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106577740

// -[SCChatInputItemDrawerCoordinator _attachDrawer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106577898

// -[SCChatInputItemDrawerCoordinator _constraintDrawerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106577a28

// -[SCChatInputItemDrawerCoordinator _addItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106577c40

// -[SCChatInputItemDrawerCoordinator _deactivateItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106577c90

// -[SCChatInputItemDrawerCoordinator _activateItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106577d34

// -[SCChatInputItemDrawerCoordinator _drawerForInputItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106577de8

// -[SCChatInputItemDrawerCoordinator _queryAndCachePluginDrawerForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106577e90

// -[SCChatInputItemDrawerCoordinator _openCurrentDrawerWithPreviousState:previousHeight:targetState:]
// Type encoding: v40@0:8Q16d24Q32
// Implementation: 0x106577f48

// -[SCChatInputItemDrawerCoordinator _activateKeyboardOnItemDeselection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065781bc

// -[SCChatInputItemDrawerCoordinator canResignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x1065782a4

// -[SCChatInputItemDrawerCoordinator beginTransitionToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1065782fc

// -[SCChatInputItemDrawerCoordinator completeTransitionToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106578370

// -[SCChatInputItemDrawerCoordinator _canTransitionToState:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1065783f4

// -[SCChatInputItemDrawerCoordinator currentDrawer]
// Type encoding: @16@0:8
// Implementation: 0x10657841c

// -[SCChatInputItemDrawerCoordinator setCurrentDrawer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106578434

// -[SCChatInputItemDrawerCoordinator state]
// Type encoding: Q16@0:8
// Implementation: 0x106578440

// -[SCChatInputItemDrawerCoordinator defaultHeight]
// Type encoding: d16@0:8
// Implementation: 0x106578448

// -[SCChatInputItemDrawerCoordinator currentItem]
// Type encoding: @16@0:8
// Implementation: 0x106578450

// -[SCChatInputItemDrawerCoordinator setCurrentItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106578458

// -[SCChatInputItemDrawerCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106578488

// +[SCChatInputItemDrawerCoordinator _bottomUnsafeAreaHeight:]
// Type encoding: d24@0:8@16
// Implementation: 0x106573fb8

@end
