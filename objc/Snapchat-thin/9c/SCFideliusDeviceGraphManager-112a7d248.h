// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusDeviceGraphManager
// Superclass: NSObject
// Address: 0x112a7d248

@interface SCFideliusDeviceGraphManager

// Property: devices; attributes: T@"SCFideliusDeviceGraph",&,N,V_devices
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFideliusDeviceGraphManager initWithIdentityArchiveManager:logger:grapheneRegistry:circumstanceEngine:kvStoreManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1004185b8

// -[SCFideliusDeviceGraphManager initWithIdentityArchiveManager:logger:performer:grapheneRegistry:circumstanceEngine:kvStoreManager:forTest:]
// Type encoding: @68@0:8@16@24@32@40@48@56B64
// Implementation: 0x100418720

// -[SCFideliusDeviceGraphManager deviceIDString]
// Type encoding: @16@0:8
// Implementation: 0x1006e8be0

// -[SCFideliusDeviceGraphManager deviceIDBytes]
// Type encoding: @16@0:8
// Implementation: 0x10592b614

// -[SCFideliusDeviceGraphManager _deleteAllDatabases]
// Type encoding: v16@0:8
// Implementation: 0x10592b65c

// -[SCFideliusDeviceGraphManager _deleteOldDatabases]
// Type encoding: v16@0:8
// Implementation: 0x10592b684

// -[SCFideliusDeviceGraphManager _deleteFolderIfExists:version:source:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10592b6fc

// -[SCFideliusDeviceGraphManager _deleteDatabasesForVersion:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10592b848

// -[SCFideliusDeviceGraphManager loadManagerForUser:hashedBeta:iwek:identity:callback:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1004378e8

// -[SCFideliusDeviceGraphManager _createAndLoadManagerIwek:hashedBeta:identity:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10592b9cc

// -[SCFideliusDeviceGraphManager storeNewIdentityWhenReady:iwek:identity:callback:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10592bcec

// -[SCFideliusDeviceGraphManager closeUserDatabaseManager:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10592c158

// -[SCFideliusDeviceGraphManager userDeviceExistsForHashedBeta:]
// Type encoding: B24@0:8@16
// Implementation: 0x10592c2ec

// -[SCFideliusDeviceGraphManager userDeviceForHashedBeta:]
// Type encoding: @24@0:8@16
// Implementation: 0x100418f88

// -[SCFideliusDeviceGraphManager deleteDeviceRowForHashedBeta:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10592c634

// -[SCFideliusDeviceGraphManager onAdd:countBefore:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10592c880

// -[SCFideliusDeviceGraphManager onPurge:]
// Type encoding: v24@0:8@16
// Implementation: 0x10592c8cc

// -[SCFideliusDeviceGraphManager onOrderUpdated]
// Type encoding: v16@0:8
// Implementation: 0x10592cb24

// -[SCFideliusDeviceGraphManager hashedBetas]
// Type encoding: @16@0:8
// Implementation: 0x10592cb28

// -[SCFideliusDeviceGraphManager hashedPublicKeysIncludingKVStore]
// Type encoding: @16@0:8
// Implementation: 0x10592cd88

// -[SCFideliusDeviceGraphManager _combineHashedKeysArray:withAnotherArray:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10592ce64

// -[SCFideliusDeviceGraphManager resetAllUsers]
// Type encoding: v16@0:8
// Implementation: 0x10592cf5c

// -[SCFideliusDeviceGraphManager putIdentityToBackupAsync:]
// Type encoding: v24@0:8@16
// Implementation: 0x10592d2e4

// -[SCFideliusDeviceGraphManager _allDbNames]
// Type encoding: @16@0:8
// Implementation: 0x10592d380

// -[SCFideliusDeviceGraphManager forceLoad]
// Type encoding: v16@0:8
// Implementation: 0x10592d4f0

// -[SCFideliusDeviceGraphManager _loadLocal]
// Type encoding: B16@0:8
// Implementation: 0x10041a190

// -[SCFideliusDeviceGraphManager forceSave]
// Type encoding: v16@0:8
// Implementation: 0x10592d59c

// -[SCFideliusDeviceGraphManager _deleteFideliusDeviceGraph]
// Type encoding: v16@0:8
// Implementation: 0x10592d600

// -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraph]
// Type encoding: B16@0:8
// Implementation: 0x10592d790

// -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraph:]
// Type encoding: B20@0:8B16
// Implementation: 0x10592d798

// -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraphToArchive]
// Type encoding: B16@0:8
// Implementation: 0x10592d858

// -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraphToKeychain]
// Type encoding: B16@0:8
// Implementation: 0x10592d92c

// -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraphToKeychainNewEntry]
// Type encoding: B16@0:8
// Implementation: 0x10592daa0

// -[SCFideliusDeviceGraphManager _updateKeysLimit:]
// Type encoding: v24@0:8@16
// Implementation: 0x100424514

// -[SCFideliusDeviceGraphManager _loadFideliusDeviceGraph]
// Type encoding: B16@0:8
// Implementation: 0x10041a1d8

// -[SCFideliusDeviceGraphManager _loadFideliusDeviceGraphFromArchive]
// Type encoding: @16@0:8
// Implementation: 0x10041a2fc

// -[SCFideliusDeviceGraphManager _loadFideliusDeviceGraphFromKeychain]
// Type encoding: @16@0:8
// Implementation: 0x10592dc38

// -[SCFideliusDeviceGraphManager deleteTempIdentities]
// Type encoding: v16@0:8
// Implementation: 0x10592dd70

// -[SCFideliusDeviceGraphManager _deleteTempIdentitiesAndSave:]
// Type encoding: v20@0:8B16
// Implementation: 0x10592ddd4

// -[SCFideliusDeviceGraphManager _deleteOrphanedDatabasesV2WithVersion:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10592e06c

// -[SCFideliusDeviceGraphManager _initFields]
// Type encoding: B16@0:8
// Implementation: 0x10592e500

// -[SCFideliusDeviceGraphManager _deleteTempIdentity:iwek:hashedBeta:reason:message:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10592e5a4

// -[SCFideliusDeviceGraphManager retainTempIdentity:]
// Type encoding: v24@0:8@16
// Implementation: 0x10592e7cc

// -[SCFideliusDeviceGraphManager _validateDeviceGraph:source:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x100423340

// -[SCFideliusDeviceGraphManager backfillKeyChainForDeviceTransfer]
// Type encoding: v16@0:8
// Implementation: 0x10073731c

// -[SCFideliusDeviceGraphManager _shouldBackfillForDeviceTransferWithKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x1007392ec

// -[SCFideliusDeviceGraphManager updateKVStoreWithLoadedIdentity:isIdentityNew:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100737374

// -[SCFideliusDeviceGraphManager updateKVStoreOnLogoutWithIdentity:]
// Type encoding: v24@0:8@16
// Implementation: 0x10592e974

// -[SCFideliusDeviceGraphManager _restoreKVStoreForBackfill]
// Type encoding: @16@0:8
// Implementation: 0x10592e9c4

// -[SCFideliusDeviceGraphManager devices]
// Type encoding: @16@0:8
// Implementation: 0x1004245ec

// -[SCFideliusDeviceGraphManager setDevices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004245bc

// -[SCFideliusDeviceGraphManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10592ebc0

// +[SCFideliusDeviceGraphManager fideliusDeviceGraphPath]
// Type encoding: @16@0:8
// Implementation: 0x10041a3a0

@end
