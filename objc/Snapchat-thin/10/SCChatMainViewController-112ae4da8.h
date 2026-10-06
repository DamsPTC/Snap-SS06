// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMainViewController
// Superclass: UIViewController
// Address: 0x112ae4da8

@interface SCChatMainViewController

// Property: delegate; attributes: T@"<SCStartChatDelegate><SCMessagePluginChatPresenting>",W,N,V_delegate
// Property: baseDelegate; attributes: T@"<SCChatViewControllerV3Delegate>",W,N,V_baseDelegate
// Property: parentDelegate; attributes: T@"<SCSwipeViewParentDelegate>",W,N,V_parentDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCChatMainViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x10652da38

// -[SCChatMainViewController initWithChatViewControllerFactory:pageLoadMetricsEmitter:groupsDataFetcher:snapchattersDataFetcher:chatDisplayReadyLogger:applicationLifecycleEvents:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10652da54

// -[SCChatMainViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x10652dcc0

// -[SCChatMainViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10652dd60

// -[SCChatMainViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10652e0c0

// -[SCChatMainViewController preferredScreenEdgesDeferringSystemGestures]
// Type encoding: Q16@0:8
// Implementation: 0x10652e1d0

// -[SCChatMainViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:]
// Type encoding: v48@0:8@16Q24q32q40
// Implementation: 0x10652e20c

// -[SCChatMainViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:configuration:]
// Type encoding: v56@0:8@16Q24q32q40@48
// Implementation: 0x10652e294

// -[SCChatMainViewController isChatOpenForNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x10652e6d8

// -[SCChatMainViewController warmup]
// Type encoding: v16@0:8
// Implementation: 0x10652e73c

// -[SCChatMainViewController canBeShown]
// Type encoding: B16@0:8
// Implementation: 0x10652e74c

// -[SCChatMainViewController isBackgrounded]
// Type encoding: B16@0:8
// Implementation: 0x10652e788

// -[SCChatMainViewController isPlayingMedia]
// Type encoding: B16@0:8
// Implementation: 0x10652e798

// -[SCChatMainViewController allowMessageReleasing]
// Type encoding: v16@0:8
// Implementation: 0x10652e80c

// -[SCChatMainViewController blockMessageReleasing]
// Type encoding: v16@0:8
// Implementation: 0x10652e83c

// -[SCChatMainViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x10652e86c

// -[SCChatMainViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x10652e8a8

// -[SCChatMainViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x10652e8ac

// -[SCChatMainViewController viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x10652e930

// -[SCChatMainViewController viewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x10652e9c4

// -[SCChatMainViewController viewWillEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10652ea60

// -[SCChatMainViewController userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10652eb00

// -[SCChatMainViewController userDidScreenRecord]
// Type encoding: v16@0:8
// Implementation: 0x10652eb4c

// -[SCChatMainViewController _shouldAllowScreenshotOrScreenRecord]
// Type encoding: B16@0:8
// Implementation: 0x10652eb98

// -[SCChatMainViewController didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x10652ed64

// -[SCChatMainViewController _clearMemoryForInActiveVCs]
// Type encoding: v16@0:8
// Implementation: 0x10652edac

// -[SCChatMainViewController _isApplicationActive]
// Type encoding: B16@0:8
// Implementation: 0x10652eec4

// -[SCChatMainViewController viewDidAppearAtOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10652ef0c

// -[SCChatMainViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x10652ef4c

// -[SCChatMainViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10652efa8

// -[SCChatMainViewController viewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x10652f004

// -[SCChatMainViewController viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x10652f044

// -[SCChatMainViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10652f0cc

// -[SCChatMainViewController setBaseDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10652f0e0

// -[SCChatMainViewController setSourceNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10652f14c

// -[SCChatMainViewController mainChatVC]
// Type encoding: @16@0:8
// Implementation: 0x10652f184

// -[SCChatMainViewController dismissStackedChatMaybe]
// Type encoding: B16@0:8
// Implementation: 0x10652f188

// -[SCChatMainViewController vcIsInStack:]
// Type encoding: B24@0:8@16
// Implementation: 0x10652f1d0

// -[SCChatMainViewController otherParticipantUserId]
// Type encoding: @16@0:8
// Implementation: 0x10652f1e0

// -[SCChatMainViewController activeConversationId]
// Type encoding: @16@0:8
// Implementation: 0x10652f224

// -[SCChatMainViewController getViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10652f268

// -[SCChatMainViewController isPartiallyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x10652f2cc

// -[SCChatMainViewController isPartiallyVisibleInStack:]
// Type encoding: B24@0:8@16
// Implementation: 0x10652f35c

// -[SCChatMainViewController isFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x10652f3ac

// -[SCChatMainViewController isFullyVisible:withReason:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10652f3b4

// -[SCChatMainViewController isFrameInVisibleBounds:]
// Type encoding: B24@0:8@16
// Implementation: 0x10652f4a4

// -[SCChatMainViewController lockScrollWithRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10652f530

// -[SCChatMainViewController unlockScrollWithRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10652f580

// -[SCChatMainViewController showVC:stackType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10652f5d0

// -[SCChatMainViewController _stackVC:handleLifeCycle:stackType:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x10652fc54

// -[SCChatMainViewController removeVCsFromView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10652fda4

// -[SCChatMainViewController _removeVC:handleLifecycle:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10652fec8

// -[SCChatMainViewController _handleHidingLifeCycle:isFromStack:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10652ffc0

// -[SCChatMainViewController _stackedVCForChatIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106530038

// -[SCChatMainViewController _clearStackForVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x106530198

// -[SCChatMainViewController _getStackTypeForRecipient:]
// Type encoding: q24@0:8@16
// Implementation: 0x1065302b8

// -[SCChatMainViewController activeVC]
// Type encoding: @16@0:8
// Implementation: 0x1065303f4

// -[SCChatMainViewController _panGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653046c

// -[SCChatMainViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106530998

// -[SCChatMainViewController _updatePanningVC:]
// Type encoding: v24@0:8d16
// Implementation: 0x106530a30

// -[SCChatMainViewController _hideStackedActiveView]
// Type encoding: v16@0:8
// Implementation: 0x106530b40

// -[SCChatMainViewController _animate:completion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106530eec

// -[SCChatMainViewController removeAllAnimations]
// Type encoding: v16@0:8
// Implementation: 0x106531008

// -[SCChatMainViewController prepareChatVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065310dc

// -[SCChatMainViewController willStartCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10653116c

// -[SCChatMainViewController willEndCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x106531170

// -[SCChatMainViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x106531174

// -[SCChatMainViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x1065311b8

// -[SCChatMainViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x106531240

// -[SCChatMainViewController hasUnreadMessages]
// Type encoding: B16@0:8
// Implementation: 0x1065312c8

// -[SCChatMainViewController childViewControllerForCustomStatusBarStyleContext]
// Type encoding: @16@0:8
// Implementation: 0x106531304

// -[SCChatMainViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106531308

// -[SCChatMainViewController baseDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106531328

// -[SCChatMainViewController parentDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106531348

// -[SCChatMainViewController setParentDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106531368

// -[SCChatMainViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10653137c

// +[SCChatMainViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x10652da4c

@end
