// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerCategoryPageProvider
// Superclass: NSObject
// Address: 0x112af17d8

@interface SCLensExplorerCategoryPageProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerCategoryPageProvider initWithLensExplorerFactory:uiConfiguration:autoSelectionBehavior:performerProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106701280

// -[SCLensExplorerCategoryPageProvider pageForCategoryId:categoryObservable:isFullPage:isLensCollectionCategoryPage:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x1067013b4

// -[SCLensExplorerCategoryPageProvider _mediatorWithCategoryId:loggingColleague:networkMonitoringColleague:itemsTrackingColleague:manualItemsTracking:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x106701760

// -[SCLensExplorerCategoryPageProvider _setupMediator:withFetchingColleague:viewModelColleague:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1067018bc

// -[SCLensExplorerCategoryPageProvider _categorySectionsProviderWithFactory:isFullPage:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10670191c

// -[SCLensExplorerCategoryPageProvider _dynamicSectionProviderColleagueWithMediator:factory:sectionConfigurations:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106701a50

// -[SCLensExplorerCategoryPageProvider _dynamicCategoryFetchingColleagueWithCategoryId:mediator:factory:sectionConfigurations:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106701b40

// -[SCLensExplorerCategoryPageProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106701c5c

@end
