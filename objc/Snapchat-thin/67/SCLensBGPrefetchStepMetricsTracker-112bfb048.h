// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensBGPrefetchStepMetricsTracker
// Superclass: NSObject
// Address: 0x112bfb048

@interface SCLensBGPrefetchStepMetricsTracker


// -[SCLensBGPrefetchStepMetricsTracker initWithGrapheneRegistryLazy:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9f514

// -[SCLensBGPrefetchStepMetricsTracker logBGPrefetchStart]
// Type encoding: v16@0:8
// Implementation: 0x10ae9f5a8

// -[SCLensBGPrefetchStepMetricsTracker logLensesMetadataFetchTriggered]
// Type encoding: v16@0:8
// Implementation: 0x10ae9f69c

// -[SCLensBGPrefetchStepMetricsTracker logLensesUpdatedWithLensesCount:sponsoredLensCount:metadataStoreName:nonFetchedCount:]
// Type encoding: v48@0:8Q16Q24@32Q40
// Implementation: 0x10ae9f6a8

// -[SCLensBGPrefetchStepMetricsTracker logPrefetchLensesUpdatedWithLensesCount:sponsoredLensCount:metadataStoreName:nonFetchedCount:]
// Type encoding: v48@0:8Q16Q24@32Q40
// Implementation: 0x10ae9f744

// -[SCLensBGPrefetchStepMetricsTracker logLensSortStarted]
// Type encoding: v16@0:8
// Implementation: 0x10ae9f7e0

// -[SCLensBGPrefetchStepMetricsTracker logLensDownloadStartedWithLensesCount:sponsoredLensCount:nonFetchedCount:precacheSponsoredLensCount:precacheOrganicLensCount:]
// Type encoding: v56@0:8Q16Q24Q32Q40Q48
// Implementation: 0x10ae9f7ec

// -[SCLensBGPrefetchStepMetricsTracker logBGPrefetchEndWithTotalLensDownloadCount:endStep:isBGPrefetchEligible:]
// Type encoding: v36@0:8Q16@24B32
// Implementation: 0x10ae9f898

// -[SCLensBGPrefetchStepMetricsTracker logLensContentDownloadedWithAllDataFetchedStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ae9fa80

// -[SCLensBGPrefetchStepMetricsTracker _logStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9fb6c

// -[SCLensBGPrefetchStepMetricsTracker _logLensCount:countDimensionValue:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10ae9fd00

// -[SCLensBGPrefetchStepMetricsTracker _logMetadataUpdateFromDataStore:lensesCount:sponsoredLensCount:nonFetchedCount:isPrefetch:]
// Type encoding: v52@0:8@16Q24Q32Q40B48
// Implementation: 0x10ae9fdf0

// -[SCLensBGPrefetchStepMetricsTracker _logLensMetadataCbCounts]
// Type encoding: v16@0:8
// Implementation: 0x10aea033c

// -[SCLensBGPrefetchStepMetricsTracker _loggingNameFromDataStoreName:isPrefetch:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10aea0528

// -[SCLensBGPrefetchStepMetricsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aea0620

@end
