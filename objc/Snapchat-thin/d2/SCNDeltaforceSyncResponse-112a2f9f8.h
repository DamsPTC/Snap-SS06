// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNDeltaforceSyncResponse
// Superclass: NSObject
// Address: 0x112a2f9f8

@interface SCNDeltaforceSyncResponse

// Property: updates; attributes: T@"NSArray",R,N,V_updates
// Property: deletes; attributes: T@"NSArray",R,N,V_deletes
// Property: syncToken; attributes: T@"SCNDeltaforceSyncToken",R,N,V_syncToken
// Property: clearState; attributes: TB,R,N,V_clearState
// Property: v2; attributes: T@"SCNDeltaforceKeysByKind",R,N,V_v2

// -[SCNDeltaforceSyncResponse initWithUpdates:deletes:syncToken:clearState:v2:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x1053bab68

// -[SCNDeltaforceSyncResponse updates]
// Type encoding: @16@0:8
// Implementation: 0x1053bacbc

// -[SCNDeltaforceSyncResponse deletes]
// Type encoding: @16@0:8
// Implementation: 0x1053bacc4

// -[SCNDeltaforceSyncResponse syncToken]
// Type encoding: @16@0:8
// Implementation: 0x1053baccc

// -[SCNDeltaforceSyncResponse clearState]
// Type encoding: B16@0:8
// Implementation: 0x1053bacd4

// -[SCNDeltaforceSyncResponse v2]
// Type encoding: @16@0:8
// Implementation: 0x1053bacdc

// -[SCNDeltaforceSyncResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053bace4

@end
