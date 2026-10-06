// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLongformSpotlightAdDataSource
// Superclass: SCAdDataSource
// Address: 0x112addbe8

@interface SCLongformSpotlightAdDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lastInteractionStateProvider; attributes: T@"<SCOperaInteractionStateProviding>",R,N
// Property: operaPlaylistItemController; attributes: T@"<SCOperaPlaylistItemController>",R,N
// Property: progressiveMediaDownloaderConfig; attributes: T@"_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig",R,N

// -[SCLongformSpotlightAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063dfeec

// -[SCLongformSpotlightAdDataSource updateEntryInteractionType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1063e026c

// -[SCLongformSpotlightAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063e027c

// -[SCLongformSpotlightAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063e0624

// -[SCLongformSpotlightAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063e0a14

// -[SCLongformSpotlightAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e0b54

// -[SCLongformSpotlightAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e0ba0

// -[SCLongformSpotlightAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063e0ba4

// -[SCLongformSpotlightAdDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x1063e0ba8

// -[SCLongformSpotlightAdDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063e0bb0

// -[SCLongformSpotlightAdDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063e0d68

// -[SCLongformSpotlightAdDataSource adSnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063e0df4

// -[SCLongformSpotlightAdDataSource didTriggerNoFillTriggerPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e0f98

// -[SCLongformSpotlightAdDataSource shouldTriggerDynamicAdTriggerPoint:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063e15c8

// -[SCLongformSpotlightAdDataSource isInsertedAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063e2a08

// -[SCLongformSpotlightAdDataSource snapIndexPosForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063e2ee0

// -[SCLongformSpotlightAdDataSource hideAdWithItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e30c0

// -[SCLongformSpotlightAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063e31f0

// -[SCLongformSpotlightAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1063e31f8

// -[SCLongformSpotlightAdDataSource isLongformShowAd]
// Type encoding: B16@0:8
// Implementation: 0x1063e3200

// -[SCLongformSpotlightAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x1063e3208

// -[SCLongformSpotlightAdDataSource brandSafetyInventoryType]
// Type encoding: q16@0:8
// Implementation: 0x1063e32b4

// -[SCLongformSpotlightAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1063e32f0

// -[SCLongformSpotlightAdDataSource storyAdMediaLoadStatusSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1063e33ac

// -[SCLongformSpotlightAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063e33b4

// -[SCLongformSpotlightAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1063e3420

// -[SCLongformSpotlightAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x1063e3428

// -[SCLongformSpotlightAdDataSource isDynamicInsertionEligibleForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063e3430

// -[SCLongformSpotlightAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x1063e3438

// -[SCLongformSpotlightAdDataSource adViewContextForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063e3508

// -[SCLongformSpotlightAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063e36a0

// -[SCLongformSpotlightAdDataSource targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1063e3754

// -[SCLongformSpotlightAdDataSource _adMidrollTriggerPointForAdItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063e3960

// -[SCLongformSpotlightAdDataSource _startViewingLongformSpotlightSnapWithDynamicAdSlots:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e3ac0

// -[SCLongformSpotlightAdDataSource _adSlotIndexForSpotlightSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063e3bbc

// -[SCLongformSpotlightAdDataSource _pageDataForDynamicAd:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063e3d58

// -[SCLongformSpotlightAdDataSource _makeDynamicAdRequestIfNecessary:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063e43c0

// -[SCLongformSpotlightAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1063e4894

// -[SCLongformSpotlightAdDataSource _applyServerAdInsertionConfig]
// Type encoding: v16@0:8
// Implementation: 0x1063e4e40

// -[SCLongformSpotlightAdDataSource _prepareAdForDynamicInsertionLongformSpotlightSnapIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e5034

// -[SCLongformSpotlightAdDataSource _createTriggerPointsForDynamicAdsSlotWithSpotlightSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e52e4

// -[SCLongformSpotlightAdDataSource _updateAdResponse:withTriggerPoint:isFirstInPod:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063e5598

// -[SCLongformSpotlightAdDataSource _registerDynamicAdResponse:isFirstInPod:forAdTriggerPoint:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x1063e5814

// -[SCLongformSpotlightAdDataSource _insertAdPodBeforeExpansion:triggerPoint:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063e5a30

// -[SCLongformSpotlightAdDataSource _insertExpandedStoryAd:currentAdSnap:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1063e5d3c

// -[SCLongformSpotlightAdDataSource _itemsToInsertForAdResponse:triggerPoint:startIndex:endIndex:]
// Type encoding: @48@0:8@16@24Q32Q40
// Implementation: 0x1063e5e3c

// -[SCLongformSpotlightAdDataSource _insertSnapsInStoryAd:startIndex:endIndex:completion:]
// Type encoding: v48@0:8@16Q24Q32@?40
// Implementation: 0x1063e60d4

// -[SCLongformSpotlightAdDataSource operaPlaylistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063e6588

// -[SCLongformSpotlightAdDataSource progressiveMediaDownloaderConfig]
// Type encoding: @16@0:8
// Implementation: 0x1063e658c

// -[SCLongformSpotlightAdDataSource lastInteractionStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x1063e6678

// -[SCLongformSpotlightAdDataSource progressiveMediaDownloader:adSnapFor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063e66bc

// -[SCLongformSpotlightAdDataSource progressiveMediaDownloader:adSnapAfter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063e671c

// -[SCLongformSpotlightAdDataSource progressiveMediaDownloader:adResponseFor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063e680c

// -[SCLongformSpotlightAdDataSource _isMidRollAoeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1063e6814

// -[SCLongformSpotlightAdDataSource _isMidRollAoeAccurateMissEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1063e6890

// -[SCLongformSpotlightAdDataSource _logMidRollSlotEnterIfEnabledForTriggerPoint:adOpportunityMissType:isToAd:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1063e691c

// -[SCLongformSpotlightAdDataSource _triggerPointSnapIndexForTriggerPoint:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063e6a94

// -[SCLongformSpotlightAdDataSource _currentSpotlightSnapFirstIntervalIndex]
// Type encoding: q16@0:8
// Implementation: 0x1063e6b64

// -[SCLongformSpotlightAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063e6d14

@end
