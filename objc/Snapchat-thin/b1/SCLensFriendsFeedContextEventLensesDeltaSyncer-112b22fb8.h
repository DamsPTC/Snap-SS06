// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFriendsFeedContextEventLensesDeltaSyncer
// Superclass: NSObject
// Address: 0x112b22fb8

@interface SCLensFriendsFeedContextEventLensesDeltaSyncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer initWithDeltaForceMapper:deltaSyncProcessor:dataSyncTTLChecker:deltaSyncJobConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c08e34

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer type]
// Type encoding: @16@0:8
// Implementation: 0x106c08f3c

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c08f64

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106c08fac

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer dataSyncerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106c08ff4

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer deltaSyncClientType]
// Type encoding: @16@0:8
// Implementation: 0x106c09000

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer deltaSyncKey]
// Type encoding: @16@0:8
// Implementation: 0x106c09004

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer deltaSyncType]
// Type encoding: q16@0:8
// Implementation: 0x106c09070

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer onDeltaSync:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106c09078

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer jobConfig]
// Type encoding: @16@0:8
// Implementation: 0x106c0907c

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer submitOnRegister]
// Type encoding: B16@0:8
// Implementation: 0x106c090b4

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer deleteAllRequestWithTransactionContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c090bc

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer changeRequestsForUpdates:withTransactionContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c09118

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer deletionRequestsForKeys:deltaSyncUpdates:withTransactionContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c091dc

// -[SCLensFriendsFeedContextEventLensesDeltaSyncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c092e4

@end
