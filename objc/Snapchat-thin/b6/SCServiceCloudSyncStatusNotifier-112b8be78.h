// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServiceCloudSyncStatusNotifier
// Superclass: NSObject
// Address: 0x112b8be78

@interface SCServiceCloudSyncStatusNotifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCServiceCloudSyncStatusNotifier cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: v44@0:8@16Q24B32B36B40
// Implementation: 0x107f4910c

// -[SCServiceCloudSyncStatusNotifier waitUntil:]
// Type encoding: d24@0:8d16
// Implementation: 0x107f49230

// +[SCServiceCloudSyncStatusNotifier notifierForStatus:cloudSync:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x107f4903c

// +[SCServiceCloudSyncStatusNotifier notifierForFullySyncedStatus:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f490a8

@end
