// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightHeroContextCardProvider
// Superclass: NSObject
// Address: 0x112ad83c8

@interface SCContextSpotlightHeroContextCardProvider

// Property: heroContextCardDataModelObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextSpotlightHeroContextCardProvider initWithSpotlightParamsObservable:dataFetcher:boostCoordinator:performer:storiesConfigProvider:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1062a0950

// -[SCContextSpotlightHeroContextCardProvider heroContextCardDataModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062a0bfc

// -[SCContextSpotlightHeroContextCardProvider _bindHeroContextCardsFromObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062a0c24

// -[SCContextSpotlightHeroContextCardProvider _fetchParamsResponseFromRawParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062a0d94

// -[SCContextSpotlightHeroContextCardProvider _heroContextParamsWithSpotlightParamsObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062a1240

// -[SCContextSpotlightHeroContextCardProvider _fetchRecommendHeroCardWithSessionParams:currentCards:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062a152c

// -[SCContextSpotlightHeroContextCardProvider _filteredAndSortedCards:isForUsFeed:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1062a1838

// -[SCContextSpotlightHeroContextCardProvider _sortPriorityForCard:prioritizeFriendReposted:]
// Type encoding: q28@0:8@16B24
// Implementation: 0x1062a1b04

// -[SCContextSpotlightHeroContextCardProvider _generateCardsWithIsRecommend:currentCards:isForUsFeed:]
// Type encoding: @32@0:8B16@20B28
// Implementation: 0x1062a1b64

// -[SCContextSpotlightHeroContextCardProvider _processAndPublishHeroContextCardsFromSpotlightParams:spotlightResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062a1d7c

// -[SCContextSpotlightHeroContextCardProvider _appendSuggestedSearchCardFromSpotlightParams:toArray:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062a2658

// -[SCContextSpotlightHeroContextCardProvider _heroCardParamFromSpotlightCard:trendingLensId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062a2960

// -[SCContextSpotlightHeroContextCardProvider _heroContextCardTypeFromSpotlightCard:trendingLensId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1062a2c74

// -[SCContextSpotlightHeroContextCardProvider _filterOutLensCardFromCards:spotlightParams:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1062a2da8

// -[SCContextSpotlightHeroContextCardProvider _processSpotlightCardsWithTrendingContent:toArray:trendingLabelMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062a2f50

// -[SCContextSpotlightHeroContextCardProvider _shouldSkipCard:trendingMusicId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1062a3384

// -[SCContextSpotlightHeroContextCardProvider _checkIfMatchForSoundProfileCard:trendingMusicId:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x1062a3438

// -[SCContextSpotlightHeroContextCardProvider _checkIfLensCardIsTrendingLens:trendingLensId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1062a3530

// -[SCContextSpotlightHeroContextCardProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062a3620

// +[SCContextSpotlightHeroContextCardProvider heroContextCardTypeFromCalloutLabelType:]
// Type encoding: q24@0:8q16
// Implementation: 0x1062a2940

@end
