// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGTextFieldPillScrollView
// Superclass: UIScrollView
// Address: 0x112ce8168

@interface SIGTextFieldPillScrollView

// Property: observer; attributes: T@"<SIGTextFieldPillScrollViewObserver>",W,N,V_observer
// Property: pills; attributes: T@"NSArray",R,N,V_pills
// Property: designVersion; attributes: Tq,N,V_designVersion
// Property: selectedPill; attributes: T@"<SIGTextFieldPill>",&,N,V_selectedPill
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGTextFieldPillScrollView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85fe04

// -[SIGTextFieldPillScrollView _pillViewTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b860064

// -[SIGTextFieldPillScrollView _layoutPillViews]
// Type encoding: v16@0:8
// Implementation: 0x10b8600dc

// -[SIGTextFieldPillScrollView _updateFadeMaskLocations]
// Type encoding: v16@0:8
// Implementation: 0x10b860328

// -[SIGTextFieldPillScrollView setSelectedPill:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8604a8

// -[SIGTextFieldPillScrollView addPill:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b860608

// -[SIGTextFieldPillScrollView addPills:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8606c4

// -[SIGTextFieldPillScrollView setDesignVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b8608ac

// -[SIGTextFieldPillScrollView removePill:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8609c4

// -[SIGTextFieldPillScrollView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b860b30

// -[SIGTextFieldPillScrollView _layoutMaskGradient]
// Type encoding: v16@0:8
// Implementation: 0x10b860b88

// -[SIGTextFieldPillScrollView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b860c3c

// -[SIGTextFieldPillScrollView setContentOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10b860c40

// -[SIGTextFieldPillScrollView textFieldPillViewShouldBeDeleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b860c88

// -[SIGTextFieldPillScrollView textFieldPillView:receivedText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b860d04

// -[SIGTextFieldPillScrollView observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x10b860d60

// -[SIGTextFieldPillScrollView observer]
// Type encoding: @16@0:8
// Implementation: 0x10b860e4c

// -[SIGTextFieldPillScrollView setObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b860e6c

// -[SIGTextFieldPillScrollView pills]
// Type encoding: @16@0:8
// Implementation: 0x10b860e80

// -[SIGTextFieldPillScrollView designVersion]
// Type encoding: q16@0:8
// Implementation: 0x10b860e90

// -[SIGTextFieldPillScrollView selectedPill]
// Type encoding: @16@0:8
// Implementation: 0x10b860ea0

// -[SIGTextFieldPillScrollView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b860eb0

@end
