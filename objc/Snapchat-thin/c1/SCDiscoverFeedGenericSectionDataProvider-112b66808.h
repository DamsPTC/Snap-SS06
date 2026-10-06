// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedGenericSectionDataProvider
// Superclass: NSObject
// Address: 0x112b66808

@interface SCDiscoverFeedGenericSectionDataProvider

// Property: backgroundColor; attributes: T@"UIColor",&,N,V_backgroundColor
// Property: disableLoadingSpinner; attributes: TB,N,V_disableLoadingSpinner
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer

// -[SCDiscoverFeedGenericSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b0594

// -[SCDiscoverFeedGenericSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b059c

// -[SCDiscoverFeedGenericSectionDataProvider initWithDiscoverFeedDataFetcher:imageDownloader:bitmojiAvatarId:gestureCoordinator:initialHeaderViewModel:snapchattersSynchronousDataFetcher:isThreeColumnsLayoutEnabled:circumstanceEngine:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:promotedStoriesLogger:friendsContextLabelBuilder:]
// Type encoding: @116@0:8@16@24@32@40@48@56B64@68@76@84@92@100@108
// Implementation: 0x1079b05a4

// -[SCDiscoverFeedGenericSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x1079b0a3c

// -[SCDiscoverFeedGenericSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1079b0a48

// -[SCDiscoverFeedGenericSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b0a84

// -[SCDiscoverFeedGenericSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x1079b0b38

// -[SCDiscoverFeedGenericSectionDataProvider experimentalPagingMode]
// Type encoding: q16@0:8
// Implementation: 0x1079b0b40

// -[SCDiscoverFeedGenericSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1079b0b48

// -[SCDiscoverFeedGenericSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079b0b50

// -[SCDiscoverFeedGenericSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079b0c20

// -[SCDiscoverFeedGenericSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079b0d6c

// -[SCDiscoverFeedGenericSectionDataProvider modelCanUpdateComparator]
// Type encoding: @?16@0:8
// Implementation: 0x1079b105c

// -[SCDiscoverFeedGenericSectionDataProvider viewModelChangesComparator]
// Type encoding: @?16@0:8
// Implementation: 0x1079b11e0

// -[SCDiscoverFeedGenericSectionDataProvider supplementaryViewModels]
// Type encoding: @16@0:8
// Implementation: 0x1079b17a0

// -[SCDiscoverFeedGenericSectionDataProvider didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b186c

// -[SCDiscoverFeedGenericSectionDataProvider _configureStoryCardCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b18b4

// -[SCDiscoverFeedGenericSectionDataProvider _performUpdateStoriesFromDataStore]
// Type encoding: v16@0:8
// Implementation: 0x1079b1aec

// -[SCDiscoverFeedGenericSectionDataProvider _reloadSection]
// Type encoding: v16@0:8
// Implementation: 0x1079b1bc0

// -[SCDiscoverFeedGenericSectionDataProvider _reloadSectionWithContainerViewModels:feedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1079b2798

// -[SCDiscoverFeedGenericSectionDataProvider _prefetchThumbnailsIfNeededForViewModels:feedType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1079b29d4

// -[SCDiscoverFeedGenericSectionDataProvider _handledBitmojiThumbnailPrefetch:]
// Type encoding: B24@0:8@16
// Implementation: 0x1079b2d7c

// -[SCDiscoverFeedGenericSectionDataProvider _subscribeIconStyleForFeedType:]
// Type encoding: q20@0:8i16
// Implementation: 0x1079b3114

// -[SCDiscoverFeedGenericSectionDataProvider _checkAdsInsertionBrandSafetyViolationForPromotedStory:allStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079b31ac

// -[SCDiscoverFeedGenericSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1079b329c

// -[SCDiscoverFeedGenericSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b32b4

// -[SCDiscoverFeedGenericSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x1079b32c0

// -[SCDiscoverFeedGenericSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1079b32c8

// -[SCDiscoverFeedGenericSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b32d0

// -[SCDiscoverFeedGenericSectionDataProvider backgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x1079b3300

// -[SCDiscoverFeedGenericSectionDataProvider setBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079b3308

// -[SCDiscoverFeedGenericSectionDataProvider disableLoadingSpinner]
// Type encoding: B16@0:8
// Implementation: 0x1079b3338

// -[SCDiscoverFeedGenericSectionDataProvider setDisableLoadingSpinner:]
// Type encoding: v20@0:8B16
// Implementation: 0x1079b3340

// -[SCDiscoverFeedGenericSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079b3348

// +[SCDiscoverFeedGenericSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079b0588

@end
