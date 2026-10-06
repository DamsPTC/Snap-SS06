// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSwipeViewContainerViewController
// Superclass: UIViewController
// Address: 0x112ba8938

@interface SCSwipeViewContainerViewController

// Property: partiallyVisible; attributes: TB,N,GisPartiallyVisible,V_partiallyVisible
// Property: fullyVisible; attributes: TB,N,GisFullyVisible,V_fullyVisible
// Property: allowedDirections; attributes: TQ,N,V_allowedDirections
// Property: interactionControllerProvider; attributes: T@"<SCSwipeViewInteractionControllerProvider>",W,N,V_interactionControllerProvider
// Property: delegate; attributes: T@"<SCSwipeViewContainerViewControllerDelegate>",W,N,V_delegate
// Property: roundCornerDelegate; attributes: T@"<SCSwipeViewContainerRoundCornerVisibilityDelegate>",W,N,V_roundCornerDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",R,N
// Property: headerItem; attributes: T@"SIGHeaderItem",?,R,N,V_headerItem
// Property: footerItem; attributes: T@"SIGFooterItem",?,R,N,V_footerItem
// Property: overlayItem; attributes: T@"SCOverlayItem",?,R,N,V_overlayItem
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCSwipeViewContainerViewController init]
// Type encoding: @16@0:8
// Implementation: 0x100592db8

// -[SCSwipeViewContainerViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085a66e4

// -[SCSwipeViewContainerViewController presentationObserverLoggingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1085a6738

// -[SCSwipeViewContainerViewController panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x1085a6740

// -[SCSwipeViewContainerViewController setAllowedDirections:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100593030

// -[SCSwipeViewContainerViewController childViewController]
// Type encoding: @16@0:8
// Implementation: 0x100874f04

// -[SCSwipeViewContainerViewController onRingFlashEnable]
// Type encoding: v16@0:8
// Implementation: 0x1085a6750

// -[SCSwipeViewContainerViewController onRingFlashDisable]
// Type encoding: v16@0:8
// Implementation: 0x100c6a174

// -[SCSwipeViewContainerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x10087a498

// -[SCSwipeViewContainerViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10087b2b8

// -[SCSwipeViewContainerViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10087b824

// -[SCSwipeViewContainerViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008c4a28

// -[SCSwipeViewContainerViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085a6784

// -[SCSwipeViewContainerViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085a6808

// -[SCSwipeViewContainerViewController beginAppearanceTransition:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10087a414

// -[SCSwipeViewContainerViewController endAppearanceTransition]
// Type encoding: v16@0:8
// Implementation: 0x1008c49cc

// -[SCSwipeViewContainerViewController willMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087a0d8

// -[SCSwipeViewContainerViewController didMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c4938

// -[SCSwipeViewContainerViewController childViewControllerForStatusBarStyle]
// Type encoding: @16@0:8
// Implementation: 0x1008ec4e4

// -[SCSwipeViewContainerViewController childViewControllerForStatusBarHidden]
// Type encoding: @16@0:8
// Implementation: 0x1008ec54c

// -[SCSwipeViewContainerViewController childViewControllerForHomeIndicatorAutoHidden]
// Type encoding: @16@0:8
// Implementation: 0x1085a688c

// -[SCSwipeViewContainerViewController childViewControllerForScreenEdgesDeferringSystemGestures]
// Type encoding: @16@0:8
// Implementation: 0x1085a68bc

// -[SCSwipeViewContainerViewController traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2c644

// -[SCSwipeViewContainerViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x100c1c98c

// -[SCSwipeViewContainerViewController handleUserTriggeredNavigationAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x1085a68ec

// -[SCSwipeViewContainerViewController didTapNewTabToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1085a6964

// -[SCSwipeViewContainerViewController attachUI:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008675f4

// -[SCSwipeViewContainerViewController _attachUIToLoadedView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087b3a8

// -[SCSwipeViewContainerViewController detachUI:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085a69ec

// -[SCSwipeViewContainerViewController headerItem]
// Type encoding: @16@0:8
// Implementation: 0x10086789c

// -[SCSwipeViewContainerViewController setFooterItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x100597e5c

// -[SCSwipeViewContainerViewController footerItem]
// Type encoding: @16@0:8
// Implementation: 0x1005a5304

// -[SCSwipeViewContainerViewController setOverlayItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085a6aac

// -[SCSwipeViewContainerViewController overlayItem]
// Type encoding: @16@0:8
// Implementation: 0x1085a6ae4

// -[SCSwipeViewContainerViewController hideTopRoundCornerViews:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085a6bbc

// -[SCSwipeViewContainerViewController mightDismissWithStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085a6bd8

// -[SCSwipeViewContainerViewController panningTransitionCoordinator:wantsInteractionControllerForDirection:isEdgePan:]
// Type encoding: @36@0:8@16Q24B32
// Implementation: 0x1085a6c60

// -[SCSwipeViewContainerViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x100867700

// -[SCSwipeViewContainerViewController setPPVNavigationLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087a07c

// -[SCSwipeViewContainerViewController PPVNavigationLogger]
// Type encoding: @16@0:8
// Implementation: 0x1085a6cc4

// -[SCSwipeViewContainerViewController shouldDisableShakeToReportOnCurrentPage]
// Type encoding: B16@0:8
// Implementation: 0x1085a6d14

// -[SCSwipeViewContainerViewController willStartCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x1085a6da0

// -[SCSwipeViewContainerViewController willEndCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x1085a6e18

// -[SCSwipeViewContainerViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x1085a6e90

// -[SCSwipeViewContainerViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x1085a6f20

// -[SCSwipeViewContainerViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x1085a6fb0

// -[SCSwipeViewContainerViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x1085a7040

// -[SCSwipeViewContainerViewController setDebugName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005931f4

// -[SCSwipeViewContainerViewController setPartiallyVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10087b8b8

// -[SCSwipeViewContainerViewController setFullyVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008c4adc

// -[SCSwipeViewContainerViewController isPartiallyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x1008b51f4

// -[SCSwipeViewContainerViewController isFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x10087e004

// -[SCSwipeViewContainerViewController isFullyVisible:withReason:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10087e00c

// -[SCSwipeViewContainerViewController isAnimatingScroll]
// Type encoding: B16@0:8
// Implementation: 0x1085a70d0

// -[SCSwipeViewContainerViewController lockScrollWithRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085a7100

// -[SCSwipeViewContainerViewController unlockScrollWithRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085a71a8

// -[SCSwipeViewContainerViewController _isCoveredByOtherVCWithReason:]
// Type encoding: B24@0:8^@16
// Implementation: 0x1008ebb70

// -[SCSwipeViewContainerViewController childViewControllerForCustomStatusBarStyleContext]
// Type encoding: @16@0:8
// Implementation: 0x1085a7238

// -[SCSwipeViewContainerViewController _shouldShowBorder]
// Type encoding: B16@0:8
// Implementation: 0x10087b6cc

// -[SCSwipeViewContainerViewController allowedDirections]
// Type encoding: Q16@0:8
// Implementation: 0x1005931a0

// -[SCSwipeViewContainerViewController interactionControllerProvider]
// Type encoding: @16@0:8
// Implementation: 0x1085a7268

// -[SCSwipeViewContainerViewController setInteractionControllerProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005931b8

// -[SCSwipeViewContainerViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1085a7288

// -[SCSwipeViewContainerViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005931cc

// -[SCSwipeViewContainerViewController roundCornerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x100c6a1a8

// -[SCSwipeViewContainerViewController setRoundCornerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005931e0

// -[SCSwipeViewContainerViewController isPartiallyVisible]
// Type encoding: B16@0:8
// Implementation: 0x1008b51f8

// -[SCSwipeViewContainerViewController isFullyVisible]
// Type encoding: B16@0:8
// Implementation: 0x10087e05c

// -[SCSwipeViewContainerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085a72a8

@end
