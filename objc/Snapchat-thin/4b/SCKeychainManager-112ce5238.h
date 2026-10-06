// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCKeychainManager
// Superclass: NSObject
// Address: 0x112ce5238

@interface SCKeychainManager


// +[SCKeychainManager queryForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1001062fc

// +[SCKeychainManager synchronizableQueryForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7f9e08

// +[SCKeychainManager removeAllDataExcludingWhitelist:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7f9f28

// +[SCKeychainManager setData:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b7fa270

// +[SCKeychainManager setDataWithStatus:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x10b7fa2f0

// +[SCKeychainManager setBackupableData:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x10b7fa4a0

// +[SCKeychainManager setBackupableDataMoreAccessible:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x10b7fa518

// +[SCKeychainManager setSynchronizableData:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x10b7fa590

// +[SCKeychainManager synchronizableDataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7fa608

// +[SCKeychainManager removeSynchronizableDataForKeyWithStatus:]
// Type encoding: i24@0:8@16
// Implementation: 0x10b7fa650

// +[SCKeychainManager dataForKey:status:]
// Type encoding: @32@0:8@16^i24
// Implementation: 0x1001062b0

// +[SCKeychainManager dataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x100402a70

// +[SCKeychainManager removeDataForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7fa68c

// +[SCKeychainManager removeDataForKeyWithStatus:]
// Type encoding: i24@0:8@16
// Implementation: 0x10b7fa6cc

// +[SCKeychainManager setBackgroundData:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b7fa708

// +[SCKeychainManager setBackgroundDataWithStatus:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x10b7fa788

// +[SCKeychainManager isDataThisDeviceOnly:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7fa800

@end
