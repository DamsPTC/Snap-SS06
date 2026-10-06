// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemPlatBackupEvent
// Superclass: NSObject
// Address: 0x112940120

@interface SCMemPlatBackupEvent

// Property: entryID; attributes: T@"NSString",N,R
// Property: snapIDs; attributes: T@"NSArray",N,R
// Property: status; attributes: Tq,N,R,Vstatus
// Property: seqNum; attributes: Tq,N,R,VseqNum

// -[SCMemPlatBackupEvent entryID]
// Type encoding: @16@0:8
// Implementation: 0x103bca280

// -[SCMemPlatBackupEvent snapIDs]
// Type encoding: @16@0:8
// Implementation: 0x103bca2cc

// -[SCMemPlatBackupEvent status]
// Type encoding: q16@0:8
// Implementation: 0x103bca314

// -[SCMemPlatBackupEvent seqNum]
// Type encoding: q16@0:8
// Implementation: 0x103bca324

// -[SCMemPlatBackupEvent initWithEntryID:snapIDs:status:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x103bca430

// -[SCMemPlatBackupEvent initWithEntryID:snapIDs:status:seqNum:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x103bca5d4

// -[SCMemPlatBackupEvent init]
// Type encoding: @16@0:8
// Implementation: 0x103bca680

// -[SCMemPlatBackupEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103bca6dc

@end
