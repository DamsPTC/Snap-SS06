// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionSharedDirectory
// Superclass: NSObject
// Address: 0x112d2c408

@interface SCExtensionSharedDirectory

// Property: url; attributes: T@"NSURL",&,N,V_url

// -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7ee5c

// -[SCExtensionSharedDirectory initLoggedOutDirectory]
// Type encoding: @16@0:8
// Implementation: 0x10bc7ef10

// -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100418d24

// -[SCExtensionSharedDirectory initLoggedOutDirectoryWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7efa0

// -[SCExtensionSharedDirectory initWithParentDirectory:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10bc7f070

// -[SCExtensionSharedDirectory initWithRawFolderPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7f12c

// -[SCExtensionSharedDirectory filesWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x10bc7f1b8

// -[SCExtensionSharedDirectory sharedFileWithName:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10bc7f23c

// -[SCExtensionSharedDirectory subDirectoryWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7f2b0

// -[SCExtensionSharedDirectory remove]
// Type encoding: v16@0:8
// Implementation: 0x10bc7f30c

// -[SCExtensionSharedDirectory url]
// Type encoding: @16@0:8
// Implementation: 0x10041b654

// -[SCExtensionSharedDirectory setUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc7f40c

// -[SCExtensionSharedDirectory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100608f34

// +[SCExtensionSharedDirectory directoryForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100418e0c

// +[SCExtensionSharedDirectory directoryForLoggedOut]
// Type encoding: @16@0:8
// Implementation: 0x10bc7ed7c

// +[SCExtensionSharedDirectory userScopedDirectory]
// Type encoding: @16@0:8
// Implementation: 0x100418e88

// +[SCExtensionSharedDirectory loggedOutDirectory]
// Type encoding: @16@0:8
// Implementation: 0x10bc7ed80

// +[SCExtensionSharedDirectory removeUserScopedDirectory]
// Type encoding: v16@0:8
// Implementation: 0x10bc7ed94

// +[SCExtensionSharedDirectory removeLoggedOutDirectory]
// Type encoding: v16@0:8
// Implementation: 0x10bc7edd0

// +[SCExtensionSharedDirectory applicationGroupContainerURL]
// Type encoding: @16@0:8
// Implementation: 0x1004197bc

// +[SCExtensionSharedDirectory databasesDirectoryForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10042e650

// +[SCExtensionSharedDirectory databasesDirectoryForLoggedOut]
// Type encoding: @16@0:8
// Implementation: 0x10bc7ee0c

// +[SCExtensionSharedDirectory _topLevelDirectoryWithName:skipBackupOnceToken:]
// Type encoding: @32@0:8@16^q24
// Implementation: 0x100418e9c

// +[SCExtensionSharedDirectory _removeDirectoryAtURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc7f330

// +[SCExtensionSharedDirectory _addSkipBackupAttributeToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bc7f3ec

// +[SCExtensionSharedDirectory _isSkipBackupAttributeAddedToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10041b5ec

@end
