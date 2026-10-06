// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLongformShowAdDataSource
// Superclass: SCAdDataSource
// Address: 0x112addb98

@interface SCLongformShowAdDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lastInteractionStateProvider; attributes: T@"<SCOperaInteractionStateProviding>",R,N
// Property: operaPlaylistItemController; attributes: T@"<SCOperaPlaylistItemController>",R,N
// Property: progressiveMediaDownloaderConfig; attributes: T@"_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig",R,N

// -[SCLongformShowAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063d5cc8

// -[SCLongformShowAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:insertionRuleTracker:progressiveMediaDownloader:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1063d5efc

// -[SCLongformShowAdDataSource updateEntryInteractionType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1063d615c

// -[SCLongformShowAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063d616c

// -[SCLongformShowAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063d637c

// -[SCLongformShowAdDataSource _removeAdItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d69e4

// -[SCLongformShowAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063d6a48

// -[SCLongformShowAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d6ad4

// -[SCLongformShowAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d6b64

// -[SCLongformShowAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063d6b68

// -[SCLongformShowAdDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x1063d6b6c

// -[SCLongformShowAdDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063d6b74

// -[SCLongformShowAdDataSource extraPagePropertiesForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063d6d2c

// -[SCLongformShowAdDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063d7338

// -[SCLongformShowAdDataSource adSnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063d79bc

// -[SCLongformShowAdDataSource didTriggerNoFillTriggerPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d7b60

// -[SCLongformShowAdDataSource shouldTriggerDynamicAdTriggerPoint:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063d8594

// -[SCLongformShowAdDataSource isInsertedAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063d96cc

// -[SCLongformShowAdDataSource isNofillUnskippableAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063d9b34

// -[SCLongformShowAdDataSource snapIndexPosForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063d9bec

// -[SCLongformShowAdDataSource hideAdWithItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d9df4

// -[SCLongformShowAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063d9f24

// -[SCLongformShowAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1063d9f2c

// -[SCLongformShowAdDataSource isLongformShowAd]
// Type encoding: B16@0:8
// Implementation: 0x1063d9f34

// -[SCLongformShowAdDataSource adOrganicSignals]
// Type encoding: @16@0:8
// Implementation: 0x1063d9f3c

// -[SCLongformShowAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x1063da048

// -[SCLongformShowAdDataSource brandSafetyInventoryType]
// Type encoding: q16@0:8
// Implementation: 0x1063da0f4

// -[SCLongformShowAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1063da194

// -[SCLongformShowAdDataSource storyAdMediaLoadStatusSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1063da250

// -[SCLongformShowAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063da258

// -[SCLongformShowAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1063da2dc

// -[SCLongformShowAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x1063da2e4

// -[SCLongformShowAdDataSource isDynamicInsertionEligibleForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063da2ec

// -[SCLongformShowAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x1063da3d0

// -[SCLongformShowAdDataSource adViewContextForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063da4a0

// -[SCLongformShowAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063da71c

// -[SCLongformShowAdDataSource _logUnskippableTypeForShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063da860

// -[SCLongformShowAdDataSource _prepareAdForLongformShow:playlistItemGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063da8a8

// -[SCLongformShowAdDataSource targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1063db63c

// -[SCLongformShowAdDataSource _handleSuccessAdResponseList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063db914

// -[SCLongformShowAdDataSource _handleSuccessAdResponse:playlistItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063dba8c

// -[SCLongformShowAdDataSource _registerAdResponse:playlistItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063dc034

// -[SCLongformShowAdDataSource _handleErrorAdResponseList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063dc138

// -[SCLongformShowAdDataSource _handleErrorAdResponse:playlistItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063dc25c

// -[SCLongformShowAdDataSource _handleMediaFetchResult:playlistItemId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1063dc2ac

// -[SCLongformShowAdDataSource _adMidrollTriggerPointForAdItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063dc314

// -[SCLongformShowAdDataSource _createTriggerPointsForFixedAdsSlotWithShowSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063dc500

// -[SCLongformShowAdDataSource _startViewingLongformShowWithDynamicAdSlots:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063dc820

// -[SCLongformShowAdDataSource _adSlotIndexForLongformShow:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063dc934

// -[SCLongformShowAdDataSource _handleStopViewingPlaylistItemForDynamicInsertion:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063dcb00

// -[SCLongformShowAdDataSource _pageDataForDynamicAd:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063dcc40

// -[SCLongformShowAdDataSource _adPlacementMetadataForLongformShow:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063dd2a8

// -[SCLongformShowAdDataSource _makeDynamicAdRequestIfNecessary:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063dd508

// -[SCLongformShowAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1063dd910

// -[SCLongformShowAdDataSource _applyServerAdInsertionConfig]
// Type encoding: v16@0:8
// Implementation: 0x1063ddc24

// -[SCLongformShowAdDataSource _prepareAdForDynamicInsertionLongformShowIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063dde18

// -[SCLongformShowAdDataSource _createTriggerPointsForDynamicAdsSlotWithShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063de088

// -[SCLongformShowAdDataSource _updateAdResponse:withTriggerPoint:isFirstInPod:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063de33c

// -[SCLongformShowAdDataSource _registerDynamicAdResponse:isFirstInPod:forAdTriggerPoint:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x1063de5b8

// -[SCLongformShowAdDataSource _insertAdPodBeforeExpansion:triggerPoint:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063de884

// -[SCLongformShowAdDataSource _insertExpandedStoryAd:currentAdSnap:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1063debd4

// -[SCLongformShowAdDataSource _itemsToInsertForAdResponse:triggerPoint:startIndex:endIndex:]
// Type encoding: @48@0:8@16@24Q32Q40
// Implementation: 0x1063decd4

// -[SCLongformShowAdDataSource _insertSnapsInStoryAd:startIndex:endIndex:completion:]
// Type encoding: v48@0:8@16Q24Q32@?40
// Implementation: 0x1063def6c

// -[SCLongformShowAdDataSource operaPlaylistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063df3b8

// -[SCLongformShowAdDataSource progressiveMediaDownloaderConfig]
// Type encoding: @16@0:8
// Implementation: 0x1063df3bc

// -[SCLongformShowAdDataSource lastInteractionStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x1063df4a8

// -[SCLongformShowAdDataSource progressiveMediaDownloader:adSnapFor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063df4ec

// -[SCLongformShowAdDataSource progressiveMediaDownloader:adSnapAfter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063df54c

// -[SCLongformShowAdDataSource progressiveMediaDownloader:adResponseFor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063df63c

// -[SCLongformShowAdDataSource _triggerPointSnapIndexForTriggerPoint:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063df644

// -[SCLongformShowAdDataSource _isOptionalAdSlotTriggerPoint:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063df714

// -[SCLongformShowAdDataSource _currentShowFirstSnapIndex]
// Type encoding: q16@0:8
// Implementation: 0x1063df788

// -[SCLongformShowAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063df940

@end
