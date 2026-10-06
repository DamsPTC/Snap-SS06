// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGActionSheet
// Superclass: UIViewController
// Address: 0x112ce6818

@interface SIGActionSheet

// Property: actionSheetNavigationController; attributes: T@"SIGActionSheetNavigationController",W,N,V_actionSheetNavigationController
// Property: backgroundView; attributes: T@"UIView",&,N,V_backgroundView
// Property: header; attributes: T@"UIView",&,N,V_headerContainer
// Property: bodyScrollView; attributes: T@"UIScrollView",&,N,V_bodyScrollView
// Property: footer; attributes: T@"UIView",&,N,V_footerContainer
// Property: actionItems; attributes: T@"NSArray",R,N,V_actionItems
// Property: headerActionLabelText; attributes: T@"NSAttributedString",C,N,V_headerActionLabelText
// Property: onHeaderActionLabelTapped; attributes: T@?,C,N,V_onHeaderActionLabelTapped
// Property: delegate; attributes: T@"<SIGActionSheetDelegate>",W,N,V_delegate
// Property: headerDescription; attributes: T@"NSString",C,N,V_headerDescription

// -[SIGActionSheet initWithHeader:title:actionSheetCells:footer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b8254a8

// -[SIGActionSheet replaceWithHeader:title:actionSheetCells:footer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10b82566c

// -[SIGActionSheet initWithActionItems:title:headerItem:footerItem:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b825824

// -[SIGActionSheet replaceWithActionItems:title:headerItem:footerItem:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10b825964

// -[SIGActionSheet setAttributedText:typeStyle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b825a84

// -[SIGActionSheet presentNestedActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b825b00

// -[SIGActionSheet dismissActionSheet]
// Type encoding: v16@0:8
// Implementation: 0x10b825b50

// -[SIGActionSheet dismissActionSheetWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b825b80

// -[SIGActionSheet presentFromSCUIContainer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b825bd0

// -[SIGActionSheet viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b825c58

// -[SIGActionSheet viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10b825c8c

// -[SIGActionSheet viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b826018

// -[SIGActionSheet _resetActionSheetView]
// Type encoding: v16@0:8
// Implementation: 0x10b826060

// -[SIGActionSheet _setupHeader]
// Type encoding: v16@0:8
// Implementation: 0x10b8261ec

// -[SIGActionSheet _setupFooter]
// Type encoding: v16@0:8
// Implementation: 0x10b8262f4

// -[SIGActionSheet _setupBody]
// Type encoding: v16@0:8
// Implementation: 0x10b8263fc

// -[SIGActionSheet _updateConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b8266ac

// -[SIGActionSheet _stackViewIntrinsicContentHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b82741c

// -[SIGActionSheet _setupAutolayout]
// Type encoding: v16@0:8
// Implementation: 0x10b827534

// -[SIGActionSheet header]
// Type encoding: @16@0:8
// Implementation: 0x10b8275a4

// -[SIGActionSheet setHeader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8275b4

// -[SIGActionSheet footer]
// Type encoding: @16@0:8
// Implementation: 0x10b8275f4

// -[SIGActionSheet setFooter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b827604

// -[SIGActionSheet actionItems]
// Type encoding: @16@0:8
// Implementation: 0x10b827644

// -[SIGActionSheet headerActionLabelText]
// Type encoding: @16@0:8
// Implementation: 0x10b827654

// -[SIGActionSheet setHeaderActionLabelText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b827664

// -[SIGActionSheet onHeaderActionLabelTapped]
// Type encoding: @?16@0:8
// Implementation: 0x10b827670

// -[SIGActionSheet setOnHeaderActionLabelTapped:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b827680

// -[SIGActionSheet delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b82768c

// -[SIGActionSheet setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8276ac

// -[SIGActionSheet headerDescription]
// Type encoding: @16@0:8
// Implementation: 0x10b8276c0

// -[SIGActionSheet setHeaderDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8276d0

// -[SIGActionSheet actionSheetNavigationController]
// Type encoding: @16@0:8
// Implementation: 0x10b8276dc

// -[SIGActionSheet setActionSheetNavigationController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8276fc

// -[SIGActionSheet backgroundView]
// Type encoding: @16@0:8
// Implementation: 0x10b827710

// -[SIGActionSheet setBackgroundView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b827720

// -[SIGActionSheet bodyScrollView]
// Type encoding: @16@0:8
// Implementation: 0x10b827760

// -[SIGActionSheet setBodyScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b827770

// -[SIGActionSheet .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b8277b0

// +[SIGActionSheet viewControllerIsActionSheet:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b825398

// +[SIGActionSheet getPresentedActionSheet:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b825414

@end
