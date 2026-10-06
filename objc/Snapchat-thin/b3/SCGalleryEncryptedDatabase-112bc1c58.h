// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryEncryptedDatabase
// Superclass: NSObject
// Address: 0x112bc1c58

@interface SCGalleryEncryptedDatabase

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryEncryptedDatabase initWithNetworker:profile:userTrackedLogger:circumstanceEngine:grapheneRegistry:deviceSamplingProvider:memoriesDataObjectContext:memoriesExperimentServices:logger:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x108d53198

// -[SCGalleryEncryptedDatabase EGOCipherKeyProvider:didFindDerivedKey:nonDerivedKey:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108d53688

// -[SCGalleryEncryptedDatabase _persistKeyIVToGallerySnapWithSnapId:encryptionResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d5377c

// -[SCGalleryEncryptedDatabase _readKeyIVForSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d539f0

// -[SCGalleryEncryptedDatabase _readKeyIVForGivenEntryExternalIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d53c80

// -[SCGalleryEncryptedDatabase _EGOCipherStatementForSQL:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d53f18

// -[SCGalleryEncryptedDatabase _EGOCipherStatementForSQL:cacheQuery:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108d53f38

// -[SCGalleryEncryptedDatabase _inMemoryStatementForSQL:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d53ff4

// -[SCGalleryEncryptedDatabase _performUpdate:parameters:callsite:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x108d540a0

// -[SCGalleryEncryptedDatabase _executePendingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x108d541f4

// -[SCGalleryEncryptedDatabase _executePendingUpdatesWithEncryptionRequests:pendingLocationRequests:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d54434

// -[SCGalleryEncryptedDatabase _clearPendingItems]
// Type encoding: v16@0:8
// Implementation: 0x108d54824

// -[SCGalleryEncryptedDatabase _readThroughKeyIVForSnapIds:synchronous:localOnly:shouldSkipCoreDataReading:memoriesGrapheneContext:resultHandler:]
// Type encoding: v52@0:8@16B24B28B32@36@?44
// Implementation: 0x108d54878

// -[SCGalleryEncryptedDatabase _initDatabaseTables]
// Type encoding: v16@0:8
// Implementation: 0x108d57378

// -[SCGalleryEncryptedDatabase _setupWithMasterKey:masterKeyAvoidKeyDerivation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d57510

// -[SCGalleryEncryptedDatabase _regenerateEGOCipherAtURL:masterKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108d57c9c

// -[SCGalleryEncryptedDatabase _readThroughEncryptionForSnapId:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d57f8c

// -[SCGalleryEncryptedDatabase observeDbInit]
// Type encoding: @16@0:8
// Implementation: 0x108d58288

// -[SCGalleryEncryptedDatabase addLocationsWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d582b0

// -[SCGalleryEncryptedDatabase addEncryptionInfoWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d5863c

// -[SCGalleryEncryptedDatabase addLocation:forSnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d58a38

// -[SCGalleryEncryptedDatabase addKey:IV:isEncrypted:forSnapId:shouldSkipCoredataPersisting:]
// Type encoding: B48@0:8@16@24B32@36B44
// Implementation: 0x108d58ca0

// -[SCGalleryEncryptedDatabase snapIdToLocationMapWithinMinLatitude:maxLatitude:minLongitude:maxLongitude:]
// Type encoding: @48@0:8d16d24d32d40
// Implementation: 0x108d59120

// -[SCGalleryEncryptedDatabase duplicateFromSnapIds:toSnapIds:localOnly:shouldSkipCoredataPersisting:memoriesGrapheneContext:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x108d59574

// -[SCGalleryEncryptedDatabase requestKeyForEntryExternalId:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d59e2c

// -[SCGalleryEncryptedDatabase requestKeyForSnap:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d5a0d8

// -[SCGalleryEncryptedDatabase requestKeyForIdentifier:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d5a4a8

// -[SCGalleryEncryptedDatabase _requestKeyForIdentifier:isInternal:isFtsSnap:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v56@0:8@16B24B28@32@40@?48
// Implementation: 0x108d5a4c0

// -[SCGalleryEncryptedDatabase _createPendingLocationRequestIfNeeded:queue:resultHandler:]
// Type encoding: B40@0:8@16@24@?32
// Implementation: 0x108d5aaf4

// -[SCGalleryEncryptedDatabase requestLocationForSnapId:synchronous:queue:resultHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x108d5abdc

// -[SCGalleryEncryptedDatabase replaceAddressTitle:forSnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d5b398

// -[SCGalleryEncryptedDatabase requestAddressTitleForSnapId:queue:resultHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108d5b57c

// -[SCGalleryEncryptedDatabase deleteRecordForSnapIds:memoriesGrapheneContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d5b934

// -[SCGalleryEncryptedDatabase _sqliteRegeneratedTime]
// Type encoding: @16@0:8
// Implementation: 0x108d5bc30

// -[SCGalleryEncryptedDatabase _logExceptionEGODBFailToOpen:callsite:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108d5bc58

// -[SCGalleryEncryptedDatabase _logSqliteRegenerateWithContext:dbFileExists:regenerateSucceeded:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x108d5be24

// -[SCGalleryEncryptedDatabase _getCachedKeyIVForSnapID:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d5be74

// -[SCGalleryEncryptedDatabase _joinSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d5bf14

// -[SCGalleryEncryptedDatabase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d5bf3c

// -[SCGalleryEncryptedDatabase .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x108d5c064

@end
