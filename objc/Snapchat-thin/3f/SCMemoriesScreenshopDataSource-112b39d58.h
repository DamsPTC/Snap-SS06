// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesScreenshopDataSource
// Superclass: NSObject
// Address: 0x112b39d58

@interface SCMemoriesScreenshopDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: shoppableScreenshotCount; attributes: TQ,N,V_shoppableScreenshotCount
// Property: isLogLatencyNecessary; attributes: TB,N,V_isLogLatencyNecessary
// Property: firstShoppableProcessedDate; attributes: T@"NSDate",&,N,V_firstShoppableProcessedDate
// Property: screenshopCatetoryStore; attributes: T@"<SCCScreenshopCategoryStore>",R,N,V_screenshopCategoryStore
// Property: screenshotsProvider; attributes: T@"<SCCMemoriesCameraRollProvider>",&,N,V_gridPaginatorForAllScreenshotsSection
// Property: shoppableScreenshotsProvider; attributes: T@"<SCCMemoriesCameraRollProvider>",&,N,V_gridPaginatorForScreenshopSection

// -[SCMemoriesScreenshopDataSource initWithScreenshopPersistenceService:screenshopModelService:photoPermissionServices:featureSettingsService:userTrackedLogger:myBitmojiAvatarIdProvider:configProvider:screenshopNetworkService:queuePerformer:fetchLimit:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x106dbc4ac

// -[SCMemoriesScreenshopDataSource initWithScreenshopPersistenceService:screenshopModelService:photoPermissionServices:featureSettingsService:userTrackedLogger:myBitmojiAvatarIdProvider:configProvider:screenshopNetworkService:fetchLimit:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x106db8f4c

// -[SCMemoriesScreenshopDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106db93bc

// -[SCMemoriesScreenshopDataSource allScreenshotsAssets]
// Type encoding: @16@0:8
// Implementation: 0x106db9424

// -[SCMemoriesScreenshopDataSource setDataSourceProcessingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106db9508

// -[SCMemoriesScreenshopDataSource screenshopCategoryGridViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106db961c

// -[SCMemoriesScreenshopDataSource setScreenshopCategoryGrid:]
// Type encoding: v24@0:8@16
// Implementation: 0x106db9644

// -[SCMemoriesScreenshopDataSource handleShoppingPermissionGranted]
// Type encoding: v16@0:8
// Implementation: 0x106db9650

// -[SCMemoriesScreenshopDataSource handleAdsPermissionGranted]
// Type encoding: v16@0:8
// Implementation: 0x106db986c

// -[SCMemoriesScreenshopDataSource initializeDataSource]
// Type encoding: v16@0:8
// Implementation: 0x106db999c

// -[SCMemoriesScreenshopDataSource shoppableScreenshotItems]
// Type encoding: @16@0:8
// Implementation: 0x106db9bb8

// -[SCMemoriesScreenshopDataSource shoppableScreenshotItemIds]
// Type encoding: @16@0:8
// Implementation: 0x106db9de4

// -[SCMemoriesScreenshopDataSource shoppableScreenshotItemsForCategory:]
// Type encoding: @24@0:8@16
// Implementation: 0x106db9eb0

// -[SCMemoriesScreenshopDataSource shoppableScreenshotItemIdsForCategory:]
// Type encoding: @24@0:8@16
// Implementation: 0x106db9eb8

// -[SCMemoriesScreenshopDataSource getCategoriesForLogging]
// Type encoding: @16@0:8
// Implementation: 0x106db9ec0

// -[SCMemoriesScreenshopDataSource getDownloadModelLatency]
// Type encoding: @16@0:8
// Implementation: 0x106db9ec8

// -[SCMemoriesScreenshopDataSource getDownloadModelStatus]
// Type encoding: Q16@0:8
// Implementation: 0x106db9f10

// -[SCMemoriesScreenshopDataSource getUnprocessedScreenshotsCountInSession]
// Type encoding: Q16@0:8
// Implementation: 0x106db9f50

// -[SCMemoriesScreenshopDataSource getProcessedScreenshotsCountInSession]
// Type encoding: Q16@0:8
// Implementation: 0x106db9f58

// -[SCMemoriesScreenshopDataSource getScannedCountBeforeFirstShoppable]
// Type encoding: Q16@0:8
// Implementation: 0x106db9f74

// -[SCMemoriesScreenshopDataSource getFetchScreenshotsLatency]
// Type encoding: d16@0:8
// Implementation: 0x106db9f7c

// -[SCMemoriesScreenshopDataSource getTotalScreenshotsCount]
// Type encoding: Q16@0:8
// Implementation: 0x106db9f88

// -[SCMemoriesScreenshopDataSource getScanStartedDate]
// Type encoding: @16@0:8
// Implementation: 0x106db9f90

// -[SCMemoriesScreenshopDataSource getScanFinishedDate]
// Type encoding: @16@0:8
// Implementation: 0x106db9f98

// -[SCMemoriesScreenshopDataSource getBadgeObervable]
// Type encoding: @16@0:8
// Implementation: 0x106db9fa0

// -[SCMemoriesScreenshopDataSource getShoppableScreenshotsAssetObervable]
// Type encoding: @16@0:8
// Implementation: 0x106db9fc8

// -[SCMemoriesScreenshopDataSource _observeAppStateChanges]
// Type encoding: v16@0:8
// Implementation: 0x106db9ff0

// -[SCMemoriesScreenshopDataSource _buildInitialState]
// Type encoding: v16@0:8
// Implementation: 0x106dba08c

// -[SCMemoriesScreenshopDataSource _notifyScreenshopCategoryStoreWithAllItems:shoppableItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dba894

// -[SCMemoriesScreenshopDataSource _initAndStartScreenshopProcess]
// Type encoding: v16@0:8
// Implementation: 0x106dba9bc

// -[SCMemoriesScreenshopDataSource _initScreenshopProcess]
// Type encoding: v16@0:8
// Implementation: 0x106dbaa30

// -[SCMemoriesScreenshopDataSource _initCategoryDataSourceAndStartCategorizing]
// Type encoding: v16@0:8
// Implementation: 0x106dbaa80

// -[SCMemoriesScreenshopDataSource _initCategoryDataSource]
// Type encoding: v16@0:8
// Implementation: 0x106dbab3c

// -[SCMemoriesScreenshopDataSource _orderedUnprocessedItems]
// Type encoding: @16@0:8
// Implementation: 0x106dbabf0

// -[SCMemoriesScreenshopDataSource _allScreenshotItems]
// Type encoding: @16@0:8
// Implementation: 0x106dbae00

// -[SCMemoriesScreenshopDataSource _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106dbaf0c

// -[SCMemoriesScreenshopDataSource _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106dbb008

// -[SCMemoriesScreenshopDataSource _updateDataSource:deleted:changed:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106dbb104

// -[SCMemoriesScreenshopDataSource _getFasionAssetMap]
// Type encoding: @16@0:8
// Implementation: 0x106dbb640

// -[SCMemoriesScreenshopDataSource _shufflableScreenshotItems]
// Type encoding: @16@0:8
// Implementation: 0x106dbb850

// -[SCMemoriesScreenshopDataSource _getScreenshopItems]
// Type encoding: @16@0:8
// Implementation: 0x106dbbab4

// -[SCMemoriesScreenshopDataSource photoLibraryDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dbbab8

// -[SCMemoriesScreenshopDataSource shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106dbbd28

// -[SCMemoriesScreenshopDataSource pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106dbbd30

// -[SCMemoriesScreenshopDataSource didScanCompleteForItem:containsFashion:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106dbbd3c

// -[SCMemoriesScreenshopDataSource getOrderedUnprocessedItems]
// Type encoding: @16@0:8
// Implementation: 0x106dbbfdc

// -[SCMemoriesScreenshopDataSource didGetShoppableDataForItem:shoppable:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106dbbfe0

// -[SCMemoriesScreenshopDataSource shoppableScreenshotsProvider]
// Type encoding: @16@0:8
// Implementation: 0x106dbc2a0

// -[SCMemoriesScreenshopDataSource setShoppableScreenshotsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dbc2a8

// -[SCMemoriesScreenshopDataSource screenshotsProvider]
// Type encoding: @16@0:8
// Implementation: 0x106dbc2d8

// -[SCMemoriesScreenshopDataSource setScreenshotsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dbc2e0

// -[SCMemoriesScreenshopDataSource shoppableScreenshotCount]
// Type encoding: Q16@0:8
// Implementation: 0x106dbc310

// -[SCMemoriesScreenshopDataSource setShoppableScreenshotCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106dbc318

// -[SCMemoriesScreenshopDataSource isLogLatencyNecessary]
// Type encoding: B16@0:8
// Implementation: 0x106dbc320

// -[SCMemoriesScreenshopDataSource setIsLogLatencyNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x106dbc328

// -[SCMemoriesScreenshopDataSource firstShoppableProcessedDate]
// Type encoding: @16@0:8
// Implementation: 0x106dbc330

// -[SCMemoriesScreenshopDataSource setFirstShoppableProcessedDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dbc338

// -[SCMemoriesScreenshopDataSource screenshopCatetoryStore]
// Type encoding: @16@0:8
// Implementation: 0x106dbc368

// -[SCMemoriesScreenshopDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106dbc370

@end
