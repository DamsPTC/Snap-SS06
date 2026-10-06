// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPrefetchHelper
// Superclass: NSObject
// Address: 0x112a60ff8

@interface SCAdPrefetchHelper

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPrefetchHelper initWithAdProvider:adMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adsPreferencesProvider:grapheneRegistry:lifecycleTracker:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1057628a8

// -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105762a50

// -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:adViewLocation:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x105762a60

// -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:completionQueue:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40q48@56@?64
// Implementation: 0x105762a98

// -[SCAdPrefetchHelper earlyFetchAdsWithTargetingParams:adOrganicSignals:adViewLocation:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x105762ac4

// -[SCAdPrefetchHelper earlyFetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:completionQueue:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40q48@56@?64
// Implementation: 0x105762afc

// -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:requestOrigin:completionQueue:completionBlock:onServeDecision:]
// Type encoding: v88@0:8@16@24@32@40q48q56@64@?72@?80
// Implementation: 0x105762b28

// -[SCAdPrefetchHelper earlyFetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:requestOrigin:completionQueue:completionBlock:onServeDecision:]
// Type encoding: v88@0:8@16@24@32@40q48q56@64@?72@?80
// Implementation: 0x105762b5c

// -[SCAdPrefetchHelper _fetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:isEarlyFetch:requestOrigin:completionQueue:completionBlock:onServeDecision:]
// Type encoding: v92@0:8@16@24@32@40q48B56q60@68@?76@?84
// Implementation: 0x105762b90

// -[SCAdPrefetchHelper prefetchAdMediaWithAdResponse:mediaLoadContexts:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105762f04

// -[SCAdPrefetchHelper _handlePrefetchAdCacheResponse:targetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:isEarlyFetch:requestOrigin:prefetchStartTime:completionQueue:completionBlock:onServeDecision:]
// Type encoding: v108@0:8@16@24@32@40@48q56B64q68d76@84@?92@?100
// Implementation: 0x105763450

// -[SCAdPrefetchHelper _handlePrefetchSuccessWithAdResponse:targetingParams:prefetchStartTime:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x10576418c

// -[SCAdPrefetchHelper _operaTypeForAdProductType:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105764430

// -[SCAdPrefetchHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105764440

@end
