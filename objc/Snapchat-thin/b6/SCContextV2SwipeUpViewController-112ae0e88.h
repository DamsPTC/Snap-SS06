// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2SwipeUpViewController
// Superclass: UIViewController
// Address: 0x112ae0e88

@interface SCContextV2SwipeUpViewController

// Property: delegate; attributes: T@"<SCContextV2SwipeUpViewControllerDelegate>",W,N,V_delegate
// Property: replyView; attributes: T@"UIView",&,N,V_replyView
// Property: replyViewHeight; attributes: Td,N,V_replyViewHeight
// Property: cardsAndActionsOpacity; attributes: Td,N,V_cardsAndActionsOpacity
// Property: actionsHandler; attributes: T@"SCContextV2ActionsHandler",R,N,V_actionsHandler
// Property: contextActionSource; attributes: T@"SCContextLoggingActionSource",&,N,V_contextActionSource
// Property: sessionParams; attributes: T@"SCContextSessionParams",R,N,V_sessionParams
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: onDismissal; attributes: T@?,C,N,V_onDismissal
// Property: onContentSizeChange; attributes: T@?,C,N,V_onContentSizeChange
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCContextV2SwipeUpViewController initWithSessionParams:logger:actionParams:operaPageObservable:composerRuntime:circumstanceEngine:cardViewFactory:operaNavigationStyle:boostCoordinator:bloopsInfoCardVCFactory:contextExperimentService:currentUserId:valdiRuntimeProvider:snapProServices:]
// Type encoding: @128@0:8@16@24@32@40@48@56@?64q72@80@88@96@104@112@120
// Implementation: 0x106486fac

// -[SCContextV2SwipeUpViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1064872ec

// -[SCContextV2SwipeUpViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10648818c

// -[SCContextV2SwipeUpViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106488298

// -[SCContextV2SwipeUpViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106488348

// -[SCContextV2SwipeUpViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106488410

// -[SCContextV2SwipeUpViewController contentSizeDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1064884d8

// -[SCContextV2SwipeUpViewController _tappedToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106488668

// -[SCContextV2SwipeUpViewController dismissViewControllerAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106488674

// -[SCContextV2SwipeUpViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106488a24

// -[SCContextV2SwipeUpViewController showPlaceholderCards:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106488a2c

// -[SCContextV2SwipeUpViewController showCardsContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106488aa0

// -[SCContextV2SwipeUpViewController cardsContent]
// Type encoding: @16@0:8
// Implementation: 0x106488b2c

// -[SCContextV2SwipeUpViewController showErrorStateWithRetryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106488b3c

// -[SCContextV2SwipeUpViewController setCardsAndActionsOpacity:]
// Type encoding: v24@0:8d16
// Implementation: 0x106488b84

// -[SCContextV2SwipeUpViewController setReplyView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106488c1c

// -[SCContextV2SwipeUpViewController _addReplyView]
// Type encoding: v16@0:8
// Implementation: 0x106488c6c

// -[SCContextV2SwipeUpViewController setReplyViewHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x106488d34

// -[SCContextV2SwipeUpViewController _addCameosInfoCardView]
// Type encoding: v16@0:8
// Implementation: 0x106488d80

// -[SCContextV2SwipeUpViewController _maxPresentationAmount]
// Type encoding: d16@0:8
// Implementation: 0x106488f10

// -[SCContextV2SwipeUpViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x106488f54

// -[SCContextV2SwipeUpViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x1064890d8

// -[SCContextV2SwipeUpViewController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648925c

// -[SCContextV2SwipeUpViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10648927c

// -[SCContextV2SwipeUpViewController presentFromBaseViewController:gestureTracker:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1064893cc

// -[SCContextV2SwipeUpViewController initialPresentationAmount]
// Type encoding: d16@0:8
// Implementation: 0x1064895f4

// -[SCContextV2SwipeUpViewController initialSwipeUpGesturePresentationAmount:]
// Type encoding: d24@0:8@16
// Implementation: 0x106489658

// -[SCContextV2SwipeUpViewController gestureTracker:isActivelyAnimatingPresentationAmount:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10648965c

// -[SCContextV2SwipeUpViewController setPresentationAmount:gestureTracker:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10648966c

// -[SCContextV2SwipeUpViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x1064896a8

// -[SCContextV2SwipeUpViewController didTapDoneButton]
// Type encoding: v16@0:8
// Implementation: 0x1064896b4

// -[SCContextV2SwipeUpViewController setContextActionSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064896c0

// -[SCContextV2SwipeUpViewController _presentationMode:]
// Type encoding: q24@0:8@16
// Implementation: 0x106489728

// -[SCContextV2SwipeUpViewController onDismissal]
// Type encoding: @?16@0:8
// Implementation: 0x1064897d0

// -[SCContextV2SwipeUpViewController setOnDismissal:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1064897e0

// -[SCContextV2SwipeUpViewController onContentSizeChange]
// Type encoding: @?16@0:8
// Implementation: 0x1064897ec

// -[SCContextV2SwipeUpViewController setOnContentSizeChange:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1064897fc

// -[SCContextV2SwipeUpViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106489808

// -[SCContextV2SwipeUpViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106489828

// -[SCContextV2SwipeUpViewController replyView]
// Type encoding: @16@0:8
// Implementation: 0x10648983c

// -[SCContextV2SwipeUpViewController replyViewHeight]
// Type encoding: d16@0:8
// Implementation: 0x10648984c

// -[SCContextV2SwipeUpViewController cardsAndActionsOpacity]
// Type encoding: d16@0:8
// Implementation: 0x10648985c

// -[SCContextV2SwipeUpViewController actionsHandler]
// Type encoding: @16@0:8
// Implementation: 0x10648986c

// -[SCContextV2SwipeUpViewController contextActionSource]
// Type encoding: @16@0:8
// Implementation: 0x10648987c

// -[SCContextV2SwipeUpViewController sessionParams]
// Type encoding: @16@0:8
// Implementation: 0x10648988c

// -[SCContextV2SwipeUpViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10648989c

@end
