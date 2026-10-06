// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPublisherDynamicAdDataSource
// Superclass: SCAdDataSource
// Address: 0x112addd78

@interface SCAdPublisherDynamicAdDataSource

// Property: lastInteractionStateProvider; attributes: T@"<SCOperaInteractionStateProviding>",R,N
// Property: operaPlaylistItemController; attributes: T@"<SCOperaPlaylistItemController>",R,N
// Property: progressiveMediaDownloaderConfig; attributes: T@"_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPublisherDynamicAdDataSource initWithDependencies:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063edf5c

// -[SCAdPublisherDynamicAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063ee1d4

// -[SCAdPublisherDynamicAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063ee488

// -[SCAdPublisherDynamicAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063ee754

// -[SCAdPublisherDynamicAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ee844

// -[SCAdPublisherDynamicAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ee88c

// -[SCAdPublisherDynamicAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063ee890

// -[SCAdPublisherDynamicAdDataSource isNofillUnskippableAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063ee894

// -[SCAdPublisherDynamicAdDataSource adProductTypeForItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1063ee944

// -[SCAdPublisherDynamicAdDataSource adSnapViewLogParametersForSkippedAdItemId:aroundItem:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063ee9ac

// -[SCAdPublisherDynamicAdDataSource extraPagePropertiesForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063eea58

// -[SCAdPublisherDynamicAdDataSource adViewContextForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063eebfc

// -[SCAdPublisherDynamicAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063eed7c

// -[SCAdPublisherDynamicAdDataSource editionEntrySnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063eef44

// -[SCAdPublisherDynamicAdDataSource hideAdWithItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063eefd0

// -[SCAdPublisherDynamicAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063ef214

// -[SCAdPublisherDynamicAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1063ef2e8

// -[SCAdPublisherDynamicAdDataSource storyAdMediaLoadStatusSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1063ef3a4

// -[SCAdPublisherDynamicAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1063ef3ac

// -[SCAdPublisherDynamicAdDataSource targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1063ef3d8

// -[SCAdPublisherDynamicAdDataSource adOrganicSignals]
// Type encoding: @16@0:8
// Implementation: 0x1063ef6fc

// -[SCAdPublisherDynamicAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x1063ef86c

// -[SCAdPublisherDynamicAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063ef918

// -[SCAdPublisherDynamicAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1063ef978

// -[SCAdPublisherDynamicAdDataSource playlistItemsInsertCount:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1063ef980

// -[SCAdPublisherDynamicAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x1063efa3c

// -[SCAdPublisherDynamicAdDataSource isDynamicInsertionEligibleForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063efa44

// -[SCAdPublisherDynamicAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x1063efa4c

// -[SCAdPublisherDynamicAdDataSource adSnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063efbc8

// -[SCAdPublisherDynamicAdDataSource insertAdAfterCurrentItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063efd6c

// -[SCAdPublisherDynamicAdDataSource createAdOpportunity:isInsertionRuleReady:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1063efe30

// -[SCAdPublisherDynamicAdDataSource pendingAdInsertionRuleReadyToEvaluate]
// Type encoding: B16@0:8
// Implementation: 0x1063eff48

// -[SCAdPublisherDynamicAdDataSource pendingAdIsBrandSafe]
// Type encoding: B16@0:8
// Implementation: 0x1063effec

// -[SCAdPublisherDynamicAdDataSource _safeThreadedInsertAdAfterCurrentItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063f08a8

// -[SCAdPublisherDynamicAdDataSource _makeDynamicAdRequestIfNecessary:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063f0edc

// -[SCAdPublisherDynamicAdDataSource _safeThreadedHandleAdRequestResponse:metadataToMediaTransitionCookie:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063f13ac

// -[SCAdPublisherDynamicAdDataSource _fetchMediaForPendingAdWithMetadataToMediaTransitionCookie:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063f1468

// -[SCAdPublisherDynamicAdDataSource _handleFetchMediaForPendingInsertAdCompletion]
// Type encoding: v16@0:8
// Implementation: 0x1063f1830

// -[SCAdPublisherDynamicAdDataSource _applyServerAdInsertionConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f18b4

// -[SCAdPublisherDynamicAdDataSource _expandStoryAd:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063f1b34

// -[SCAdPublisherDynamicAdDataSource _registerAdSnaps:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063f1cf4

// -[SCAdPublisherDynamicAdDataSource _insertAdSnapsAfterCurrentItem:forAdResponse:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1063f1e20

// -[SCAdPublisherDynamicAdDataSource operaPlaylistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063f222c

// -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloaderConfig]
// Type encoding: @16@0:8
// Implementation: 0x1063f2230

// -[SCAdPublisherDynamicAdDataSource lastInteractionStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x1063f231c

// -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloader:adSnapFor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063f2360

// -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloader:adSnapAfter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063f23c0

// -[SCAdPublisherDynamicAdDataSource progressiveMediaDownloader:adResponseFor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063f24b4

// -[SCAdPublisherDynamicAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063f24bc

@end
