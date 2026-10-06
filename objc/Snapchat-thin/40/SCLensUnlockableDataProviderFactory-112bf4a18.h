// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockableDataProviderFactory
// Superclass: NSObject
// Address: 0x112bf4a18

@interface SCLensUnlockableDataProviderFactory

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensUnlockableDataProviderFactory initWithLensUnlocker:lensDataFetcherFactory:adaptiveLensFetcherFactory:lensRemovalManager:circumstanceEngine:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:bundledLensProvider:networkConnectivityMonitor:networkBandwidthEstimator:centralizedLensStoreProvider:lensContentCacheProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x100804558

// -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithConfiguration:lenses:prefetchCapacity:delegate:]
// Type encoding: @48@0:8@16@24Q32@40
// Implementation: 0x1091e4bd0

// -[SCLensUnlockableDataProviderFactory lensUnlockableMetadaStoreForLenses:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091e4c74

// -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithConfiguration:lensMetadataStore:prefetchCapacity:delegate:]
// Type encoding: @48@0:8@16@24Q32@40
// Implementation: 0x1091e4da4

// -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithDataProvider:lensMetadataStore:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1008048d0

// -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithDataProvider:lensMetadataStore:prefetchCapacity:delegate:]
// Type encoding: @48@0:8@16@24Q32@40
// Implementation: 0x1008048dc

// -[SCLensUnlockableDataProviderFactory lensUnlockableDataProviderWithDataProvider:lensMetadataStore:prefetchCapacity:delegate:isReply:lensCentralizedStoreNamespace:featureAttribution:]
// Type encoding: @68@0:8@16@24Q32@40B48@52q60
// Implementation: 0x100804908

// -[SCLensUnlockableDataProviderFactory _createStrategyWithMetadataStore:centralizedLensStoreProvider:prefetchCapacity:lensCentralizedStoreNamespace:studySettings:featureAttribution:]
// Type encoding: @64@0:8@16@24Q32@40@48q56
// Implementation: 0x1091e5698

// -[SCLensUnlockableDataProviderFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091e583c

// +[SCLensUnlockableDataProviderFactory _createLensMetadataStoreWithLensesObservable:lensCarouselStudySettings:centralizedDataStore:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091e4fd4

// +[SCLensUnlockableDataProviderFactory _createDataProviderWithConfiguration:lensMetadataStore:lensDataFetcherFactory:lensRemovalManager:circumstanceEngine:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:bundledLensProvider:networkConnectivityMonitor:networkBandwidthEstimator:lensContentCacheProvider:adaptiveLensFetcherFactory:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1091e5060

// +[SCLensUnlockableDataProviderFactory _createPerformer]
// Type encoding: @16@0:8
// Implementation: 0x1091e5664

// +[SCLensUnlockableDataProviderFactory _createStrategyWithMetadataStore:lensUnlocker:prefetchCapacity:isReply:studySettings:]
// Type encoding: @52@0:8@16@24Q32B40@44
// Implementation: 0x100804ac4

@end
