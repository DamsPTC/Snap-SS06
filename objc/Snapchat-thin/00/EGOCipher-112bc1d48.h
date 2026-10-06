// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: EGOCipher
// Superclass: NSObject
// Address: 0x112bc1d48

@interface EGOCipher


// -[EGOCipher statementWithSQL:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d5c604

// -[EGOCipher initWithPath:key:enableWAL:grapheneRegistry:egoCipherWALModeCallSite:]
// Type encoding: @52@0:8@16@24B32@36Q44
// Implementation: 0x108d5c660

// -[EGOCipher initWithPath:key:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d5c754

// -[EGOCipher open]
// Type encoding: B16@0:8
// Implementation: 0x108d5c764

// -[EGOCipher close]
// Type encoding: v16@0:8
// Implementation: 0x108d5c950

// -[EGOCipher attemptToOpenAndRead]
// Type encoding: B16@0:8
// Implementation: 0x108d5c984

// -[EGOCipher rekeyWithNewKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d5ca30

// -[EGOCipher execute:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108d5ca94

// -[EGOCipher executeUpdate:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d5caf0

// -[EGOCipher executeUpdate:parameters:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108d5caf8

// -[EGOCipher lastInsertRowId]
// Type encoding: q16@0:8
// Implementation: 0x108d5cbbc

// -[EGOCipher executeQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d5cbd4

// -[EGOCipher executeQuery:parameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d5cbdc

// -[EGOCipher lastErrorMessage]
// Type encoding: @16@0:8
// Implementation: 0x108d5d048

// -[EGOCipher hadError]
// Type encoding: B16@0:8
// Implementation: 0x108d5d098

// -[EGOCipher lastErrorCode]
// Type encoding: i16@0:8
// Implementation: 0x108d5d0b4

// -[EGOCipher bindStatement:toParameters:]
// Type encoding: B32@0:8^{sqlcph3_stmt=}16@24
// Implementation: 0x108d5d0bc

// -[EGOCipher bindObject:toColumn:inStatement:]
// Type encoding: v36@0:8@16i24^{sqlcph3_stmt=}28
// Implementation: 0x108d5d218

// -[EGOCipher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108d5d470

// -[EGOCipher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d5d4b4

// +[EGOCipher databaseWithPath:key:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d5c598

@end
