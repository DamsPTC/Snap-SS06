// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionSharedDirectory
// Superclass: NSObject
// Address: 0xadb250

@interface SCExtensionSharedDirectory

// Property: url; attributes: T@"NSURL",&,N,V_url

// -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x5aff78

// -[SCExtensionSharedDirectory initLoggedOutDirectory]
// Type encoding: @16@0:8
// Implementation: 0x5b002c

// -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5b00bc

// -[SCExtensionSharedDirectory initLoggedOutDirectoryWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x5b01a4

// -[SCExtensionSharedDirectory initWithParentDirectory:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5b0274

// -[SCExtensionSharedDirectory initWithRawFolderPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x5b0330

// -[SCExtensionSharedDirectory filesWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x5b03bc

// -[SCExtensionSharedDirectory sharedFileWithName:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5b0440

// -[SCExtensionSharedDirectory subDirectoryWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x5b04b4

// -[SCExtensionSharedDirectory remove]
// Type encoding: v16@0:8
// Implementation: 0x5b0510

// -[SCExtensionSharedDirectory url]
// Type encoding: @16@0:8
// Implementation: 0x5b07a0

// -[SCExtensionSharedDirectory setUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x5b07a8

// -[SCExtensionSharedDirectory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x5b07d8

// +[SCExtensionSharedDirectory directoryForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x5afd28

// +[SCExtensionSharedDirectory directoryForLoggedOut]
// Type encoding: @16@0:8
// Implementation: 0x5afda4

// +[SCExtensionSharedDirectory userScopedDirectory]
// Type encoding: @16@0:8
// Implementation: 0x5afda8

// +[SCExtensionSharedDirectory loggedOutDirectory]
// Type encoding: @16@0:8
// Implementation: 0x5afdbc

// +[SCExtensionSharedDirectory removeUserScopedDirectory]
// Type encoding: v16@0:8
// Implementation: 0x5afdd0

// +[SCExtensionSharedDirectory removeLoggedOutDirectory]
// Type encoding: v16@0:8
// Implementation: 0x5afe0c

// +[SCExtensionSharedDirectory applicationGroupContainerURL]
// Type encoding: @16@0:8
// Implementation: 0x5afe48

// +[SCExtensionSharedDirectory databasesDirectoryForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x5afed8

// +[SCExtensionSharedDirectory databasesDirectoryForLoggedOut]
// Type encoding: @16@0:8
// Implementation: 0x5aff28

// +[SCExtensionSharedDirectory _topLevelDirectoryWithName:skipBackupOnceToken:]
// Type encoding: @32@0:8@16^q24
// Implementation: 0x5b0534

// +[SCExtensionSharedDirectory _removeDirectoryAtURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x5b065c

// +[SCExtensionSharedDirectory _addSkipBackupAttributeToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x5b0718

// +[SCExtensionSharedDirectory _isSkipBackupAttributeAddedToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x5b0738

@end
