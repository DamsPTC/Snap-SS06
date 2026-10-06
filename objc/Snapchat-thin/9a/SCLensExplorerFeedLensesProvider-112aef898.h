// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerFeedLensesProvider
// Superclass: NSObject
// Address: 0x112aef898

@interface SCLensExplorerFeedLensesProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerFeedLensesProvider initWithCategoriesProviderFactory:queryFactory:queryCoordinatorFactory:feedResponseObservable:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066c9420

// -[SCLensExplorerFeedLensesProvider _subscribeOnFeedResponseObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066c9580

// -[SCLensExplorerFeedLensesProvider _handleFeeds:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066c96ec

// -[SCLensExplorerFeedLensesProvider lensesForFeedId:queryType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066c9a58

// -[SCLensExplorerFeedLensesProvider _feedLensesObservableKeyWithFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c9b3c

// -[SCLensExplorerFeedLensesProvider _requestFeedWithFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c9b70

// -[SCLensExplorerFeedLensesProvider _requestCategoriesBatch]
// Type encoding: @16@0:8
// Implementation: 0x1066c9ba0

// -[SCLensExplorerFeedLensesProvider _requestCategoryWithFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066c9e60

// -[SCLensExplorerFeedLensesProvider _prepareLensQueryCoordinatorWithFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066ca10c

// -[SCLensExplorerFeedLensesProvider _fetchLensesQueryForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066ca214

// -[SCLensExplorerFeedLensesProvider _feedObservableForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066ca2ac

// -[SCLensExplorerFeedLensesProvider _addFeedObservable:forFeedId:queryType:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066ca344

// -[SCLensExplorerFeedLensesProvider _removeFeedObservableForId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ca40c

// -[SCLensExplorerFeedLensesProvider _cancelTokenForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066ca49c

// -[SCLensExplorerFeedLensesProvider _lensesFromFeed:withId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066ca634

// -[SCLensExplorerFeedLensesProvider _lensesFromContainer:itemsLimit:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1066caa58

// -[SCLensExplorerFeedLensesProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066cabf8

@end
