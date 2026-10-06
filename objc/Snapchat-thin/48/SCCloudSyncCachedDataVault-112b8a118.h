// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncCachedDataVault
// Superclass: NSObject
// Address: 0x112b8a118

@interface SCCloudSyncCachedDataVault

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSyncCachedDataVault initWithDataVault:cachedEncrytion:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107ec7244

// -[SCCloudSyncCachedDataVault addLocationsWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ec72e8

// -[SCCloudSyncCachedDataVault addEncryptionInfoWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ec72f0

// -[SCCloudSyncCachedDataVault addLocation:forSnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ec72f8

// -[SCCloudSyncCachedDataVault addKey:IV:isEncrypted:forSnapId:shouldSkipCoredataPersisting:]
// Type encoding: B48@0:8@16@24B32@36B44
// Implementation: 0x107ec7300

// -[SCCloudSyncCachedDataVault requestLocationForSnapId:synchronous:queue:resultHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107ec7308

// -[SCCloudSyncCachedDataVault requestKeyForSnap:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ec7464

// -[SCCloudSyncCachedDataVault requestKeyForEntryExternalId:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ec766c

// -[SCCloudSyncCachedDataVault requestKeyForIdentifier:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ec7674

// -[SCCloudSyncCachedDataVault duplicateFromSnapIds:toSnapIds:localOnly:shouldSkipCoredataPersisting:memoriesGrapheneContext:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x107ec7860

// -[SCCloudSyncCachedDataVault deleteRecordForSnapIds:memoriesGrapheneContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ec7868

// -[SCCloudSyncCachedDataVault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ec78cc

@end
