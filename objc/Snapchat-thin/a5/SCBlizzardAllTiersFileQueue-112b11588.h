// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardAllTiersFileQueue
// Superclass: NSObject
// Address: 0x112b11588

@interface SCBlizzardAllTiersFileQueue

// Property: fileRepository; attributes: T@"SCBlizzardFileRepository",&,N,V_fileRepository
// Property: config; attributes: T@"SCBlizzardConfigAdapter",&,N,V_config
// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",R,N,V_graphene
// Property: prioritizedFileQueue; attributes: T@"SCBlizzardPrioritizedQueue",&,N,V_prioritizedFileQueue
// Property: totalFiles; attributes: TQ,R,N
// Property: totalBytes; attributes: TQ,R,N
// Property: totalEventCounts; attributes: TQ,R,N

// -[SCBlizzardAllTiersFileQueue initWithFileRepository:configAdapter:grapheneRegistry:eagerUploadStatusManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1002fedb8

// -[SCBlizzardAllTiersFileQueue totalFiles]
// Type encoding: Q16@0:8
// Implementation: 0x10033fb40

// -[SCBlizzardAllTiersFileQueue totalBytes]
// Type encoding: Q16@0:8
// Implementation: 0x106ad352c

// -[SCBlizzardAllTiersFileQueue totalEventCounts]
// Type encoding: Q16@0:8
// Implementation: 0x106ad3568

// -[SCBlizzardAllTiersFileQueue recoverFilesFromPreviousLifecycles]
// Type encoding: v16@0:8
// Implementation: 0x10057f654

// -[SCBlizzardAllTiersFileQueue recoverSpectrumFilesFromPreviousLifecycles]
// Type encoding: v16@0:8
// Implementation: 0x1003383fc

// -[SCBlizzardAllTiersFileQueue addEvents:eventCounts:highestPriority:region:isFrame:isSpectrum:eventNames:eagerUploadId:]
// Type encoding: v72@0:8@16Q24Q32Q40B48B52@56@64
// Implementation: 0x1005c4434

// -[SCBlizzardAllTiersFileQueue addFiles:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10077ea18

// -[SCBlizzardAllTiersFileQueue eventCountsAtPriority:region:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x106ad35b4

// -[SCBlizzardAllTiersFileQueue getAndRemoveTopPriorityFilesFromPriority:region:bytes:isFrame:isSpectrum:]
// Type encoding: @48@0:8Q16Q24Q32B40B44
// Implementation: 0x106ad3608

// -[SCBlizzardAllTiersFileQueue fetchContentFromFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ad3684

// -[SCBlizzardAllTiersFileQueue removeFilesFromDisk:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad3720

// -[SCBlizzardAllTiersFileQueue _removeExpiredSpectrumFiles]
// Type encoding: v16@0:8
// Implementation: 0x106ad3890

// -[SCBlizzardAllTiersFileQueue _enforceDiskQuotaWithIsSpectrum:eventNames:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1005c3484

// -[SCBlizzardAllTiersFileQueue _removeFilesAndLogStatus:isSpectrum:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1005c3efc

// -[SCBlizzardAllTiersFileQueue _logEventsEvictionMetrics:isSpectrum:reason:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1005c3f74

// -[SCBlizzardAllTiersFileQueue _getLogQueueNameWithPriority:isSpectrum:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x1005c4898

// -[SCBlizzardAllTiersFileQueue fileRepository]
// Type encoding: @16@0:8
// Implementation: 0x100338924

// -[SCBlizzardAllTiersFileQueue setFileRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad3a48

// -[SCBlizzardAllTiersFileQueue config]
// Type encoding: @16@0:8
// Implementation: 0x10033888c

// -[SCBlizzardAllTiersFileQueue setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad3a78

// -[SCBlizzardAllTiersFileQueue graphene]
// Type encoding: @16@0:8
// Implementation: 0x10033bbfc

// -[SCBlizzardAllTiersFileQueue prioritizedFileQueue]
// Type encoding: @16@0:8
// Implementation: 0x10033bb7c

// -[SCBlizzardAllTiersFileQueue setPrioritizedFileQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad3aa8

// -[SCBlizzardAllTiersFileQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad3ad8

// +[SCBlizzardAllTiersFileQueue resetDispatchOnceToken]
// Type encoding: v16@0:8
// Implementation: 0x106ad35a4

@end
