// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoginErrorDetail
// Superclass: NSObject
// Address: 0x112b1a548

@interface SCLoginErrorDetail


// -[SCLoginErrorDetail copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106b7ce04

// -[SCLoginErrorDetail hash]
// Type encoding: Q16@0:8
// Implementation: 0x106b7ce28

// -[SCLoginErrorDetail internalInit]
// Type encoding: @16@0:8
// Implementation: 0x106b7cf6c

// -[SCLoginErrorDetail isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b7cfb0

// -[SCLoginErrorDetail matchCredentialsMismatchError:credentialsMismatchNeedsMagicCode:invalidODLVPreAuthTokenError:connectionError:timeoutError:usernameNotFound:emailNotFound:phoneWrongFormat:phoneNotFound:invalidPasswordByUsernameOrEmail:invalidPasswordByPhone:accountLockedError:unretryableError:generalError:]
// Type encoding: v128@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88@?96@?104@?112@?120
// Implementation: 0x106b7d248

// -[SCLoginErrorDetail .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b7d52c

// +[SCLoginErrorDetail accountLockedErrorWithMessage:isAppealable:appealableLockData:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x106b7c77c

// +[SCLoginErrorDetail connectionErrorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b7c824

// +[SCLoginErrorDetail credentialsMismatchErrorWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7c890

// +[SCLoginErrorDetail credentialsMismatchNeedsMagicCodeWithMessage:magicCodeAdaptor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b7c8fc

// +[SCLoginErrorDetail emailNotFoundWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7c994

// +[SCLoginErrorDetail generalErrorWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7ca08

// +[SCLoginErrorDetail invalidODLVPreAuthTokenErrorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b7ca7c

// +[SCLoginErrorDetail invalidPasswordByPhoneWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7cae8

// +[SCLoginErrorDetail invalidPasswordByUsernameOrEmailWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7cb5c

// +[SCLoginErrorDetail phoneNotFoundWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7cbd0

// +[SCLoginErrorDetail phoneWrongFormatWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7cc44

// +[SCLoginErrorDetail timeoutErrorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b7ccb8

// +[SCLoginErrorDetail unretryableErrorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b7cd24

// +[SCLoginErrorDetail usernameNotFoundWithMessage:displayRegisterCTA:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106b7cd90

@end
