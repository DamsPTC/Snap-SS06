// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerSectionViewModel
// Superclass: NSObject
// Address: 0x112af0298

@interface SCLensExplorerSectionViewModel

// Property: sectionConfiguration; attributes: T@"SCLensExplorerSectionConfiguration",R,N
// Property: sectionLayoutConfiguration; attributes: T@"SCLensExplorerSectionLayoutConfiguration",R,N
// Property: identifierToCellClassMap; attributes: T@"NSDictionary",R,N
// Property: supplementaryModels; attributes: T@"NSArray",R,N
// Property: contentCount; attributes: TQ,R,N
// Property: isEmptyObservable; attributes: T@"SCObservable",R,N,V_isEmptySubject
// Property: hasMoreItems; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: diffIdentifier; attributes: T@"NSString",R,N

// -[SCLensExplorerSectionViewModel initWithMediator:dataStore:lensExplorerImagesDataStore:sectionHeaderProvider:actionHandler:creatorsBlocklist:viewModelConfiguration:sectionConfiguration:sectionLayoutConfiguration:lensPerformerProvider:avatarProvider:avatarImageDownloading:dynamicLayoutFetcher:dynamicLayoutBuilder:lazyDailyGameBadgeProvider:selectionTracker:performer:styleOverride:studySettings:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144Q152@160
// Implementation: 0x1066dd660

// -[SCLensExplorerSectionViewModel warmup]
// Type encoding: v16@0:8
// Implementation: 0x1066ddbb0

// -[SCLensExplorerSectionViewModel cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066ddbb4

// -[SCLensExplorerSectionViewModel sectionConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1066ddbbc

// -[SCLensExplorerSectionViewModel sectionLayoutConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1066ddbe4

// -[SCLensExplorerSectionViewModel identifierToCellClassMap]
// Type encoding: @16@0:8
// Implementation: 0x1066ddc0c

// -[SCLensExplorerSectionViewModel supplementaryModels]
// Type encoding: @16@0:8
// Implementation: 0x1066ddd50

// -[SCLensExplorerSectionViewModel contentCount]
// Type encoding: Q16@0:8
// Implementation: 0x1066dde60

// -[SCLensExplorerSectionViewModel reuseIdentifierForIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1066dde68

// -[SCLensExplorerSectionViewModel sizeForIndex:]
// Type encoding: {CGSize=dd}24@0:8Q16
// Implementation: 0x1066de118

// -[SCLensExplorerSectionViewModel prefetchItemsForIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066de3b0

// -[SCLensExplorerSectionViewModel cancelPrefetchingForItemsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066de5d8

// -[SCLensExplorerSectionViewModel configureCell:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1066de800

// -[SCLensExplorerSectionViewModel willAppearCell:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1066def10

// -[SCLensExplorerSectionViewModel didDisappearCell:index:clearMedia:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1066def14

// -[SCLensExplorerSectionViewModel configureSupplementaryView:kind:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066df1f0

// -[SCLensExplorerSectionViewModel hasMoreItems]
// Type encoding: B16@0:8
// Implementation: 0x1066df1f8

// -[SCLensExplorerSectionViewModel indexOfItemWithIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x1066df238

// -[SCLensExplorerSectionViewModel lensExplorer_renderedLensViewModelsSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x1066df310

// -[SCLensExplorerSectionViewModel lensExplorer_activateLensViewModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066df598

// -[SCLensExplorerSectionViewModel diffIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1066df62c

// -[SCLensExplorerSectionViewModel _subscribeOnDataStoreItems]
// Type encoding: v16@0:8
// Implementation: 0x1066df634

// -[SCLensExplorerSectionViewModel _handleDataStoreUpdatesWithItems:availableLayoutAttributes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066df868

// -[SCLensExplorerSectionViewModel _filterBlocklistedFeedItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066df9dc

// -[SCLensExplorerSectionViewModel _updateViewModelsWithItems:existingViewModels:availableLayoutAttributes:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066dfeb0

// -[SCLensExplorerSectionViewModel _correctedItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066e0668

// -[SCLensExplorerSectionViewModel isEmptyObservable]
// Type encoding: @16@0:8
// Implementation: 0x1066e0748

// -[SCLensExplorerSectionViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066e0750

@end
