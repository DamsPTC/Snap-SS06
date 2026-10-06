// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputTextViewContainer
// Superclass: UIView
// Address: 0x112ae5d48

@interface SCChatInputTextViewContainer

// Property: collapsed; attributes: TB,N,GisCollapsed,V_collapsed
// Property: textView; attributes: T@"SCChatInputTextView",R,N,V_textView
// Property: stackView; attributes: T@"SCChatInputStackView",R,N,V_stackView
// Property: inputBar; attributes: T@"SCChatInputBar",W,N,V_inputBar
// Property: inputItems; attributes: T@"NSArray",R,N
// Property: font; attributes: T@"UIFont",&,N
// Property: placeholderLabel; attributes: T@"UILabel",&,N,V_placeholderLabel
// Property: placeholderColor; attributes: T@"UIColor",C,N
// Property: placeholderFont; attributes: T@"UIFont",C,N
// Property: placeholderText; attributes: T@"NSString",C,N,V_placeholderText
// Property: shortPlaceholderText; attributes: T@"NSString",C,N,V_shortPlaceholderText
// Property: cursorColor; attributes: T@"UIColor",C,N
// Property: maximumNumberOfLines; attributes: Td,N,V_maximumNumberOfLines
// Property: delegate; attributes: T@"<UITextViewDelegate>",W,N
// Property: collapsesStackViewOnTextChange; attributes: TB,N,V_collapsesStackViewOnTextChange
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: style; attributes: TQ,N,V_style

// -[SCChatInputTextViewContainer initWithCircumstanceEngine:displaySnapchatPlusBorder:messagingExperimentService:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x10657da00

// -[SCChatInputTextViewContainer updateConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10657dad0

// -[SCChatInputTextViewContainer _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x10657db30

// -[SCChatInputTextViewContainer _setupView]
// Type encoding: v16@0:8
// Implementation: 0x10657db70

// -[SCChatInputTextViewContainer _setupTextView]
// Type encoding: v16@0:8
// Implementation: 0x10657dc6c

// -[SCChatInputTextViewContainer _setupPlaceholderLabel]
// Type encoding: v16@0:8
// Implementation: 0x10657debc

// -[SCChatInputTextViewContainer _setupStackView]
// Type encoding: v16@0:8
// Implementation: 0x10657dfc0

// -[SCChatInputTextViewContainer _constructConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10657e020

// -[SCChatInputTextViewContainer _constructTextViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10657e04c

// -[SCChatInputTextViewContainer _constructStackViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10657e278

// -[SCChatInputTextViewContainer _constructLabelConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10657e36c

// -[SCChatInputTextViewContainer layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10657e4e4

// -[SCChatInputTextViewContainer setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10657e584

// -[SCChatInputTextViewContainer setCollapsed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10657e708

// -[SCChatInputTextViewContainer setCollapsesStackViewOnTextChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x10657e774

// -[SCChatInputTextViewContainer inputItems]
// Type encoding: @16@0:8
// Implementation: 0x10657e7bc

// -[SCChatInputTextViewContainer setInputItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657e7cc

// -[SCChatInputTextViewContainer delegate]
// Type encoding: @16@0:8
// Implementation: 0x10657e7dc

// -[SCChatInputTextViewContainer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657e7ec

// -[SCChatInputTextViewContainer addInputItem:animationStyle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10657e7fc

// -[SCChatInputTextViewContainer font]
// Type encoding: @16@0:8
// Implementation: 0x10657e80c

// -[SCChatInputTextViewContainer setFont:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657e81c

// -[SCChatInputTextViewContainer setPlaceholderFont:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657e86c

// -[SCChatInputTextViewContainer placeholderFont]
// Type encoding: @16@0:8
// Implementation: 0x10657e87c

// -[SCChatInputTextViewContainer setPlaceholderColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657e88c

// -[SCChatInputTextViewContainer placeholderColor]
// Type encoding: @16@0:8
// Implementation: 0x10657e89c

// -[SCChatInputTextViewContainer setPlaceholderText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657e8ac

// -[SCChatInputTextViewContainer setShortPlaceholderText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657e9fc

// -[SCChatInputTextViewContainer _updatePlaceholderShortReplacement]
// Type encoding: v16@0:8
// Implementation: 0x10657eb38

// -[SCChatInputTextViewContainer setPlaceholderText:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10657ebf8

// -[SCChatInputTextViewContainer setCursorColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657ed00

// -[SCChatInputTextViewContainer cursorColor]
// Type encoding: @16@0:8
// Implementation: 0x10657ed10

// -[SCChatInputTextViewContainer textViewHeight]
// Type encoding: d16@0:8
// Implementation: 0x10657ed20

// -[SCChatInputTextViewContainer minimumHeight]
// Type encoding: d16@0:8
// Implementation: 0x10657ede8

// -[SCChatInputTextViewContainer setMaximumNumberOfLines:]
// Type encoding: v24@0:8d16
// Implementation: 0x10657edf8

// -[SCChatInputTextViewContainer inputViewController:textViewDidChange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10657ee30

// -[SCChatInputTextViewContainer inputViewController:textViewDidReturn:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10657ee8c

// -[SCChatInputTextViewContainer _updatePlaceholderLabelVisibility]
// Type encoding: v16@0:8
// Implementation: 0x10657ee9c

// -[SCChatInputTextViewContainer _updateTextViewBounce]
// Type encoding: v16@0:8
// Implementation: 0x10657eecc

// -[SCChatInputTextViewContainer _scrollToCursor]
// Type encoding: v16@0:8
// Implementation: 0x10657ef2c

// -[SCChatInputTextViewContainer _updateTextViewTrailingAnchor:]
// Type encoding: v20@0:8B16
// Implementation: 0x10657efe4

// -[SCChatInputTextViewContainer _updateTextViewInsets:]
// Type encoding: v20@0:8B16
// Implementation: 0x10657f150

// -[SCChatInputTextViewContainer _shouldDisplayPlaceholderLabel]
// Type encoding: B16@0:8
// Implementation: 0x10657f1dc

// -[SCChatInputTextViewContainer _collapseTextView]
// Type encoding: v16@0:8
// Implementation: 0x10657f248

// -[SCChatInputTextViewContainer _expandTextView]
// Type encoding: v16@0:8
// Implementation: 0x10657f2e0

// -[SCChatInputTextViewContainer _calculatedMinimumHeight]
// Type encoding: d16@0:8
// Implementation: 0x10657f380

// -[SCChatInputTextViewContainer _calculatedMaximumHeight]
// Type encoding: d16@0:8
// Implementation: 0x10657f40c

// -[SCChatInputTextViewContainer _setupTextViewBorderLayer]
// Type encoding: v16@0:8
// Implementation: 0x10657f4c0

// -[SCChatInputTextViewContainer style]
// Type encoding: Q16@0:8
// Implementation: 0x10657f564

// -[SCChatInputTextViewContainer isCollapsed]
// Type encoding: B16@0:8
// Implementation: 0x10657f574

// -[SCChatInputTextViewContainer textView]
// Type encoding: @16@0:8
// Implementation: 0x10657f584

// -[SCChatInputTextViewContainer stackView]
// Type encoding: @16@0:8
// Implementation: 0x10657f594

// -[SCChatInputTextViewContainer inputBar]
// Type encoding: @16@0:8
// Implementation: 0x10657f5a4

// -[SCChatInputTextViewContainer setInputBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657f5c4

// -[SCChatInputTextViewContainer placeholderLabel]
// Type encoding: @16@0:8
// Implementation: 0x10657f5d8

// -[SCChatInputTextViewContainer setPlaceholderLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657f5e8

// -[SCChatInputTextViewContainer placeholderText]
// Type encoding: @16@0:8
// Implementation: 0x10657f628

// -[SCChatInputTextViewContainer shortPlaceholderText]
// Type encoding: @16@0:8
// Implementation: 0x10657f638

// -[SCChatInputTextViewContainer maximumNumberOfLines]
// Type encoding: d16@0:8
// Implementation: 0x10657f648

// -[SCChatInputTextViewContainer collapsesStackViewOnTextChange]
// Type encoding: B16@0:8
// Implementation: 0x10657f658

// -[SCChatInputTextViewContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10657f668

@end
