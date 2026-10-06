// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationDataDeltaSyncProcessor
// Superclass: NSObject
// Address: 0x112b24cc8

@interface SCNotificationDataDeltaSyncProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationDataDeltaSyncProcessor initWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c39ab4

// -[SCNotificationDataDeltaSyncProcessor type]
// Type encoding: @16@0:8
// Implementation: 0x106c39b3c

// -[SCNotificationDataDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c39b68

// -[SCNotificationDataDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106c39bc8

// -[SCNotificationDataDeltaSyncProcessor dataSyncerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106c3ab4c

// -[SCNotificationDataDeltaSyncProcessor deltaSyncClientType]
// Type encoding: @16@0:8
// Implementation: 0x106c3ab7c

// -[SCNotificationDataDeltaSyncProcessor deltaSyncKey]
// Type encoding: @16@0:8
// Implementation: 0x106c3aba8

// -[SCNotificationDataDeltaSyncProcessor deltaSyncType]
// Type encoding: q16@0:8
// Implementation: 0x106c3ac38

// -[SCNotificationDataDeltaSyncProcessor onDeltaSync:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106c3ac40

// -[SCNotificationDataDeltaSyncProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c3ac44

@end
