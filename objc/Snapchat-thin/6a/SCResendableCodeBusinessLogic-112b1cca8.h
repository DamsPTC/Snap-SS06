// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCResendableCodeBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x112b1cca8

@interface SCResendableCodeBusinessLogic

// Property: delegate; attributes: T@"<SCResendableCodeDelegate>",W,N,Vdelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCResendableCodeBusinessLogic initWithMinimumCodeLength:autoSubmit:useContinueForResend:initialCounterValue:submitCodePrompt:resendCodePrompt:countDownTimer:]
// Type encoding: @64@0:8Q16B24B28Q32@40@48@56
// Implementation: 0x106b8c42c

// -[SCResendableCodeBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x106b8c58c

// -[SCResendableCodeBusinessLogic canInitiateCodeResend:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106b8c5d4

// -[SCResendableCodeBusinessLogic codeSent]
// Type encoding: v16@0:8
// Implementation: 0x106b8c72c

// -[SCResendableCodeBusinessLogic _startCountdown]
// Type encoding: v16@0:8
// Implementation: 0x106b8c79c

// -[SCResendableCodeBusinessLogic initiateCodeResendForced:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b8c99c

// -[SCResendableCodeBusinessLogic updateCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b8c9dc

// -[SCResendableCodeBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106b8ca38

// -[SCResendableCodeBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b8cb14

// -[SCResendableCodeBusinessLogic _submitCode]
// Type encoding: v16@0:8
// Implementation: 0x106b8ccf4

// -[SCResendableCodeBusinessLogic _resendCode]
// Type encoding: v16@0:8
// Implementation: 0x106b8ce90

// -[SCResendableCodeBusinessLogic _codeSubmissionOrResendFailed]
// Type encoding: B16@0:8
// Implementation: 0x106b8d014

// -[SCResendableCodeBusinessLogic _codeIsUnverified]
// Type encoding: B16@0:8
// Implementation: 0x106b8d048

// -[SCResendableCodeBusinessLogic _codeIsIncorrect]
// Type encoding: B16@0:8
// Implementation: 0x106b8d060

// -[SCResendableCodeBusinessLogic _timerExpired]
// Type encoding: B16@0:8
// Implementation: 0x106b8d078

// -[SCResendableCodeBusinessLogic _canInitiateCodeResend]
// Type encoding: B16@0:8
// Implementation: 0x106b8d090

// -[SCResendableCodeBusinessLogic _canSubmitCode]
// Type encoding: B16@0:8
// Implementation: 0x106b8d0dc

// -[SCResendableCodeBusinessLogic _buttonEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106b8d130

// -[SCResendableCodeBusinessLogic _buttonTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b8d1a4

// -[SCResendableCodeBusinessLogic _resendCountdownTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b8d25c

// -[SCResendableCodeBusinessLogic _resendButtonTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b8d2d4

// -[SCResendableCodeBusinessLogic delegate]
// Type encoding: @16@0:8
// Implementation: 0x106b8d308

// -[SCResendableCodeBusinessLogic setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b8d328

// -[SCResendableCodeBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b8d33c

@end
