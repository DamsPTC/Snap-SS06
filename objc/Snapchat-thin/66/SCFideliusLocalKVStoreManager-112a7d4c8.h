// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusLocalKVStoreManager
// Superclass: NSObject
// Address: 0x112a7d4c8

@interface SCFideliusLocalKVStoreManager

// Property: localKVStore; attributes: T@"SCFideliusLocalKVStore",&,N,V_localKVStore
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFideliusLocalKVStoreManager initWithLogger:performer:grapheneRegistry:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100739460

// -[SCFideliusLocalKVStoreManager ubiquitousKeyValueStoreDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105934c08

// -[SCFideliusLocalKVStoreManager putUserIdentityWithEncryption:]
// Type encoding: B24@0:8@16
// Implementation: 0x105934dd0

// -[SCFideliusLocalKVStoreManager getUserIdentityWithHashedKey:Iwek:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059350d4

// -[SCFideliusLocalKVStoreManager hashedPublicKeys]
// Type encoding: @16@0:8
// Implementation: 0x10079860c

// -[SCFideliusLocalKVStoreManager latestHashedPublicKeys]
// Type encoding: @16@0:8
// Implementation: 0x105935464

// -[SCFideliusLocalKVStoreManager _encodeKVStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x105935490

// -[SCFideliusLocalKVStoreManager _decodeKVStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059354d4

// -[SCFideliusLocalKVStoreManager _readAndMergeKVStoreFromCloudFromSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593553c

// -[SCFideliusLocalKVStoreManager _mergeKVStoreFromCloud:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059356e4

// -[SCFideliusLocalKVStoreManager _mergeKVStoreFromLocalBackfill:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059358f8

// -[SCFideliusLocalKVStoreManager _uploadCloudKVStoreFromSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105935b78

// -[SCFideliusLocalKVStoreManager userEncryptedDataExistsForHashedPublicKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x105935de0

// -[SCFideliusLocalKVStoreManager isLocalKVStoreEmpty]
// Type encoding: B16@0:8
// Implementation: 0x100773b24

// -[SCFideliusLocalKVStoreManager updateOnExistingIdentity:kvStoreForBackfill:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1007984f0

// -[SCFideliusLocalKVStoreManager updateOnNewIdentity:kvStoreForBackfill:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105935f40

// -[SCFideliusLocalKVStoreManager _shouldReadKVStoreFromNotification]
// Type encoding: B16@0:8
// Implementation: 0x105935fb0

// -[SCFideliusLocalKVStoreManager _hashedKeysFromStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x100798860

// -[SCFideliusLocalKVStoreManager _cloudKVStoreHashedKeysMatch:]
// Type encoding: B24@0:8@16
// Implementation: 0x105935fc8

// -[SCFideliusLocalKVStoreManager _encrypt:key:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059360a0

// -[SCFideliusLocalKVStoreManager _decrypt:key:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10593614c

// -[SCFideliusLocalKVStoreManager _loadLocal]
// Type encoding: B16@0:8
// Implementation: 0x1007742fc

// -[SCFideliusLocalKVStoreManager _initFields]
// Type encoding: B16@0:8
// Implementation: 0x105936238

// -[SCFideliusLocalKVStoreManager _loadLocalKVStore]
// Type encoding: B16@0:8
// Implementation: 0x100774344

// -[SCFideliusLocalKVStoreManager _deleteLocalKVStore]
// Type encoding: v16@0:8
// Implementation: 0x1059362e4

// -[SCFideliusLocalKVStoreManager _saveLocalKVStore]
// Type encoding: B16@0:8
// Implementation: 0x105936398

// -[SCFideliusLocalKVStoreManager _validateLocalKVStore:source:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10079603c

// -[SCFideliusLocalKVStoreManager forceSave]
// Type encoding: v16@0:8
// Implementation: 0x1059364a8

// -[SCFideliusLocalKVStoreManager forceLoad]
// Type encoding: v16@0:8
// Implementation: 0x105936508

// -[SCFideliusLocalKVStoreManager forceDelete]
// Type encoding: v16@0:8
// Implementation: 0x105936594

// -[SCFideliusLocalKVStoreManager forceUpload]
// Type encoding: v16@0:8
// Implementation: 0x1059365f4

// -[SCFideliusLocalKVStoreManager onAdd:countBefore:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x105936750

// -[SCFideliusLocalKVStoreManager onPurge:]
// Type encoding: v24@0:8@16
// Implementation: 0x105936754

// -[SCFideliusLocalKVStoreManager onOrderUpdated]
// Type encoding: v16@0:8
// Implementation: 0x105936758

// -[SCFideliusLocalKVStoreManager localKVStore]
// Type encoding: @16@0:8
// Implementation: 0x100796290

// -[SCFideliusLocalKVStoreManager setLocalKVStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x100796260

// -[SCFideliusLocalKVStoreManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10593675c

// +[SCFideliusLocalKVStoreManager fideliusLocalKVStorePath]
// Type encoding: @16@0:8
// Implementation: 0x100774ccc

@end
