// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileDisplayTitleView
// Superclass: UIView
// Address: 0x112bdae38

@interface SCUnifiedProfileDisplayTitleView

// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: viewModel; attributes: T@,&,N,V_viewModel
// Property: SIGIcon; attributes: T@"UIImage",?,&,N

// -[SCUnifiedProfileDisplayTitleView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108f6cf20

// -[SCUnifiedProfileDisplayTitleView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108f6d1c0

// -[SCUnifiedProfileDisplayTitleView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108f6d308

// -[SCUnifiedProfileDisplayTitleView textRectForBounds:limitedToNumberOfLines:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48
// Implementation: 0x108f6d34c

// -[SCUnifiedProfileDisplayTitleView leftAndRightTotalMargin]
// Type encoding: d16@0:8
// Implementation: 0x108f6d3e4

// -[SCUnifiedProfileDisplayTitleView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f6d3f0

// -[SCUnifiedProfileDisplayTitleView _handleDisplayNameTap]
// Type encoding: v16@0:8
// Implementation: 0x108f6d87c

// -[SCUnifiedProfileDisplayTitleView _makeDisplayNameLabelStackView]
// Type encoding: @16@0:8
// Implementation: 0x108f6da60

// -[SCUnifiedProfileDisplayTitleView _makeIsMutedButton]
// Type encoding: @16@0:8
// Implementation: 0x108f6dc78

// -[SCUnifiedProfileDisplayTitleView _didTapIsMutedButton]
// Type encoding: v16@0:8
// Implementation: 0x108f6df08

// -[SCUnifiedProfileDisplayTitleView _updateDisplayNameButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f6e078

// -[SCUnifiedProfileDisplayTitleView _updateDisplayNameLabel:maxLinesCount:isMuted:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x108f6e1d4

// -[SCUnifiedProfileDisplayTitleView actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x108f6e570

// -[SCUnifiedProfileDisplayTitleView setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f6e580

// -[SCUnifiedProfileDisplayTitleView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x108f6e5c0

// -[SCUnifiedProfileDisplayTitleView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f6e5d0

// +[SCUnifiedProfileDisplayTitleView sizeWithViewModel:constrainedToSize:]
// Type encoding: {CGSize=dd}40@0:8@16{CGSize=dd}24
// Implementation: 0x108f6d670

@end
