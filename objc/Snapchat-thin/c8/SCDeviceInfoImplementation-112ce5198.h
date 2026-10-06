// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeviceInfoImplementation
// Superclass: NSObject
// Address: 0x112ce5198

@interface SCDeviceInfoImplementation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeviceInfoImplementation initSharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x100077a74

// -[SCDeviceInfoImplementation stableIntegerDeviceId]
// Type encoding: Q16@0:8
// Implementation: 0x100768bec

// -[SCDeviceInfoImplementation stringDeviceUuid]
// Type encoding: @16@0:8
// Implementation: 0x1001162b0

// -[SCDeviceInfoImplementation isRunningOnMacPlatform]
// Type encoding: B16@0:8
// Implementation: 0x10b7f9bc0

// -[SCDeviceInfoImplementation shouldSampleEventForPercentage:]
// Type encoding: B24@0:8d16
// Implementation: 0x100077da0

// -[SCDeviceInfoImplementation shouldSampleEventForPercentage:startOffset:]
// Type encoding: B32@0:8d16d24
// Implementation: 0x100077da8

// -[SCDeviceInfoImplementation _loadConfigDeviceIdIntoMemoryOnStartup]
// Type encoding: v16@0:8
// Implementation: 0x100077af4

// -[SCDeviceInfoImplementation _loadConfigDeviceIdIntoMemory]
// Type encoding: v16@0:8
// Implementation: 0x100077af8

// -[SCDeviceInfoImplementation _alreadySavedToKeychain]
// Type encoding: B16@0:8
// Implementation: 0x100077d54

// -[SCDeviceInfoImplementation _setAlreadySavedToKeychain]
// Type encoding: v16@0:8
// Implementation: 0x10b7f9c38

// -[SCDeviceInfoImplementation _retrieveConfigDeviceIdFromUserDefaults]
// Type encoding: @16@0:8
// Implementation: 0x100077c58

// -[SCDeviceInfoImplementation _retrieveConfigDeviceIdFromKeychain]
// Type encoding: @16@0:8
// Implementation: 0x10b7f9c7c

// -[SCDeviceInfoImplementation _updateBothUserDefaultsAndKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7f9cdc

// -[SCDeviceInfoImplementation _saveConfigDeviceIdToUserDefaults:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7f9d20

// -[SCDeviceInfoImplementation _saveConfigDeviceIdToKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7f9d7c

// -[SCDeviceInfoImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7f9dcc

// +[SCDeviceInfoImplementation sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x1000779c0

// +[SCDeviceInfoImplementation resetDispatchOnceTokenForTesting]
// Type encoding: v16@0:8
// Implementation: 0x10b7f9bb4

@end
