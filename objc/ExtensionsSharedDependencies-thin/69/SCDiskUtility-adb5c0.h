// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiskUtility
// Superclass: NSObject
// Address: 0xadb5c0

@interface SCDiskUtility


// +[SCDiskUtility _isUserScopedDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x455760

// +[SCDiskUtility _isGlobalScopedDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x4557e8

// +[SCDiskUtility _isExtensionDirectory:]
// Type encoding: B24@0:8@16
// Implementation: 0x455870

// +[SCDiskUtility shortNameFromPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x4558f8

// +[SCDiskUtility createDirectoryIfNecessary:force:excludeFromBackup:error:]
// Type encoding: B40@0:8@16B24B28^@32
// Implementation: 0x5b63b0

// +[SCDiskUtility traverseDirectory:recurseSubfolders:propertiesForKeys:operation:completion:]
// Type encoding: v52@0:8@16B24@28@?36@?44
// Implementation: 0x5b6544

// +[SCDiskUtility traverseDirectoryURL:recurseSubfolders:propertiesForKeys:operation:completion:]
// Type encoding: v52@0:8@16B24@28@?36@?44
// Implementation: 0x5b6658

// +[SCDiskUtility _executeIterationOperation:fileUrl:propertiesForKeys:enumerator:]
// Type encoding: B48@0:8@?16@24@32@40
// Implementation: 0x5b667c

// +[SCDiskUtility _traverseDirectoryAndSubfolders:propertiesForKeys:operation:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x5b675c

// +[SCDiskUtility _traverseDirectory:propertiesForKeys:operation:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x5b6918

// +[SCDiskUtility directoryPathFromRegex:basePath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5b6aec

// +[SCDiskUtility calculateDirectoryUsage:cancelationToken:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x5b6e40

// +[SCDiskUtility totalDiskSpace:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x5b7030

// +[SCDiskUtility freeDiskSpace:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x5b70e4

// +[SCDiskUtility freeNodes:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x5b7198

// +[SCDiskUtility totalNodes:]
// Type encoding: Q24@0:8^@16
// Implementation: 0x5b724c

// +[SCDiskUtility totalStorageUsageWithCancelationToken:]
// Type encoding: Q24@0:8@16
// Implementation: 0x5b7300

// +[SCDiskUtility totalDiskSpaceInMiBString]
// Type encoding: @16@0:8
// Implementation: 0x5b736c

// +[SCDiskUtility freeDiskSpaceInMiBString]
// Type encoding: @16@0:8
// Implementation: 0x5b73c4

// +[SCDiskUtility freeNodesString]
// Type encoding: @16@0:8
// Implementation: 0x5b741c

// +[SCDiskUtility totalNodesString]
// Type encoding: @16@0:8
// Implementation: 0x5b7478

// +[SCDiskUtility currentOpenedFiles]
// Type encoding: @16@0:8
// Implementation: 0x5b74d4

// +[SCDiskUtility numberOfOpenFiles]
// Type encoding: i16@0:8
// Implementation: 0x5b76d0

// +[SCDiskUtility topOpenedFiles:]
// Type encoding: @24@0:8q16
// Implementation: 0x5b774c

// +[SCDiskUtility _formatSpaceToMiB:]
// Type encoding: @24@0:8Q16
// Implementation: 0x5b78f4

@end
