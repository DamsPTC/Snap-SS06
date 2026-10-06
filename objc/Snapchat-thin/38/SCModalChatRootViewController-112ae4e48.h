// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCModalChatRootViewController
// Superclass: UIViewController
// Address: 0x112ae4e48

@interface SCModalChatRootViewController

// Property: lockScrollRequestIds; attributes: T@"NSMutableSet",&,N,V_lockScrollRequestIds
// Property: chatViewController; attributes: T@"SCChatMainViewController",R,N,V_chatViewController
// Property: chatDelegate; attributes: T@"<SCStartChatDelegate>",W,N,V_chatDelegate
// Property: dismissButtonImage; attributes: T@"UIImage",&,N,V_dismissButtonImage
// Property: pannableCellController; attributes: T@"<SCPannableCellController>",W,N,V_pannableCellController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",R,N
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCModalChatRootViewController backgroundExitBehavior]
// Type encoding: @16@0:8
// Implementation: 0x10654fd04

// -[SCModalChatRootViewController canHandleNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x10654fd88

// -[SCModalChatRootViewController exit]
// Type encoding: v16@0:8
// Implementation: 0x10654fd8c

// -[SCModalChatRootViewController destinationName]
// Type encoding: Q16@0:8
// Implementation: 0x10654fde0

// -[SCModalChatRootViewController childViewControllerForCustomStatusBarStyleContext]
// Type encoding: @16@0:8
// Implementation: 0x10654fde8

// -[SCModalChatRootViewController initWithUserSession:chatViewControllerFactory:pageLoadMetricsEmitter:groupsDataFetcher:snapchattersDataFetcher:applicationLifecycleEvents:circumstanceEngine:chatDisplayReadyLogger:contextualNotificationTriggerEvents:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10654eaac

// -[SCModalChatRootViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10654ed14

// -[SCModalChatRootViewController viewWillLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10654eddc

// -[SCModalChatRootViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654eed4

// -[SCModalChatRootViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654efd8

// -[SCModalChatRootViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654f05c

// -[SCModalChatRootViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654f0fc

// -[SCModalChatRootViewController preferredScreenEdgesDeferringSystemGestures]
// Type encoding: Q16@0:8
// Implementation: 0x10654f1e8

// -[SCModalChatRootViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x10654f1f8

// -[SCModalChatRootViewController _maybeAddChatViewController]
// Type encoding: v16@0:8
// Implementation: 0x10654f1fc

// -[SCModalChatRootViewController prepareForInteractiveDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10654f378

// -[SCModalChatRootViewController setChatDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654f38c

// -[SCModalChatRootViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:configuration:]
// Type encoding: v56@0:8@16Q24q32q40@48
// Implementation: 0x10654f3e8

// -[SCModalChatRootViewController isChatOpenForNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x10654f478

// -[SCModalChatRootViewController otherParticipantUserId]
// Type encoding: @16@0:8
// Implementation: 0x10654f4dc

// -[SCModalChatRootViewController activeConversationId]
// Type encoding: @16@0:8
// Implementation: 0x10654f4ec

// -[SCModalChatRootViewController isPlayingMedia]
// Type encoding: B16@0:8
// Implementation: 0x10654f4fc

// -[SCModalChatRootViewController isScrollingLocked]
// Type encoding: B16@0:8
// Implementation: 0x10654f50c

// -[SCModalChatRootViewController setConversationByChatIdentifier:deepLinkURL:chatPageSource:navigationAction:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x10654f54c

// -[SCModalChatRootViewController navigateToChatViewAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654f5ec

// -[SCModalChatRootViewController navigateToChatViewAnimated:deepLinkURL:additionalInfo:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10654f5f0

// -[SCModalChatRootViewController setConversationByChatIdentifier:deeplinkType:chatPageSource:navigationAction:]
// Type encoding: v48@0:8@16Q24q32q40
// Implementation: 0x10654f5f4

// -[SCModalChatRootViewController dismissChatViewController:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10654f66c

// -[SCModalChatRootViewController _dismissSelfAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10654f73c

// -[SCModalChatRootViewController isPartiallyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x10654f740

// -[SCModalChatRootViewController isFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x10654f880

// -[SCModalChatRootViewController isFullyVisible:withReason:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10654f888

// -[SCModalChatRootViewController isAnimatingScroll]
// Type encoding: B16@0:8
// Implementation: 0x10654f9a8

// -[SCModalChatRootViewController lockScrollWithRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654f9b0

// -[SCModalChatRootViewController unlockScrollWithRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654fa7c

// -[SCModalChatRootViewController panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10654fb00

// -[SCModalChatRootViewController pinchGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10654fb08

// -[SCModalChatRootViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x10654fb10

// -[SCModalChatRootViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x10654fb20

// -[SCModalChatRootViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x10654fb30

// -[SCModalChatRootViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x10654fb40

// -[SCModalChatRootViewController willStartCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10654fb50

// -[SCModalChatRootViewController willEndCensoringScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10654fb54

// -[SCModalChatRootViewController chatViewController]
// Type encoding: @16@0:8
// Implementation: 0x10654fb58

// -[SCModalChatRootViewController chatDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10654fb68

// -[SCModalChatRootViewController dismissButtonImage]
// Type encoding: @16@0:8
// Implementation: 0x10654fb88

// -[SCModalChatRootViewController setDismissButtonImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654fb98

// -[SCModalChatRootViewController pannableCellController]
// Type encoding: @16@0:8
// Implementation: 0x10654fbd8

// -[SCModalChatRootViewController setPannableCellController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654fbf8

// -[SCModalChatRootViewController lockScrollRequestIds]
// Type encoding: @16@0:8
// Implementation: 0x10654fc0c

// -[SCModalChatRootViewController setLockScrollRequestIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654fc1c

// -[SCModalChatRootViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10654fc5c

@end
