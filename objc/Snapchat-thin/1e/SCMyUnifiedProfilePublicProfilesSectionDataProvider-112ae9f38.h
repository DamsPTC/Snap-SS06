// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyUnifiedProfilePublicProfilesSectionDataProvider
// Superclass: NSObject
// Address: 0x112ae9f38

@interface SCMyUnifiedProfilePublicProfilesSectionDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCUnifiedProfileStoriesSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: storyType; attributes: Tq,R,N,V_storyType
// Property: storyId; attributes: T@"NSString",R,N,V_storyId
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider initWithProfileId:userSession:myStoriesDataCoordinator:profileTooltipsService:imageDownloader:storiesSnapReadReceiptService:circumstanceEngine:storyDraftingDataCoordinator:storyCardFetcher:discoverFeedDataFetcher:nativeStoryClientModelGenerator:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x10660f2f8

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10660f8bc

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _setHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10660f91c

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10660ff64

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForState:hasStory:hasUnviewed:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106610010

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _parseRawStoryCardIntoSCDiscoverFeedStory]
// Type encoding: v16@0:8
// Implementation: 0x10661004c

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _removePendingSnaps]
// Type encoding: v16@0:8
// Implementation: 0x106610108

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106610164

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsAfterHigherMediaQualityCheck]
// Type encoding: v16@0:8
// Implementation: 0x106610314

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsIfNeededWithHasUnviewedSnaps:]
// Type encoding: v20@0:8B16
// Implementation: 0x106610504

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _handleQueriedPendingSnap:hasUnviewedSnaps:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1066106f0

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _createViewModelsWithPostingSnapCount:failedSnapCount:snapProSnapDataModels:hasUnviewedSnaps:hasStoryCard:]
// Type encoding: v48@0:8q16q24@32B40B44
// Implementation: 0x106610cd4

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _hasStory:]
// Type encoding: B20@0:8B16
// Implementation: 0x106611144

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsIfNeededWithStoriesCellViewModel:storyListViewCellViewModels:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106611188

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066112d0

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storiesCellViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1066112d4

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storyListViewCellViewModels]
// Type encoding: @16@0:8
// Implementation: 0x1066112fc

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider configurationBlockForStoriesCell]
// Type encoding: @?16@0:8
// Implementation: 0x106611324

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider configurationBlockForStoriesListViewCell]
// Type encoding: @?16@0:8
// Implementation: 0x10661140c

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _getDeletedSnapProSnaps]
// Type encoding: @16@0:8
// Implementation: 0x1066114f4

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider viewMoreExpansionThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x106611544

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider viewMoreExpansionIncrementThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x10661154c

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storiesCellClass]
// Type encoding: #16@0:8
// Implementation: 0x106611554

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _configureStoriesCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106611560

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _configureStoriesListViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066115d0

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x106611640

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _queueProfileManagerUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106611728

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10661186c

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106611a14

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storyType]
// Type encoding: q16@0:8
// Implementation: 0x106611a84

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storyId]
// Type encoding: @16@0:8
// Implementation: 0x106611a8c

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106611a94

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106611aac

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x106611ab8

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106611ac0

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x106611af0

// -[SCMyUnifiedProfilePublicProfilesSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106611af8

@end
