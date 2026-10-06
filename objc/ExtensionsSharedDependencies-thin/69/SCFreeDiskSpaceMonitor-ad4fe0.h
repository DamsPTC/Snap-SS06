// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFreeDiskSpaceMonitor
// Superclass: NSObject
// Address: 0xad4fe0

@interface SCFreeDiskSpaceMonitor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFreeDiskSpaceMonitor init]
// Type encoding: @16@0:8
// Implementation: 0x441074

// -[SCFreeDiskSpaceMonitor addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x4410fc

// -[SCFreeDiskSpaceMonitor removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x4411e0

// -[SCFreeDiskSpaceMonitor _startMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x4411e8

// -[SCFreeDiskSpaceMonitor _processDiskChangeNotificationUpdate]
// Type encoding: v16@0:8
// Implementation: 0x4412f4

// -[SCFreeDiskSpaceMonitor _recheckFileSystemFreeDiskSpace]
// Type encoding: v16@0:8
// Implementation: 0x4413c0

// -[SCFreeDiskSpaceMonitor runWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x44147c

// -[SCFreeDiskSpaceMonitor dedicatedQueue]
// Type encoding: @16@0:8
// Implementation: 0x4414e0

// -[SCFreeDiskSpaceMonitor _nextNotifier]
// Type encoding: @16@0:8
// Implementation: 0x441528

// -[SCFreeDiskSpaceMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x441538

// +[SCFreeDiskSpaceMonitor performer]
// Type encoding: @16@0:8
// Implementation: 0x440f5c

// +[SCFreeDiskSpaceMonitor sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x440ff4

@end
