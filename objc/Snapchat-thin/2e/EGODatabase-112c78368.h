// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: EGODatabase
// Superclass: NSObject
// Address: 0x112c78368

@interface EGODatabase


// -[EGODatabase statementWithSQL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b5ef840

// -[EGODatabase initWithPath_DEPRECATED:enableWAL:grapheneRegistry:callSite:]
// Type encoding: @44@0:8@16B24@28@36
// Implementation: 0x10b5ef89c

// -[EGODatabase initWithPath_DEPRECATED:enableWAL:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b5ef994

// -[EGODatabase initWithPath_DEPRECATED:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b5ef9a0

// -[EGODatabase _logGrapheneForWALMode:errorCode:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x10b5ef9b0

// -[EGODatabase open]
// Type encoding: B16@0:8
// Implementation: 0x10b5efaa0

// -[EGODatabase close]
// Type encoding: v16@0:8
// Implementation: 0x10b5efb74

// -[EGODatabase execute:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b5efbc8

// -[EGODatabase executeWithoutOpen:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b5efc24

// -[EGODatabase executeUpdate:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b5efc80

// -[EGODatabase executeUpdate:parameters:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b5efc88

// -[EGODatabase lastInsertRowId]
// Type encoding: q16@0:8
// Implementation: 0x10b5efe30

// -[EGODatabase executeQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b5efe5c

// -[EGODatabase executeQuery:parameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b5efe64

// -[EGODatabase lastErrorMessage]
// Type encoding: @16@0:8
// Implementation: 0x10b5f0298

// -[EGODatabase hadError]
// Type encoding: B16@0:8
// Implementation: 0x10b5f02e8

// -[EGODatabase lastErrorCode]
// Type encoding: i16@0:8
// Implementation: 0x10b5f0304

// -[EGODatabase bindStatement:toParameters:]
// Type encoding: B32@0:8^{sqlite3_stmt=}16@24
// Implementation: 0x10b5f030c

// -[EGODatabase bindObject:toColumn:inStatement:]
// Type encoding: v36@0:8@16i24^{sqlite3_stmt=}28
// Implementation: 0x10b5f0464

// -[EGODatabase dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b5f06a4

// -[EGODatabase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5f06e8

@end
