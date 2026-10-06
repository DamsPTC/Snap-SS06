// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPublicStoriesAdDataSource
// Superclass: SCAdDataSource
// Address: 0x112addaf8

@interface SCAdPublicStoriesAdDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPublicStoriesAdDataSource initWithDependencies:mainQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063cf584

// -[SCAdPublicStoriesAdDataSource initWithDependencies:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063cf7d4

// -[SCAdPublicStoriesAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063cf83c

// -[SCAdPublicStoriesAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063cfed0

// -[SCAdPublicStoriesAdDataSource _evaluateInsertionRulesAndInsertAdIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063d0690

// -[SCAdPublicStoriesAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063d1960

// -[SCAdPublicStoriesAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d1b1c

// -[SCAdPublicStoriesAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d1bf8

// -[SCAdPublicStoriesAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063d1bfc

// -[SCAdPublicStoriesAdDataSource _handleFetchPublicStoryContentViewHistory:groupId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063d1d50

// -[SCAdPublicStoriesAdDataSource _updatePersistedPublicStoryContentViewHistory:groupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063d2004

// -[SCAdPublicStoriesAdDataSource adProductTypeForItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1063d2170

// -[SCAdPublicStoriesAdDataSource adViewContextForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063d21d8

// -[SCAdPublicStoriesAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063d2328

// -[SCAdPublicStoriesAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063d2468

// -[SCAdPublicStoriesAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1063d2470

// -[SCAdPublicStoriesAdDataSource _requiredSnapCountForAdResponse:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1063d252c

// -[SCAdPublicStoriesAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1063d2638

// -[SCAdPublicStoriesAdDataSource targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1063d2640

// -[SCAdPublicStoriesAdDataSource shouldDelayFiringAdOpportunity]
// Type encoding: B16@0:8
// Implementation: 0x1063d28c0

// -[SCAdPublicStoriesAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x1063d299c

// -[SCAdPublicStoriesAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063d2a48

// -[SCAdPublicStoriesAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1063d2b2c

// -[SCAdPublicStoriesAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x1063d2b34

// -[SCAdPublicStoriesAdDataSource isDynamicInsertionEligibleForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063d2b3c

// -[SCAdPublicStoriesAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x1063d2b44

// -[SCAdPublicStoriesAdDataSource adSnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063d2e40

// -[SCAdPublicStoriesAdDataSource _isMidRollAoeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1063d3094

// -[SCAdPublicStoriesAdDataSource _logMidRollContentSlotEnterIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x1063d3110

// -[SCAdPublicStoriesAdDataSource _makeAdRequestIfNecessary:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063d32b8

// -[SCAdPublicStoriesAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1063d3780

// -[SCAdPublicStoriesAdDataSource _applyServerAdInsertionConfig]
// Type encoding: v16@0:8
// Implementation: 0x1063d3c20

// -[SCAdPublicStoriesAdDataSource _fireDelayedAdOpportunitiesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1063d3e40

// -[SCAdPublicStoriesAdDataSource _handleMediaFetchComplete]
// Type encoding: v16@0:8
// Implementation: 0x1063d4028

// -[SCAdPublicStoriesAdDataSource _isInsertionRetryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1063d41b0

// -[SCAdPublicStoriesAdDataSource _scheduleRetryInsertionAfterItem:delaySec:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1063d4244

// -[SCAdPublicStoriesAdDataSource _retryInsertion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d43b4

// -[SCAdPublicStoriesAdDataSource _insertAdIfNecessaryAfterItem:insertSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063d44d8

// -[SCAdPublicStoriesAdDataSource _expandStoryAd:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063d4d90

// -[SCAdPublicStoriesAdDataSource _registerAdSnaps:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063d4f50

// -[SCAdPublicStoriesAdDataSource _insertAdSnapsAfterCurrentItem:forAdResponse:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1063d507c

// -[SCAdPublicStoriesAdDataSource _adRuleTracker]
// Type encoding: @16@0:8
// Implementation: 0x1063d5488

// -[SCAdPublicStoriesAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063d5560

@end
