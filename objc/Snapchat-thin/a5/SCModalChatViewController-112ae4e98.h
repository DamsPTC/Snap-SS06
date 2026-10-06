// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCModalChatViewController
// Superclass: SCNavigationController
// Address: 0x112ae4e98

@interface SCModalChatViewController

// Property: rootViewController; attributes: T@"SCModalChatRootViewController",R,N,V_rootViewController
// Property: dismissButtonImage; attributes: T@"UIImage",&,N
// Property: chatDelegate; attributes: T@"<SCStartChatDelegate>",W,N,V_chatDelegate
// Property: modalPresentationDelegate; attributes: T@"<SCModalChatViewControllerPresentationDelegate>",W,N,V_modalPresentationDelegate
// Property: modalInteractionController; attributes: T@"UIPercentDrivenInteractiveTransition",&,N,V_modalInteractionController
// Property: shouldPresentInteractively; attributes: TB,N,V_shouldPresentInteractively
// Property: pannableCellController; attributes: T@"<SCPannableCellController>",W,N,V_pannableCellController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCModalChatViewController initWithRootViewController:lifecycleLogger:contextualNotificationTriggerEvents:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10654fe18

// -[SCModalChatViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654ff90

// -[SCModalChatViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10655005c

// -[SCModalChatViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065500c8

// -[SCModalChatViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x10655018c

// -[SCModalChatViewController setChatDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106550194

// -[SCModalChatViewController setPannableCellController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065501f0

// -[SCModalChatViewController setConversationByChatIdentifier:deeplinkType:sourceNotification:chatPageSource:navigationAction:configuration:]
// Type encoding: v64@0:8@16Q24@32q40q48@56
// Implementation: 0x10655024c

// -[SCModalChatViewController isChatOpenForNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x106550324

// -[SCModalChatViewController _updateContainerViewFrame]
// Type encoding: v16@0:8
// Implementation: 0x106550334

// -[SCModalChatViewController setDismissButtonImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106550464

// -[SCModalChatViewController dismissButtonImage]
// Type encoding: @16@0:8
// Implementation: 0x106550474

// -[SCModalChatViewController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x106550484

// -[SCModalChatViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106550564

// -[SCModalChatViewController otherParticipantUserId]
// Type encoding: @16@0:8
// Implementation: 0x1065505c4

// -[SCModalChatViewController activeConversationId]
// Type encoding: @16@0:8
// Implementation: 0x1065505d4

// -[SCModalChatViewController isPlayingMedia]
// Type encoding: B16@0:8
// Implementation: 0x1065505e4

// -[SCModalChatViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1065505f4

// -[SCModalChatViewController shouldBeSilentlyPresentedAndPauseOpera]
// Type encoding: B16@0:8
// Implementation: 0x1065505fc

// -[SCModalChatViewController interactiveDismissalWillBegin:]
// Type encoding: v24@0:8@16
// Implementation: 0x106550614

// -[SCModalChatViewController interactionControllerPercentageDidChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x106550624

// -[SCModalChatViewController interactiveDismissalDidComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x106550628

// -[SCModalChatViewController presentationMode]
// Type encoding: q16@0:8
// Implementation: 0x1065506cc

// -[SCModalChatViewController interactivePresentationMode]
// Type encoding: q16@0:8
// Implementation: 0x1065506ec

// -[SCModalChatViewController exitMode]
// Type encoding: q16@0:8
// Implementation: 0x1065506f4

// -[SCModalChatViewController resetExitMode]
// Type encoding: v16@0:8
// Implementation: 0x106550704

// -[SCModalChatViewController chatDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106550760

// -[SCModalChatViewController modalPresentationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106550780

// -[SCModalChatViewController setModalPresentationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065507a0

// -[SCModalChatViewController modalInteractionController]
// Type encoding: @16@0:8
// Implementation: 0x1065507b4

// -[SCModalChatViewController setModalInteractionController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065507c4

// -[SCModalChatViewController shouldPresentInteractively]
// Type encoding: B16@0:8
// Implementation: 0x106550804

// -[SCModalChatViewController setShouldPresentInteractively:]
// Type encoding: v20@0:8B16
// Implementation: 0x106550814

// -[SCModalChatViewController pannableCellController]
// Type encoding: @16@0:8
// Implementation: 0x106550824

// -[SCModalChatViewController rootViewController]
// Type encoding: @16@0:8
// Implementation: 0x106550844

// -[SCModalChatViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106550854

@end
