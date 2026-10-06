// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTextView
// Superclass: UIView
// Address: 0x112c74ee8

@interface SCTextView

// Property: isHighlighted; attributes: TB,N,V_isHighlighted
// Property: xButton; attributes: T@"SCExtendedHitButton",&,N,V_xButton
// Property: separator; attributes: T@"UIView",&,N,V_separator
// Property: errorLabel; attributes: T@"TTTAttributedLabel",&,N,V_errorLabel
// Property: madeFirstChange; attributes: TB,N,V_madeFirstChange
// Property: nonerrorBackgroundColor; attributes: T@"UIColor",&,N,V_nonerrorBackgroundColor
// Property: showSeparator; attributes: TB,N,V_showSeparator
// Property: shouldPreventTextClearOnError; attributes: TB,N,V_shouldPreventTextClearOnError
// Property: height; attributes: T@"NSNumber",&,N,V_height
// Property: delegate; attributes: T@"<SCTextViewDelegate>",W,N,V_delegate
// Property: text; attributes: T@"NSString",C,N
// Property: textField; attributes: T@"UITextField",&,N,V_textField
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTextView initWithHeight:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2c6acc

// -[SCTextView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2c6b00

// -[SCTextView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b2c7fb4

// -[SCTextView setAccessibilityIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c7ff8

// -[SCTextView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2c80b8

// -[SCTextView removeTextFieldInset]
// Type encoding: v16@0:8
// Implementation: 0x10b2c81ac

// -[SCTextView getTextFieldMASAttribute:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b2c8360

// -[SCTextView setBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c83d0

// -[SCTextView setTextColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c8434

// -[SCTextView shouldShowSeparator:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c8484

// -[SCTextView isXButtonShown]
// Type encoding: B16@0:8
// Implementation: 0x10b2c84c8

// -[SCTextView setPlaceholder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c8504

// -[SCTextView setPlaceholder:color:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2c8590

// -[SCTextView setAttributedPlaceholder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c860c

// -[SCTextView setAttributedPlaceholder:color:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2c8694

// -[SCTextView setReturnKeyType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2c87ac

// -[SCTextView clearInput]
// Type encoding: v16@0:8
// Implementation: 0x10b2c87e4

// -[SCTextView text]
// Type encoding: @16@0:8
// Implementation: 0x10b2c8850

// -[SCTextView setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c8894

// -[SCTextView setKeyboardType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2c88e4

// -[SCTextView setAutocorrectionType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2c891c

// -[SCTextView setSecureTextEntry:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c8954

// -[SCTextView isSecureTextEntry]
// Type encoding: B16@0:8
// Implementation: 0x10b2c898c

// -[SCTextView setAutoCapitalizationType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2c89c8

// -[SCTextView preventTextClearOnError]
// Type encoding: v16@0:8
// Implementation: 0x10b2c8a00

// -[SCTextView removeDelegate]
// Type encoding: v16@0:8
// Implementation: 0x10b2c8a08

// -[SCTextView becomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2c8a3c

// -[SCTextView resignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2c8a78

// -[SCTextView selectAll]
// Type encoding: v16@0:8
// Implementation: 0x10b2c8ae0

// -[SCTextView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c8b14

// -[SCTextView textFieldShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b2c8cbc

// -[SCTextView textFieldDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c8d58

// -[SCTextView textFieldDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c8dd8

// -[SCTextView textFieldDidMakeFirstEdit:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c8e58

// -[SCTextView textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b2c8ed8

// -[SCTextView textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10b2c8f5c

// -[SCTextView attributedLabel:didSelectLinkWithURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2c9014

// -[SCTextView isInErrorState]
// Type encoding: B16@0:8
// Implementation: 0x10b2c90a8

// -[SCTextView setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c9134

// -[SCTextView setWarningWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c9140

// -[SCTextView setError:toggleBackground:toggleXButton:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10b2c94cc

// -[SCTextView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2c9908

// -[SCTextView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c9928

// -[SCTextView textField]
// Type encoding: @16@0:8
// Implementation: 0x10b2c993c

// -[SCTextView setTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c994c

// -[SCTextView isHighlighted]
// Type encoding: B16@0:8
// Implementation: 0x10b2c998c

// -[SCTextView setIsHighlighted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c999c

// -[SCTextView xButton]
// Type encoding: @16@0:8
// Implementation: 0x10b2c99ac

// -[SCTextView setXButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c99bc

// -[SCTextView separator]
// Type encoding: @16@0:8
// Implementation: 0x10b2c99fc

// -[SCTextView setSeparator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c9a0c

// -[SCTextView errorLabel]
// Type encoding: @16@0:8
// Implementation: 0x10b2c9a4c

// -[SCTextView setErrorLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c9a5c

// -[SCTextView madeFirstChange]
// Type encoding: B16@0:8
// Implementation: 0x10b2c9a9c

// -[SCTextView setMadeFirstChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c9aac

// -[SCTextView nonerrorBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x10b2c9abc

// -[SCTextView setNonerrorBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c9acc

// -[SCTextView showSeparator]
// Type encoding: B16@0:8
// Implementation: 0x10b2c9b0c

// -[SCTextView setShowSeparator:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c9b1c

// -[SCTextView shouldPreventTextClearOnError]
// Type encoding: B16@0:8
// Implementation: 0x10b2c9b2c

// -[SCTextView setShouldPreventTextClearOnError:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c9b3c

// -[SCTextView height]
// Type encoding: @16@0:8
// Implementation: 0x10b2c9b4c

// -[SCTextView setHeight:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c9b5c

// -[SCTextView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2c9b9c

@end
