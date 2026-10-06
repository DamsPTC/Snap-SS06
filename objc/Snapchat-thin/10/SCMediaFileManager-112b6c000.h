// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaFileManager
// Superclass: NSObject
// Address: 0x112b6c000

@interface SCMediaFileManager


// +[SCMediaFileManager saveData_DEPRECATED:toMediaDirectoryWithFilename:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x107a584ac

// +[SCMediaFileManager saveData_DEPRECATED:toMediaDirectoryWithFilename:error:persistentStorage:]
// Type encoding: B44@0:8@16@24^@32B40
// Implementation: 0x107a584b4

// +[SCMediaFileManager moveItemAtPath_DEPRECATED:toMediaDirectoryWithFilename:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x107a5857c

// +[SCMediaFileManager removeDataWithFilename_DEPRECATED:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x107a58738

// +[SCMediaFileManager removeDataWithFilename_DEPRECATED:error:persistentStorage:]
// Type encoding: B36@0:8@16^@24B32
// Implementation: 0x107a58740

// +[SCMediaFileManager removeExpiredMediaForOwners_DEPRECATED:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a58824

// +[SCMediaFileManager removeExpiredMediaWithValidFilenames:creationDate:persistentStorage:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107a58a84

// +[SCMediaFileManager clear_DEPRECATED]
// Type encoding: v16@0:8
// Implementation: 0x107a58cd0

// +[SCMediaFileManager clearContentsOfDirectoryAtPath_DEPRECATED:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a58dbc

// +[SCMediaFileManager fileExistsWithFilename_DEPRECATED:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a58f7c

// +[SCMediaFileManager fileExistsWithFilename_DEPRECATED:persistentStorage:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x107a58f84

// +[SCMediaFileManager contentsOfDirectory_DEPRECATED:persistentStorage:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107a5900c

// +[SCMediaFileManager createBaseDirectoryIfNecessary:persistentStorage:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a590a0

// +[SCMediaFileManager fileURLForFilename_DEPRECATED:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a591b8

// +[SCMediaFileManager fileURLForFilename_DEPRECATED:persistentStorage:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107a591c0

// +[SCMediaFileManager fileURLForFilenameIfExists_DEPRECATED:persistentStorage:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107a59260

// +[SCMediaFileManager baseDirectoryForPersistentStorage:]
// Type encoding: @20@0:8B16
// Implementation: 0x107a592f4

@end
