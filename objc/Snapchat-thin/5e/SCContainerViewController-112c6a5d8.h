// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContainerViewController
// Superclass: UIViewController
// Address: 0x112c6a5d8

@interface SCContainerViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: containerBackgroundColor; attributes: T@"UIColor",&,N
// Property: containerHeader; attributes: T@"SIGHeader",R,N
// Property: currentViewController; attributes: T@"UIViewController<SCPageNameLogging>",R,N,V_currentViewController
// Property: customStatusBarStyleContextController; attributes: T@"<SCCustomStatusBarStyleContextController>",W,N,V_customStatusBarStyleContextController
// Property: sigTransitionDelegate; attributes: T@"<SCContainerViewControllerTransitionDelegate>",W,N,V_sigTransitionDelegate
// Property: uikitAppearanceMethodsDelegate; attributes: T@"<SCContainerViewControllerUIKitAppearanceMethodsDelegate>",W,N,V_uikitAppearanceMethodsDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: loggingObserver; attributes: T@"<SCPresenterObserver>",R,W,N,V_loggingObserver
// Property: useUIKitPresentation; attributes: TB,R,N,V_useUIKitPresentation

// -[SCContainerViewController shouldDisableShakeToReportOnCurrentPage]
// Type encoding: B16@0:8
// Implementation: 0x10b09f6d4

// -[SCContainerViewController willStartCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10b09f72c

// -[SCContainerViewController willEndCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10b09f770

// -[SCContainerViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x10b09f7b4

// -[SCContainerViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x10b09f814

// -[SCContainerViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x10b09f874

// -[SCContainerViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b09f8d4

// -[SCContainerViewController _getCurrentShakeToReportDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b09f934

// -[SCContainerViewController _getCurrentShakeToReportDelegateV2]
// Type encoding: @16@0:8
// Implementation: 0x10b09f984

// -[SCContainerViewController init]
// Type encoding: @16@0:8
// Implementation: 0x10b09fcc0

// -[SCContainerViewController initWithLoggingObserver:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b09fcd0

// -[SCContainerViewController initWithLoggingObserver:contentViewLayoutConfig:pageLoadMetricManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10054ac64

// -[SCContainerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x100579f0c

// -[SCContainerViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10058e818

// -[SCContainerViewController containerHeader]
// Type encoding: @16@0:8
// Implementation: 0x10058e928

// -[SCContainerViewController addUIKitPresentationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b09fcdc

// -[SCContainerViewController currentViewController]
// Type encoding: @16@0:8
// Implementation: 0x100879190

// -[SCContainerViewController backgroundExitBehavior]
// Type encoding: @16@0:8
// Implementation: 0x10b09fcec

// -[SCContainerViewController willMoveToWindow:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2c134

// -[SCContainerViewController didMoveToWindow:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2ce28

// -[SCContainerViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c292e8

// -[SCContainerViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c7d638

// -[SCContainerViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b09fd80

// -[SCContainerViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b09fe10

// -[SCContainerViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b09fea0

// -[SCContainerViewController beginAppearanceTransition:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10b09fef4

// -[SCContainerViewController endAppearanceTransition]
// Type encoding: v16@0:8
// Implementation: 0x10b09ff68

// -[SCContainerViewController willMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x100578b14

// -[SCContainerViewController didMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c7d8b0

// -[SCContainerViewController _scAllowManuallyTriggerAppearanceFix]
// Type encoding: B16@0:8
// Implementation: 0x10087a40c

// -[SCContainerViewController _beginPresentation:animated:interactive:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x100879a60

// -[SCContainerViewController _completePresentationFinished:interactive:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1008c4580

// -[SCContainerViewController childViewControllerForStatusBarStyle]
// Type encoding: @16@0:8
// Implementation: 0x1008ec4b4

// -[SCContainerViewController childViewControllerForStatusBarHidden]
// Type encoding: @16@0:8
// Implementation: 0x1008ec51c

// -[SCContainerViewController childViewControllerForHomeIndicatorAutoHidden]
// Type encoding: @16@0:8
// Implementation: 0x10b09ffbc

// -[SCContainerViewController childViewControllerForScreenEdgesDeferringSystemGestures]
// Type encoding: @16@0:8
// Implementation: 0x10b09ffec

// -[SCContainerViewController sig_container_needsStatusBarAppearanceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1008ec304

// -[SCContainerViewController containerBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x10b0a001c

// -[SCContainerViewController setContainerBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x100579e80

// -[SCContainerViewController _doTransition:usingStyle:interactive:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0a00a4

// -[SCContainerViewController _doTransition:usingStyle:interactive:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x100879268

// -[SCContainerViewController _doTransitionInteractively:usingStyle:interactive:completion:]
// Type encoding: @44@0:8@16@24B32@?36
// Implementation: 0x10087944c

// -[SCContainerViewController present:usingStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0a0120

// -[SCContainerViewController present:usingStyle:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100879024

// -[SCContainerViewController presentInteractively:usingStyle:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b0a01bc

// -[SCContainerViewController dismissViewControllerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0a0354

// -[SCContainerViewController dismissInteractivelyWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b0a0358

// -[SCContainerViewController willHandleTransitionAnimationForVC:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0a0360

// -[SCContainerViewController childViewControllerForCustomStatusBarStyleContext]
// Type encoding: @16@0:8
// Implementation: 0x10b0a0368

// -[SCContainerViewController _assertTransition:usingStyle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008799d0

// -[SCContainerViewController swizzledUIKitWillPresentViewController:presentationOwner:animated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0a0398

// -[SCContainerViewController swizzledUIKitDidPresentViewController:presentationOwner:animated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0a04e0

// -[SCContainerViewController swizzledUIKitWillDismissViewController:dismissalOwner:animated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0a0628

// -[SCContainerViewController swizzledUIKitDidDismissViewController:dismissalOwner:animated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0a0770

// -[SCContainerViewController swizzledUIKitAddChildViewController:parentViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0a08b8

// -[SCContainerViewController swizzledUIKitRemoveFromParentViewController:parentViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0a0a24

// -[SCContainerViewController swizzledUIKitPushViewController:navigationController:animated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0a0b90

// -[SCContainerViewController swizzledUIKitPopViewController:navigationController:animated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0a0cfc

// -[SCContainerViewController setCornerViewsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c6a22c

// -[SCContainerViewController loggingObserver]
// Type encoding: @16@0:8
// Implementation: 0x10b0a0e68

// -[SCContainerViewController useUIKitPresentation]
// Type encoding: B16@0:8
// Implementation: 0x10b0a0e88

// -[SCContainerViewController customStatusBarStyleContextController]
// Type encoding: @16@0:8
// Implementation: 0x10b0a0e98

// -[SCContainerViewController setCustomStatusBarStyleContextController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10058ec30

// -[SCContainerViewController sigTransitionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1008791c0

// -[SCContainerViewController setSigTransitionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100593c6c

// -[SCContainerViewController uikitAppearanceMethodsDelegate]
// Type encoding: @16@0:8
// Implementation: 0x100c29378

// -[SCContainerViewController setUikitAppearanceMethodsDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100593c80

// -[SCContainerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0a0eb8

@end
