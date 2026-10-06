// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserReachabilityViewController
// Superclass: UIViewController
// Address: 0x112a1a918

@interface SCUserReachabilityViewController

// Property: resourceDownloader; attributes: T@"<SCOnDemandResourceDownloader>",&,N,V_resourceDownloader
// Property: containerView; attributes: T@"UIView",&,N,V_containerView
// Property: headingImage; attributes: T@"UIImageView",&,N,V_headingImage
// Property: lblTitle; attributes: T@"SIGLabel",&,N,V_lblTitle
// Property: lblBody; attributes: T@"SIGLabel",&,N,V_lblBody
// Property: commsContainer; attributes: T@"UIView",&,N,V_commsContainer
// Property: commsStack; attributes: T@"UIView",&,N,V_commsStack
// Property: emailCell; attributes: T@"SIGCell",&,N,V_emailCell
// Property: phoneCell; attributes: T@"SIGCell",&,N,V_phoneCell
// Property: dismissButton; attributes: T@"SIGButton",&,N,V_dismissButton
// Property: cardTransition; attributes: T@"<SIGCardTransition>",&,N,V_cardTransition
// Property: delegate; attributes: T@"<SCUserReachabilityViewControllerDelegate>",W,N,V_delegate
// Property: performerProvider; attributes: T@"SCLazy",&,N,V_performerProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserReachabilityViewController initWithDelegate:resourceDownloader:performerProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1051268c8

// -[SCUserReachabilityViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1051269b0

// -[SCUserReachabilityViewController populateWithPhoneNumberProvider:emailProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105126a68

// -[SCUserReachabilityViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105126eb8

// -[SCUserReachabilityViewController cardTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x105126f10

// -[SCUserReachabilityViewController cardToExpandTransition]
// Type encoding: @16@0:8
// Implementation: 0x105126f70

// -[SCUserReachabilityViewController cardTransitionWillBeginWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105126f74

// -[SCUserReachabilityViewController _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x105126ffc

// -[SCUserReachabilityViewController _populateBoltAssets]
// Type encoding: v16@0:8
// Implementation: 0x105128f6c

// -[SCUserReachabilityViewController _vendCell]
// Type encoding: @16@0:8
// Implementation: 0x1051295cc

// -[SCUserReachabilityViewController _didTapLooksGoodButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051296bc

// -[SCUserReachabilityViewController _didTapOutside]
// Type encoding: v16@0:8
// Implementation: 0x1051296ec

// -[SCUserReachabilityViewController _didTapPhoneNumber]
// Type encoding: v16@0:8
// Implementation: 0x10512971c

// -[SCUserReachabilityViewController _didTapEmailAddress]
// Type encoding: v16@0:8
// Implementation: 0x10512974c

// -[SCUserReachabilityViewController resourceDownloader]
// Type encoding: @16@0:8
// Implementation: 0x10512977c

// -[SCUserReachabilityViewController setResourceDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512978c

// -[SCUserReachabilityViewController containerView]
// Type encoding: @16@0:8
// Implementation: 0x1051297cc

// -[SCUserReachabilityViewController setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051297dc

// -[SCUserReachabilityViewController headingImage]
// Type encoding: @16@0:8
// Implementation: 0x10512981c

// -[SCUserReachabilityViewController setHeadingImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512982c

// -[SCUserReachabilityViewController lblTitle]
// Type encoding: @16@0:8
// Implementation: 0x10512986c

// -[SCUserReachabilityViewController setLblTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512987c

// -[SCUserReachabilityViewController lblBody]
// Type encoding: @16@0:8
// Implementation: 0x1051298bc

// -[SCUserReachabilityViewController setLblBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051298cc

// -[SCUserReachabilityViewController commsContainer]
// Type encoding: @16@0:8
// Implementation: 0x10512990c

// -[SCUserReachabilityViewController setCommsContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512991c

// -[SCUserReachabilityViewController commsStack]
// Type encoding: @16@0:8
// Implementation: 0x10512995c

// -[SCUserReachabilityViewController setCommsStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x10512996c

// -[SCUserReachabilityViewController emailCell]
// Type encoding: @16@0:8
// Implementation: 0x1051299ac

// -[SCUserReachabilityViewController setEmailCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051299bc

// -[SCUserReachabilityViewController phoneCell]
// Type encoding: @16@0:8
// Implementation: 0x1051299fc

// -[SCUserReachabilityViewController setPhoneCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x105129a0c

// -[SCUserReachabilityViewController dismissButton]
// Type encoding: @16@0:8
// Implementation: 0x105129a4c

// -[SCUserReachabilityViewController setDismissButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105129a5c

// -[SCUserReachabilityViewController cardTransition]
// Type encoding: @16@0:8
// Implementation: 0x105129a9c

// -[SCUserReachabilityViewController setCardTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x105129aac

// -[SCUserReachabilityViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105129aec

// -[SCUserReachabilityViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105129b0c

// -[SCUserReachabilityViewController performerProvider]
// Type encoding: @16@0:8
// Implementation: 0x105129b20

// -[SCUserReachabilityViewController setPerformerProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105129b30

// -[SCUserReachabilityViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105129b70

@end
