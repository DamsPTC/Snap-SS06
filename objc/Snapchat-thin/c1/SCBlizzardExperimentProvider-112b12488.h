// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardExperimentProvider
// Superclass: NSObject
// Address: 0x112b12488

@interface SCBlizzardExperimentProvider

// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",W,N,V_circumstanceEngine
// Property: appStartExperimentReader; attributes: T@"<SCAppStartExperimentReaderProtocol>",W,N,V_appStartExperimentReader

// -[SCBlizzardExperimentProvider initWithCircumstanceEngine:appStartExperimentReader:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10027fc2c

// -[SCBlizzardExperimentProvider shouldBreadCrumbBlizzardEvents]
// Type encoding: B16@0:8
// Implementation: 0x100280f28

// -[SCBlizzardExperimentProvider dataPipelineHealthReportingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ae2d30

// -[SCBlizzardExperimentProvider dataPipelineHealthSampleRate]
// Type encoding: q16@0:8
// Implementation: 0x106ae2db4

// -[SCBlizzardExperimentProvider dataPipelineHealthNonUserTrackedEventFix]
// Type encoding: B16@0:8
// Implementation: 0x106ae2e38

// -[SCBlizzardExperimentProvider deviceIdStudyEUTDedupeFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1003656c0

// -[SCBlizzardExperimentProvider gpsInstrumentationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1003e8c58

// -[SCBlizzardExperimentProvider mccInstrumentationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1003e9228

// -[SCBlizzardExperimentProvider pageViewStateCacheSize]
// Type encoding: Q16@0:8
// Implementation: 0x1002d1d2c

// -[SCBlizzardExperimentProvider compressFileThresholdBytes]
// Type encoding: q16@0:8
// Implementation: 0x1005c583c

// -[SCBlizzardExperimentProvider trimTierZeroEventsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100323450

// -[SCBlizzardExperimentProvider gpsFreshPullEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ae2ebc

// -[SCBlizzardExperimentProvider gpsFreshPullIntervalHours]
// Type encoding: q16@0:8
// Implementation: 0x106ae2efc

// -[SCBlizzardExperimentProvider invariantChecksEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ae2f3c

// -[SCBlizzardExperimentProvider invariantChecksBehavior]
// Type encoding: @16@0:8
// Implementation: 0x106ae2fc0

// -[SCBlizzardExperimentProvider zstdCompressionLevel]
// Type encoding: q16@0:8
// Implementation: 0x100321e14

// -[SCBlizzardExperimentProvider jsonFramesEventUploadForMediumPriority]
// Type encoding: q16@0:8
// Implementation: 0x1002f129c

// -[SCBlizzardExperimentProvider jsonFramesEventUploadForLowPriority]
// Type encoding: q16@0:8
// Implementation: 0x1002f1460

// -[SCBlizzardExperimentProvider jsonFramesUploadInterval]
// Type encoding: q16@0:8
// Implementation: 0x1002f11dc

// -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchPb0]
// Type encoding: q16@0:8
// Implementation: 0x1002d3a24

// -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchPb2]
// Type encoding: q16@0:8
// Implementation: 0x1002e7020

// -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchShadow]
// Type encoding: q16@0:8
// Implementation: 0x1002d88c8

// -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchBestEffort]
// Type encoding: q16@0:8
// Implementation: 0x1002e7220

// -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchQ0]
// Type encoding: q16@0:8
// Implementation: 0x1002e81a4

// -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchQ12]
// Type encoding: q16@0:8
// Implementation: 0x1002edbc8

// -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchQ3]
// Type encoding: q16@0:8
// Implementation: 0x1002f041c

// -[SCBlizzardExperimentProvider eagerUploadEnabledQueues]
// Type encoding: @16@0:8
// Implementation: 0x1003236ac

// -[SCBlizzardExperimentProvider blizzardDiskFlushIntervalCheckEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ae3038

// -[SCBlizzardExperimentProvider blizzardQ0DiskFlushIntervalSecs]
// Type encoding: q16@0:8
// Implementation: 0x1002e8264

// -[SCBlizzardExperimentProvider blizzardQ12DiskFlushIntervalSecs]
// Type encoding: q16@0:8
// Implementation: 0x1002ee5dc

// -[SCBlizzardExperimentProvider blizzardQ3DiskFlushIntervalSecs]
// Type encoding: q16@0:8
// Implementation: 0x1002f0534

// -[SCBlizzardExperimentProvider backgroundDiskFlushIntervalSecs]
// Type encoding: q16@0:8
// Implementation: 0x106ae30f4

// -[SCBlizzardExperimentProvider backgroundDiskFlushCountThreshold]
// Type encoding: q16@0:8
// Implementation: 0x106ae3184

// -[SCBlizzardExperimentProvider blizzardTier0BackgroundUploadEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1003226c8

// -[SCBlizzardExperimentProvider blizzardTier0ForegroundUrlSessionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ae3214

// -[SCBlizzardExperimentProvider protoPayloadDrainEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100344310

// -[SCBlizzardExperimentProvider shouldUploadSpectrumToStagingCollector]
// Type encoding: B16@0:8
// Implementation: 0x1002f4f74

// -[SCBlizzardExperimentProvider circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x106ae3298

// -[SCBlizzardExperimentProvider setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae32b0

// -[SCBlizzardExperimentProvider appStartExperimentReader]
// Type encoding: @16@0:8
// Implementation: 0x1003e8d30

// -[SCBlizzardExperimentProvider setAppStartExperimentReader:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae32bc

// -[SCBlizzardExperimentProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae32c8

@end
