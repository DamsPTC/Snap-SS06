// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdProvider
// Superclass: NSObject
// Address: 0x112a60c38

@interface SCAdProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdProvider initWithAdServer:adConfigProvider:adConfigProviderV2:sessionViewingHistory:userAdIdProvider:lazyDocObjectContext:grapheneRegistry:lifecycleTracker:userPreferences:onDeviceFeatureGatingProvider:locationProvider:adEOVTimerProvider:serveMetricsManager:skStoreProductPrefetcher:performer:appStartExperimentReader:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x105744960

// -[SCAdProvider initWithAdServer:adConfigProvider:adConfigProviderV2:sessionViewingHistory:userAdIdProvider:adResponseCache:graphene:userPreferences:onDeviceFeatureGatingProvider:locationProvider:adEOVTimerProvider:serveMetricsManager:skStoreProductPrefetcher:performer:appStartExperimentReader:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x105744c2c

// -[SCAdProvider adWithFetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:requestTriggerType:operaType:brandSafetyInventoryType:willMakeRequest:]
// Type encoding: v120@0:8@16@24@32Q40@48@56@64@72q80q88Q96q104@?112
// Implementation: 0x105744ff4

// -[SCAdProvider peekAdResponse:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105745588

// -[SCAdProvider updateAdResponseWithAdRequestClientId:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057456bc

// -[SCAdProvider _onPerformerPeekAdResponse:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057457bc

// -[SCAdProvider _onPerformerAdWithFetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:requestTriggerType:operaType:brandSafetyInventoryType:willMakeRequest:startTimestampInMillis:]
// Type encoding: v128@0:8@16@24@32Q40@48@56@64@72q80q88Q96q104@?112d120
// Implementation: 0x105745848

// -[SCAdProvider _submitAdRequestWithFetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:adRequestClientIds:engagement:adOrganicSignals:upcomingStoriesContext:unviewedEligibleStoryCount:adViewLocation:viewingSessionRecords:operaType:brandSafetyInventoryType:purgedAdResponses:smartCacheAllocationEnabled:willMakeRequest:startTimestampInMillis:]
// Type encoding: v156@0:8@16@24@32Q40@48@56@64@72@80q88q96@104Q112q120@128B136@?140d148
// Implementation: 0x1057470d8

// -[SCAdProvider _deDupeKeyForTargetingParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x105748444

// -[SCAdProvider _inFlightSubjectForKey:requestMetadata:inventoryType:willMakeRequest:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10574851c

// -[SCAdProvider _emitInFlightFieldDiffMetricForKind:field:creatorKind:inventoryType:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x105748c48

// -[SCAdProvider _recordInFlightJoinWithCreatorMetadata:joinerMetadata:joinerIsPrefetch:joinerIsEarlyFetch:inventoryType:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x105748e58

// -[SCAdProvider _emitInFlightCreatorOutcomeForKey:inventoryType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057493b0

// -[SCAdProvider _handleAdFetchSuccessWithResponses:fetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:adRequestClientIds:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:viewingSessionRecords:operaType:brandSafetyInventoryType:purgedAdResponses:startTimestampInMillis:skipCaching:treatAsConsumer:]
// Type encoding: v152@0:8@16@24@32@40Q48@56@64@72@80@88q96@104Q112q120@128d136B144B148
// Implementation: 0x105749514

// -[SCAdProvider _onPerformerHandleAdFetchSuccessWithResponses:fetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:adRequestClientIds:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:viewingSessionRecords:operaType:brandSafetyInventoryType:purgedAdResponses:startTimestampInMillis:skipCaching:treatAsConsumer:]
// Type encoding: v152@0:8@16@24@32@40Q48@56@64@72@80@88q96@104Q112q120@128d136B144B148
// Implementation: 0x105749998

// -[SCAdProvider _handleErrorResponse:fetchRequest:adRequestClientIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10574ab58

// -[SCAdProvider _adViewingSessionRecords:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10574afcc

// -[SCAdProvider _adRequestClientIdsWithAdProductType:isPrefetchRequest:predefinedAdRequestClientId:unviewedEligibleStoryCount:]
// Type encoding: @44@0:8Q16B24@28q36
// Implementation: 0x10574b130

// -[SCAdProvider _fusMultiAuctionRequestSizeWithUnviewedEligibleStoryCount:]
// Type encoding: q24@0:8q16
// Implementation: 0x10574b4dc

// -[SCAdProvider _logFusMultiAuctionStoryClampWithAdProductType:loggingContext:unviewedEligibleStoryCount:requestSize:isDedupeJoiner:]
// Type encoding: v52@0:8Q16@24q32Q40B48
// Implementation: 0x10574b5b8

// -[SCAdProvider _logMultiAuctionAdResponseMetrics:adRequestClientIds:adProductType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10574b760

// -[SCAdProvider _logMultiAuctionAdResponseAdTypeSplitMetrics:adProductType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10574ba30

// -[SCAdProvider _logCacheHit:adProductType:isBackupCache:isMultiAdPod:]
// Type encoding: v36@0:8B16Q20B28B32
// Implementation: 0x10574bea0

// -[SCAdProvider _logRequestTriggerType:adProductType:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x10574c104

// -[SCAdProvider cacheUnviewedAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10574c23c

// -[SCAdProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x10574c30c

// -[SCAdProvider cleanupAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x10574c314

// -[SCAdProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10574c364

@end
