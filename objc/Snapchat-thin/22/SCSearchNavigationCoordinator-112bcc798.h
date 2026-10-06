// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchNavigationCoordinator
// Superclass: NSObject
// Address: 0x112bcc798

@interface SCSearchNavigationCoordinator

// Property: viewControllerStatus; attributes: Tq,N,V_viewControllerStatus
// Property: isInteractiveDismissing; attributes: TB,N,V_isInteractiveDismissing
// Property: interactiveDismissalController; attributes: T@"<UIViewControllerInteractiveTransitioning>",R,N,V_interactiveDismissalController
// Property: ongoingTransitionContext; attributes: T@"SCSearchNavigationTransitionContext",R,N,V_ongoingTransitionContext
// Property: parentNavigationCoordinator; attributes: T@"SCSearchNavigationCoordinator",W,N,V_parentNavigationCoordinator
// Property: delegate; attributes: T@"<SCSearchNavigationCoordinatorDelegate>",W,N,V_delegate
// Property: topViewController; attributes: T@"UIViewController",R,N
// Property: navigationInfos; attributes: T@"NSArray",C,N

// -[SCSearchNavigationCoordinator init]
// Type encoding: @16@0:8
// Implementation: 0x108eff404

// -[SCSearchNavigationCoordinator presentWithNavigationInfo:animated:completionBlock:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108eff468

// -[SCSearchNavigationCoordinator dismissViewControllerAnimated:completionBlock:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x108eff53c

// -[SCSearchNavigationCoordinator dismissContainerViewControllerAnimated:completionBlock:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x108eff5f8

// -[SCSearchNavigationCoordinator dismissViewControllerFromParentStackIfPossibleWithAnimated:completionBlock:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x108eff66c

// -[SCSearchNavigationCoordinator topViewController]
// Type encoding: @16@0:8
// Implementation: 0x108eff6ec

// -[SCSearchNavigationCoordinator navigationInfos]
// Type encoding: @16@0:8
// Implementation: 0x108eff734

// -[SCSearchNavigationCoordinator setNavigationInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x108eff74c

// -[SCSearchNavigationCoordinator _transitionFromNavigationInfo:toNavigationInfo:isPresenting:animated:completionBlock:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x108eff8fc

// -[SCSearchNavigationCoordinator containerViewControllerStatusForTransitionContext:]
// Type encoding: q24@0:8@16
// Implementation: 0x108f003b8

// -[SCSearchNavigationCoordinator _cleanUpTransitionWithFromNavigationInfo:toNavigationInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108f003c0

// -[SCSearchNavigationCoordinator _addNavigationInfoToStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f00448

// -[SCSearchNavigationCoordinator _removeNavigationInfoFromStack]
// Type encoding: v16@0:8
// Implementation: 0x108f00450

// -[SCSearchNavigationCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x108f00458

// -[SCSearchNavigationCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f00470

// -[SCSearchNavigationCoordinator viewControllerStatus]
// Type encoding: q16@0:8
// Implementation: 0x108f0047c

// -[SCSearchNavigationCoordinator setViewControllerStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x108f00484

// -[SCSearchNavigationCoordinator isInteractiveDismissing]
// Type encoding: B16@0:8
// Implementation: 0x108f0048c

// -[SCSearchNavigationCoordinator setIsInteractiveDismissing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108f00494

// -[SCSearchNavigationCoordinator interactiveDismissalController]
// Type encoding: @16@0:8
// Implementation: 0x108f0049c

// -[SCSearchNavigationCoordinator ongoingTransitionContext]
// Type encoding: @16@0:8
// Implementation: 0x108f004a4

// -[SCSearchNavigationCoordinator parentNavigationCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x108f004ac

// -[SCSearchNavigationCoordinator setParentNavigationCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f004c4

// -[SCSearchNavigationCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f004d0

@end
