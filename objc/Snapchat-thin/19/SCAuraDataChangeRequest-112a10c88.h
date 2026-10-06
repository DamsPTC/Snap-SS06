// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuraDataChangeRequest
// Superclass: NSObject
// Address: 0x112a10c88

@interface SCAuraDataChangeRequest

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuraDataChangeRequest table]
// Type encoding: r*16@0:8
// Implementation: 0x10500895c

// -[SCAuraDataChangeRequest createTableWithSQLite:]
// Type encoding: v24@0:8^{sqlite3=}16
// Implementation: 0x105008968

// -[SCAuraDataChangeRequest transactWithSQLite:flatbuffers:]
// Type encoding: @32@0:8^v16^v24
// Implementation: 0x1050089b0

// -[SCAuraDataChangeRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105008908

@end
