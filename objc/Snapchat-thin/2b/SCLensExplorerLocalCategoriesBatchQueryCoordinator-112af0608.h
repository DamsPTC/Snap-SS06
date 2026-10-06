// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerLocalCategoriesBatchQueryCoordinator
// Superclass: NSObject
// Address: 0x112af0608

@interface SCLensExplorerLocalCategoriesBatchQueryCoordinator

// Property: categoriesResponse; attributes: T@"SCObservable",R,N
// Property: categoriesAggregator; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator initWithBaseCategoriesProvider:batchUpdateHandler:feedModelPersisting:categoriesAggregatorMapper:queryFactory:performer:configuration:prefetchPreselectedFeedEnabled:]
// Type encoding: @76@0:8@16@24@32@40@48@56@64B72
// Implementation: 0x1066e5314

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator categoriesResponse]
// Type encoding: @16@0:8
// Implementation: 0x1066e54c0

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator categoriesAggregator]
// Type encoding: @16@0:8
// Implementation: 0x1066e5a98

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _localFeedsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1066e5b60

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _mapCacheToBatchResponseObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066e5c28

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _handleCacheFeedModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066e5e30

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _categoriesQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066e5edc

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _isValidFetchResult:allowInProgressState:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1066e5f5c

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator _isValidAggregator:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066e610c

// -[SCLensExplorerLocalCategoriesBatchQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066e6284

// +[SCLensExplorerLocalCategoriesBatchQueryCoordinator _emptyResultError]
// Type encoding: @16@0:8
// Implementation: 0x1066e61a4

@end
