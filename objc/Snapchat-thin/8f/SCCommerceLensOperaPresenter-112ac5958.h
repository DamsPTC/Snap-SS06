// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceLensOperaPresenter
// Superclass: NSObject
// Address: 0x112ac5958

@interface SCCommerceLensOperaPresenter

// Property: delegate; attributes: T@"<SCLensOperaPresenterDelegateProtocol>",W,N,V_delegate
// Property: lensOperaViewingSessionFactory; attributes: T@"<SCLensOperaViewingSessionFactoryProtocol>",&,N,V_lensOperaViewingSessionFactory
// Property: operaViewingSession; attributes: T@"<SCLensOperaViewingSessionProtocol>",&,N,V_operaViewingSession
// Property: lensLogger; attributes: T@"SCLazy",&,N,V_lensLogger
// Property: shoppingScope; attributes: T@"SCCommerceShoppingScope",&,N,V_shoppingScope
// Property: commerceShoppingScopeExposer; attributes: T@"SCScopeExposer",&,N,V_commerceShoppingScopeExposer
// Property: showcasePresenter; attributes: T@"SCCommerceShowcaseDeeplinkPresenter",&,N,V_showcasePresenter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceLensOperaPresenter initWithFromViewController:lensLogger:deepLinkURL:lens:lensSessionId:lensOperaViewingSessionFactory:delegate:commerceShoppingScopeExposer:commerceProductCatalogScopeExposer:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1060d5398

// -[SCCommerceLensOperaPresenter present]
// Type encoding: v16@0:8
// Implementation: 0x1060d572c

// -[SCCommerceLensOperaPresenter dismissWithDidBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060d57c0

// -[SCCommerceLensOperaPresenter isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x1060d5800

// -[SCCommerceLensOperaPresenter commerceBrowserWillPresent]
// Type encoding: v16@0:8
// Implementation: 0x1060d5808

// -[SCCommerceLensOperaPresenter commerceBrowserWillDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1060d58fc

// -[SCCommerceLensOperaPresenter didDismissShoppingScope]
// Type encoding: v16@0:8
// Implementation: 0x1060d59f0

// -[SCCommerceLensOperaPresenter didPresentShoppingScope]
// Type encoding: v16@0:8
// Implementation: 0x1060d5a58

// -[SCCommerceLensOperaPresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x1060d5a94

// -[SCCommerceLensOperaPresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d5aac

// -[SCCommerceLensOperaPresenter lensOperaViewingSessionFactory]
// Type encoding: @16@0:8
// Implementation: 0x1060d5ab8

// -[SCCommerceLensOperaPresenter setLensOperaViewingSessionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d5ac0

// -[SCCommerceLensOperaPresenter operaViewingSession]
// Type encoding: @16@0:8
// Implementation: 0x1060d5af0

// -[SCCommerceLensOperaPresenter setOperaViewingSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d5af8

// -[SCCommerceLensOperaPresenter lensLogger]
// Type encoding: @16@0:8
// Implementation: 0x1060d5b28

// -[SCCommerceLensOperaPresenter setLensLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d5b30

// -[SCCommerceLensOperaPresenter shoppingScope]
// Type encoding: @16@0:8
// Implementation: 0x1060d5b60

// -[SCCommerceLensOperaPresenter setShoppingScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d5b68

// -[SCCommerceLensOperaPresenter commerceShoppingScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x1060d5b98

// -[SCCommerceLensOperaPresenter setCommerceShoppingScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d5ba0

// -[SCCommerceLensOperaPresenter showcasePresenter]
// Type encoding: @16@0:8
// Implementation: 0x1060d5bd0

// -[SCCommerceLensOperaPresenter setShowcasePresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060d5bd8

// -[SCCommerceLensOperaPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060d5c08

@end
