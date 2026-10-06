// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDataObjectContext
// Superclass: NSObject
// Address: 0x112ca44b8

@interface SCDataObjectContext

// Property: contextName; attributes: T@"NSString",R,C,N

// -[SCDataObjectContext initWithContextName:userId:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100b75f54

// -[SCDataObjectContext contextName]
// Type encoding: @16@0:8
// Implementation: 0x10b6e4b08

// -[SCDataObjectContext installPersistentStore]
// Type encoding: v16@0:8
// Implementation: 0x10b6e4b5c

// -[SCDataObjectContext destroyPersistentStore:reinstall:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10b6e4bb0

// -[SCDataObjectContext destroyPersistentStoreIfNeededWithPrecheck:reinstall:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10b6e4c10

// -[SCDataObjectContext performChanges:queue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x10b6e4c70

// -[SCDataObjectContext isInsidePerformChanges]
// Type encoding: B16@0:8
// Implementation: 0x10b6e4cec

// -[SCDataObjectContext performChangesAndWait:error:]
// Type encoding: B32@0:8@?16^@24
// Implementation: 0x10b6e4d40

// -[SCDataObjectContext dispatchOnceWithToken:block:]
// Type encoding: v32@0:8^q16@?24
// Implementation: 0x10b6e4da0

// -[SCDataObjectContext observe:object:queue:changeHandler:]
// Type encoding: @48@0:8#16@24@32@?40
// Implementation: 0x10b6e4e00

// -[SCDataObjectContext unobserve:objectClass:objectID:]
// Type encoding: v40@0:8@16#24@32
// Implementation: 0x10b6e4e7c

// -[SCDataObjectContext diskUsageReport]
// Type encoding: @16@0:8
// Implementation: 0x10b6e4ee8

// -[SCDataObjectContext diskFileCreationDate]
// Type encoding: @16@0:8
// Implementation: 0x10b6e4f3c

// -[SCDataObjectContext copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6e4f90

// +[SCDataObjectContext sharedContextFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6e4148

// +[SCDataObjectContext sharedContextFor:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10b6e4168

// +[SCDataObjectContext sharedDiskFileURLForContextName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6e4174

// +[SCDataObjectContext diskFileURLForContextName:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100b6d884

// +[SCDataObjectContext sharedDiskFileExistsForContextName:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6e4254

// +[SCDataObjectContext diskFileExistsForContextName:userId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x100b6d7c0

// +[SCDataObjectContext markDiskFileForContextName:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6e4300

// +[SCDataObjectContext clearDiskFileForContextName:exceptUserHashSet:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6e43ec

// +[SCDataObjectContext scanCurrentUserHashDirForContextName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6e4794

@end
