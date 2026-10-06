// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensBackgroundPrefetcher
// Superclass: NSObject
// Address: 0x112bfb098

@interface SCLensBackgroundPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensBackgroundPrefetcher initWithLensDataFetcher:performer:scheduledMetadataRetriever:sortStrategy:lensPrefetchFilterProvider:lensDataConfig:appStartExperimentReader:prefetchStepMetricsTracker:lensContentDataProvider:lensUserProvider:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10aea065c

// -[SCLensBackgroundPrefetcher lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10aea08b8

// -[SCLensBackgroundPrefetcher didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10aea0964

// -[SCLensBackgroundPrefetcher didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10aea0a2c

// -[SCLensBackgroundPrefetcher didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x10aea0af4

// -[SCLensBackgroundPrefetcher didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10aea0bbc

// -[SCLensBackgroundPrefetcher willStartLoadingAsset:lens:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10aea0c84

// -[SCLensBackgroundPrefetcher willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10aea0c88

// -[SCLensBackgroundPrefetcher willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10aea0c8c

// -[SCLensBackgroundPrefetcher willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10aea0c90

// -[SCLensBackgroundPrefetcher willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x10aea0c94

// -[SCLensBackgroundPrefetcher _checkFetchedLens:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aea0c98

// -[SCLensBackgroundPrefetcher _prefetchActiveLenses:cachedLenses:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aea0e1c

// -[SCLensBackgroundPrefetcher _completePrefetchingJobWithReasonForLogging:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aea1540

// -[SCLensBackgroundPrefetcher dataSyncerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10aea1898

// -[SCLensBackgroundPrefetcher jobConfig]
// Type encoding: @16@0:8
// Implementation: 0x10aea18a4

// -[SCLensBackgroundPrefetcher submitOnRegister]
// Type encoding: B16@0:8
// Implementation: 0x10aea1910

// -[SCLensBackgroundPrefetcher onSync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aea1918

// -[SCLensBackgroundPrefetcher _fetchScheduledLensMetadataFuture]
// Type encoding: @16@0:8
// Implementation: 0x10aea1a68

// -[SCLensBackgroundPrefetcher _startRetrievingFixedPrefetchFlow]
// Type encoding: v16@0:8
// Implementation: 0x10aea1b68

// -[SCLensBackgroundPrefetcher _logFixedLensMetadataUpdatedWithLenses:metadataStoreName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aea1e84

// -[SCLensBackgroundPrefetcher _calculateFixedNonFetchedAndSponsoredLensCountFromLenses:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea1f80

// -[SCLensBackgroundPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aea215c

// +[SCLensBackgroundPrefetcher _jobConfigFromBackgroundPrefetchConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea1650

// +[SCLensBackgroundPrefetcher _jobConfigWithTimeInterval:networkConnectivity:batteryState:]
// Type encoding: @28@0:8I16i20i24
// Implementation: 0x10aea170c

// +[SCLensBackgroundPrefetcher _defaultBackgroundPrefetchConfig]
// Type encoding: @16@0:8
// Implementation: 0x10aea184c

@end
