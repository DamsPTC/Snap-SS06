// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesStoriesTabService
// Superclass: NSObject
// Address: 0x112b0b4f8

@interface SCMemoriesStoriesTabService

// Property: memoriesInlineSearchDataServices; attributes: T@"SCMemoriesInlineSearchDataServices",R,N,V_memoriesInlineSearchDataServices
// Property: favoriteSnapsStoryDataCoordinator; attributes: T@"SCMemoriesFavoriteSnapsStoryDataCoordinator",R,N,V_favoriteSnapsStoryDataCoordinator
// Property: memoriesMonetizationServices; attributes: T@"MemoriesMonetizationServices",R,N,V_memoriesMonetizationServices
// Property: consolidatedAutoSavedStoriesDataCoordinator; attributes: T@"SCMemoriesConsolidatedAutoSavedStoriesDataCoordinator",R,N,V_consolidatedAutoSavedStoriesDataCoordinator
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",R,N,V_circumstanceEngine
// Property: featureSettingsService; attributes: T@"SCLazy",R,N,V_featureSettingsService
// Property: encryptedContentManager; attributes: T@"SCLazy",R,N,V_encryptedContentManager
// Property: cachingMediaManager; attributes: T@"SCLazy",R,N,V_cachingMediaManager
// Property: editDataMutator; attributes: T@"SCLazy",R,N,V_editDataMutator
// Property: memoriesMergedDataSource; attributes: T@"SCLazy",R,N,V_memoriesMergedDataSource
// Property: musicMediaLoader; attributes: T@"SCLazy",R,N,V_musicMediaLoader
// Property: galleryLogger; attributes: T@"SCLazy",R,N,V_galleryLogger
// Property: memoriesExperimentService; attributes: T@"SCLazy",R,N,V_memoriesExperimentService
// Property: dataObjectContext; attributes: T@"SCLazy",R,N,V_dataObjectContext
// Property: memoriesEntryThumbnailGeneratorBuilder; attributes: T@"<SCMemoriesEntryThumbnailGeneratorBuilder>",R,N,V_memoriesEntryThumbnailGeneratorBuilder
// Property: memoriesSnapThumbnailGeneratorBuilder; attributes: T@"<SCMemoriesSnapThumbnailGeneratorBuilder>",R,N,V_memoriesSnapThumbnailGeneratorBuilder
// Property: memoriesEntrySyncStatusGeneratorBuilder; attributes: T@"<SCMemoriesEntrySyncStatusGeneratorBuilder>",R,N,V_memoriesEntrySyncStatusGeneratorBuilder
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesStoriesTabService initWithMemoriesInlineSearchDataServices:musicMediaLoader:featureSettingsService:encryptedContentManager:cachingMediaManager:editDataMutator:memoriesMergedDataSource:galleryLogger:memoriesExperimentService:dataObjectContext:favoriteSnapsStoryScopeExposer:consolidatedAutoSavedStoriesScopeExposer:legacyOperaPresenterBuilder:memoriesActionMenuScopeExposer:memoriesActionMenuScopeServices:memoriesEntryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:favoriteSnapsStoryDataCoordinator:consolidatedAutoSavedStoriesDataCoordinator:circumstanceEngine:memoriesMonetizationServices:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184
// Implementation: 0x106a0742c

// -[SCMemoriesStoriesTabService presentConsolidatedAutoSaveStoriesFromViewController:scopeDelegate:isMyStory:customStoryEntryExternalId:storyTitle:dataCoordinator:]
// Type encoding: v60@0:8@16@24B32@36@44@52
// Implementation: 0x106a078cc

// -[SCMemoriesStoriesTabService cleanUpConsolidatedAutoSaveStoriesScope]
// Type encoding: v16@0:8
// Implementation: 0x106a07b1c

// -[SCMemoriesStoriesTabService presentFavoriteSnapsStoryFromViewController:scopeDelegate:dataCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a07b64

// -[SCMemoriesStoriesTabService cleanUpFavoriteSnapsStoryScope]
// Type encoding: v16@0:8
// Implementation: 0x106a07d44

// -[SCMemoriesStoriesTabService presentActionMenuForGalleryItem:storyCellType:dataSource:delegate:sourcePageName:sourceView:viewController:]
// Type encoding: v72@0:8@16q24@32@40q48@56@64
// Implementation: 0x106a07d8c

// -[SCMemoriesStoriesTabService _presentOperaForGalleryItems:initialIndex:galleryItemIdToSnapsMap:snapId:delegate:viewController:pageHeight:sourcePageName:sourceView:sourceImage:topInset:transitionMode:browseStyle:]
// Type encoding: v120@0:8@16Q24@32@40@48@56d64q72@80@88d96q104Q112
// Implementation: 0x106a07f1c

// -[SCMemoriesStoriesTabService presentOperaForGalleryItems:initialIndex:galleryItemIdToSnapsMap:snapId:delegate:viewController:pageHeight:sourcePageName:sourceView:sourceImage:topInset:transitionMode:]
// Type encoding: v112@0:8@16Q24@32@40@48@56d64q72@80@88d96q104
// Implementation: 0x106a080f4

// -[SCMemoriesStoriesTabService presentOperaForGalleryItem:snaps:snapId:delegate:viewController:pageHeight:sourcePageName:sourceView:sourceImage:topInset:transitionMode:]
// Type encoding: v104@0:8@16@24@32@40@48d56q64@72@80d88q96
// Implementation: 0x106a08124

// -[SCMemoriesStoriesTabService currentTransitionMode]
// Type encoding: q16@0:8
// Implementation: 0x106a082fc

// -[SCMemoriesStoriesTabService cleanUpOperaPresenter]
// Type encoding: v16@0:8
// Implementation: 0x106a08304

// -[SCMemoriesStoriesTabService _actionMenuTypeForStoryCellType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106a08318

// -[SCMemoriesStoriesTabService _actionMenuSubTypeForStoryCellType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106a0832c

// -[SCMemoriesStoriesTabService memoriesInlineSearchDataServices]
// Type encoding: @16@0:8
// Implementation: 0x106a08340

// -[SCMemoriesStoriesTabService musicMediaLoader]
// Type encoding: @16@0:8
// Implementation: 0x106a08348

// -[SCMemoriesStoriesTabService featureSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x106a08350

// -[SCMemoriesStoriesTabService encryptedContentManager]
// Type encoding: @16@0:8
// Implementation: 0x106a08358

// -[SCMemoriesStoriesTabService cachingMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x106a08360

// -[SCMemoriesStoriesTabService editDataMutator]
// Type encoding: @16@0:8
// Implementation: 0x106a08368

// -[SCMemoriesStoriesTabService memoriesMergedDataSource]
// Type encoding: @16@0:8
// Implementation: 0x106a08370

// -[SCMemoriesStoriesTabService galleryLogger]
// Type encoding: @16@0:8
// Implementation: 0x106a08378

// -[SCMemoriesStoriesTabService memoriesExperimentService]
// Type encoding: @16@0:8
// Implementation: 0x106a08380

// -[SCMemoriesStoriesTabService dataObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x106a08388

// -[SCMemoriesStoriesTabService memoriesEntryThumbnailGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106a08390

// -[SCMemoriesStoriesTabService memoriesSnapThumbnailGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106a08398

// -[SCMemoriesStoriesTabService memoriesEntrySyncStatusGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x106a083a0

// -[SCMemoriesStoriesTabService favoriteSnapsStoryDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x106a083a8

// -[SCMemoriesStoriesTabService consolidatedAutoSavedStoriesDataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x106a083b0

// -[SCMemoriesStoriesTabService circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x106a083b8

// -[SCMemoriesStoriesTabService memoriesMonetizationServices]
// Type encoding: @16@0:8
// Implementation: 0x106a083c0

// -[SCMemoriesStoriesTabService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a083c8

@end
