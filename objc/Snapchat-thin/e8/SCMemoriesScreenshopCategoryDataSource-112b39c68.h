// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesScreenshopCategoryDataSource
// Superclass: NSObject
// Address: 0x112b39c68

@interface SCMemoriesScreenshopCategoryDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesScreenshopCategoryDataSource initWithDelegate:performer:screenshopPersistenceService:screenshopNetworkService:categoryStore:assetIdToAsset:badgeObservable:skipOnDeviceScanEnabled:]
// Type encoding: @76@0:8@16@24@32@40@48@56@64B72
// Implementation: 0x106db5c18

// -[SCMemoriesScreenshopCategoryDataSource startCategoryExtractionProcess]
// Type encoding: v16@0:8
// Implementation: 0x106db5e58

// -[SCMemoriesScreenshopCategoryDataSource updateDataSourceWithMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106db5e64

// -[SCMemoriesScreenshopCategoryDataSource setDataSourceProcessingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106db5ec4

// -[SCMemoriesScreenshopCategoryDataSource _observeAppStateChanges]
// Type encoding: v16@0:8
// Implementation: 0x106db5ed8

// -[SCMemoriesScreenshopCategoryDataSource _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106db5f74

// -[SCMemoriesScreenshopCategoryDataSource _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106db5fdc

// -[SCMemoriesScreenshopCategoryDataSource _buildInitialState]
// Type encoding: v16@0:8
// Implementation: 0x106db6044

// -[SCMemoriesScreenshopCategoryDataSource _populateCategories:withIdentifier:forMap:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106db63c4

// -[SCMemoriesScreenshopCategoryDataSource _createFilledCategoryForMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106db6594

// -[SCMemoriesScreenshopCategoryDataSource _createCategoriesForComposer]
// Type encoding: v16@0:8
// Implementation: 0x106db6960

// -[SCMemoriesScreenshopCategoryDataSource getSessionTotalItemCount]
// Type encoding: Q16@0:8
// Implementation: 0x106db6ab0

// -[SCMemoriesScreenshopCategoryDataSource _createRecentsCategory]
// Type encoding: @16@0:8
// Implementation: 0x106db6ab8

// -[SCMemoriesScreenshopCategoryDataSource _createCategoryWithLeftOverItems]
// Type encoding: @16@0:8
// Implementation: 0x106db6cc4

// -[SCMemoriesScreenshopCategoryDataSource _dedupeCoverItemsForFilledCategories]
// Type encoding: v16@0:8
// Implementation: 0x106db7068

// -[SCMemoriesScreenshopCategoryDataSource _getCoverItemIdentifierWithCoverItemsSet:category:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106db72b0

// -[SCMemoriesScreenshopCategoryDataSource _createComposerItemsFromIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106db74a8

// -[SCMemoriesScreenshopCategoryDataSource didGetCategoryDataForItem:shoppable:withCategories:withColors:withPatterns:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106db761c

// -[SCMemoriesScreenshopCategoryDataSource getOrderedUncategorizedItems]
// Type encoding: @16@0:8
// Implementation: 0x106db779c

// -[SCMemoriesScreenshopCategoryDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106db7cd0

@end
