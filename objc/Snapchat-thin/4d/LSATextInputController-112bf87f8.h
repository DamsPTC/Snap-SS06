// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATextInputController
// Superclass: NSObject
// Address: 0x112bf87f8

@interface LSATextInputController

// Property: textView; attributes: T@"UITextView",R,N,V_textView
// Property: keyboardAccessoryViewHidden; attributes: TB,N,V_keyboardAccessoryViewHidden
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSATextInputController initWithParentView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ad859ec

// -[LSATextInputController initWithParentView:keyboardAccessoryView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ad859f4

// -[LSATextInputController keyboardWillChangeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad85e80

// -[LSATextInputController detachTextView]
// Type encoding: v16@0:8
// Implementation: 0x10ad861f4

// -[LSATextInputController reset]
// Type encoding: v16@0:8
// Implementation: 0x10ad862c0

// -[LSATextInputController _notifyRequest:description:code:data:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10ad862c4

// -[LSATextInputController _notifyBadRequest:description:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10ad863a8

// -[LSATextInputController _setSelectedTextRangeFrom:to:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10ad863b8

// -[LSATextInputController _notifyKeyboardIsOpen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad86504

// -[LSATextInputController _requestKeyboard:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad865dc

// -[LSATextInputController _dismissKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x10ad86be4

// -[LSATextInputController _setSelectedTextRange:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad86dac

// -[LSATextInputController _returnKeyTypeStringToEnum:]
// Type encoding: q24@0:8@16
// Implementation: 0x10ad87254

// -[LSATextInputController _keyboardTypeStringToEnum:]
// Type encoding: q24@0:8@16
// Implementation: 0x10ad87310

// -[LSATextInputController handleTextInputRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad87394

// -[LSATextInputController textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad875a0

// -[LSATextInputController textViewDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad87600

// -[LSATextInputController textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad87640

// -[LSATextInputController textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10ad87644

// -[LSATextInputController _provideTextInputDataFromTextView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad876cc

// -[LSATextInputController textView]
// Type encoding: @16@0:8
// Implementation: 0x10ad87a34

// -[LSATextInputController keyboardAccessoryViewHidden]
// Type encoding: B16@0:8
// Implementation: 0x10ad87a3c

// -[LSATextInputController setKeyboardAccessoryViewHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad87a44

// -[LSATextInputController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad87a4c

@end
