// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicRecommendationManagerImpl
// Superclass: NSObject
// Address: 0x112a547f8

@interface SCMusicRecommendationManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMusicRecommendationManagerImpl initWithMusicGrpcService:ctContextsObservable:currentCTContextObservable:musicLoggingServices:contentDelivery:cacheOptions:contextDebounceInterval:source:musicPreferences:shouldUseAutoapplyBackoff:]
// Type encoding: @92@0:8@16@24@32@40@48@56d64@72@80B88
// Implementation: 0x105669790

// -[SCMusicRecommendationManagerImpl currentCTRecommendationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105669a4c

// -[SCMusicRecommendationManagerImpl currentRecommendationsDict]
// Type encoding: @16@0:8
// Implementation: 0x105669b50

// -[SCMusicRecommendationManagerImpl removeRecommendationWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105669b78

// -[SCMusicRecommendationManagerImpl _subscribeToCTContexts]
// Type encoding: v16@0:8
// Implementation: 0x105669c24

// -[SCMusicRecommendationManagerImpl _getCTRecommendationsWithCTContexts:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10566a054

// -[SCMusicRecommendationManagerImpl _fetchCTRecommendationsWithCTContexts:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10566a250

// -[SCMusicRecommendationManagerImpl _getCachedCTRecommendationsWithCTContexts:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10566a59c

// -[SCMusicRecommendationManagerImpl _storeCTRecommendations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10566a9e4

// -[SCMusicRecommendationManagerImpl _parseCTRecommendationsData:isFromCache:startDate:ctContexts:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x10566ac34

// -[SCMusicRecommendationManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10566b090

@end
