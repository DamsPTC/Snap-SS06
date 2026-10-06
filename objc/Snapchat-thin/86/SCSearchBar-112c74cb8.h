// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchBar
// Superclass: UIView
// Address: 0x112c74cb8

@interface SCSearchBar

// Property: searchIconView; attributes: T@"UIImageView",&,N,V_searchIconView
// Property: xButton; attributes: T@"UIButton",&,N,V_xButton
// Property: topBorderView; attributes: T@"UIView",&,N,V_topBorderView
// Property: bottomBorderView; attributes: T@"UIView",&,N,V_bottomBorderView
// Property: enteredText; attributes: TB,N,V_enteredText
// Property: delegate; attributes: T@"<SCSearchBarDelegate>",W,N,V_delegate
// Property: searchIconImage; attributes: T@"UIImage",&,N,V_searchIconImage
// Property: xButtonImage; attributes: T@"UIImage",&,N,V_xButtonImage
// Property: inputTextField; attributes: T@"SCPlaceholderTextField",&,N,V_inputTextField
// Property: needsTopBorder; attributes: TB,N,V_needsTopBorder
// Property: needsBottomBorder; attributes: TB,N,V_needsBottomBorder
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSearchBar initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2c2de0

// -[SCSearchBar xButton]
// Type encoding: @16@0:8
// Implementation: 0x10b2c39a4

// -[SCSearchBar intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2c3ca4

// -[SCSearchBar setNeedsTopBorder:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c3cfc

// -[SCSearchBar setNeedsBottomBorder:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c3d50

// -[SCSearchBar setSearchIconImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c3da4

// -[SCSearchBar setSearchIconLeftOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2c3e08

// -[SCSearchBar setXButtonImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c3f54

// -[SCSearchBar xButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10b2c3fbc

// -[SCSearchBar textFieldDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4038

// -[SCSearchBar textFieldDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c40c4

// -[SCSearchBar textFieldDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10b2c4144

// -[SCSearchBar textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b2c430c

// -[SCSearchBar textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10b2c43c0

// -[SCSearchBar setPlaceholder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c44a0

// -[SCSearchBar placeholder]
// Type encoding: @16@0:8
// Implementation: 0x10b2c44f0

// -[SCSearchBar setTintColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4534

// -[SCSearchBar setTextContentInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b2c45dc

// -[SCSearchBar setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4750

// -[SCSearchBar text]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4800

// -[SCSearchBar font]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4844

// -[SCSearchBar becomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2c4888

// -[SCSearchBar resignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2c48c4

// -[SCSearchBar isFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2c492c

// -[SCSearchBar keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4968

// -[SCSearchBar _iconXSignFillImage]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4a10

// -[SCSearchBar delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4a8c

// -[SCSearchBar setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4aac

// -[SCSearchBar searchIconImage]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4ac0

// -[SCSearchBar xButtonImage]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4ad0

// -[SCSearchBar inputTextField]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4ae0

// -[SCSearchBar setInputTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4af0

// -[SCSearchBar needsTopBorder]
// Type encoding: B16@0:8
// Implementation: 0x10b2c4b30

// -[SCSearchBar needsBottomBorder]
// Type encoding: B16@0:8
// Implementation: 0x10b2c4b40

// -[SCSearchBar searchIconView]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4b50

// -[SCSearchBar setSearchIconView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4b60

// -[SCSearchBar setXButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4ba0

// -[SCSearchBar topBorderView]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4be0

// -[SCSearchBar setTopBorderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4bf0

// -[SCSearchBar bottomBorderView]
// Type encoding: @16@0:8
// Implementation: 0x10b2c4c30

// -[SCSearchBar setBottomBorderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c4c40

// -[SCSearchBar enteredText]
// Type encoding: B16@0:8
// Implementation: 0x10b2c4c80

// -[SCSearchBar setEnteredText:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2c4c90

// -[SCSearchBar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2c4ca0

@end
