// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTemporaryDatastore
// Superclass: NSObject
// Address: 0x112cd3678

@interface SCTemporaryDatastore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: kindName; attributes: T@"NSString",R,C,N
// Property: underExperiment; attributes: TB,N,V_underExperiment

// -[SCTemporaryDatastore init:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b7c90c0

// -[SCTemporaryDatastore init:name:defaultDaysForExpiry:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x10b7c90c8

// -[SCTemporaryDatastore managedURL:expiration:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10b7c92a4

// -[SCTemporaryDatastore restoreManagedURLs]
// Type encoding: @16@0:8
// Implementation: 0x10b7c9514

// -[SCTemporaryDatastore restoreManagedURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c9708

// -[SCTemporaryDatastore _filePathForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c995c

// -[SCTemporaryDatastore _adjustMetadataForKey:refCountDelta:expiration:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10b7c99b0

// -[SCTemporaryDatastore _removeMetadataMapEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c9a68

// -[SCTemporaryDatastore performer]
// Type encoding: @16@0:8
// Implementation: 0x10b7c9b28

// -[SCTemporaryDatastore path]
// Type encoding: @16@0:8
// Implementation: 0x10b7c9b50

// -[SCTemporaryDatastore adjustReferenceCount:delta:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b7c9b78

// -[SCTemporaryDatastore metadataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c9c9c

// -[SCTemporaryDatastore flushMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c9e20

// -[SCTemporaryDatastore _flushMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c9f34

// -[SCTemporaryDatastore _flushDirtyMetadata]
// Type encoding: v16@0:8
// Implementation: 0x10b7ca03c

// -[SCTemporaryDatastore _retrieveMetadataFromFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7ca15c

// -[SCTemporaryDatastore _retrieveMetadata:cache:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b7ca214

// -[SCTemporaryDatastore _executeCompletionBlock:withKey:object:]
// Type encoding: v40@0:8@?16@24@32
// Implementation: 0x10b7ca370

// -[SCTemporaryDatastore _executeCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7ca4e8

// -[SCTemporaryDatastore setObject:dataEncoding:forKey:expiration:block:]
// Type encoding: v56@0:8@16@?24@32@40@?48
// Implementation: 0x10b7ca604

// -[SCTemporaryDatastore objectForKey:dataDecoding:block:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10b7ca9b8

// -[SCTemporaryDatastore objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:]
// Type encoding: v56@0:8@16@?24@32d40@?48
// Implementation: 0x10b7ca9cc

// -[SCTemporaryDatastore objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:]
// Type encoding: v60@0:8@16@?24@32d40@?48B56
// Implementation: 0x10b7ca9d4

// -[SCTemporaryDatastore _updateExpiration:forMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7cad24

// -[SCTemporaryDatastore decreaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7cae28

// -[SCTemporaryDatastore increaseExpirationTo:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7cb028

// -[SCTemporaryDatastore invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10b7cb228

// -[SCTemporaryDatastore _executeRemoveExpiredContentSync]
// Type encoding: @16@0:8
// Implementation: 0x10b7cb22c

// -[SCTemporaryDatastore removeExpiredContentWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7cb6a0

// -[SCTemporaryDatastore removeAllObjectsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7cb7c4

// -[SCTemporaryDatastore removeAllObjectsFromMemoryWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7cba24

// -[SCTemporaryDatastore removeAllObjectsExceptKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cba3c

// -[SCTemporaryDatastore removeObjectsForKeys:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cbd34

// -[SCTemporaryDatastore removeObjectForKey:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cbff8

// -[SCTemporaryDatastore contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7cc16c

// -[SCTemporaryDatastore contains:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cc27c

// -[SCTemporaryDatastore restoreAllKeys]
// Type encoding: @16@0:8
// Implementation: 0x10b7cc3f0

// -[SCTemporaryDatastore kindName]
// Type encoding: @16@0:8
// Implementation: 0x10b7cc7c0

// -[SCTemporaryDatastore removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b7cc7e8

// -[SCTemporaryDatastore removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x10b7cc930

// -[SCTemporaryDatastore handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7cc934

// -[SCTemporaryDatastore reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b7cc938

// -[SCTemporaryDatastore _captureUnmanagedFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7cc960

// -[SCTemporaryDatastore underExperiment]
// Type encoding: B16@0:8
// Implementation: 0x10b7cca64

// -[SCTemporaryDatastore setUnderExperiment:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7cca6c

// -[SCTemporaryDatastore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7cca74

// +[SCTemporaryDatastore _tmpDatastoreForName:user:type:]
// Type encoding: @40@0:8Q16@24Q32
// Implementation: 0x10b7c8d90

// +[SCTemporaryDatastore _defaultExpirationDaysForDatastoreName:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10b7c902c

// +[SCTemporaryDatastore _stringForDatastoreName:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b7c9040

// +[SCTemporaryDatastore failedSnapDatastoreForUser:type:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b7c9060

// +[SCTemporaryDatastore failedBaseChatMediaDatastoreForUser:type:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b7c9070

// +[SCTemporaryDatastore failedDiscoverMediaMessageDatastoreForUser:type:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b7c9080

// +[SCTemporaryDatastore persistedEphemeralMediaDataStoreForUser:type:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b7c9090

// +[SCTemporaryDatastore storyDataStoreForUser:type:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b7c90a0

// +[SCTemporaryDatastore multiSnapDataStoreForUser:type:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b7c90b0

@end
