// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuthenticatedPhoneServiceGrpcImpl
// Superclass: NSObject
// Address: 0x112a35088

@interface SCAuthenticatedPhoneServiceGrpcImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuthenticatedPhoneServiceGrpcImpl initWithGrpcPhoneErollmentService:clientRequestIdProvider:clientIdProvider:deviceIdentifierProvider:networkLoggingService:registrationLogger:phoneServiceLogger:userTwoFAServices:]
// Type encoding: @80@0:8@16@?24@32@40@48@56@64@72
// Implementation: 0x10540159c

// -[SCAuthenticatedPhoneServiceGrpcImpl updatePhoneNumber:countryCode:phoneVerifyToken:authSessionPayload:phoneCall:reverified:isForResend:phoneVerificationType:successBlock:failureBlock:]
// Type encoding: v84@0:8@16@24@32@40B48B52B56Q60@?68@?76
// Implementation: 0x105401748

// -[SCAuthenticatedPhoneServiceGrpcImpl _handleSetPhoneNumberResponse:error:phoneNumber:countryCode:clientRequestId:submitRequestTime:phoneVerificationType:isForResend:successBlock:failureBlock:]
// Type encoding: v92@0:8@16@24@32@40@48d56Q64B72@?76@?84
// Implementation: 0x105401cdc

// -[SCAuthenticatedPhoneServiceGrpcImpl _handleAlreadyVerifiedOrDirectUpdateWithResponse:phoneVerificationType:phoneNumber:successBlock:failureBlock:]
// Type encoding: v56@0:8@16Q24@32@?40@?48
// Implementation: 0x105402160

// -[SCAuthenticatedPhoneServiceGrpcImpl verifyPhoneWithCode:phoneVerifyToken:authSessionPayload:phoneVerificationType:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32Q40@?48@?56
// Implementation: 0x105402500

// -[SCAuthenticatedPhoneServiceGrpcImpl _handleConfirmPhoneNumberResponse:error:phoneVerificationType:clientRequestId:submitRequestTime:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24Q32@40d48@?56@?64
// Implementation: 0x1054028e0

// -[SCAuthenticatedPhoneServiceGrpcImpl _handlePhoneNumberUpdatedWithResponse:phoneVerificationType:successBlock:failureBlock:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x105402cc0

// -[SCAuthenticatedPhoneServiceGrpcImpl reportPhoneVerifyExit:countryCode:phoneVerificationType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1054030e0

// -[SCAuthenticatedPhoneServiceGrpcImpl _handleReportPhoneVerifyExitReponse:error:clientRequestId:submitRequestTime:phoneVerificationType:]
// Type encoding: v56@0:8@16@24@32d40Q48
// Implementation: 0x105403424

// -[SCAuthenticatedPhoneServiceGrpcImpl _errorAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x10540362c

// -[SCAuthenticatedPhoneServiceGrpcImpl _requestHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x10540371c

// -[SCAuthenticatedPhoneServiceGrpcImpl _clientRequestHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054037f4

// -[SCAuthenticatedPhoneServiceGrpcImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054038cc

@end
