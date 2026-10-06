// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiskUtility
// Superclass: NSObject
// Address: 0x112d30878

@interface SCDiskUtility


// +[SCDiskUtility _isUserScopedDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bcb66e8

// +[SCDiskUtility _isGlobalScopedDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bcb6770

// +[SCDiskUtility _isExtensionDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bcb67f8

// +[SCDiskUtility shortNameFromPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bcb6880

// +[SCDiskUtility createDirectoryIfNecessary:force:excludeFromBackup:error:]
// Type encoding: B40@0:8@16B24B28^@32
// Implementation: 0x1000c40c4

// +[SCDiskUtility traverseDirectory:recurseSubfolders:propertiesForKeys:operation:completion:]
// Type encoding: v52@0:8@16B24@28@?36@?44
// Implementation: 0x10bcb6c90

// +[SCDiskUtility traverseDirectoryURL:recurseSubfolders:propertiesForKeys:operation:completion:]
// Type encoding: v52@0:8@16B24@28@?36@?44
// Implementation: 0x10bcb6da4

// +[SCDiskUtility _executeIterationOperation:fileUrl:propertiesForKeys:enumerator:]
// Type encoding: B48@0:8@?16@24@32@40
// Implementation: 0x10bcb6dc8

// +[SCDiskUtility _traverseDirectoryAndSubfolders:propertiesForKeys:operation:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10bcb6ea8

// +[SCDiskUtility _traverseDirectory:propertiesForKeys:operation:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10bcb7064

// +[SCDiskUtility directoryPathFromRegex:basePath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10bcb7238

// +[SCDiskUtility calculateDirectoryUsage:cancelationToken:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10bcb758c

// +[SCDiskUtility totalDiskSpace:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x1002093e4

// +[SCDiskUtility freeDiskSpace:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x1001f49c8

// +[SCDiskUtility freeNodes:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x10bcb777c

// +[SCDiskUtility totalNodes:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x10bcb7830

// +[SCDiskUtility totalStorageUsageWithCancelationToken:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10bcb78e4

// +[SCDiskUtility totalDiskSpaceInMiBString]
// Type encoding: @16@0:8
// Implementation: 0x10bcb7950

// +[SCDiskUtility freeDiskSpaceInMiBString]
// Type encoding: @16@0:8
// Implementation: 0x1006f0680

// +[SCDiskUtility freeNodesString]
// Type encoding: @16@0:8
// Implementation: 0x10bcb79a8

// +[SCDiskUtility totalNodesString]
// Type encoding: @16@0:8
// Implementation: 0x10bcb7a04

// +[SCDiskUtility currentOpenedFiles]
// Type encoding: @16@0:8
// Implementation: 0x10bcb7a60

// +[SCDiskUtility numberOfOpenFiles]
// Type encoding: i16@0:8
// Implementation: 0x10bcb7c5c

// +[SCDiskUtility topOpenedFiles:]
// Type encoding: @24@0:8q16
// Implementation: 0x10bcb7cd8

// +[SCDiskUtility _formatSpaceToMiB:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10070dbf8

@end
