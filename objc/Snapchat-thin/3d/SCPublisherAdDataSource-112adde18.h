// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublisherAdDataSource
// Superclass: SCAdDataSource
// Address: 0x112adde18

@interface SCPublisherAdDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPublisherAdDataSource addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f332c

// -[SCPublisherAdDataSource removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f333c

// -[SCPublisherAdDataSource didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063f334c

// -[SCPublisherAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063f335c

// -[SCPublisherAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063f34bc

// -[SCPublisherAdDataSource startViewingPlaylistItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063f3638

// -[SCPublisherAdDataSource _removeAdItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f3ae4

// -[SCPublisherAdDataSource stopViewingPlaylistItemId:isViewingLongform:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063f3b30

// -[SCPublisherAdDataSource stopViewingPlaylistItemGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f3bd4

// -[SCPublisherAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f3c2c

// -[SCPublisherAdDataSource startViewingPlaylistChapterId:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063f3c30

// -[SCPublisherAdDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x1063f3c34

// -[SCPublisherAdDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063f3c3c

// -[SCPublisherAdDataSource extraPagePropertiesForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063f3db0

// -[SCPublisherAdDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063f41e8

// -[SCPublisherAdDataSource isInsertedAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063f49b4

// -[SCPublisherAdDataSource isNofillUnskippableAdItemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063f4b78

// -[SCPublisherAdDataSource adProductTypeForItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1063f4c28

// -[SCPublisherAdDataSource adSnapViewLogParametersForSkippedAdItemId:aroundItem:pageLeft:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1063f4cc8

// -[SCPublisherAdDataSource adViewContextForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063f4d74

// -[SCPublisherAdDataSource adViewContextForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063f4ea4

// -[SCPublisherAdDataSource editionEntrySnapIndexForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x1063f4ff4

// -[SCPublisherAdDataSource isAdContentLoopingForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063f5080

// -[SCPublisherAdDataSource mediaLoadContexts]
// Type encoding: @16@0:8
// Implementation: 0x1063f5154

// -[SCPublisherAdDataSource adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1063f5210

// -[SCPublisherAdDataSource adOrganicSignals]
// Type encoding: @16@0:8
// Implementation: 0x1063f523c

// -[SCPublisherAdDataSource upcomingStoriesContext]
// Type encoding: @16@0:8
// Implementation: 0x1063f53b0

// -[SCPublisherAdDataSource resetInsertionData]
// Type encoding: v16@0:8
// Implementation: 0x1063f545c

// -[SCPublisherAdDataSource shouldInsertPlaylistItem]
// Type encoding: B16@0:8
// Implementation: 0x1063f5524

// -[SCPublisherAdDataSource shouldInsertPlaylistItemGroup]
// Type encoding: B16@0:8
// Implementation: 0x1063f552c

// -[SCPublisherAdDataSource unviewedAds]
// Type encoding: @16@0:8
// Implementation: 0x1063f5534

// -[SCPublisherAdDataSource makeBatchAdRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f56b0

// -[SCPublisherAdDataSource makeMediaRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f57b0

// -[SCPublisherAdDataSource _adItemForItemId:group:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063f5990

// -[SCPublisherAdDataSource _previousItemInGroupForItem:group:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063f5b40

// -[SCPublisherAdDataSource _prepareAdForPublisher:group:entryItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063f5bd0

// -[SCPublisherAdDataSource _processGroupAfterDeltaFetch:publisherDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063f5e18

// -[SCPublisherAdDataSource _progressGroup:publisherDataModel:newAdRequestClientIds:newAdRequestClientIdToPlacementMap:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063f6058

// -[SCPublisherAdDataSource _queueAdRequests:adRequestClientIdToTargetingMap:publisherDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063f6570

// -[SCPublisherAdDataSource _makeAdRequests:adRequestClientIdToTargetingMap:publisherDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063f6728

// -[SCPublisherAdDataSource _handleSuccessAdResponseList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f70cc

// -[SCPublisherAdDataSource _handleSuccessAdResponse:playlistItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063f7244

// -[SCPublisherAdDataSource _registerAdResponse:playlistItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063f78fc

// -[SCPublisherAdDataSource _handleErrorAdResponseList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f7a00

// -[SCPublisherAdDataSource _handleErrorAdResponse:playlistItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063f7b24

// -[SCPublisherAdDataSource _handleMediaFetchResult:playlistItemId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1063f7b2c

// -[SCPublisherAdDataSource _removeAdPlaylistItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f7b9c

// -[SCPublisherAdDataSource _requestManagerForAdRequestClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063f7cec

// -[SCPublisherAdDataSource _createRequestManagerForPlaylistGroupIdIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063f7d94

// -[SCPublisherAdDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063f7ea0

// +[SCPublisherAdDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1063f3320

@end
