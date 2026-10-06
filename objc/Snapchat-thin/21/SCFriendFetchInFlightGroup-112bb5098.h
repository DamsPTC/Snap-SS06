// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendFetchInFlightGroup
// Superclass: NSObject
// Address: 0x112bb5098

@interface SCFriendFetchInFlightGroup

// Property: fetchRequest; attributes: T@"SCSnapchattersFetchDataRequest",R,N,V_fetchRequest
// Property: forceFullSync; attributes: TB,N,V_forceFullSync
// Property: waiters; attributes: T@"NSMutableArray",R,N,V_waiters

// -[SCFriendFetchInFlightGroup initWithFetchRequest:forceFullSync:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108bc3db0

// -[SCFriendFetchInFlightGroup drainWithSuccess:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108bc3e58

// -[SCFriendFetchInFlightGroup fetchRequest]
// Type encoding: @16@0:8
// Implementation: 0x108bc3f88

// -[SCFriendFetchInFlightGroup forceFullSync]
// Type encoding: B16@0:8
// Implementation: 0x108bc3f90

// -[SCFriendFetchInFlightGroup setForceFullSync:]
// Type encoding: v20@0:8B16
// Implementation: 0x108bc3f98

// -[SCFriendFetchInFlightGroup waiters]
// Type encoding: @16@0:8
// Implementation: 0x108bc3fa0

// -[SCFriendFetchInFlightGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bc3fa8

@end
