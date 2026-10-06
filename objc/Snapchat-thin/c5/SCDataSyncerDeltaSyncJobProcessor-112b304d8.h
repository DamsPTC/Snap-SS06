// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDataSyncerDeltaSyncJobProcessor
// Superclass: NSObject
// Address: 0x112b304d8

@interface SCDataSyncerDeltaSyncJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDataSyncerDeltaSyncJobProcessor initWithDataSyncer:deltaSyncServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106cc215c

// -[SCDataSyncerDeltaSyncJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x106cc21f8

// -[SCDataSyncerDeltaSyncJobProcessor _postSync:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106cc249c

// -[SCDataSyncerDeltaSyncJobProcessor _deltaSyncService]
// Type encoding: @16@0:8
// Implementation: 0x106cc24f8

// -[SCDataSyncerDeltaSyncJobProcessor canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x106cc2590

// -[SCDataSyncerDeltaSyncJobProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106cc2598

// -[SCDataSyncerDeltaSyncJobProcessor type]
// Type encoding: @16@0:8
// Implementation: 0x106cc25a0

// -[SCDataSyncerDeltaSyncJobProcessor jobConfig]
// Type encoding: @16@0:8
// Implementation: 0x106cc25a8

// -[SCDataSyncerDeltaSyncJobProcessor dataSyncer]
// Type encoding: @16@0:8
// Implementation: 0x106cc25fc

// -[SCDataSyncerDeltaSyncJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cc2624

@end
