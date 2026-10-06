// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdItemLoadStatus
// Superclass: NSObject
// Address: 0x112adeb38

@interface SCAdItemLoadStatus

// Property: itemId; attributes: T@"NSString",R,C,N,V_itemId
// Property: loadedOnEntry; attributes: TB,N,V_loadedOnEntry
// Property: loadedOnExit; attributes: TB,N,V_loadedOnExit
// Property: mediaWaitTimeInSec; attributes: Td,R,N

// -[SCAdItemLoadStatus initWithItemId:itemOpenTimestampInSec:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10644c700

// -[SCAdItemLoadStatus updateItemLoadedTimestampInSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x10644c784

// -[SCAdItemLoadStatus updateItemCloseTimestampInSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x10644c794

// -[SCAdItemLoadStatus mediaWaitTimeInSec]
// Type encoding: d16@0:8
// Implementation: 0x10644c79c

// -[SCAdItemLoadStatus itemId]
// Type encoding: @16@0:8
// Implementation: 0x10644c7c0

// -[SCAdItemLoadStatus loadedOnEntry]
// Type encoding: B16@0:8
// Implementation: 0x10644c7c8

// -[SCAdItemLoadStatus setLoadedOnEntry:]
// Type encoding: v20@0:8B16
// Implementation: 0x10644c7d0

// -[SCAdItemLoadStatus loadedOnExit]
// Type encoding: B16@0:8
// Implementation: 0x10644c7d8

// -[SCAdItemLoadStatus setLoadedOnExit:]
// Type encoding: v20@0:8B16
// Implementation: 0x10644c7e0

// -[SCAdItemLoadStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10644c7e8

@end
