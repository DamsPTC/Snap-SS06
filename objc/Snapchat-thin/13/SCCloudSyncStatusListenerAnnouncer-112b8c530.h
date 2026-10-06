// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncStatusListenerAnnouncer
// Superclass: NSObject
// Address: 0x112b8c530

@interface SCCloudSyncStatusListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSyncStatusListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x107f5a008

// -[SCCloudSyncStatusListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x100b88e3c

// -[SCCloudSyncStatusListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f5a1e4

// -[SCCloudSyncStatusListenerAnnouncer cloudSync:didUpdateProgressForEntryId:progress:]
// Type encoding: v36@0:8@16@24f32
// Implementation: 0x107f5a414

// -[SCCloudSyncStatusListenerAnnouncer cloudSyncDidMutateBackupOperationIsDuringSync:hasMoreResponses:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107f5a54c

// -[SCCloudSyncStatusListenerAnnouncer cloudSync:didChangeEntrySyncStatus:entryId:snapId:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x107f5a654

// -[SCCloudSyncStatusListenerAnnouncer cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: v44@0:8@16Q24B32B36B40
// Implementation: 0x107f5a7ac

// -[SCCloudSyncStatusListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f5a8c0

// -[SCCloudSyncStatusListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x100b884fc

@end
