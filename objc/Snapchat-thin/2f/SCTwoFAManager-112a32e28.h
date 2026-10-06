// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTwoFAManager
// Superclass: NSObject
// Address: 0x112a32e28

@interface SCTwoFAManager

// Property: isTwoFASmsEnabled; attributes: TB,N,V_isTwoFASmsEnabled
// Property: isTwoFAOtpEnabled; attributes: TB,N,V_isTwoFAOtpEnabled
// Property: authLogger; attributes: T@"SCAuthMetricsLogger",&,N,V_authLogger
// Property: userTwoFALogger; attributes: T@"SCUserTwoFALogger",&,N,V_userTwoFALogger

// -[SCTwoFAManager encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053dd0a4

// -[SCTwoFAManager initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053dd15c

// -[SCTwoFAManager setLoginResponseSmsTFAEnabled:otpTFAEnabled:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1053dd22c

// -[SCTwoFAManager saveState]
// Type encoding: B16@0:8
// Implementation: 0x1053dd258

// -[SCTwoFAManager clear]
// Type encoding: v16@0:8
// Implementation: 0x1053dd2d4

// -[SCTwoFAManager isTwoFAEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1053dd300

// -[SCTwoFAManager isTwoFADisabled]
// Type encoding: B16@0:8
// Implementation: 0x1053dd338

// -[SCTwoFAManager updateUserTwoFAStatus:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053dd350

// -[SCTwoFAManager sendSMSTwoFACodeWithUserNetworkServices:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1053dd404

// -[SCTwoFAManager forgetAllDevicesWithUserNetworkServices:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1053dd878

// -[SCTwoFAManager forgetOneDeviceWithId:userNetworkServices:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1053ddcec

// -[SCTwoFAManager generateRecoveryCodeWithUserNetworkServices:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1053de17c

// -[SCTwoFAManager enableSMSTFAWithUserNetworkServices:deviceIdManager:smsCode:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1053de604

// -[SCTwoFAManager enableOTPTFAWithUserNetworkServices:deviceIdManager:otpSecret:otpCode:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x1053deb58

// -[SCTwoFAManager disableSMSTFAWithUserNetworkServices:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1053df0a0

// -[SCTwoFAManager disableOTPTFAWithUserNetworkServices:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1053df550

// -[SCTwoFAManager fetchVerifiedDevicesWithUserNetworkServices:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1053dfa00

// -[SCTwoFAManager _callAuthServiceAPIWithUserNetworkServices:Endpoint:data:requestCallback:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1053dfdb4

// -[SCTwoFAManager _extractErrorMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053dffac

// -[SCTwoFAManager _logServiceResponseForEndpoint:httpStatusCode:metadata:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1053e0034

// -[SCTwoFAManager _parseProtoVerifiedDevices:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e00ac

// -[SCTwoFAManager _logEnableSMSTwoFAResponse:statusCode:latencyMS:metadata:]
// Type encoding: v44@0:8B16q20d28@36
// Implementation: 0x1053e0294

// -[SCTwoFAManager authLogger]
// Type encoding: @16@0:8
// Implementation: 0x1053e032c

// -[SCTwoFAManager setAuthLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e0334

// -[SCTwoFAManager userTwoFALogger]
// Type encoding: @16@0:8
// Implementation: 0x1053e0364

// -[SCTwoFAManager setUserTwoFALogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e036c

// -[SCTwoFAManager isTwoFASmsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1053e039c

// -[SCTwoFAManager setIsTwoFASmsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053e03a4

// -[SCTwoFAManager isTwoFAOtpEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1053e03ac

// -[SCTwoFAManager setIsTwoFAOtpEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053e03b4

// -[SCTwoFAManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e03bc

// +[SCTwoFAManager SCGetCachedTwoFAManager]
// Type encoding: @16@0:8
// Implementation: 0x1053dcf48

// +[SCTwoFAManager path]
// Type encoding: @16@0:8
// Implementation: 0x1053dd050

@end
