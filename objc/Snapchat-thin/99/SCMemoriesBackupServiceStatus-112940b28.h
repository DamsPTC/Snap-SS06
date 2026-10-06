// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesBackupServiceStatus
// Superclass: NSObject
// Address: 0x112940b28

@interface SCMemoriesBackupServiceStatus

// Property: cloudSyncStatus; attributes: TQ,N,R,VcloudSyncStatus
// Property: isBackingUpNow; attributes: TB,N,R,VisBackingUpNow
// Property: mayUpload; attributes: TB,N,R,VmayUpload
// Property: requiresUpgrade; attributes: TB,N,R,VrequiresUpgrade

// -[SCMemoriesBackupServiceStatus cloudSyncStatus]
// Type encoding: Q16@0:8
// Implementation: 0x103bcccb4

// -[SCMemoriesBackupServiceStatus isBackingUpNow]
// Type encoding: B16@0:8
// Implementation: 0x103bcccc4

// -[SCMemoriesBackupServiceStatus mayUpload]
// Type encoding: B16@0:8
// Implementation: 0x103bcccd4

// -[SCMemoriesBackupServiceStatus requiresUpgrade]
// Type encoding: B16@0:8
// Implementation: 0x103bccce4

// -[SCMemoriesBackupServiceStatus initWithCloudSyncStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: @36@0:8Q16B24B28B32
// Implementation: 0x103bcce0c

// -[SCMemoriesBackupServiceStatus isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x103bccffc

// -[SCMemoriesBackupServiceStatus isEqualWithOtherStatus:]
// Type encoding: B24@0:8@16
// Implementation: 0x103bcd07c

// -[SCMemoriesBackupServiceStatus init]
// Type encoding: @16@0:8
// Implementation: 0x103bcd0a4

@end
