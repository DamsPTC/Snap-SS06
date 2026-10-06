// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFriendsFeedContextDeltaSyncProcessor
// Superclass: NSObject
// Address: 0x112b22f90

@interface SCLensFriendsFeedContextDeltaSyncProcessor

// Property: delegate; attributes: T@"<SCLensFriendsFeedContextDeltaSyncProcessorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensFriendsFeedContextDeltaSyncProcessor processDeltaSyncUpdates:deletions:isFullSync:transactionContext:]
// Type encoding: B44@0:8@16@24B32@36
// Implementation: 0x106c087f4

// -[SCLensFriendsFeedContextDeltaSyncProcessor _deleteAllStoredItemsWithTransactionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c088bc

// -[SCLensFriendsFeedContextDeltaSyncProcessor _processDeltaSyncUpdates:deletions:transactionContext:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106c08930

// -[SCLensFriendsFeedContextDeltaSyncProcessor _performUpdates:transactionContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106c089c8

// -[SCLensFriendsFeedContextDeltaSyncProcessor _performDeletions:deltaSyncUpdates:transactionContext:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106c08a8c

// -[SCLensFriendsFeedContextDeltaSyncProcessor _submitRequests:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106c08cdc

// -[SCLensFriendsFeedContextDeltaSyncProcessor delegate]
// Type encoding: @16@0:8
// Implementation: 0x106c08e08

// -[SCLensFriendsFeedContextDeltaSyncProcessor setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c08e20

// -[SCLensFriendsFeedContextDeltaSyncProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c08e2c

@end
