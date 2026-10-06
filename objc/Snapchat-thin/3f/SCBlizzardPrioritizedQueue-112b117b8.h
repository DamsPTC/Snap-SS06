// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardPrioritizedQueue
// Superclass: NSObject
// Address: 0x112b117b8

@interface SCBlizzardPrioritizedQueue

// Property: fileTTLInMs; attributes: TQ,N,V_fileTTLInMs
// Property: spectrumFileTTLMs; attributes: TQ,N,V_spectrumFileTTLMs
// Property: timeProvider; attributes: T@"<SCTimeProviding>",&,N,V_timeProvider
// Property: regionLinkedListArrayMap; attributes: T@"NSMutableDictionary",&,N,V_regionLinkedListArrayMap
// Property: eagerUploadStatusManager; attributes: T@"SCBlizzardEagerUploadStatusManager",&,N,V_eagerUploadStatusManager
// Property: fileRepository; attributes: T@"SCBlizzardFileRepository",&,N,V_fileRepository
// Property: fileCounts; attributes: TQ,R,N
// Property: fileBytes; attributes: TQ,R,N
// Property: eventCounts; attributes: TQ,R,N

// -[SCBlizzardPrioritizedQueue initWithTTL:spectrumFileTTL:regionsCount:eagerUploadStatusManager:fileRepository:]
// Type encoding: @56@0:8Q16Q24Q32@40@48
// Implementation: 0x1003219d8

// -[SCBlizzardPrioritizedQueue fileCounts]
// Type encoding: Q16@0:8
// Implementation: 0x10033fb7c

// -[SCBlizzardPrioritizedQueue fileBytes]
// Type encoding: Q16@0:8
// Implementation: 0x1005c3cb0

// -[SCBlizzardPrioritizedQueue eventCounts]
// Type encoding: Q16@0:8
// Implementation: 0x106ad457c

// -[SCBlizzardPrioritizedQueue fileCountsInRegion:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106ad4718

// -[SCBlizzardPrioritizedQueue fileBytesInRegion:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106ad47f4

// -[SCBlizzardPrioritizedQueue eventCountsInRegion:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106ad48d0

// -[SCBlizzardPrioritizedQueue addFiles:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10077eabc

// -[SCBlizzardPrioritizedQueue addUnsortedFiles:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10033bb84

// -[SCBlizzardPrioritizedQueue _addSortedFiles:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1005aa558

// -[SCBlizzardPrioritizedQueue _sort:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005a9ee0

// -[SCBlizzardPrioritizedQueue getAndRemoveTopPriorityFilesFromPriority:region:bytes:isFrame:isSpectrum:]
// Type encoding: @48@0:8Q16Q24Q32B40B44
// Implementation: 0x106ad49ac

// -[SCBlizzardPrioritizedQueue getAndRemoveExpiredSpectrumFiles]
// Type encoding: @16@0:8
// Implementation: 0x106ad4f74

// -[SCBlizzardPrioritizedQueue getAndRemoveLowPriorityFiles:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1005c36a4

// -[SCBlizzardPrioritizedQueue isOverTTL:currentTime:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x1005c3e6c

// -[SCBlizzardPrioritizedQueue eventCountsAtPriority:region:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x106ad52b4

// -[SCBlizzardPrioritizedQueue fileTTLInMs]
// Type encoding: Q16@0:8
// Implementation: 0x1005c3eb4

// -[SCBlizzardPrioritizedQueue setFileTTLInMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ad5378

// -[SCBlizzardPrioritizedQueue spectrumFileTTLMs]
// Type encoding: Q16@0:8
// Implementation: 0x106ad5380

// -[SCBlizzardPrioritizedQueue setSpectrumFileTTLMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ad5388

// -[SCBlizzardPrioritizedQueue timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1005c3c88

// -[SCBlizzardPrioritizedQueue setTimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad5390

// -[SCBlizzardPrioritizedQueue regionLinkedListArrayMap]
// Type encoding: @16@0:8
// Implementation: 0x10033fd18

// -[SCBlizzardPrioritizedQueue setRegionLinkedListArrayMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad53c0

// -[SCBlizzardPrioritizedQueue eagerUploadStatusManager]
// Type encoding: @16@0:8
// Implementation: 0x106ad53f0

// -[SCBlizzardPrioritizedQueue setEagerUploadStatusManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad53f8

// -[SCBlizzardPrioritizedQueue fileRepository]
// Type encoding: @16@0:8
// Implementation: 0x106ad5428

// -[SCBlizzardPrioritizedQueue setFileRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad5430

// -[SCBlizzardPrioritizedQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad5460

@end
