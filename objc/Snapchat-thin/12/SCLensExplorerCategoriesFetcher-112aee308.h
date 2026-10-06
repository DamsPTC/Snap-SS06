// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerCategoriesFetcher
// Superclass: NSObject
// Address: 0x112aee308

@interface SCLensExplorerCategoriesFetcher

// Property: categoriesActionHandler; attributes: T@"<SCLensExplorerCategoriesAggregator>",&,N,V_categoriesActionHandler
// Property: categoriesObservable; attributes: T@"SCObservable",R,N,V_categoriesSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerCategoriesFetcher initWithLensExplorerFactory:categoriesProviderFactory:categoriesBatchRefresher:preselectedFeedId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10669de84

// -[SCLensExplorerCategoriesFetcher initWithLensExplorerFactory:categoriesProviderFactory:categoriesBatchRefresher:preselectedFeedId:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10669df58

// -[SCLensExplorerCategoriesFetcher setCategoriesActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10669e100

// -[SCLensExplorerCategoriesFetcher requestCategoriesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10669e158

// -[SCLensExplorerCategoriesFetcher refreshSectionsWithIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10669e424

// -[SCLensExplorerCategoriesFetcher _batchConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10669e42c

// -[SCLensExplorerCategoriesFetcher _handleBatchResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10669e440

// -[SCLensExplorerCategoriesFetcher categoriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x10669e4e0

// -[SCLensExplorerCategoriesFetcher categoriesActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x10669e4e8

// -[SCLensExplorerCategoriesFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10669e4f0

@end
