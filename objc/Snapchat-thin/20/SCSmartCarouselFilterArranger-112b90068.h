// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSmartCarouselFilterArranger
// Superclass: NSObject
// Address: 0x112b90068

@interface SCSmartCarouselFilterArranger

// Property: delegate; attributes: T@"<SCSmartCarouselFilterArrangerDelegate>",W,N,V_delegate
// Property: swipeStateDataSource; attributes: T@"<SCSmartCarouselFilterArrangerSwipeStateDataSource>",W,N,V_swipeStateDataSource
// Property: loggingParameters; attributes: T@"SCFilterCarouselLoggingParameters",C,N,V_loggingParameters
// Property: filterVisualNamesProvider; attributes: T@"<SCPreviewFilterVisualNamesProvider>",&,N,V_filterVisualNamesProvider
// Property: stackingManager; attributes: T@"SCSmartCarouselStackingManager",R,N,V_stackingManager
// Property: shouldIgnoreUCOFilter; attributes: TB,N,V_shouldIgnoreUCOFilter
// Property: toolFilterConfigs; attributes: T@"NSArray",R,N
// Property: toolFilterNames; attributes: T@"NSArray",R,N
// Property: toolLensesMap; attributes: T@"NSDictionary",R,N
// Property: orderDidCompleteObservable; attributes: T@"SCObservable",R,N
// Property: orderBatchUpdateRunningObservable; attributes: T@"SCObservable",R,N
// Property: loadCompleteObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSmartCarouselFilterArranger initWithFilterNamesProvider:fromGallery:carouselGroupConfigParser:shouldRemoveUcoStackingLimitation:UCOFilterUIMaxZIndexEnabled:sharedLensServices:previewABProvider:]
// Type encoding: @60@0:8@16B24@28B36B40@44@52
// Implementation: 0x107f88410

// -[SCSmartCarouselFilterArranger lensModeProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f88660

// -[SCSmartCarouselFilterArranger setFilterInfoList:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f886a8

// -[SCSmartCarouselFilterArranger filterValueForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f88838

// -[SCSmartCarouselFilterArranger filterValueForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f8888c

// -[SCSmartCarouselFilterArranger setFilterVisualNamesProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8897c

// -[SCSmartCarouselFilterArranger stackFilterItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f889ec

// -[SCSmartCarouselFilterArranger unstackFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f88a4c

// -[SCSmartCarouselFilterArranger stackedFilterWithRemoveableEffectFilter]
// Type encoding: @16@0:8
// Implementation: 0x107f88aac

// -[SCSmartCarouselFilterArranger hasManuallyStackedFilterWithMediaCommands]
// Type encoding: B16@0:8
// Implementation: 0x107f88bc8

// -[SCSmartCarouselFilterArranger isPreviewFilterStackedWithName:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f88d20

// -[SCSmartCarouselFilterArranger _reloadFromSwipeOrder]
// Type encoding: v16@0:8
// Implementation: 0x107f88e70

// -[SCSmartCarouselFilterArranger _canStackItemWithSkyFilter:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f892c0

// -[SCSmartCarouselFilterArranger _shouldDisableItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f892e4

// -[SCSmartCarouselFilterArranger recoverToInitialState]
// Type encoding: v16@0:8
// Implementation: 0x107f89444

// -[SCSmartCarouselFilterArranger filterItemAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f894a4

// -[SCSmartCarouselFilterArranger totalFilterCount]
// Type encoding: q16@0:8
// Implementation: 0x107f894ac

// -[SCSmartCarouselFilterArranger currentIndexOfFilterItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107f894b4

// -[SCSmartCarouselFilterArranger currentIndexOfFilterName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107f894bc

// -[SCSmartCarouselFilterArranger filterItemForName:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f89570

// -[SCSmartCarouselFilterArranger currentFilterCount]
// Type encoding: q16@0:8
// Implementation: 0x107f895b8

// -[SCSmartCarouselFilterArranger commandConfigurationsForCurrentFiltersWithMediaCommands]
// Type encoding: @16@0:8
// Implementation: 0x107f895c0

// -[SCSmartCarouselFilterArranger commandConfigurationsForStackedFiltersWithMediaCommands]
// Type encoding: @16@0:8
// Implementation: 0x107f89a34

// -[SCSmartCarouselFilterArranger visualFilterNames]
// Type encoding: @16@0:8
// Implementation: 0x107f89e40

// -[SCSmartCarouselFilterArranger configForFilterName:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f89e48

// -[SCSmartCarouselFilterArranger autoStackedItemForFilterName:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f89e50

// -[SCSmartCarouselFilterArranger removeFilterWithName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f89ee4

// -[SCSmartCarouselFilterArranger removeFilterName:filterType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107f89f10

// -[SCSmartCarouselFilterArranger _removeFilerAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107f89f60

// -[SCSmartCarouselFilterArranger clearAllFilters]
// Type encoding: v16@0:8
// Implementation: 0x107f89fc8

// -[SCSmartCarouselFilterArranger addOrUpdateFilterName:config:type:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107f8a020

// -[SCSmartCarouselFilterArranger _createFilterWithName:config:type:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107f8a1a0

// -[SCSmartCarouselFilterArranger _addOrUpdateFilter:config:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f8a420

// -[SCSmartCarouselFilterArranger _currentItemsInsertionBlockForFilter:]
// Type encoding: @?24@0:8@16
// Implementation: 0x107f8a59c

// -[SCSmartCarouselFilterArranger loadComplete]
// Type encoding: v16@0:8
// Implementation: 0x107f8aaa0

// -[SCSmartCarouselFilterArranger performOrderBatchUpdate:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f8aadc

// -[SCSmartCarouselFilterArranger _insertCurrentFilter:usingAllFiltersInsertionIndex:withSkipBlock:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x107f8ab68

// -[SCSmartCarouselFilterArranger _isItemStacked:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f8ac80

// -[SCSmartCarouselFilterArranger _canAddFilter:config:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107f8ada8

// -[SCSmartCarouselFilterArranger _insertCurrentItem:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107f8b054

// -[SCSmartCarouselFilterArranger _replaceCurrentFilter:with:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f8b1b4

// -[SCSmartCarouselFilterArranger _removeCurrentFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8b32c

// -[SCSmartCarouselFilterArranger _removeCurrentFilter:reloadOrder:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107f8b334

// -[SCSmartCarouselFilterArranger containsFilterName:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f8b434

// -[SCSmartCarouselFilterArranger containsAnyFilterName:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f8b458

// -[SCSmartCarouselFilterArranger logIndexFromFilterName:]
// Type encoding: q24@0:8@16
// Implementation: 0x107f8b574

// -[SCSmartCarouselFilterArranger logFilterItemAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f8b57c

// -[SCSmartCarouselFilterArranger canStackMoreFilters]
// Type encoding: B16@0:8
// Implementation: 0x107f8b584

// -[SCSmartCarouselFilterArranger carouselSource]
// Type encoding: q16@0:8
// Implementation: 0x107f8b5a4

// -[SCSmartCarouselFilterArranger allFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f8b5e4

// -[SCSmartCarouselFilterArranger currentFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f8b5ec

// -[SCSmartCarouselFilterArranger addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8b614

// -[SCSmartCarouselFilterArranger removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8b61c

// -[SCSmartCarouselFilterArranger orderDidCompleteObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f8b624

// -[SCSmartCarouselFilterArranger loadCompleteObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f8b64c

// -[SCSmartCarouselFilterArranger orderBatchUpdateRunningObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f8b674

// -[SCSmartCarouselFilterArranger toolFilterConfigs]
// Type encoding: @16@0:8
// Implementation: 0x107f8b69c

// -[SCSmartCarouselFilterArranger toolFilterNames]
// Type encoding: @16@0:8
// Implementation: 0x107f8b728

// -[SCSmartCarouselFilterArranger applyToolFilterName:config:lensSource:lensType:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x107f8b778

// -[SCSmartCarouselFilterArranger unapplyToolFilterName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8b96c

// -[SCSmartCarouselFilterArranger toolLensesMap]
// Type encoding: @16@0:8
// Implementation: 0x107f8ba9c

// -[SCSmartCarouselFilterArranger delegate]
// Type encoding: @16@0:8
// Implementation: 0x107f8bac4

// -[SCSmartCarouselFilterArranger setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8badc

// -[SCSmartCarouselFilterArranger swipeStateDataSource]
// Type encoding: @16@0:8
// Implementation: 0x107f8bae8

// -[SCSmartCarouselFilterArranger setSwipeStateDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8bb00

// -[SCSmartCarouselFilterArranger loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x107f8bb0c

// -[SCSmartCarouselFilterArranger setLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8bb14

// -[SCSmartCarouselFilterArranger filterVisualNamesProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f8bb1c

// -[SCSmartCarouselFilterArranger stackingManager]
// Type encoding: @16@0:8
// Implementation: 0x107f8bb24

// -[SCSmartCarouselFilterArranger shouldIgnoreUCOFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f8bb2c

// -[SCSmartCarouselFilterArranger setShouldIgnoreUCOFilter:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f8bb34

// -[SCSmartCarouselFilterArranger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f8bb3c

@end
