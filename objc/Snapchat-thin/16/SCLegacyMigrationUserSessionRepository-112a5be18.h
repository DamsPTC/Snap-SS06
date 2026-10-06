// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyMigrationUserSessionRepository
// Superclass: NSObject
// Address: 0x112a5be18

@interface SCLegacyMigrationUserSessionRepository

// Property: userSession; attributes: T@"SCUserSession",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyMigrationUserSessionRepository initWithLegacyRepository:preferenceBasedRepository:grapheneRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100165314

// -[SCLegacyMigrationUserSessionRepository userSession]
// Type encoding: @16@0:8
// Implementation: 0x1001654b8

// -[SCLegacyMigrationUserSessionRepository setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10018d568

// -[SCLegacyMigrationUserSessionRepository synchronize]
// Type encoding: v16@0:8
// Implementation: 0x1056f7a9c

// -[SCLegacyMigrationUserSessionRepository _logUserSessionSourceIsPreference:sessionIsNil:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1001df2f0

// -[SCLegacyMigrationUserSessionRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056f7ac4

@end
