// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSyncState
// Superclass: NSObject
// Address: 0x112ca4eb8

@interface SCMemoriesSyncState

// Property: highestSeqnum; attributes: TQ,R,N,V_highestSeqnum
// Property: minTimestampSec; attributes: TQ,R,N,V_minTimestampSec
// Property: lastSeqnum; attributes: TQ,R,N,V_lastSeqnum
// Property: syncState; attributes: TQ,R,N,V_syncState
// Property: lastFullSyncStartAtEpochSec; attributes: TQ,R,N,V_lastFullSyncStartAtEpochSec

// -[SCMemoriesSyncState initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6f8bc0

// -[SCMemoriesSyncState initWithHighestSeqnum:minTimestampSec:lastSeqnum:syncState:lastFullSyncStartAtEpochSec:]
// Type encoding: @56@0:8Q16Q24Q32Q40Q48
// Implementation: 0x10b6f8c84

// -[SCMemoriesSyncState copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6f8cf4

// -[SCMemoriesSyncState encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6f8d18

// -[SCMemoriesSyncState hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6f8db4

// -[SCMemoriesSyncState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6f8e18

// -[SCMemoriesSyncState highestSeqnum]
// Type encoding: Q16@0:8
// Implementation: 0x10b6f8ee0

// -[SCMemoriesSyncState minTimestampSec]
// Type encoding: Q16@0:8
// Implementation: 0x10b6f8ee8

// -[SCMemoriesSyncState lastSeqnum]
// Type encoding: Q16@0:8
// Implementation: 0x10b6f8ef0

// -[SCMemoriesSyncState syncState]
// Type encoding: Q16@0:8
// Implementation: 0x10b6f8ef8

// -[SCMemoriesSyncState lastFullSyncStartAtEpochSec]
// Type encoding: Q16@0:8
// Implementation: 0x10b6f8f00

@end
