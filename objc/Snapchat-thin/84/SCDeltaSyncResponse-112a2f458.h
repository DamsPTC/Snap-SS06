// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeltaSyncResponse
// Superclass: NSObject
// Address: 0x112a2f458

@interface SCDeltaSyncResponse

// Property: isFullSync; attributes: TB,R,N,V_isFullSync
// Property: updates; attributes: T@"NSArray",R,C,N,V_updates
// Property: deletions; attributes: T@"NSArray",R,C,N,V_deletions
// Property: latestSyncToken; attributes: T@"NSData",R,C,N,V_latestSyncToken

// -[SCDeltaSyncResponse initWithIsFullSync:updates:deletions:latestSyncToken:]
// Type encoding: @44@0:8B16@20@28@36
// Implementation: 0x1053b83f0

// -[SCDeltaSyncResponse copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1053b84d8

// -[SCDeltaSyncResponse hash]
// Type encoding: Q16@0:8
// Implementation: 0x1053b84fc

// -[SCDeltaSyncResponse isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1053b8584

// -[SCDeltaSyncResponse isFullSync]
// Type encoding: B16@0:8
// Implementation: 0x1053b8654

// -[SCDeltaSyncResponse updates]
// Type encoding: @16@0:8
// Implementation: 0x1053b865c

// -[SCDeltaSyncResponse deletions]
// Type encoding: @16@0:8
// Implementation: 0x1053b8664

// -[SCDeltaSyncResponse latestSyncToken]
// Type encoding: @16@0:8
// Implementation: 0x1053b866c

// -[SCDeltaSyncResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053b8674

@end
