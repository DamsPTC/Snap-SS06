// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesUserBackupStatus
// Superclass: SCDocObject
// Address: 0x112bc30f8

@interface SCMemoriesUserBackupStatus

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: userName; attributes: T@"NSString",R,C,N,V_userName
// Property: pendingSnapCount; attributes: TI,R,N,V_pendingSnapCount
// Property: failedEntryCount; attributes: TI,R,N,V_failedEntryCount

// -[SCMemoriesUserBackupStatus initWithUserId:userName:pendingSnapCount:failedEntryCount:]
// Type encoding: @40@0:8@16@24I32I36
// Implementation: 0x108dfe938

// -[SCMemoriesUserBackupStatus copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108dfea14

// -[SCMemoriesUserBackupStatus hash]
// Type encoding: Q16@0:8
// Implementation: 0x108dfea38

// -[SCMemoriesUserBackupStatus isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108dfeacc

// -[SCMemoriesUserBackupStatus userId]
// Type encoding: @16@0:8
// Implementation: 0x108dfebb4

// -[SCMemoriesUserBackupStatus userName]
// Type encoding: @16@0:8
// Implementation: 0x108dfebc4

// -[SCMemoriesUserBackupStatus pendingSnapCount]
// Type encoding: I16@0:8
// Implementation: 0x108dfebd4

// -[SCMemoriesUserBackupStatus failedEntryCount]
// Type encoding: I16@0:8
// Implementation: 0x108dfebe4

// -[SCMemoriesUserBackupStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108dfebf4

// +[SCMemoriesUserBackupStatus table]
// Type encoding: r*16@0:8
// Implementation: 0x108dfedac

// +[SCMemoriesUserBackupStatus immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x108dfedb8

// +[SCMemoriesUserBackupStatus objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x108dfef3c

@end
