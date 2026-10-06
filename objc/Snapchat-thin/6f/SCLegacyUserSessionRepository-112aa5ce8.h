// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyUserSessionRepository
// Superclass: NSObject
// Address: 0x112aa5ce8

@interface SCLegacyUserSessionRepository

// Property: userSession; attributes: T@"SCUserSession",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyUserSessionRepository initWithApplicationPreferences:legacyUserStateLogger:snapTokenReader:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1000e0274

// -[SCLegacyUserSessionRepository userSession]
// Type encoding: @16@0:8
// Implementation: 0x105e8cd7c

// -[SCLegacyUserSessionRepository setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10018dc30

// -[SCLegacyUserSessionRepository synchronize]
// Type encoding: v16@0:8
// Implementation: 0x105e8cef4

// -[SCLegacyUserSessionRepository _createSessionWithUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e8cef8

// -[SCLegacyUserSessionRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e8d0d0

@end
