// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCoreDataObjectContext
// Superclass: SCDataObjectContext
// Address: 0x112ca28e8

@interface SCCoreDataObjectContext


// -[SCCoreDataObjectContext initWithContextName:userId:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100b76064

// -[SCCoreDataObjectContext initWithContextName:diskFileURL:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100b78530

// -[SCCoreDataObjectContext contextName]
// Type encoding: @16@0:8
// Implementation: 0x10b698280

// -[SCCoreDataObjectContext _installWithPersistentStoreCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6982b0

// -[SCCoreDataObjectContext _migratePersistentStoreWithFileURL:sourceModel:destinationModel:error:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x10b698334

// -[SCCoreDataObjectContext destroyPersistentStore:reinstall:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10b69873c

// -[SCCoreDataObjectContext destroyPersistentStoreIfNeededWithPrecheck:reinstall:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10b698a48

// -[SCCoreDataObjectContext installPersistentStore]
// Type encoding: v16@0:8
// Implementation: 0x10b698b1c

// -[SCCoreDataObjectContext _createDiskFileDirIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b698b84

// -[SCCoreDataObjectContext _installPersistentStoreIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b698c98

// -[SCCoreDataObjectContext _installWithFileURL:migrateAutomatically:persistentStoreCoordinator:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x10b699664

// -[SCCoreDataObjectContext perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b699af4

// -[SCCoreDataObjectContext performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b699be8

// -[SCCoreDataObjectContext changeRequestCreatedForManagedObjectID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b699cd8

// -[SCCoreDataObjectContext dispatchOnceWithToken:block:]
// Type encoding: v32@0:8^q16@?24
// Implementation: 0x10b699ce8

// -[SCCoreDataObjectContext performChanges:queue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x10b699dd0

// -[SCCoreDataObjectContext isInsidePerformChanges]
// Type encoding: B16@0:8
// Implementation: 0x100c0bbbc

// -[SCCoreDataObjectContext performChangesAndWait:error:]
// Type encoding: B32@0:8@?16^@24
// Implementation: 0x10b69a14c

// -[SCCoreDataObjectContext observe:object:queue:changeHandler:]
// Type encoding: @48@0:8#16@24@32@?40
// Implementation: 0x10b69a464

// -[SCCoreDataObjectContext unobserve:objectClass:objectID:]
// Type encoding: v40@0:8@16#24@32
// Implementation: 0x10b69a794

// -[SCCoreDataObjectContext immutableObjectForClass:managedObject:]
// Type encoding: @32@0:8#16@24
// Implementation: 0x10b69a9b0

// -[SCCoreDataObjectContext _invalidateImmutableObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b69aaa4

// -[SCCoreDataObjectContext _managedObjectContextObjectsDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b69aaec

// -[SCCoreDataObjectContext _enumerateAllFilesMatchingPathComponent:executeBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b69afd0

// -[SCCoreDataObjectContext _removePreviousFileAtURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b69b260

// -[SCCoreDataObjectContext _addSkipBackupAttributeToURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b69b2c4

// -[SCCoreDataObjectContext handlePerformError:logContext:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b69b2d8

// -[SCCoreDataObjectContext _checkCoreDataFetchError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b69b6c8

// -[SCCoreDataObjectContext _totalCoreDataErrorCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b69b7bc

// -[SCCoreDataObjectContext diskUsageReport]
// Type encoding: @16@0:8
// Implementation: 0x10b69b7d8

// -[SCCoreDataObjectContext _logSaveSkippedNoStore]
// Type encoding: v16@0:8
// Implementation: 0x10b69b994

// -[SCCoreDataObjectContext _logCoreDataObjectContextError:errorType:extraParamsDict:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10b69bb38

// -[SCCoreDataObjectContext diskFileCreationDate]
// Type encoding: @16@0:8
// Implementation: 0x10b69bc2c

// -[SCCoreDataObjectContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b69bd08

// +[SCCoreDataObjectContext sharedContextFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b697e50

// +[SCCoreDataObjectContext sharedContextFor:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10b697e70

// +[SCCoreDataObjectContext currentObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x100c0bbf8

// +[SCCoreDataObjectContext setCurrentObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b698050

// +[SCCoreDataObjectContext currentCoreDataObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x10b6980e4

// +[SCCoreDataObjectContext setCurrentCoreDataObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b698158

// +[SCCoreDataObjectContext managedObjectID:forContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6981ec

@end
