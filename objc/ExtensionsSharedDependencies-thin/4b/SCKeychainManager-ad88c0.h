// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCKeychainManager
// Superclass: NSObject
// Address: 0xad88c0

@interface SCKeychainManager


// +[SCKeychainManager queryForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x454184

// +[SCKeychainManager synchronizableQueryForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x4542a4

// +[SCKeychainManager removeAllDataExcludingWhitelist:]
// Type encoding: v24@0:8@16
// Implementation: 0x4543c4

// +[SCKeychainManager setData:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x45470c

// +[SCKeychainManager setDataWithStatus:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x45478c

// +[SCKeychainManager setBackupableData:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x45493c

// +[SCKeychainManager setBackupableDataMoreAccessible:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x4549b4

// +[SCKeychainManager setSynchronizableData:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x454a2c

// +[SCKeychainManager synchronizableDataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x454aa4

// +[SCKeychainManager removeSynchronizableDataForKeyWithStatus:]
// Type encoding: i24@0:8@16
// Implementation: 0x454ba0

// +[SCKeychainManager dataForKey:status:]
// Type encoding: @32@0:8@16^i24
// Implementation: 0x454bdc

// +[SCKeychainManager dataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x454c28

// +[SCKeychainManager removeDataForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x454c30

// +[SCKeychainManager removeDataForKeyWithStatus:]
// Type encoding: i24@0:8@16
// Implementation: 0x454c70

// +[SCKeychainManager setBackgroundData:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x454cac

// +[SCKeychainManager setBackgroundDataWithStatus:forKey:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x454d2c

// +[SCKeychainManager isDataThisDeviceOnly:]
// Type encoding: B24@0:8@16
// Implementation: 0x454da4

@end
