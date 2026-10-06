// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFriendsFeedContextEventsDeltaSyncer
// Superclass: NSObject
// Address: 0x112b230a8

@interface SCLensFriendsFeedContextEventsDeltaSyncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensFriendsFeedContextEventsDeltaSyncer initWithDeltaForceMapper:deltaSyncProcessor:dataSyncTTLChecker:deltaSyncJobConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c0a404

// -[SCLensFriendsFeedContextEventsDeltaSyncer type]
// Type encoding: @16@0:8
// Implementation: 0x106c0a50c

// -[SCLensFriendsFeedContextEventsDeltaSyncer canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c0a534

// -[SCLensFriendsFeedContextEventsDeltaSyncer processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106c0a57c

// -[SCLensFriendsFeedContextEventsDeltaSyncer dataSyncerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106c0a5c4

// -[SCLensFriendsFeedContextEventsDeltaSyncer deltaSyncClientType]
// Type encoding: @16@0:8
// Implementation: 0x106c0a5d0

// -[SCLensFriendsFeedContextEventsDeltaSyncer deltaSyncKey]
// Type encoding: @16@0:8
// Implementation: 0x106c0a5d4

// -[SCLensFriendsFeedContextEventsDeltaSyncer deltaSyncType]
// Type encoding: q16@0:8
// Implementation: 0x106c0a640

// -[SCLensFriendsFeedContextEventsDeltaSyncer onDeltaSync:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106c0a648

// -[SCLensFriendsFeedContextEventsDeltaSyncer jobConfig]
// Type encoding: @16@0:8
// Implementation: 0x106c0a64c

// -[SCLensFriendsFeedContextEventsDeltaSyncer submitOnRegister]
// Type encoding: B16@0:8
// Implementation: 0x106c0a684

// -[SCLensFriendsFeedContextEventsDeltaSyncer deleteAllRequestWithTransactionContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c0a68c

// -[SCLensFriendsFeedContextEventsDeltaSyncer changeRequestsForUpdates:withTransactionContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c0a6e8

// -[SCLensFriendsFeedContextEventsDeltaSyncer deletionRequestsForKeys:deltaSyncUpdates:withTransactionContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c0a7ac

// -[SCLensFriendsFeedContextEventsDeltaSyncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c0a858

@end
