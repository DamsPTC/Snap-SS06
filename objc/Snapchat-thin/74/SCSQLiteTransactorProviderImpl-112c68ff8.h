// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSQLiteTransactorProviderImpl
// Superclass: NSObject
// Address: 0x112c68ff8

@interface SCSQLiteTransactorProviderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSQLiteTransactorProviderImpl initWithDatabaseDirectoryPath:logger:flipper:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100b9b8c4

// -[SCSQLiteTransactorProviderImpl transactorWithClass:databaseName:shared:wipe:]
// Type encoding: @40@0:8#16@24B32B36
// Implementation: 0x100b9bd1c

// -[SCSQLiteTransactorProviderImpl transactorWithClass:databaseName:shared:wipe:isSingleConnectionMode:autoVacuum:]
// Type encoding: @48@0:8#16@24B32B36B40B44
// Implementation: 0x100b9bd40

// -[SCSQLiteTransactorProviderImpl transactorWithClass:databaseName:]
// Type encoding: @32@0:8#16@24
// Implementation: 0x10b08aee0

// -[SCSQLiteTransactorProviderImpl deactivateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b08af04

// -[SCSQLiteTransactorProviderImpl removeTransactorWithClass:databaseName:shared:completion:]
// Type encoding: v44@0:8#16@24B32@?36
// Implementation: 0x10b08b138

// -[SCSQLiteTransactorProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b08b414

@end
