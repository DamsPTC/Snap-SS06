// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecoverPasswordWorkflow
// Superclass: NSObject
// Address: 0x112b192d8

@interface SCRecoverPasswordWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRecoverPasswordWorkflow initWithRouter:delegate:logger:usernameOrEmail:accountRecoveryViaSignIn:loginLogger:loginStateTransitionLogger:]
// Type encoding: @68@0:8@16@24@32@40B48@52@60
// Implementation: 0x106b648b0

// -[SCRecoverPasswordWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x106b64a04

// -[SCRecoverPasswordWorkflow recoverPasswordAlertDidCancel]
// Type encoding: v16@0:8
// Implementation: 0x106b64a6c

// -[SCRecoverPasswordWorkflow recoverPasswordViaPhone]
// Type encoding: v16@0:8
// Implementation: 0x106b64a98

// -[SCRecoverPasswordWorkflow recoverPasswordViaEmail]
// Type encoding: v16@0:8
// Implementation: 0x106b64b64

// -[SCRecoverPasswordWorkflow recoverPasswordViaEmailExited]
// Type encoding: v16@0:8
// Implementation: 0x106b64c5c

// -[SCRecoverPasswordWorkflow recoverPasswordPhoneEntryExited]
// Type encoding: v16@0:8
// Implementation: 0x106b64c88

// -[SCRecoverPasswordWorkflow passwordResetInitiatedWithPhone:passwordResetToken:codeSentViaSMS:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106b64cc0

// -[SCRecoverPasswordWorkflow userChallengedCOS:phoneNumber:clientRequestId:authSessionPayload:optedIn1TL:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x106b64db4

// -[SCRecoverPasswordWorkflow magicCodeEncounteredWithPhone:optedIn1TL:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106b64f1c

// -[SCRecoverPasswordWorkflow usernameChallengeEncounteredWithPhone:codeSentViaSMS:maskedUsername:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106b64ffc

// -[SCRecoverPasswordWorkflow userChallengeEncounteredWithPhone:codeSentViaSMS:challengePrompts:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106b65130

// -[SCRecoverPasswordWorkflow recoverPasswordPhoneEntrySelectedRecoveryViaEmail:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b65218

// -[SCRecoverPasswordWorkflow userChallengeCompletedWithPasswordResetToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b652ec

// -[SCRecoverPasswordWorkflow userChallengeExited]
// Type encoding: v16@0:8
// Implementation: 0x106b653cc

// -[SCRecoverPasswordWorkflow usernameChallengeCompletedWithUsername:passwordResetToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b6546c

// -[SCRecoverPasswordWorkflow usernameChallengeExit]
// Type encoding: v16@0:8
// Implementation: 0x106b65578

// -[SCRecoverPasswordWorkflow userTapsOnURLFromUsernameChallengeResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b65618

// -[SCRecoverPasswordWorkflow chooseNewPasswordSucceededWithPassword:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b656ec

// -[SCRecoverPasswordWorkflow chooseNewPasswordFailedWithExpiredPasswordResetToken]
// Type encoding: v16@0:8
// Implementation: 0x106b657cc

// -[SCRecoverPasswordWorkflow chooseNewPasswordExited]
// Type encoding: v16@0:8
// Implementation: 0x106b6586c

// -[SCRecoverPasswordWorkflow passwordResetSuccessAcknowledged]
// Type encoding: v16@0:8
// Implementation: 0x106b65898

// -[SCRecoverPasswordWorkflow showInAppSupport]
// Type encoding: v16@0:8
// Implementation: 0x106b658cc

// -[SCRecoverPasswordWorkflow supportScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106b65930

// -[SCRecoverPasswordWorkflow webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b65948

// -[SCRecoverPasswordWorkflow codeVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x106b65a14

// -[SCRecoverPasswordWorkflow codeVerificationExitedWithUnretryableError]
// Type encoding: v16@0:8
// Implementation: 0x106b65a2c

// -[SCRecoverPasswordWorkflow codeVerificationFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b65a44

// -[SCRecoverPasswordWorkflow emailEntryExited]
// Type encoding: v16@0:8
// Implementation: 0x106b65be4

// -[SCRecoverPasswordWorkflow emailEntryLinkSelectedWithURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b65c10

// -[SCRecoverPasswordWorkflow emailEntryExitedWithUnretryableError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b65cb4

// -[SCRecoverPasswordWorkflow emailEntryFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b65d54

// -[SCRecoverPasswordWorkflow COSChallengeAbandoned]
// Type encoding: v16@0:8
// Implementation: 0x106b660ac

// -[SCRecoverPasswordWorkflow COSChallengeCompletedWithBootStrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b660b0

// -[SCRecoverPasswordWorkflow COSChallengeErrorWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b66198

// -[SCRecoverPasswordWorkflow logOnCOSChallengeReceivedWithChallengeType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b661c4

// -[SCRecoverPasswordWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106b661c8

// -[SCRecoverPasswordWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:]
// Type encoding: v56@0:8q16q24q32q40@48
// Implementation: 0x106b66224

// -[SCRecoverPasswordWorkflow _getEmailFromUsername]
// Type encoding: @16@0:8
// Implementation: 0x106b66308

// -[SCRecoverPasswordWorkflow _getLoginIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106b66350

// -[SCRecoverPasswordWorkflow _loginSource]
// Type encoding: q16@0:8
// Implementation: 0x106b66400

// -[SCRecoverPasswordWorkflow _loginIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106b664f0

// -[SCRecoverPasswordWorkflow _logCodeAttemptedWithRequestedId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b666d4

// -[SCRecoverPasswordWorkflow _logCodeSuccessWithRequestedId:grpcStatusCode:protoStatusCode:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106b66790

// -[SCRecoverPasswordWorkflow _logCodeFailureWithNetworkRequestId:grpcStatusCode:protoStatusCode:errorType:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x106b66860

// -[SCRecoverPasswordWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b6697c

@end
