// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTableIndex
// Superclass: UIView
// Address: 0x112b89038

@interface SCTableIndex

// Property: delegate; attributes: T@"<SCTableIndexDelegate>",W,N,V_delegate
// Property: supportsRTL; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTableIndex initWithTableIndexConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e8dc28

// -[SCTableIndex _setupPressedStateLabel]
// Type encoding: v16@0:8
// Implementation: 0x107e8df1c

// -[SCTableIndex _setupGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x107e8dfe0

// -[SCTableIndex gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e8e048

// -[SCTableIndex _tableIndexGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8e050

// -[SCTableIndex showScrollDaggerWithPressedState:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e8e1d0

// -[SCTableIndex showFastScrollingScrollDagger]
// Type encoding: v16@0:8
// Implementation: 0x107e8e2c4

// -[SCTableIndex showingScrollDagger]
// Type encoding: B16@0:8
// Implementation: 0x107e8e3fc

// -[SCTableIndex pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x107e8e414

// -[SCTableIndex draggingScrollBar]
// Type encoding: B16@0:8
// Implementation: 0x107e8e4fc

// -[SCTableIndex updateScrollBarWithContentOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e8e50c

// -[SCTableIndex scrollBarPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107e8e51c

// -[SCTableIndex _updateScrollBarPressedState:labelText:scrollBarStyle:]
// Type encoding: v36@0:8B16@20q28
// Implementation: 0x107e8e52c

// -[SCTableIndex _lastUpdateLabelEqualToString:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e8e760

// -[SCTableIndex _pressedScrollBarStyleForLabelText:]
// Type encoding: q24@0:8@16
// Implementation: 0x107e8e7e8

// -[SCTableIndex _scrollBarStyleForLabelText:pressed:isSectionHeader:]
// Type encoding: q32@0:8@16B24B28
// Implementation: 0x107e8e848

// -[SCTableIndex _uninstallScrollBarConstraints]
// Type encoding: v16@0:8
// Implementation: 0x107e8e8fc

// -[SCTableIndex _installUnpressedScrollBarConstraints]
// Type encoding: v16@0:8
// Implementation: 0x107e8e91c

// -[SCTableIndex _installPressedRecentUpdatesConstraintsWithLabelText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8e94c

// -[SCTableIndex _installPressedAllUpdatesConstraintsWithLabelText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8e9e0

// -[SCTableIndex _installPressedSectionHeaderConstraintsWithLabelText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8ea74

// -[SCTableIndex _installFastScrollingConstraintsWithLabelText:barStyle:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107e8eb00

// -[SCTableIndex _widthForFastScrollingPopout:]
// Type encoding: d24@0:8@16
// Implementation: 0x107e8eb88

// -[SCTableIndex _scrollBarCenterXOffsetForWidth:]
// Type encoding: d24@0:8d16
// Implementation: 0x107e8eed0

// -[SCTableIndex _installPressedStateLabelWithLabelText:scrollBarStyle:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107e8ef18

// -[SCTableIndex _updatePressedStateLabelWithStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e8ef88

// -[SCTableIndex supportsRTL]
// Type encoding: B16@0:8
// Implementation: 0x107e8f02c

// -[SCTableIndex _installExpandedDaggerWithHeight:width:centerXOffset:leftCornerRadius:rightCornerRadius:]
// Type encoding: v56@0:8d16d24d32d40d48
// Implementation: 0x107e8f03c

// -[SCTableIndex _transitionScrollBarColorToPercent:]
// Type encoding: v24@0:8d16
// Implementation: 0x107e8f074

// -[SCTableIndex layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107e8f378

// -[SCTableIndex sectionHeaderLabelFont]
// Type encoding: @16@0:8
// Implementation: 0x107e8f970

// -[SCTableIndex updateScrollViewWithHidingFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107e8f9e4

// -[SCTableIndex updateScrollBarWithHidingFrame:padding:]
// Type encoding: v56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
// Implementation: 0x107e8fb4c

// -[SCTableIndex _colorTransitionPercentWithHidingFrame:padding:]
// Type encoding: d56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
// Implementation: 0x107e8fc90

// -[SCTableIndex delegate]
// Type encoding: @16@0:8
// Implementation: 0x107e8fd5c

// -[SCTableIndex setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8fd7c

// -[SCTableIndex .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e8fd90

// +[SCTableIndex indexViewWidth]
// Type encoding: d16@0:8
// Implementation: 0x107e8df14

@end
