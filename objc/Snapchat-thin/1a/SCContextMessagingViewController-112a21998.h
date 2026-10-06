// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextMessagingViewController
// Superclass: UIViewController
// Address: 0x112a21998

@interface SCContextMessagingViewController

// Property: delegate; attributes: T@"<SCContextMessagingViewControllerDelegate>",W,N,V_delegate
// Property: header; attributes: T@"SCContextMessagingHeader",R,N,V_header
// Property: inputController; attributes: T@"UIViewController<SCChatInputContext>",&,N,V_inputController
// Property: skipFocusingKeyboardOnNextFullscreenAppearance; attributes: TB,N,V_skipFocusingKeyboardOnNextFullscreenAppearance
// Property: frameToTransitionFrom; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_frameToTransitionFrom
// Property: showsBackdrop; attributes: TB,N,V_showsBackdrop
// Property: actionMenuViewController; attributes: T@"SCContextV2ActionMenuViewController",&,N,V_actionMenuViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCContextMessagingViewController initWithDisplayName:sessionParams:recipientUserId:hasAlternateRecipient:showSnapProPublicStoryReplyDisclaimer:showQuestionStickerStoryReplyDisclaimer:swipeDirection:animator:messagingExperimentService:circumstanceEngine:replyOptions:]
// Type encoding: @92@0:8@16@24@32B40B44B48q52@60@68@76Q84
// Implementation: 0x1051f02dc

// -[SCContextMessagingViewController updateHeaderToDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051f05ac

// -[SCContextMessagingViewController setShowsBackdrop:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051f05bc

// -[SCContextMessagingViewController setActionMenuViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051f065c

// -[SCContextMessagingViewController _spacerViewIndexToInsert]
// Type encoding: Q16@0:8
// Implementation: 0x1051f07c4

// -[SCContextMessagingViewController _attachHeader]
// Type encoding: v16@0:8
// Implementation: 0x1051f0878

// -[SCContextMessagingViewController xButtonPressedOnHeader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051f0938

// -[SCContextMessagingViewController swapButtonPressedOnHeader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051f093c

// -[SCContextMessagingViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x1051f096c

// -[SCContextMessagingViewController setInputController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051f09e0

// -[SCContextMessagingViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1051f0a18

// -[SCContextMessagingViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051f0eb4

// -[SCContextMessagingViewController _firstNameFromDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x1051f11e4

// -[SCContextMessagingViewController _createBottomDisclaimerLabelWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051f12b4

// -[SCContextMessagingViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x1051f1910

// -[SCContextMessagingViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051f1918

// -[SCContextMessagingViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051f19a0

// -[SCContextMessagingViewController modalAccessoryDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1051f1a60

// -[SCContextMessagingViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1051f1aac

// -[SCContextMessagingViewController _attemptToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1051f1ab4

// -[SCContextMessagingViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x1051f1b08

// -[SCContextMessagingViewController preferredStatusBarUpdateAnimation]
// Type encoding: q16@0:8
// Implementation: 0x1051f1b10

// -[SCContextMessagingViewController setNeedsStatusBarAppearanceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1051f1b18

// -[SCContextMessagingViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1051f1b8c

// -[SCContextMessagingViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x1051f1c4c

// -[SCContextMessagingViewController chatPresentationAnimatingViewForInputBar]
// Type encoding: @16@0:8
// Implementation: 0x1051f1c58

// -[SCContextMessagingViewController chatPresentationAnimatingViewForAccessoryStackView]
// Type encoding: @16@0:8
// Implementation: 0x1051f1c68

// -[SCContextMessagingViewController chatPresentationAnimatingViewForBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x1051f1c78

// -[SCContextMessagingViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1051f1cc8

// -[SCContextMessagingViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051f1ce8

// -[SCContextMessagingViewController header]
// Type encoding: @16@0:8
// Implementation: 0x1051f1cfc

// -[SCContextMessagingViewController inputController]
// Type encoding: @16@0:8
// Implementation: 0x1051f1d0c

// -[SCContextMessagingViewController skipFocusingKeyboardOnNextFullscreenAppearance]
// Type encoding: B16@0:8
// Implementation: 0x1051f1d1c

// -[SCContextMessagingViewController setSkipFocusingKeyboardOnNextFullscreenAppearance:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051f1d2c

// -[SCContextMessagingViewController frameToTransitionFrom]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1051f1d3c

// -[SCContextMessagingViewController showsBackdrop]
// Type encoding: B16@0:8
// Implementation: 0x1051f1d54

// -[SCContextMessagingViewController actionMenuViewController]
// Type encoding: @16@0:8
// Implementation: 0x1051f1d64

// -[SCContextMessagingViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051f1d74

@end
