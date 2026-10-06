// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardFileRepository
// Superclass: NSObject
// Address: 0x112b11768

@interface SCBlizzardFileRepository

// Property: fileSystem; attributes: T@"SCBlizzardFileSystem",&,N,V_fileSystem
// Property: config; attributes: T@"SCBlizzardConfigAdapter",&,N,V_config
// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",&,N,V_graphene
// Property: queueRegionNameFilePathMap; attributes: T@"NSDictionary",&,N,V_queueRegionNameFilePathMap
// Property: fileCompressor; attributes: T@"SCBlizzardFileCompressor",&,N,V_fileCompressor
// Property: timeProvider; attributes: T@"<SCTimeProviding>",&,N,V_timeProvider

// -[SCBlizzardFileRepository initWithFileSystem:config:grapheneRegistry:queueNameFilePathMap:fileCompressor:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1002f1710

// -[SCBlizzardFileRepository parseExistingFilesForQueueWithName:region:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10033892c

// -[SCBlizzardFileRepository fetchExistingFilesFromQueueName:region:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x100338ae4

// -[SCBlizzardFileRepository saveToDisk:eventCounts:highestPriority:logQueueName:region:isFrame:isSpectrum:eagerUploadId:]
// Type encoding: @72@0:8@16Q24Q32@40Q48B56B60@64
// Implementation: 0x1005c49a8

// -[SCBlizzardFileRepository deleteFile:fromQueueName:fromRegion:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106ad4034

// -[SCBlizzardFileRepository fetchEventsJsonDataFromFile:logQueueName:region:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x106ad4088

// -[SCBlizzardFileRepository fetchEventsJsonDataFromPath:logQueueName:region:isCompressed:]
// Type encoding: @44@0:8@16@24Q32B40
// Implementation: 0x106ad4130

// -[SCBlizzardFileRepository _generateFileNameWithEventCount:creationTime:highestPriority:dedupeId:isFrame:isSpectrum:isCompressed:]
// Type encoding: @60@0:8Q16q24Q32Q40B48B52B56
// Implementation: 0x1005c5bac

// -[SCBlizzardFileRepository _getAbsoluteFilePath:fromQueueName:region:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x100580b44

// -[SCBlizzardFileRepository _getAbsoluteLegacyFilePath:fromQueueName:region:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x106ad421c

// -[SCBlizzardFileRepository _parseFileName:forQueueWithName:region:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x10058080c

// -[SCBlizzardFileRepository _hasFrameSuffix:isCompressed:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x100580ae4

// -[SCBlizzardFileRepository _hasSpectrumSuffix:isCompressed:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x100580b04

// -[SCBlizzardFileRepository _hasJsonSuffix:isCompressed:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x100580b24

// -[SCBlizzardFileRepository _getFileBytesFrom:]
// Type encoding: Q24@0:8@16
// Implementation: 0x100580bd0

// -[SCBlizzardFileRepository _estimateEventCount:forQueueWithName:region:]
// Type encoding: Q40@0:8Q16@24Q32
// Implementation: 0x106ad42a8

// -[SCBlizzardFileRepository _getFileCreationTime:]
// Type encoding: q24@0:8@16
// Implementation: 0x106ad4314

// -[SCBlizzardFileRepository _convertToMillisFromDate:]
// Type encoding: q24@0:8@16
// Implementation: 0x1005c5770

// -[SCBlizzardFileRepository _sealedFilesDirectoryForQueueName:region:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x100338da8

// -[SCBlizzardFileRepository _sealedLegacyFilesDirectoryForQueueName:region:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10033c2d4

// -[SCBlizzardFileRepository fileSystem]
// Type encoding: @16@0:8
// Implementation: 0x100338da0

// -[SCBlizzardFileRepository setFileSystem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad43e4

// -[SCBlizzardFileRepository config]
// Type encoding: @16@0:8
// Implementation: 0x106ad4414

// -[SCBlizzardFileRepository setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad441c

// -[SCBlizzardFileRepository graphene]
// Type encoding: @16@0:8
// Implementation: 0x106ad444c

// -[SCBlizzardFileRepository setGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad4454

// -[SCBlizzardFileRepository queueRegionNameFilePathMap]
// Type encoding: @16@0:8
// Implementation: 0x100338e84

// -[SCBlizzardFileRepository setQueueRegionNameFilePathMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad4484

// -[SCBlizzardFileRepository fileCompressor]
// Type encoding: @16@0:8
// Implementation: 0x106ad44b4

// -[SCBlizzardFileRepository setFileCompressor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad44bc

// -[SCBlizzardFileRepository timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1005c5768

// -[SCBlizzardFileRepository setTimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad44ec

// -[SCBlizzardFileRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad451c

@end
