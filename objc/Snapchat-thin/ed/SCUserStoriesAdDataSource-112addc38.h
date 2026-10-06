// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserStoriesAdDataSource
// Superclass: SCAdDataSource
// Address: 0x112addc38

@interface SCUserStoriesAdDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserStoriesAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063e7318

// -[SCUserStoriesAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:adsSessionTracker:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1063e73d4

// -[SCUserStoriesAdDataSource teardown]
// Type encoding: v16@0:8
// Implementation: 0x1063e7790

// -[SCUserStoriesAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063e782c

// -[SCUserStoriesAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063e7e44

// -[SCUserStoriesAdDataSource _evaluateInsertionRulesAndInsertAdIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063e850c

// -[SCUserStoriesAdDataSource _evaluateInsertionThresholdsOnlyWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e8ed8

// -[SCUserStoriesAdDataSource _scheduleRetryInsertionAfterItem:delaySec:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1063e935c

// -[SCUserStoriesAdDataSource _retryInsertion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e946c

// -[SCUserStoriesAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063e95e8

// -[SCUserStoriesAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e9be0

// -[SCUserStoriesAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063e9c6c

// -[SCUserStoriesAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063e9d18

// -[SCUserStoriesAdDataSource targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1063e9da4

// -[SCUserStoriesAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x1063e9efc

// -[SCUserStoriesAdDataSource _unviewedEligibleStoryCount]
// Type encoding: q16@0:8
// Implementation: 0x1063ea16c

// -[SCUserStoriesAdDataSource didUpdateWithDiscoverFeedFriendStoryDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ea22c

// -[SCUserStoriesAdDataSource _refreshFeedUnviewedFriendStoriesCount]
// Type encoding: v16@0:8
// Implementation: 0x1063ea230

// -[SCUserStoriesAdDataSource _logUnviewedEligibleStoryCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063ea468

// -[SCUserStoriesAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1063ea59c

// -[SCUserStoriesAdDataSource adOrganicSignals]
// Type encoding: @16@0:8
// Implementation: 0x1063ea5a4

// -[SCUserStoriesAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1063ea968

// -[SCUserStoriesAdDataSource storyAdMediaLoadStatusSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1063eaa24

// -[SCUserStoriesAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063eaa2c

// -[SCUserStoriesAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1063eab08

// -[SCUserStoriesAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x1063eab10

// -[SCUserStoriesAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063eab18

// -[SCUserStoriesAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063eab20

// -[SCUserStoriesAdDataSource adSnapViewLogParametersForSkippedAdGroupId:aroundGroup:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063eae94

// -[SCUserStoriesAdDataSource isRetryInsertionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1063eaf4c

// -[SCUserStoriesAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x1063eaf54

// -[SCUserStoriesAdDataSource engagement]
// Type encoding: @16@0:8
// Implementation: 0x1063eb170

// -[SCUserStoriesAdDataSource _setAdRules]
// Type encoding: v16@0:8
// Implementation: 0x1063eb1d0

// -[SCUserStoriesAdDataSource _groupsLeftCount]
// Type encoding: @16@0:8
// Implementation: 0x1063eb21c

// -[SCUserStoriesAdDataSource _makeAdRequestIfNecessary:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063eb340

// -[SCUserStoriesAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1063eb834

// -[SCUserStoriesAdDataSource _applyServerAdInsertionConfig]
// Type encoding: v16@0:8
// Implementation: 0x1063ebc80

// -[SCUserStoriesAdDataSource updateCachedInsertionConfigIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063ebef0

// -[SCUserStoriesAdDataSource _handleMediaFetchCompleteWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063ec128

// -[SCUserStoriesAdDataSource _trackNoFillItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063ec464

// -[SCUserStoriesAdDataSource _insertAdIfNecessaryAfterItem:insertSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063ec534

// -[SCUserStoriesAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063ecbf0

@end
