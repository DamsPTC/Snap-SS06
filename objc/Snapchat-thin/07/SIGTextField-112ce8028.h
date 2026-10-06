// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGTextField
// Superclass: UITextField
// Address: 0x112ce8028

@interface SIGTextField

// Property: normalTextBackgroundColor; attributes: T@"UIColor",C,N,V_normalTextBackgroundColor
// Property: activeTextBackgroundColor; attributes: T@"UIColor",C,N,V_activeTextBackgroundColor
// Property: errorEnabled; attributes: TB,N,V_errorEnabled
// Property: designVersion; attributes: Tq,N,V_designVersion
// Property: pills; attributes: T@"NSArray",R,N
// Property: pillsDelegate; attributes: T@"<SIGTextFieldPillDelegate>",W,N,V_pillsDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGTextField initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85c9f0

// -[SIGTextField intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b85cc0c

// -[SIGTextField pills]
// Type encoding: @16@0:8
// Implementation: 0x10b85cc24

// -[SIGTextField addPill:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85cc34

// -[SIGTextField addPills:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85cc44

// -[SIGTextField removePill:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85cc54

// -[SIGTextField _usesV2DesignSpec]
// Type encoding: B16@0:8
// Implementation: 0x10b85cc64

// -[SIGTextField _applyDesignVersion]
// Type encoding: v16@0:8
// Implementation: 0x10b85cc80

// -[SIGTextField _updateLeadingLabelStyle]
// Type encoding: v16@0:8
// Implementation: 0x10b85d200

// -[SIGTextField _leftView_direction_safe]
// Type encoding: @16@0:8
// Implementation: 0x10b85d2e0

// -[SIGTextField _rightView_direction_safe]
// Type encoding: @16@0:8
// Implementation: 0x10b85d334

// -[SIGTextField _clearButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10b85d388

// -[SIGTextField _textDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10b85d42c

// -[SIGTextField _textWidth:]
// Type encoding: d24@0:8@16
// Implementation: 0x10b85d4d0

// -[SIGTextField _normalizeRect:forBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
// Implementation: 0x10b85d5b4

// -[SIGTextField _rebuildTextBackgroundLayer]
// Type encoding: v16@0:8
// Implementation: 0x10b85d718

// -[SIGTextField _updateContentForV2DesignSpec]
// Type encoding: v16@0:8
// Implementation: 0x10b85d830

// -[SIGTextField _borderBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10b85dae0

// -[SIGTextField _contentBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10b85db5c

// -[SIGTextField _placeholderTextBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10b85dbc8

// -[SIGTextField _textRegion]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10b85dd10

// -[SIGTextField _inputTextWidth]
// Type encoding: d16@0:8
// Implementation: 0x10b85dddc

// -[SIGTextField _pillScrollViewWidth]
// Type encoding: d16@0:8
// Implementation: 0x10b85de70

// -[SIGTextField _pillScrollViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10b85df18

// -[SIGTextField _textFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10b85df90

// -[SIGTextField rightViewModeShouldUpdateTo:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b85e01c

// -[SIGTextField setDesignVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b85e064

// -[SIGTextField setNormalTextBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85e0a4

// -[SIGTextField setLayoutMargins:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b85e110

// -[SIGTextField setBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85e1a0

// -[SIGTextField setFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85e244

// -[SIGTextField layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b85e390

// -[SIGTextField sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10b85e46c

// -[SIGTextField becomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b85e4d4

// -[SIGTextField resignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b85e760

// -[SIGTextField setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85ea4c

// -[SIGTextField clearButtonRectForBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85eac4

// -[SIGTextField leftViewRectForBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85ead8

// -[SIGTextField rightViewRectForBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85eb7c

// -[SIGTextField borderRectForBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85ec4c

// -[SIGTextField placeholderRectForBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85ec50

// -[SIGTextField textRectForBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85ecc0

// -[SIGTextField editingRectForBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b85ed14

// -[SIGTextField setClearButtonMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b85ed18

// -[SIGTextField setRightView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85ed28

// -[SIGTextField setPlaceholder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85ed38

// -[SIGTextField setAdjustsFontSizeToFitWidth:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b85ee5c

// -[SIGTextField deleteBackward]
// Type encoding: v16@0:8
// Implementation: 0x10b85eebc

// -[SIGTextField textFieldPillScrollView:intrinsicSizeDidChange:]
// Type encoding: v40@0:8@16{CGSize=dd}24
// Implementation: 0x10b85eff8

// -[SIGTextField textFieldPillScrollView:textReceived:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b85effc

// -[SIGTextField textFieldPillScrollView:pillShouldBeDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b85f03c

// -[SIGTextField scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85f094

// -[SIGTextField scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85f098

// -[SIGTextField scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b85f10c

// -[SIGTextField traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85f124

// -[SIGTextField normalTextBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x10b85f2fc

// -[SIGTextField activeTextBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x10b85f30c

// -[SIGTextField setActiveTextBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85f31c

// -[SIGTextField errorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b85f328

// -[SIGTextField setErrorEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b85f338

// -[SIGTextField designVersion]
// Type encoding: q16@0:8
// Implementation: 0x10b85f348

// -[SIGTextField pillsDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b85f358

// -[SIGTextField setPillsDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85f378

// -[SIGTextField .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b85f38c

// +[SIGTextField textFieldWithLeadingIcon:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b85c734

// +[SIGTextField textFieldWithLeadingLabel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b85c874

// +[SIGTextField layerClass]
// Type encoding: #16@0:8
// Implementation: 0x10b85c9e4

@end
