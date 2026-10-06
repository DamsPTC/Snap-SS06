// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreferencesBasedUserSessionRepository
// Superclass: NSObject
// Address: 0x112a5be68

@interface SCPreferencesBasedUserSessionRepository

// Property: userSession; attributes: T@"SCUserSession",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreferencesBasedUserSessionRepository initWithApplicationPreferences:authTokenManager:grapheneRegistry:snapTokenReader:snapTokenStore:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1000e1708

// -[SCPreferencesBasedUserSessionRepository userSession]
// Type encoding: @16@0:8
// Implementation: 0x100165630

// -[SCPreferencesBasedUserSessionRepository setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10018d5b8

// -[SCPreferencesBasedUserSessionRepository synchronize]
// Type encoding: v16@0:8
// Implementation: 0x1056f7b0c

// -[SCPreferencesBasedUserSessionRepository _saveUserSessionToPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f7b38

// -[SCPreferencesBasedUserSessionRepository _persistUITestUserSession:ifRequested:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1056f7c50

// -[SCPreferencesBasedUserSessionRepository _loadUITestUserSessionFromAppEnviroument]
// Type encoding: @16@0:8
// Implementation: 0x1056f7c8c

// -[SCPreferencesBasedUserSessionRepository _loadUserSessionFromPreferences]
// Type encoding: @16@0:8
// Implementation: 0x1000e183c

// -[SCPreferencesBasedUserSessionRepository _logAuthTokenIsNil:snapTokenIsNil:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x100146c14

// -[SCPreferencesBasedUserSessionRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056f7c94

@end
