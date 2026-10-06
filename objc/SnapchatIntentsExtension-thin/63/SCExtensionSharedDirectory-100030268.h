// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionSharedDirectory
// Superclass: NSObject
// Address: 0x100030268

@interface SCExtensionSharedDirectory

// Property: url; attributes: T@"NSURL",&,N,V_url

// -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100018ca8

// -[SCExtensionSharedDirectory initLoggedOutDirectory]
// Type encoding: @16@0:8
// Implementation: 0x100018d5c

// -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100018dec

// -[SCExtensionSharedDirectory initLoggedOutDirectoryWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x100018ed4

// -[SCExtensionSharedDirectory initWithParentDirectory:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100018fa4

// -[SCExtensionSharedDirectory initWithRawFolderPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x100019060

// -[SCExtensionSharedDirectory filesWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x1000190ec

// -[SCExtensionSharedDirectory sharedFileWithName:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100019170

// -[SCExtensionSharedDirectory subDirectoryWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000191e4

// -[SCExtensionSharedDirectory remove]
// Type encoding: v16@0:8
// Implementation: 0x100019240

// -[SCExtensionSharedDirectory url]
// Type encoding: @16@0:8
// Implementation: 0x1000194d0

// -[SCExtensionSharedDirectory setUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000194d8

// -[SCExtensionSharedDirectory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100019508

// +[SCExtensionSharedDirectory directoryForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100018a58

// +[SCExtensionSharedDirectory directoryForLoggedOut]
// Type encoding: @16@0:8
// Implementation: 0x100018ad4

// +[SCExtensionSharedDirectory userScopedDirectory]
// Type encoding: @16@0:8
// Implementation: 0x100018ad8

// +[SCExtensionSharedDirectory loggedOutDirectory]
// Type encoding: @16@0:8
// Implementation: 0x100018aec

// +[SCExtensionSharedDirectory removeUserScopedDirectory]
// Type encoding: v16@0:8
// Implementation: 0x100018b00

// +[SCExtensionSharedDirectory removeLoggedOutDirectory]
// Type encoding: v16@0:8
// Implementation: 0x100018b3c

// +[SCExtensionSharedDirectory applicationGroupContainerURL]
// Type encoding: @16@0:8
// Implementation: 0x100018b78

// +[SCExtensionSharedDirectory databasesDirectoryForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100018c08

// +[SCExtensionSharedDirectory databasesDirectoryForLoggedOut]
// Type encoding: @16@0:8
// Implementation: 0x100018c58

// +[SCExtensionSharedDirectory _topLevelDirectoryWithName:skipBackupOnceToken:]
// Type encoding: @32@0:8@16^q24
// Implementation: 0x100019264

// +[SCExtensionSharedDirectory _removeDirectoryAtURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10001938c

// +[SCExtensionSharedDirectory _addSkipBackupAttributeToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x100019448

// +[SCExtensionSharedDirectory _isSkipBackupAttributeAddedToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x100019468

@end
