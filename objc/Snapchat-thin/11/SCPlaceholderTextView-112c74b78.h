// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaceholderTextView
// Superclass: UITextView
// Address: 0x112c74b78

@interface SCPlaceholderTextView

// Property: placeholderLabel; attributes: T@"UILabel",&,N,V_placeholderLabel
// Property: fontBeforeToggle; attributes: T@"UIFont",&,N,V_fontBeforeToggle
// Property: allowsVerticalScrolling; attributes: TB,N,V_allowsVerticalScrolling
// Property: placeholder; attributes: T@"NSString",&,N,V_placeholder
// Property: placeholderColor; attributes: T@"UIColor",&,N,V_placeholderColor
// Property: placeholderFont; attributes: T@"UIFont",&,N,V_placeholderFont
// Property: isRTL; attributes: TB,N,V_isRTL
// Property: pasteMediaDelegate; attributes: T@"<SCPlaceholderTextViewPasteMediaDelegate>",W,N,V_pasteMediaDelegate
// Property: visibilityDelegate; attributes: T@"<SCPlaceholderTextViewVisibilityDelegate>",W,N,V_visibilityDelegate
// Property: additionalPlaceholderLeadingHorizontalInset; attributes: Td,N,V_additionalPlaceholderLeadingHorizontalInset

// -[SCPlaceholderTextView init]
// Type encoding: @16@0:8
// Implementation: 0x10b2bdcb8

// -[SCPlaceholderTextView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2bdccc

// -[SCPlaceholderTextView initWithFrame:textContainer:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x10b2bdcd4

// -[SCPlaceholderTextView initWithFrame:textContainer:pasteMediaDelegate:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x10b2bdcdc

// -[SCPlaceholderTextView initPlaceholderLabel]
// Type encoding: v16@0:8
// Implementation: 0x10b2bde68

// -[SCPlaceholderTextView setFont:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bdfb0

// -[SCPlaceholderTextView resetTypingAttributes]
// Type encoding: v16@0:8
// Implementation: 0x10b2be020

// -[SCPlaceholderTextView setPlaceholder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2be170

// -[SCPlaceholderTextView setIsRTL:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2be220

// -[SCPlaceholderTextView setPlaceholderColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2be230

// -[SCPlaceholderTextView setPlaceholderFont:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2be2a8

// -[SCPlaceholderTextView setPlaceholderNumberOfLines:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2be320

// -[SCPlaceholderTextView setTextContainerInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b2be358

// -[SCPlaceholderTextView shouldShowPlaceholderLabel]
// Type encoding: B16@0:8
// Implementation: 0x10b2be410

// -[SCPlaceholderTextView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b2be488

// -[SCPlaceholderTextView setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2be79c

// -[SCPlaceholderTextView textChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2be80c

// -[SCPlaceholderTextView setAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2be850

// -[SCPlaceholderTextView becomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2be8c0

// -[SCPlaceholderTextView resignFirstResponderIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10b2be954

// -[SCPlaceholderTextView resignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2be9d8

// -[SCPlaceholderTextView canPerformAction:withSender:]
// Type encoding: B32@0:8:16@24
// Implementation: 0x10b2bea68

// -[SCPlaceholderTextView canPasteImage]
// Type encoding: B16@0:8
// Implementation: 0x10b2beb4c

// -[SCPlaceholderTextView canPasteText]
// Type encoding: B16@0:8
// Implementation: 0x10b2bebb8

// -[SCPlaceholderTextView paste:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bebd4

// -[SCPlaceholderTextView _imageFromPasteboard:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2bed0c

// -[SCPlaceholderTextView toggleItalics:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bedb8

// -[SCPlaceholderTextView toggleBoldface:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bee14

// -[SCPlaceholderTextView toggleUnderline:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bee70

// -[SCPlaceholderTextView hideMenuItemsBeforeToggle]
// Type encoding: v16@0:8
// Implementation: 0x10b2beed4

// -[SCPlaceholderTextView showMenuItemsAfterToggle]
// Type encoding: v16@0:8
// Implementation: 0x10b2bef14

// -[SCPlaceholderTextView toggleItalicsForRange:]
// Type encoding: v32@0:8{_NSRange=QQ}16
// Implementation: 0x10b2bf034

// -[SCPlaceholderTextView toggleBoldfaceForRange:]
// Type encoding: v32@0:8{_NSRange=QQ}16
// Implementation: 0x10b2bf204

// -[SCPlaceholderTextView toggleUnderlineForRange:]
// Type encoding: v32@0:8{_NSRange=QQ}16
// Implementation: 0x10b2bf3d4

// -[SCPlaceholderTextView fontAfterToggleItalicsForFont:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2bf5d8

// -[SCPlaceholderTextView fontAfterToggleBoldfaceForFont:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2bf65c

// -[SCPlaceholderTextView allowsVerticalScrolling]
// Type encoding: B16@0:8
// Implementation: 0x10b2bf748

// -[SCPlaceholderTextView setAllowsVerticalScrolling:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2bf758

// -[SCPlaceholderTextView placeholder]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf768

// -[SCPlaceholderTextView placeholderColor]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf778

// -[SCPlaceholderTextView placeholderFont]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf788

// -[SCPlaceholderTextView placeholderLabel]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf798

// -[SCPlaceholderTextView setPlaceholderLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bf7a8

// -[SCPlaceholderTextView isRTL]
// Type encoding: B16@0:8
// Implementation: 0x10b2bf7e8

// -[SCPlaceholderTextView pasteMediaDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf7f8

// -[SCPlaceholderTextView setPasteMediaDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bf818

// -[SCPlaceholderTextView visibilityDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf82c

// -[SCPlaceholderTextView setVisibilityDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bf84c

// -[SCPlaceholderTextView additionalPlaceholderLeadingHorizontalInset]
// Type encoding: d16@0:8
// Implementation: 0x10b2bf860

// -[SCPlaceholderTextView setAdditionalPlaceholderLeadingHorizontalInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2bf870

// -[SCPlaceholderTextView fontBeforeToggle]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf880

// -[SCPlaceholderTextView setFontBeforeToggle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2bf890

// -[SCPlaceholderTextView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2bf8d0

// +[SCPlaceholderTextView grayPlaceholderTextColor]
// Type encoding: @16@0:8
// Implementation: 0x10b2bf730

@end
