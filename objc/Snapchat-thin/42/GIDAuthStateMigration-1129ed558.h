// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GIDAuthStateMigration
// Superclass: NSObject
// Address: 0x1129ed558

@interface GIDAuthStateMigration

// Property: keychainStore; attributes: T@"GTMKeychainStore",&,N,V_keychainStore

// -[GIDAuthStateMigration initWithKeychainStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x10097a834

// -[GIDAuthStateMigration init]
// Type encoding: @16@0:8
// Implementation: 0x104a63cd0

// -[GIDAuthStateMigration migrateIfNeededWithTokenURL:callbackPath:keychainName:isFreshInstall:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10097a8b4

// -[GIDAuthStateMigration extractAuthSessionWithTokenURL:callbackPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a63d24

// -[GIDAuthStateMigration keychainStore]
// Type encoding: @16@0:8
// Implementation: 0x104a6424c

// -[GIDAuthStateMigration setKeychainStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a64254

// -[GIDAuthStateMigration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10097a9c8

// +[GIDAuthStateMigration passwordForService:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a640a4

@end
