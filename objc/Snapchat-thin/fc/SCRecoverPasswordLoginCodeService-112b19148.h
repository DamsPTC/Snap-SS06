// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecoverPasswordLoginCodeService
// Superclass: NSObject
// Address: 0x112b19148

@interface SCRecoverPasswordLoginCodeService


// -[SCRecoverPasswordLoginCodeService initWithLoginService:passwordResetInitiator:loginLogger:loginStateTransitionLogger:networkRequestIdProvider:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x106b5dbdc

// -[SCRecoverPasswordLoginCodeService submitEmail:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106b5dd04

// -[SCRecoverPasswordLoginCodeService _loginWithEmailPasswordSuccess:networkRequestId:submitRequestTime:failureBlock:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x106b5e30c

// -[SCRecoverPasswordLoginCodeService _loginWithEmailPasswordFailure:networkRequestId:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24d32@?40@?48
// Implementation: 0x106b5e42c

// -[SCRecoverPasswordLoginCodeService initiatePasswordResetForUser:sendingVerificationCodeTo:withDeliveryMechanism:completion:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x106b5e764

// -[SCRecoverPasswordLoginCodeService _loginWithPhonePasswordSuccess:usernameOrEmail:phoneNumber:deliveryMechanism:networkRequestId:submitRequestTime:completion:]
// Type encoding: v72@0:8@16@24@32Q40@48d56@?64
// Implementation: 0x106b5edd0

// -[SCRecoverPasswordLoginCodeService _loginWithPhonePasswordFailure:usernameOrEmail:phoneNumber:deliveryMechanism:networkRequestId:submitRequestTime:completion:]
// Type encoding: v72@0:8@16@24@32Q40@48d56@?64
// Implementation: 0x106b5ef08

// -[SCRecoverPasswordLoginCodeService requestCodeResendWithSuccessBlock:failureBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106b5f250

// -[SCRecoverPasswordLoginCodeService _resendMagicCodeFailure:errorMessage:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x106b5f464

// -[SCRecoverPasswordLoginCodeService verifyCodeWithCode:isAutofill:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x106b5f4c8

// -[SCRecoverPasswordLoginCodeService _verifyCodeSuccess:networkRequestId:successBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106b5f808

// -[SCRecoverPasswordLoginCodeService _verifyCodeFailure:networkRequestId:failureBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106b5f94c

// -[SCRecoverPasswordLoginCodeService _loginIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106b60040

// -[SCRecoverPasswordLoginCodeService _loginSource]
// Type encoding: q16@0:8
// Implementation: 0x106b6020c

// -[SCRecoverPasswordLoginCodeService _requestMagicCodeResultFromLoginError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b602fc

// -[SCRecoverPasswordLoginCodeService _didRequestMagicCodeSucceed:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b606c8

// -[SCRecoverPasswordLoginCodeService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b607f4

@end
