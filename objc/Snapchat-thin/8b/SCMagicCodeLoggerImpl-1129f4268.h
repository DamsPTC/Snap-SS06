// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMagicCodeLoggerImpl
// Superclass: NSObject
// Address: 0x1129f4268

@interface SCMagicCodeLoggerImpl


// -[SCMagicCodeLoggerImpl initWithUserNotTrackedLogger:loginSessionService:deviceInfoProvider:multiSourceCountryProvider:lastLoginInfoRepository:grapheneRegistry:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104cd32b0

// -[SCMagicCodeLoggerImpl logMagicLoginPadShownWithSource:usernameOrEmail:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104cd346c

// -[SCMagicCodeLoggerImpl logMagicLoginPadOptInShownWithSource:usernameOrEmail:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104cd347c

// -[SCMagicCodeLoggerImpl logMagicLoginPadDismissWithSource:usernameOrEmail:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104cd348c

// -[SCMagicCodeLoggerImpl logMagicLoginPadResendWithSource:usernameOrEmail:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104cd349c

// -[SCMagicCodeLoggerImpl _logBlizzardWithContext:source:identifier:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x104cd34ac

// -[SCMagicCodeLoggerImpl _logGrapheneWithContext:source:identifier:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x104cd3554

// -[SCMagicCodeLoggerImpl _logMagicCodePadWithUsernameOrEmail:context:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x104cd3724

// -[SCMagicCodeLoggerImpl _loginIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x104cd377c

// -[SCMagicCodeLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cd37a0

@end
