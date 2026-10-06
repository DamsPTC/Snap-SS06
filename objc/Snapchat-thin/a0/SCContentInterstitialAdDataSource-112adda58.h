// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContentInterstitialAdDataSource
// Superclass: SCAdDataSource
// Address: 0x112adda58

@interface SCContentInterstitialAdDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContentInterstitialAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063c5f78

// -[SCContentInterstitialAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063c62c4

// -[SCContentInterstitialAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063c6af8

// -[SCContentInterstitialAdDataSource _evaluateInsertionRulesAndInsertAdIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063c7560

// -[SCContentInterstitialAdDataSource _evaluateInsertionThresholdsOnlyWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063c9584

// -[SCContentInterstitialAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063c9df8

// -[SCContentInterstitialAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ca0fc

// -[SCContentInterstitialAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ca370

// -[SCContentInterstitialAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063ca374

// -[SCContentInterstitialAdDataSource isRetryInsertionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1063ca450

// -[SCContentInterstitialAdDataSource shouldDelayFiringAdOpportunity]
// Type encoding: B16@0:8
// Implementation: 0x1063ca458

// -[SCContentInterstitialAdDataSource targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1063ca568

// -[SCContentInterstitialAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1063ca708

// -[SCContentInterstitialAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x1063ca86c

// -[SCContentInterstitialAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1063ca918

// -[SCContentInterstitialAdDataSource storyAdMediaLoadStatusSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1063ca9f4

// -[SCContentInterstitialAdDataSource _fetchStoryAdMediaIfNecessaryWithDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ca9fc

// -[SCContentInterstitialAdDataSource _handleMediaFetchResult:adSnap:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1063cae40

// -[SCContentInterstitialAdDataSource resetInsertionState]
// Type encoding: v16@0:8
// Implementation: 0x1063caec0

// -[SCContentInterstitialAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063cb018

// -[SCContentInterstitialAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1063cb160

// -[SCContentInterstitialAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x1063cb168

// -[SCContentInterstitialAdDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063cb170

// -[SCContentInterstitialAdDataSource extraPagePropertiesForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063cb404

// -[SCContentInterstitialAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063cb47c

// -[SCContentInterstitialAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063cb484

// -[SCContentInterstitialAdDataSource adSnapViewLogParametersForSkippedAdGroupId:aroundGroup:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063cb66c

// -[SCContentInterstitialAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x1063cb710

// -[SCContentInterstitialAdDataSource _groupsLeftCount]
// Type encoding: @16@0:8
// Implementation: 0x1063cb8d4

// -[SCContentInterstitialAdDataSource _setAdRules]
// Type encoding: v16@0:8
// Implementation: 0x1063cb9f8

// -[SCContentInterstitialAdDataSource _insertAdIfNecessaryAfterItem:insertSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063cba7c

// -[SCContentInterstitialAdDataSource _insertAdAfterItem:insertSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063cbf80

// -[SCContentInterstitialAdDataSource insertAdPod:adPlacement:afterItem:insertSource:]
// Type encoding: B48@0:8@16@24@32q40
// Implementation: 0x1063cc50c

// -[SCContentInterstitialAdDataSource _insertPromotedPublisherStoryWithAdData:adPlacement:afterItem:insertSource:]
// Type encoding: B48@0:8@16@24@32q40
// Implementation: 0x1063cc65c

// -[SCContentInterstitialAdDataSource _makeAdRequestIfNecessary:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063cc898

// -[SCContentInterstitialAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1063ccd60

// -[SCContentInterstitialAdDataSource updateCachedInsertionConfigIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063cd3ec

// -[SCContentInterstitialAdDataSource _applyServerAdInsertionConfig]
// Type encoding: v16@0:8
// Implementation: 0x1063cd648

// -[SCContentInterstitialAdDataSource _fireDelayedAdOpportunitiesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1063cd8c4

// -[SCContentInterstitialAdDataSource _didFetchPromotePublisherStoryWithStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1063cdaa4

// -[SCContentInterstitialAdDataSource _didFetchMediaForPendingInsertAdWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063cdab0

// -[SCContentInterstitialAdDataSource _scheduleRetryInsertionAfterItem:delaySec:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1063cde7c

// -[SCContentInterstitialAdDataSource _retryInsertion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063cdffc

// -[SCContentInterstitialAdDataSource _removeAdGroups:afterPlaylistGroup:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1063ce174

// -[SCContentInterstitialAdDataSource _isDupPayToPromoteStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063ce644

// -[SCContentInterstitialAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063ce76c

@end
