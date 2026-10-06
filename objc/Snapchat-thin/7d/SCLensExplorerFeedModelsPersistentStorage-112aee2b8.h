// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerFeedModelsPersistentStorage
// Superclass: NSObject
// Address: 0x112aee2b8

@interface SCLensExplorerFeedModelsPersistentStorage


// -[SCLensExplorerFeedModelsPersistentStorage initWithDocObjectContext:leContext:fetchingPerformer:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1007b47c4

// -[SCLensExplorerFeedModelsPersistentStorage feedModelsBatchWithSelectedFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066963f8

// -[SCLensExplorerFeedModelsPersistentStorage feedModelsForFeedIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696594

// -[SCLensExplorerFeedModelsPersistentStorage feedModelsForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696730

// -[SCLensExplorerFeedModelsPersistentStorage updateFeedModels:isBatchResponse:completionHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1066968cc

// -[SCLensExplorerFeedModelsPersistentStorage _cacheFeedModelWithIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696a28

// -[SCLensExplorerFeedModelsPersistentStorage _cacheFeedModelsWithIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696a34

// -[SCLensExplorerFeedModelsPersistentStorage _getCachedFeedModelsBatchWithPreselectedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696a40

// -[SCLensExplorerFeedModelsPersistentStorage _getFeedModelsBatchWithSelectedFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696a4c

// -[SCLensExplorerFeedModelsPersistentStorage _getFeedModelsForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696bcc

// -[SCLensExplorerFeedModelsPersistentStorage _getFeedModelsForFeedIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696bd0

// -[SCLensExplorerFeedModelsPersistentStorage _getSubFeedModelsForMainFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x106696c30

// -[SCLensExplorerFeedModelsPersistentStorage _prefetchSectionIdsFromCacheFeeds:selectedFeedId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106696d90

// -[SCLensExplorerFeedModelsPersistentStorage _performChangesWithFeedModels:isBatchResponse:transactionContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106697064

// -[SCLensExplorerFeedModelsPersistentStorage _deleteCacheFeedModel:deleteFeedItems:transactionContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106697698

// -[SCLensExplorerFeedModelsPersistentStorage _deleteFeedItemsForCacheFeedModel:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106697730

// -[SCLensExplorerFeedModelsPersistentStorage _feedItemsFromCacheWithSectionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066978b0

// -[SCLensExplorerFeedModelsPersistentStorage _cachedFeedRemoteState]
// Type encoding: @16@0:8
// Implementation: 0x106697918

// -[SCLensExplorerFeedModelsPersistentStorage _cacheFeedModelFrom:sortIndex:isDefaultFeed:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x106697944

// -[SCLensExplorerFeedModelsPersistentStorage _responseFeedModelFromCacheFeed:fetchingFeedItems:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106697954

// -[SCLensExplorerFeedModelsPersistentStorage _subcategoriesForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x106697a24

// -[SCLensExplorerFeedModelsPersistentStorage _subcategoriesForCacheFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x106697ba4

// -[SCLensExplorerFeedModelsPersistentStorage _containerSubfeedIdsFromFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x106697d20

// -[SCLensExplorerFeedModelsPersistentStorage _feedsWithContainerSubfeedsFromFeeds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106697f1c

// -[SCLensExplorerFeedModelsPersistentStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106698078

@end
