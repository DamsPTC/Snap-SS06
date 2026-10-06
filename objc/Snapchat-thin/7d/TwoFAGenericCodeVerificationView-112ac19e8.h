// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TwoFAGenericCodeVerificationView
// Superclass: UIView
// Address: 0x112ac19e8

@interface TwoFAGenericCodeVerificationView

// Property: infoText; attributes: T@"NSString",&,N,V_infoText
// Property: type; attributes: TQ,N,V_type
// Property: scrollView; attributes: T@"UIScrollView",&,N,V_scrollView
// Property: infoLabel; attributes: T@"TTTAttributedLabel",&,N,V_infoLabel
// Property: verificationCodeField; attributes: T@"SCTextView",&,N,V_verificationCodeField
// Property: header; attributes: T@"SCHeader",&,N,V_header
// Property: continueButton; attributes: T@"SCButton",&,N,V_continueButton
// Property: couldResendCode; attributes: TB,N,V_couldResendCode
// Property: timerForResendCode; attributes: T@"NSTimer",&,N,V_timerForResendCode
// Property: timerCountdownString; attributes: T@"NSString",&,N,V_timerCountdownString
// Property: resendCodeTimeLimit; attributes: Tq,N,V_resendCodeTimeLimit
// Property: delegate; attributes: T@"<TwoFAGenericCodeVerificationDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[TwoFAGenericCodeVerificationView initWithInfoText:type:userBlizzard:customAppThemeProvider:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x106062f64

// -[TwoFAGenericCodeVerificationView loadView]
// Type encoding: v16@0:8
// Implementation: 0x10606307c

// -[TwoFAGenericCodeVerificationView initHeader]
// Type encoding: v16@0:8
// Implementation: 0x106063474

// -[TwoFAGenericCodeVerificationView createInfoLabel]
// Type encoding: v16@0:8
// Implementation: 0x1060636bc

// -[TwoFAGenericCodeVerificationView createVerificationCodeTextField]
// Type encoding: v16@0:8
// Implementation: 0x106063cf4

// -[TwoFAGenericCodeVerificationView createContinueButton]
// Type encoding: v16@0:8
// Implementation: 0x106064054

// -[TwoFAGenericCodeVerificationView setIsWorking:]
// Type encoding: v20@0:8B16
// Implementation: 0x106064434

// -[TwoFAGenericCodeVerificationView textColorForView]
// Type encoding: @16@0:8
// Implementation: 0x106064500

// -[TwoFAGenericCodeVerificationView leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106064510

// -[TwoFAGenericCodeVerificationView continueButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106064548

// -[TwoFAGenericCodeVerificationView textViewShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x106064a10

// -[TwoFAGenericCodeVerificationView textViewShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x106064a18

// -[TwoFAGenericCodeVerificationView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106064a20

// -[TwoFAGenericCodeVerificationView textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106064d98

// -[TwoFAGenericCodeVerificationView viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106064d9c

// -[TwoFAGenericCodeVerificationView keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106064e50

// -[TwoFAGenericCodeVerificationView keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065124

// -[TwoFAGenericCodeVerificationView isOTPCodeType]
// Type encoding: B16@0:8
// Implementation: 0x106065204

// -[TwoFAGenericCodeVerificationView isSMSCodeType]
// Type encoding: B16@0:8
// Implementation: 0x106065244

// -[TwoFAGenericCodeVerificationView setcontinueButtonTitleForStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065284

// -[TwoFAGenericCodeVerificationView setErrorMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065380

// -[TwoFAGenericCodeVerificationView resetTimerCountdownText]
// Type encoding: v16@0:8
// Implementation: 0x1060653d0

// -[TwoFAGenericCodeVerificationView updateCountdownLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10606559c

// -[TwoFAGenericCodeVerificationView _logUserPhoneVerificationSuccess]
// Type encoding: v16@0:8
// Implementation: 0x106065908

// -[TwoFAGenericCodeVerificationView scrollView]
// Type encoding: @16@0:8
// Implementation: 0x106065998

// -[TwoFAGenericCodeVerificationView setScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060659a8

// -[TwoFAGenericCodeVerificationView header]
// Type encoding: @16@0:8
// Implementation: 0x1060659e8

// -[TwoFAGenericCodeVerificationView setHeader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060659f8

// -[TwoFAGenericCodeVerificationView infoLabel]
// Type encoding: @16@0:8
// Implementation: 0x106065a38

// -[TwoFAGenericCodeVerificationView setInfoLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065a48

// -[TwoFAGenericCodeVerificationView verificationCodeField]
// Type encoding: @16@0:8
// Implementation: 0x106065a88

// -[TwoFAGenericCodeVerificationView setVerificationCodeField:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065a98

// -[TwoFAGenericCodeVerificationView delegate]
// Type encoding: @16@0:8
// Implementation: 0x106065ad8

// -[TwoFAGenericCodeVerificationView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065af8

// -[TwoFAGenericCodeVerificationView infoText]
// Type encoding: @16@0:8
// Implementation: 0x106065b0c

// -[TwoFAGenericCodeVerificationView setInfoText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065b1c

// -[TwoFAGenericCodeVerificationView type]
// Type encoding: Q16@0:8
// Implementation: 0x106065b5c

// -[TwoFAGenericCodeVerificationView setType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106065b6c

// -[TwoFAGenericCodeVerificationView continueButton]
// Type encoding: @16@0:8
// Implementation: 0x106065b7c

// -[TwoFAGenericCodeVerificationView setContinueButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065b8c

// -[TwoFAGenericCodeVerificationView couldResendCode]
// Type encoding: B16@0:8
// Implementation: 0x106065bcc

// -[TwoFAGenericCodeVerificationView setCouldResendCode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106065bdc

// -[TwoFAGenericCodeVerificationView timerForResendCode]
// Type encoding: @16@0:8
// Implementation: 0x106065bec

// -[TwoFAGenericCodeVerificationView setTimerForResendCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065bfc

// -[TwoFAGenericCodeVerificationView timerCountdownString]
// Type encoding: @16@0:8
// Implementation: 0x106065c3c

// -[TwoFAGenericCodeVerificationView setTimerCountdownString:]
// Type encoding: v24@0:8@16
// Implementation: 0x106065c4c

// -[TwoFAGenericCodeVerificationView resendCodeTimeLimit]
// Type encoding: q16@0:8
// Implementation: 0x106065c8c

// -[TwoFAGenericCodeVerificationView setResendCodeTimeLimit:]
// Type encoding: v24@0:8q16
// Implementation: 0x106065c9c

// -[TwoFAGenericCodeVerificationView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106065cac

@end
