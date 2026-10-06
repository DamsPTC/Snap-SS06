// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesNonEncryptedDatabase
// Superclass: NSObject
// Address: 0x112bc1b18

@interface SCMemoriesNonEncryptedDatabase

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesNonEncryptedDatabase initWithNetworker:profileHandler:circumstanceEngine:grapheneRegistry:memoriesDataObjectContext:memoriesExperimentServices:legacyEncryptedDatabase:sqliteTransactorProvider:logger:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x108d50a78

// -[SCMemoriesNonEncryptedDatabase addEncryptionInfoWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d50c58

// -[SCMemoriesNonEncryptedDatabase addKey:IV:isEncrypted:forSnapId:shouldSkipCoredataPersisting:]
// Type encoding: B48@0:8@16@24B32@36B44
// Implementation: 0x108d50ca4

// -[SCMemoriesNonEncryptedDatabase addLocation:forSnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d50e80

// -[SCMemoriesNonEncryptedDatabase addLocationsWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d51008

// -[SCMemoriesNonEncryptedDatabase deleteRecordForSnapIds:memoriesGrapheneContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d510e4

// -[SCMemoriesNonEncryptedDatabase duplicateFromSnapIds:toSnapIds:localOnly:shouldSkipCoredataPersisting:memoriesGrapheneContext:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x108d511c8

// -[SCMemoriesNonEncryptedDatabase requestKeyForEntryExternalId:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d5171c

// -[SCMemoriesNonEncryptedDatabase requestKeyForIdentifier:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d51b48

// -[SCMemoriesNonEncryptedDatabase requestKeyForSnap:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d51b50

// -[SCMemoriesNonEncryptedDatabase requestLocationForSnapId:synchronous:queue:resultHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x108d51cec

// -[SCMemoriesNonEncryptedDatabase observeDbInit]
// Type encoding: @16@0:8
// Implementation: 0x108d520f8

// -[SCMemoriesNonEncryptedDatabase replaceAddressTitle:forSnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d52144

// -[SCMemoriesNonEncryptedDatabase requestAddressTitleForSnapId:queue:resultHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108d52250

// -[SCMemoriesNonEncryptedDatabase snapIdToLocationMapWithinMinLatitude:maxLatitude:minLongitude:maxLongitude:]
// Type encoding: @48@0:8d16d24d32d40
// Implementation: 0x108d524e8

// -[SCMemoriesNonEncryptedDatabase _persistKeyIVToGallerySnapWithSnapId:encryptionResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d528a0

// -[SCMemoriesNonEncryptedDatabase _createLocationDbTransactorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108d52a7c

// -[SCMemoriesNonEncryptedDatabase _createAddressTitleDbTransactorIfNeede]
// Type encoding: v16@0:8
// Implementation: 0x108d52ac0

// -[SCMemoriesNonEncryptedDatabase _readThroughKeyIVForSnapIds:memoriesGrapheneContext:resultHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108d52b04

// -[SCMemoriesNonEncryptedDatabase _hasDBNuked]
// Type encoding: B16@0:8
// Implementation: 0x108d52d28

// -[SCMemoriesNonEncryptedDatabase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d52d74

@end
