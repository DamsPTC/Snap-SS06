// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGContainerView
// Superclass: SIGSubscreenView
// Address: 0x112c6a6a0

@interface SIGContainerView

// Property: currentApplicationView; attributes: T@"UIView",R,W,N,V_currentApplicationView
// Property: currentScreenChrome; attributes: T@"SCScreenChromeView",R,N,V_currentScreenChrome
// Property: backgroundScreenChrome; attributes: T@"SCScreenChromeView",R,N,V_backgroundScreenChrome
// Property: footerHeight; attributes: Td,N,V_footerHeight
// Property: disableBorderAndCornerViews; attributes: TB,N,V_disableBorderAndCornerViews

// -[SIGContainerView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10057ad3c

// -[SIGContainerView addSubview:]
// Type encoding: v24@0:8@16
// Implementation: 0x10057b87c

// -[SIGContainerView bringSubviewToFront:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008bd270

// -[SIGContainerView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x100c2d7c0

// -[SIGContainerView _roundedCornerRadius]
// Type encoding: d16@0:8
// Implementation: 0x100c2da80

// -[SIGContainerView _setRoundedCorners]
// Type encoding: v16@0:8
// Implementation: 0x1008bd380

// -[SIGContainerView _bottomConstraintForView]
// Type encoding: @16@0:8
// Implementation: 0x1008bd0a0

// -[SIGContainerView _addScreenChromeView]
// Type encoding: @16@0:8
// Implementation: 0x10b0a1408

// -[SIGContainerView _bottomConstraintForViewController:onView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0a160c

// -[SIGContainerView setRoundedCornersHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c6a2b0

// -[SIGContainerView header:didChangeHeight:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1008bf2a0

// -[SIGContainerView setFooterHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x1008c0dc4

// -[SIGContainerView present:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008bcce8

// -[SIGContainerView beginPresentation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008bcd78

// -[SIGContainerView _setAdditionalSafeAreaInsetsForPresentedViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008bd2c0

// -[SIGContainerView endPresentation:completed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1008bf50c

// -[SIGContainerView didMoveToSuperview]
// Type encoding: v16@0:8
// Implementation: 0x10058dbcc

// -[SIGContainerView traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c2c138

// -[SIGContainerView _shouldShowBorder]
// Type encoding: B16@0:8
// Implementation: 0x10058dc2c

// -[SIGContainerView currentApplicationView]
// Type encoding: @16@0:8
// Implementation: 0x10b0a178c

// -[SIGContainerView currentScreenChrome]
// Type encoding: @16@0:8
// Implementation: 0x10b0a17ac

// -[SIGContainerView backgroundScreenChrome]
// Type encoding: @16@0:8
// Implementation: 0x10b0a17bc

// -[SIGContainerView footerHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b0a17cc

// -[SIGContainerView disableBorderAndCornerViews]
// Type encoding: B16@0:8
// Implementation: 0x10b0a17dc

// -[SIGContainerView setDisableBorderAndCornerViews:]
// Type encoding: v20@0:8B16
// Implementation: 0x10058af54

// -[SIGContainerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0a17ec

@end
