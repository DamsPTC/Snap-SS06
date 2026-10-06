// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicRecommendationManagerV2Impl
// Superclass: NSObject
// Address: 0x112a54848

@interface SCMusicRecommendationManagerV2Impl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMusicRecommendationManagerV2Impl initWithMusicGrpcService:ctContextsObservable:currentCTContextObservable:musicLoggingServices:contentDelivery:cacheOptions:contextDebounceInterval:source:musicPreferences:]
// Type encoding: @88@0:8@16@24@32@40@48@56d64@72@80
// Implementation: 0x10566b138

// -[SCMusicRecommendationManagerV2Impl currentCTRecommendationObservable]
// Type encoding: @16@0:8
// Implementation: 0x10566b3fc

// -[SCMusicRecommendationManagerV2Impl currentRecommendationsDict]
// Type encoding: @16@0:8
// Implementation: 0x10566b500

// -[SCMusicRecommendationManagerV2Impl removeRecommendationWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10566b528

// -[SCMusicRecommendationManagerV2Impl _subscribeToCTContexts]
// Type encoding: v16@0:8
// Implementation: 0x10566b5d4

// -[SCMusicRecommendationManagerV2Impl _handleContexts:withKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10566b870

// -[SCMusicRecommendationManagerV2Impl _subscribeToContextsForServerFetch]
// Type encoding: v16@0:8
// Implementation: 0x10566b968

// -[SCMusicRecommendationManagerV2Impl _fetchCTRecommendationsWithCTContexts:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10566bc0c

// -[SCMusicRecommendationManagerV2Impl _parseCTRecommendationCacheItem:startDate:ctContexts:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10566beb4

// -[SCMusicRecommendationManagerV2Impl _parseCTRecommendationsData:startDate:ctContexts:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10566c004

// -[SCMusicRecommendationManagerV2Impl _processRecommendationArray:ctContexts:requestId:startData:isFromCache:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10566c1f8

// -[SCMusicRecommendationManagerV2Impl _recommendationsFetchCompletionWithCtContexts:]
// Type encoding: @?24@0:8@16
// Implementation: 0x10566c550

// -[SCMusicRecommendationManagerV2Impl _checkCacheForSnapContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10566c96c

// -[SCMusicRecommendationManagerV2Impl _checkCacheForLensAndFilterContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10566cecc

// -[SCMusicRecommendationManagerV2Impl _storeFetchResultsForRecommendations:requestId:snapContextIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10566d0cc

// -[SCMusicRecommendationManagerV2Impl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10566d290

@end
