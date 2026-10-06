// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardLogQueueConfigAdapter
// Superclass: NSObject
// Address: 0x112b10bd8

@interface SCBlizzardLogQueueConfigAdapter

// Property: version; attributes: T@"NSString",&,N,V_version
// Property: logQueueName; attributes: T@"NSString",C,N,V_logQueueName
// Property: eventSaveBatchSize; attributes: TQ,N,V_eventSaveBatchSize
// Property: eventRemoveBatchSize; attributes: TQ,N,V_eventRemoveBatchSize
// Property: eventMaxCount; attributes: TQ,N,V_eventMaxCount
// Property: eventUploadMaxBatchSize; attributes: TQ,N,V_eventUploadMaxBatchSize
// Property: eventUploadThreshold; attributes: TQ,N,V_eventUploadThreshold
// Property: blizzardDiskFlushIntervalSecs; attributes: TQ,N,V_blizzardDiskFlushIntervalSecs
// Property: blacklistedEvents; attributes: T@"NSSet",&,N,V_blacklistedEvents
// Property: queuePriority; attributes: TQ,N,V_queuePriority
// Property: fileEventCount; attributes: TQ,N,V_fileEventCount
// Property: uploadBatchBytes; attributes: TQ,N,V_uploadBatchBytes
// Property: protoEventSaveBatch; attributes: TQ,N,V_protoEventSaveBatch
// Property: spectrumMinEventsOnDisk; attributes: TQ,N,V_spectrumMinEventsOnDisk
// Property: spectrumBytesPerRequest; attributes: TQ,N,V_spectrumBytesPerRequest
// Property: spectrumDiskFlushIntervalSecs; attributes: TQ,N,V_spectrumDiskFlushIntervalSecs
// Property: region; attributes: TQ,N,V_region

// -[SCBlizzardLogQueueConfigAdapter initWithNewConfig:logQueueDefinition:circumstanceEngine:experimentProvider:isSpectrum:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x1002d3558

// -[SCBlizzardLogQueueConfigAdapter version]
// Type encoding: @16@0:8
// Implementation: 0x106acead8

// -[SCBlizzardLogQueueConfigAdapter setVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aceae0

// -[SCBlizzardLogQueueConfigAdapter logQueueName]
// Type encoding: @16@0:8
// Implementation: 0x106aceb10

// -[SCBlizzardLogQueueConfigAdapter setLogQueueName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aceb18

// -[SCBlizzardLogQueueConfigAdapter eventSaveBatchSize]
// Type encoding: Q16@0:8
// Implementation: 0x106aceb20

// -[SCBlizzardLogQueueConfigAdapter setEventSaveBatchSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106aceb28

// -[SCBlizzardLogQueueConfigAdapter eventRemoveBatchSize]
// Type encoding: Q16@0:8
// Implementation: 0x106aceb30

// -[SCBlizzardLogQueueConfigAdapter setEventRemoveBatchSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106aceb38

// -[SCBlizzardLogQueueConfigAdapter eventMaxCount]
// Type encoding: Q16@0:8
// Implementation: 0x106aceb40

// -[SCBlizzardLogQueueConfigAdapter setEventMaxCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106aceb48

// -[SCBlizzardLogQueueConfigAdapter eventUploadMaxBatchSize]
// Type encoding: Q16@0:8
// Implementation: 0x106aceb50

// -[SCBlizzardLogQueueConfigAdapter setEventUploadMaxBatchSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106aceb58

// -[SCBlizzardLogQueueConfigAdapter eventUploadThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x106aceb60

// -[SCBlizzardLogQueueConfigAdapter setEventUploadThreshold:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106aceb68

// -[SCBlizzardLogQueueConfigAdapter blizzardDiskFlushIntervalSecs]
// Type encoding: Q16@0:8
// Implementation: 0x106aceb70

// -[SCBlizzardLogQueueConfigAdapter setBlizzardDiskFlushIntervalSecs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106aceb78

// -[SCBlizzardLogQueueConfigAdapter blacklistedEvents]
// Type encoding: @16@0:8
// Implementation: 0x1003eaa6c

// -[SCBlizzardLogQueueConfigAdapter setBlacklistedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aceb80

// -[SCBlizzardLogQueueConfigAdapter queuePriority]
// Type encoding: Q16@0:8
// Implementation: 0x106acebb0

// -[SCBlizzardLogQueueConfigAdapter setQueuePriority:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acebb8

// -[SCBlizzardLogQueueConfigAdapter fileEventCount]
// Type encoding: Q16@0:8
// Implementation: 0x106acebc0

// -[SCBlizzardLogQueueConfigAdapter setFileEventCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acebc8

// -[SCBlizzardLogQueueConfigAdapter uploadBatchBytes]
// Type encoding: Q16@0:8
// Implementation: 0x106acebd0

// -[SCBlizzardLogQueueConfigAdapter setUploadBatchBytes:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acebd8

// -[SCBlizzardLogQueueConfigAdapter protoEventSaveBatch]
// Type encoding: Q16@0:8
// Implementation: 0x1004c40f4

// -[SCBlizzardLogQueueConfigAdapter setProtoEventSaveBatch:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acebe0

// -[SCBlizzardLogQueueConfigAdapter spectrumMinEventsOnDisk]
// Type encoding: Q16@0:8
// Implementation: 0x100557d4c

// -[SCBlizzardLogQueueConfigAdapter setSpectrumMinEventsOnDisk:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acebe8

// -[SCBlizzardLogQueueConfigAdapter spectrumBytesPerRequest]
// Type encoding: Q16@0:8
// Implementation: 0x106acebf0

// -[SCBlizzardLogQueueConfigAdapter setSpectrumBytesPerRequest:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acebf8

// -[SCBlizzardLogQueueConfigAdapter spectrumDiskFlushIntervalSecs]
// Type encoding: Q16@0:8
// Implementation: 0x106acec00

// -[SCBlizzardLogQueueConfigAdapter setSpectrumDiskFlushIntervalSecs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acec08

// -[SCBlizzardLogQueueConfigAdapter region]
// Type encoding: Q16@0:8
// Implementation: 0x1003eaab0

// -[SCBlizzardLogQueueConfigAdapter setRegion:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106acec10

// -[SCBlizzardLogQueueConfigAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106acec18

@end
