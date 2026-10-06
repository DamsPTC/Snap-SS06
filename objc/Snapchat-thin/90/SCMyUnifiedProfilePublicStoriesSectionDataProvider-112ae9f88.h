// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyUnifiedProfilePublicStoriesSectionDataProvider
// Superclass: NSObject
// Address: 0x112ae9f88

@interface SCMyUnifiedProfilePublicStoriesSectionDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCUnifiedProfileStoriesSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: storyType; attributes: Tq,R,N,V_storyType
// Property: storyId; attributes: T@"NSString",R,N,V_storyId
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider initWithProfileId:userSession:myStoriesDataCoordinator:profileTooltipsService:imageDownloader:storiesSnapReadReceiptService:circumstanceEngine:storyDraftingDataCoordinator:storyCardFetcher:discoverFeedDataFetcher:nativeStoryClientModelGenerator:creatorInfoProvider:plusFeatureGating:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x106611c7c

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1066123d4

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _setHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10661243c

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106612ae4

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForState:hasStory:hasUnviewed:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106612b90

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _parseRawStoryCardIntoSCDiscoverFeedStory]
// Type encoding: v16@0:8
// Implementation: 0x106612bcc

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _removePendingSnaps]
// Type encoding: v16@0:8
// Implementation: 0x106612c88

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106612ce4

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsAfterHigherMediaQualityCheck]
// Type encoding: v16@0:8
// Implementation: 0x106612d28

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsIfNeededWithHasUnviewedSnaps:]
// Type encoding: v20@0:8B16
// Implementation: 0x106612f18

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _handleQueriedPendingSnap:hasUnviewedSnaps:manifestSnapshot:deletedSnapSnapshot:generation:]
// Type encoding: v52@0:8@16B24@28@36Q44
// Implementation: 0x106613184

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _createViewModelsWithPostingSnapCount:failedSnapCount:snapProSnapDataModels:hasUnviewedSnaps:hasStoryCard:]
// Type encoding: v48@0:8q16q24@32B40B44
// Implementation: 0x106613818

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsIfNeededWithStoriesCellViewModel:storyListViewCellViewModels:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10661422c

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106614374

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storiesCellViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106614378

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storyListViewCellViewModels]
// Type encoding: @16@0:8
// Implementation: 0x1066143a0

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider configurationBlockForStoriesCell]
// Type encoding: @?16@0:8
// Implementation: 0x1066143c8

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider configurationBlockForStoriesListViewCell]
// Type encoding: @?16@0:8
// Implementation: 0x1066144b0

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _getDeletedSnapProSnaps]
// Type encoding: @16@0:8
// Implementation: 0x106614598

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider viewMoreExpansionThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x1066145e8

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider viewMoreExpansionIncrementThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x1066145f0

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storiesCellClass]
// Type encoding: #16@0:8
// Implementation: 0x1066145f8

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _configureStoriesCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106614604

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _configureStoriesListViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106614674

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066146e4

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066147cc

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066149ec

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _profilePostToTreatmentEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106614a5c

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _isFanPassSubscriptionStoryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106614a7c

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106614aec

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storyType]
// Type encoding: q16@0:8
// Implementation: 0x106614bb4

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storyId]
// Type encoding: @16@0:8
// Implementation: 0x106614bbc

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106614bc4

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106614bdc

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x106614be8

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106614bf0

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x106614c20

// -[SCMyUnifiedProfilePublicStoriesSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106614c28

@end
