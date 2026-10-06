// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPreparationManager
// Superclass: NSObject
// Address: 0x112ade0e8

@interface SCAdPreparationManager

// Property: delegate; attributes: T@"<SCAdPreparationManagerDelegate>",W,N,V_delegate
// Property: currentAdPlacement; attributes: T@"SCAdPlacement",&,N,V_currentAdPlacement
// Property: pendingInsertAdPod; attributes: T@"SCAdPod",&,N,V_pendingInsertAdPod
// Property: brandSafetyInsertAdPods; attributes: T@"SCAdBrandSafetyPods",&,N,V_brandSafetyInsertAdPods
// Property: viewLocation; attributes: Tq,N,V_viewLocation

// -[SCAdPreparationManager initWithAdPodManager:adProvider:adConfigProvider:adConfigProviderV2:dpaConfigProvider:viewLocation:operaNavigationStyle:mediaFetcher:adMediaManager:adWebViewPrefetchHintsManager:adWebViewAssetPrefetcher:mediaMetricsManager:mediaCoordinator:p2pDataSource:skOverlayPreloader:skOverlayParamsBuilder:watermarkEventsTracker:]
// Type encoding: @152@0:8@16@24@32@40@48q56q64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x10640ea24

// -[SCAdPreparationManager requestAdWithTargetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:requestTriggerType:brandSafetyInventoryType:willMakeRequest:completionBlock:]
// Type encoding: v104@0:8@16@24Q32@40@48@56@64q72q80@?88@?96
// Implementation: 0x10640edb4

// -[SCAdPreparationManager requestAdWithTargetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:unviewedEligibleStoryCount:requestTriggerType:brandSafetyInventoryType:willMakeRequest:completionBlock:]
// Type encoding: v112@0:8@16@24Q32@40@48@56@64q72q80q88@?96@?104
// Implementation: 0x10640eed8

// -[SCAdPreparationManager _fetchAdsWithTargetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:unviewedEligibleStoryCount:requestTriggerType:brandSafetyInventoryType:willMakeRequest:completionBlock:]
// Type encoding: v112@0:8@16@24Q32@40@48@56@64q72q80q88@?96@?104
// Implementation: 0x10640f164

// -[SCAdPreparationManager _onAdTransformComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640fb9c

// -[SCAdPreparationManager _onAdPodTransformComplete:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10640fd40

// -[SCAdPreparationManager _createPendingAdPodWithAdResponses:identifier:error:cacheUnusedAds:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10640fde0

// -[SCAdPreparationManager _validAdResponsesFromAdResponses:unviewedAdResponses:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1064100d0

// -[SCAdPreparationManager _onAdPodsTransformComplete:needRefresh:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106410300

// -[SCAdPreparationManager _createValidAdPodsWith:error:cacheUnusedAds:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1064104fc

// -[SCAdPreparationManager _getSmartAdPodForOrganicGarmBrandSafety:]
// Type encoding: @24@0:8q16
// Implementation: 0x106410820

// -[SCAdPreparationManager replacePendingInsertAdPodForOrganicGarmBrandSafety:adInsertionMetricsManager:adProductType:]
// Type encoding: B40@0:8q16@24Q32
// Implementation: 0x1064108f8

// -[SCAdPreparationManager reusePendingAdPod:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064109b0

// -[SCAdPreparationManager fetchMediaForPendingInsertAdWithSnapCount:mediaLoadContexts:playbackConfig:didDispatchAllFetches:completion:]
// Type encoding: v56@0:8@?16@24@32@?40@?48
// Implementation: 0x106410b4c

// -[SCAdPreparationManager fetchMediaForAdDataModel:mediaLoadContexts:playbackConfig:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106411368

// -[SCAdPreparationManager _fetchMediaForAdDataModel:mediaLoadContexts:playbackConfig:snapCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x10641141c

// -[SCAdPreparationManager _preloadSKOverlayForAd:adSnap:playbackConfig:mediaFetchGroup:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x1064119c8

// -[SCAdPreparationManager currentPendingPodFirstAdLoadStatusWithSnapCount:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106411ba8

// -[SCAdPreparationManager dataModelLoadStatus:adData:snapCount:]
// Type encoding: q40@0:8@16@24Q32
// Implementation: 0x106411c28

// -[SCAdPreparationManager loadStatusForDataModel:snapCount:]
// Type encoding: q32@0:8@16Q24
// Implementation: 0x106411d60

// -[SCAdPreparationManager _loadStatusForDataModel:snapCount:]
// Type encoding: q32@0:8@16Q24
// Implementation: 0x106411f1c

// -[SCAdPreparationManager setPendingInsertAdPod:]
// Type encoding: v24@0:8@16
// Implementation: 0x106412208

// -[SCAdPreparationManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x10641232c

// -[SCAdPreparationManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106412344

// -[SCAdPreparationManager currentAdPlacement]
// Type encoding: @16@0:8
// Implementation: 0x106412350

// -[SCAdPreparationManager setCurrentAdPlacement:]
// Type encoding: v24@0:8@16
// Implementation: 0x106412358

// -[SCAdPreparationManager pendingInsertAdPod]
// Type encoding: @16@0:8
// Implementation: 0x106412388

// -[SCAdPreparationManager brandSafetyInsertAdPods]
// Type encoding: @16@0:8
// Implementation: 0x106412390

// -[SCAdPreparationManager setBrandSafetyInsertAdPods:]
// Type encoding: v24@0:8@16
// Implementation: 0x106412398

// -[SCAdPreparationManager viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x1064123c8

// -[SCAdPreparationManager setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1064123d0

// -[SCAdPreparationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064123d8

@end
