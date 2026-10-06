// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecoverPasswordLogger
// Superclass: NSObject
// Address: 0x112b190f8

@interface SCRecoverPasswordLogger


// -[SCRecoverPasswordLogger initWithApplicationPreferences:userNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:deviceInfoProvider:deepLinkInfoService:authenticationSessionInfoProvider:loginFlowUUID:countryCode:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x106b5cbd8

// -[SCRecoverPasswordLogger logForgotPasswordDialogue]
// Type encoding: v16@0:8
// Implementation: 0x106b5ce18

// -[SCRecoverPasswordLogger logForgotPasswordStrategy:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5cec0

// -[SCRecoverPasswordLogger logResetPasswordPageView:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5cf64

// -[SCRecoverPasswordLogger logResetPasswordPageViewWithContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d01c

// -[SCRecoverPasswordLogger logResetPasswordSuccess:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d09c

// -[SCRecoverPasswordLogger logResetPasswordFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d12c

// -[SCRecoverPasswordLogger logResetPasswordAbandoned]
// Type encoding: v16@0:8
// Implementation: 0x106b5d1ac

// -[SCRecoverPasswordLogger logResetPasswordSendPhoneCodeWithContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d1b8

// -[SCRecoverPasswordLogger logResetPasswordSendPhoneCodeSucceedWithContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d1c4

// -[SCRecoverPasswordLogger logResetPasswordSendPhoneCodeFailWithContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d1d0

// -[SCRecoverPasswordLogger logResetPasswordVerifyPhoneCode]
// Type encoding: v16@0:8
// Implementation: 0x106b5d1dc

// -[SCRecoverPasswordLogger logResetPasswordVerifyPhoneCodeSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106b5d1e4

// -[SCRecoverPasswordLogger logResetPasswordVerifyPhoneCodeFail]
// Type encoding: v16@0:8
// Implementation: 0x106b5d1ec

// -[SCRecoverPasswordLogger logResetPasswordChangePassword]
// Type encoding: v16@0:8
// Implementation: 0x106b5d1f4

// -[SCRecoverPasswordLogger logResetPasswordChangePasswordSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106b5d1fc

// -[SCRecoverPasswordLogger logResetPasswordChangePasswordFail]
// Type encoding: v16@0:8
// Implementation: 0x106b5d204

// -[SCRecoverPasswordLogger logResetPasswordCheckPasswordStrength]
// Type encoding: v16@0:8
// Implementation: 0x106b5d20c

// -[SCRecoverPasswordLogger logResetPasswordCheckPasswordStrengthSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106b5d214

// -[SCRecoverPasswordLogger logResetPasswordCheckPasswordStrengthFail]
// Type encoding: v16@0:8
// Implementation: 0x106b5d21c

// -[SCRecoverPasswordLogger _prepare]
// Type encoding: v16@0:8
// Implementation: 0x106b5d224

// -[SCRecoverPasswordLogger _getResetPasswordUUID]
// Type encoding: @16@0:8
// Implementation: 0x106b5d2fc

// -[SCRecoverPasswordLogger _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b5d3b8

// -[SCRecoverPasswordLogger _logGrapheneWithPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d438

// -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b5d558

// -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:context:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106b5d560

// -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:context:credential:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x106b5d568

// -[SCRecoverPasswordLogger _logAccountRecoveryFlowWithAction:context:credential:strategy:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x106b5d570

// -[SCRecoverPasswordLogger _createLoginMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106b5dacc

// -[SCRecoverPasswordLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b5db28

@end
