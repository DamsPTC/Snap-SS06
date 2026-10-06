// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardConfigAdapter
// Superclass: NSObject
// Address: 0x112b10b88

@interface SCBlizzardConfigAdapter

// Property: configMap; attributes: T@"NSMutableDictionary",&,N,V_configMap
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",R,N,V_experimentProvider
// Property: fileTTLMs; attributes: TQ,N,V_fileTTLMs
// Property: priorityQueueNameMap; attributes: T@"NSDictionary",&,N,V_priorityQueueNameMap
// Property: overallUploadIntervalSec; attributes: Td,N,V_overallUploadIntervalSec
// Property: jsonFramesEventUploadForMediumPriority; attributes: TQ,N,V_jsonFramesEventUploadForMediumPriority
// Property: jsonFramesEventUploadForLowPriority; attributes: TQ,N,V_jsonFramesEventUploadForLowPriority
// Property: maxConcurrentRequests; attributes: TQ,N,V_maxConcurrentRequests
// Property: spectrumFileTTLMs; attributes: TQ,N,V_spectrumFileTTLMs
// Property: spectrumPriorityQueueNameMap; attributes: T@"NSDictionary",&,N,V_spectrumPriorityQueueNameMap
// Property: spectrumUploadIntervalSec; attributes: Td,N,V_spectrumUploadIntervalSec
// Property: spectrumMaxConcurrentRequests; attributes: TQ,N,V_spectrumMaxConcurrentRequests
// Property: spectrumEventUploadThreshold; attributes: TQ,N,V_spectrumEventUploadThreshold
// Property: diskQuotaBytes; attributes: TQ,N,V_diskQuotaBytes

// -[SCBlizzardConfigAdapter initWithConfigMap:circumstanceEngine:experimentProvider:isSpectrum:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1002f0c0c

// -[SCBlizzardConfigAdapter priorityForQueueWithName:region:]
// Type encoding: Q32@0:8@16Q24
// Implementation: 0x106ace34c

// -[SCBlizzardConfigAdapter fileEventCountWithName:region:]
// Type encoding: Q32@0:8@16Q24
// Implementation: 0x106ace4ac

// -[SCBlizzardConfigAdapter loggerNamesInDefaultRegion]
// Type encoding: @16@0:8
// Implementation: 0x100338894

// -[SCBlizzardConfigAdapter loggerRegions]
// Type encoding: @16@0:8
// Implementation: 0x10032198c

// -[SCBlizzardConfigAdapter queueNameForBlizzardPriority:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1005c4904

// -[SCBlizzardConfigAdapter eventUploadThresholdForPriority:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106ace60c

// -[SCBlizzardConfigAdapter uploadBatchForPriority:region:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x106ace624

// -[SCBlizzardConfigAdapter queueNameForSpectrumPriority:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106ace788

// -[SCBlizzardConfigAdapter spectrumBytesPerRequestForPriority:region:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x106ace824

// -[SCBlizzardConfigAdapter experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ace988

// -[SCBlizzardConfigAdapter fileTTLMs]
// Type encoding: Q16@0:8
// Implementation: 0x100321930

// -[SCBlizzardConfigAdapter setFileTTLMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ace990

// -[SCBlizzardConfigAdapter priorityQueueNameMap]
// Type encoding: @16@0:8
// Implementation: 0x1005c49a0

// -[SCBlizzardConfigAdapter setPriorityQueueNameMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ace998

// -[SCBlizzardConfigAdapter overallUploadIntervalSec]
// Type encoding: d16@0:8
// Implementation: 0x10032260c

// -[SCBlizzardConfigAdapter setOverallUploadIntervalSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ace9c8

// -[SCBlizzardConfigAdapter jsonFramesEventUploadForMediumPriority]
// Type encoding: Q16@0:8
// Implementation: 0x106ace9d0

// -[SCBlizzardConfigAdapter setJsonFramesEventUploadForMediumPriority:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ace9d8

// -[SCBlizzardConfigAdapter jsonFramesEventUploadForLowPriority]
// Type encoding: Q16@0:8
// Implementation: 0x106ace9e0

// -[SCBlizzardConfigAdapter setJsonFramesEventUploadForLowPriority:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ace9e8

// -[SCBlizzardConfigAdapter maxConcurrentRequests]
// Type encoding: Q16@0:8
// Implementation: 0x1003226c0

// -[SCBlizzardConfigAdapter setMaxConcurrentRequests:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ace9f0

// -[SCBlizzardConfigAdapter spectrumFileTTLMs]
// Type encoding: Q16@0:8
// Implementation: 0x100321984

// -[SCBlizzardConfigAdapter setSpectrumFileTTLMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ace9f8

// -[SCBlizzardConfigAdapter spectrumPriorityQueueNameMap]
// Type encoding: @16@0:8
// Implementation: 0x106acea00

// -[SCBlizzardConfigAdapter setSpectrumPriorityQueueNameMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106acea08

// -[SCBlizzardConfigAdapter spectrumUploadIntervalSec]
// Type encoding: d16@0:8
// Implementation: 0x100338364

// -[SCBlizzardConfigAdapter setSpectrumUploadIntervalSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x106acea38

// -[SCBlizzardConfigAdapter spectrumMaxConcurrentRequests]
// Type encoding: Q16@0:8
// Implementation: 0x10033837c

// -[SCBlizzardConfigAdapter setSpectrumMaxConcurrentRequests:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acea40

// -[SCBlizzardConfigAdapter spectrumEventUploadThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x106acea48

// -[SCBlizzardConfigAdapter setSpectrumEventUploadThreshold:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acea50

// -[SCBlizzardConfigAdapter diskQuotaBytes]
// Type encoding: Q16@0:8
// Implementation: 0x1005c369c

// -[SCBlizzardConfigAdapter setDiskQuotaBytes:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acea58

// -[SCBlizzardConfigAdapter configMap]
// Type encoding: @16@0:8
// Implementation: 0x1003219d0

// -[SCBlizzardConfigAdapter setConfigMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106acea60

// -[SCBlizzardConfigAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106acea90

@end
