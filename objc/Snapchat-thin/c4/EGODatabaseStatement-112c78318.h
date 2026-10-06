// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: EGODatabaseStatement
// Superclass: NSObject
// Address: 0x112c78318

@interface EGODatabaseStatement

// Property: stmt; attributes: T^{sqlite3_stmt=},R,N,V_stmt
// Property: sql; attributes: T@"NSString",R,N,V_sql

// -[EGODatabaseStatement initWithDatabase:SQL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b5ef528

// -[EGODatabaseStatement resetAndClearBindings]
// Type encoding: v16@0:8
// Implementation: 0x10b5ef754

// -[EGODatabaseStatement dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b5ef77c

// -[EGODatabaseStatement stmt]
// Type encoding: ^{sqlite3_stmt=}16@0:8
// Implementation: 0x10b5ef800

// -[EGODatabaseStatement sql]
// Type encoding: @16@0:8
// Implementation: 0x10b5ef808

// -[EGODatabaseStatement .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5ef810

@end
