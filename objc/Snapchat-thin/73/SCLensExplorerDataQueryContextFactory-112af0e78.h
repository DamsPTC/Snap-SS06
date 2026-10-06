// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerDataQueryContextFactory
// Superclass: NSObject
// Address: 0x112af0e78

@interface SCLensExplorerDataQueryContextFactory


// -[SCLensExplorerDataQueryContextFactory initWithRequestProviderFactory:requestManager:studySettingsServices:userStorageServices:performerServices:lensFavoritesService:lensFavoritesMockService:networkServices:userIPInferredLocationServices:dynamicLayoutServices:mixerNamespaceServices:mixerNamespaceCacheOptimizationEnabled:lensCoreVersionProvider:]
// Type encoding: @116@0:8@16@24@32@40@48@56@64@72@80@88@96B104@108
// Implementation: 0x1007b267c

// -[SCLensExplorerDataQueryContextFactory queryContextForContext:]
// Type encoding: @24@0:8q16
// Implementation: 0x1007b28b4

// -[SCLensExplorerDataQueryContextFactory queryContextForContext:decorator:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1007b28bc

// -[SCLensExplorerDataQueryContextFactory _cacheEnabledForContext:]
// Type encoding: B24@0:8q16
// Implementation: 0x1007b297c

// -[SCLensExplorerDataQueryContextFactory _shouldUseLensGatorForContext:]
// Type encoding: B24@0:8q16
// Implementation: 0x1007b4bf4

// -[SCLensExplorerDataQueryContextFactory _nativeMixerContexts]
// Type encoding: @16@0:8
// Implementation: 0x1007b4e6c

// -[SCLensExplorerDataQueryContextFactory _shouldEnableDailyGamesForContext:]
// Type encoding: B24@0:8q16
// Implementation: 0x1007b4674

// -[SCLensExplorerDataQueryContextFactory _queryContextWrapperForContext:decorator:requestProviderFactory:requestManager:studySettingsServices:cacheEnabled:]
// Type encoding: @60@0:8q16@24@32@40@48B56
// Implementation: 0x1007b38a4

// -[SCLensExplorerDataQueryContextFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066f40dc

// +[SCLensExplorerDataQueryContextFactory _dataStoreFactoryWithStudySettingsServices:sectionsDataStore:containerStore:context:shouldEnableDailyGames:dailyGamesAuxiliaryNamespaceId:]
// Type encoding: @60@0:8@16@24^@32q40B48@52
// Implementation: 0x1066f2e60

// +[SCLensExplorerDataQueryContextFactory _dailiesDataStoreWithFactory:context:shouldEnableDailyGames:dailyGamesAuxiliaryNamespaceId:]
// Type encoding: @44@0:8@16q24B32@36
// Implementation: 0x1066f2fb4

// +[SCLensExplorerDataQueryContextFactory _categoriesProviderFactoryWithQueryFactory:queryCoordinatorFactory:requestProviderFactory:requestManager:studySettingsServices:dynamicUpdateHandler:selectedBatchStatusCheckerFactory:context:performerServices:feedModelsStorage:cacheEnabled:mixerNamespaceServices:lensGatorEnabled:mixerNamespaceCacheOptimizationEnabled:gamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:]
// Type encoding: @124@0:8@16@24@32@40@48@56@64q72@80@88B96@100B108B112B116B120
// Implementation: 0x1066f3188

// +[SCLensExplorerDataQueryContextFactory _queryCoordinatorFactoryWithDataStoreFactory:requestProviderFactory:requestManager:lensFavoritesService:lensFavoritesMockService:batchUpdateHandler:selectedBatchStatusCheckerFactory:feedModelsStorage:cacheEnabled:mixerNamespaceServices:lensGatorEnabled:mixerNamespaceCacheOptimizationEnabled:gamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64@72B80@84B92B96B100B104
// Implementation: 0x1066f347c

// +[SCLensExplorerDataQueryContextFactory _queryFactoryWithContext:]
// Type encoding: @24@0:8q16
// Implementation: 0x1066f3724

// +[SCLensExplorerDataQueryContextFactory _lensCollectionDataProviderWithNetworkServices:studySettings:countryCodeProvider:performerServices:lensCoreVersionProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1066f3778

// +[SCLensExplorerDataQueryContextFactory _collectionCategoryProviderWithLensCollectionProvider:responseParser:batchUpdateHandler:queryFactory:studySettings:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1066f38d4

@end
