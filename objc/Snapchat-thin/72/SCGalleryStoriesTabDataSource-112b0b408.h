// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryStoriesTabDataSource
// Superclass: NSObject
// Address: 0x112b0b408

@interface SCGalleryStoriesTabDataSource

// Property: delegate; attributes: T@"<SCGalleryStoriesTabDataSourceDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryStoriesTabDataSource initWithFeatureSettingsService:memoriesDataSource:inlineSearchDataSource:memoriesExperimentService:favoriteSnapsStoryDataCoordinator:consolidatedAutoSavedStoriesDataCoordinator:circumstanceEngine:memoriesMonetizationServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1069fe6ec

// -[SCGalleryStoriesTabDataSource isSearching]
// Type encoding: B16@0:8
// Implementation: 0x1069fe948

// -[SCGalleryStoriesTabDataSource collapseAllViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069fe950

// -[SCGalleryStoriesTabDataSource didUpdateExpandStateForViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069fea44

// -[SCGalleryStoriesTabDataSource _viewModelWithEntry:previousViewModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069feae8

// -[SCGalleryStoriesTabDataSource _appendToMultiSnapViewModelIfNeeded:snap:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1069fefe4

// -[SCGalleryStoriesTabDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1069ff47c

// -[SCGalleryStoriesTabDataSource _updateSearchResults]
// Type encoding: v16@0:8
// Implementation: 0x1069ff5b0

// -[SCGalleryStoriesTabDataSource _updateEntries:failedEntries:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069ff5e8

// -[SCGalleryStoriesTabDataSource memoriesInlineSearchDataSource:didChangeSearchResults:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069ffc88

// -[SCGalleryStoriesTabDataSource memoriesFavoriteSnapsStoryDataCoordinator:didUpdateDataModels:isLoadingInitialDataModel:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1069ffe98

// -[SCGalleryStoriesTabDataSource memoriesConsolidatedAutoSavedStoriesDataCoordinator:didUpdateMyStoryDataModels:customStoryDataModelsMap:customStoryTitleMap:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106a00314

// -[SCGalleryStoriesTabDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a005d8

// -[SCGalleryStoriesTabDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a005f0

// -[SCGalleryStoriesTabDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a005fc

@end
