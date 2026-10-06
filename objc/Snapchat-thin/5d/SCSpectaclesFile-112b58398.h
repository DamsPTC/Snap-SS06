// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFile
// Superclass: NSObject
// Address: 0x112b58398

@interface SCSpectaclesFile

// Property: localFilename; attributes: T@"NSString",C,N,V_localFilename
// Property: remoteFileName; attributes: T@"NSString",C,N,V_remoteFileName
// Property: lastKnownFileSize; attributes: Tq,V_lastKnownFileSize
// Property: fileHandle; attributes: T@"NSFileHandle",&,N,V_fileHandle
// Property: supportsUnsafeWrites; attributes: TB,N,V_supportsUnsafeWrites
// Property: remoteFileSize; attributes: Tq,N,V_remoteFileSize
// Property: cache; attributes: T@"SCSpectaclesCache",&,N,V_cache
// Property: localFileSize; attributes: Tq

// -[SCSpectaclesFile initWithCache:localFilename:remoteFilename:remoteFileSize:supportsUnsafeWrites:]
// Type encoding: @52@0:8@16@24@32q40B48
// Implementation: 0x106fce5dc

// -[SCSpectaclesFile dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106fce6c8

// -[SCSpectaclesFile dataFromLocalFileWithRange:]
// Type encoding: @32@0:8{_NSRange=QQ}16
// Implementation: 0x106fce70c

// -[SCSpectaclesFile appendData:range:]
// Type encoding: B40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fce7d4

// -[SCSpectaclesFile localFileSize]
// Type encoding: q16@0:8
// Implementation: 0x106fcea68

// -[SCSpectaclesFile setLocalFileSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x106fceb94

// -[SCSpectaclesFile localFilePath]
// Type encoding: @16@0:8
// Implementation: 0x106fcec24

// -[SCSpectaclesFile _removeFromDisk]
// Type encoding: v16@0:8
// Implementation: 0x106fcecb0

// -[SCSpectaclesFile removeFromDiskForExport]
// Type encoding: v16@0:8
// Implementation: 0x106fcef54

// -[SCSpectaclesFile isConfigured]
// Type encoding: B16@0:8
// Implementation: 0x106fcf048

// -[SCSpectaclesFile extraDiskSpaceSizeInBytesNeededForDownloading]
// Type encoding: q16@0:8
// Implementation: 0x106fcf058

// -[SCSpectaclesFile initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fcf0ac

// -[SCSpectaclesFile encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcf178

// -[SCSpectaclesFile _openFile]
// Type encoding: B16@0:8
// Implementation: 0x106fcf2c0

// -[SCSpectaclesFile _closeFile]
// Type encoding: v16@0:8
// Implementation: 0x106fcf498

// -[SCSpectaclesFile localFilename]
// Type encoding: @16@0:8
// Implementation: 0x106fcf500

// -[SCSpectaclesFile setLocalFilename:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcf508

// -[SCSpectaclesFile remoteFileName]
// Type encoding: @16@0:8
// Implementation: 0x106fcf510

// -[SCSpectaclesFile setRemoteFileName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcf518

// -[SCSpectaclesFile remoteFileSize]
// Type encoding: q16@0:8
// Implementation: 0x106fcf520

// -[SCSpectaclesFile setRemoteFileSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x106fcf528

// -[SCSpectaclesFile cache]
// Type encoding: @16@0:8
// Implementation: 0x106fcf530

// -[SCSpectaclesFile setCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcf538

// -[SCSpectaclesFile lastKnownFileSize]
// Type encoding: q16@0:8
// Implementation: 0x106fcf568

// -[SCSpectaclesFile setLastKnownFileSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x106fcf570

// -[SCSpectaclesFile fileHandle]
// Type encoding: @16@0:8
// Implementation: 0x106fcf578

// -[SCSpectaclesFile setFileHandle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcf580

// -[SCSpectaclesFile supportsUnsafeWrites]
// Type encoding: B16@0:8
// Implementation: 0x106fcf5b0

// -[SCSpectaclesFile setSupportsUnsafeWrites:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fcf5b8

// -[SCSpectaclesFile .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fcf5c0

// +[SCSpectaclesFile _suffixForType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fce1dc

// +[SCSpectaclesFile _extensionForType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fce200

// +[SCSpectaclesFile contentTypeForExtension:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106fce224

// +[SCSpectaclesFile contentNameFromRemoteFilename:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fce31c

// +[SCSpectaclesFile fileTypeFromRemoteFilename:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106fce420

// +[SCSpectaclesFile removeFilesFromDisk:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106fcee24

// +[SCSpectaclesFile _performer]
// Type encoding: @16@0:8
// Implementation: 0x106fcf228

@end
