// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceFavoritesDataCoordinator
// Superclass: NSObject
// Address: 0x112b36f68

@interface SCCommerceFavoritesDataCoordinator

// Property: showcaseFetcher; attributes: T@"<SCCommerceShowcaseFetching>",&,N,V_showcaseFetcher
// Property: favoritesCoordinator; attributes: T@"<SCCommerceFavoritesCoordinating>",&,N,V_favoritesCoordinator
// Property: eventAnnouncer; attributes: T@"SCEventListenerAnnouncer",&,N,V_eventAnnouncer
// Property: serialQueue; attributes: T@"SCQueuePerformer",&,N,V_serialQueue
// Property: favoritePages; attributes: T@"NSArray",&,V_favoritePages
// Property: currentPage; attributes: TQ,V_currentPage
// Property: isLoading; attributes: TB,V_isLoading
// Property: items; attributes: T@"NSArray",R,V_items
// Property: pageSize; attributes: TQ,R,V_pageSize
// Property: queryContext; attributes: T@"SCCommerceProductSetQuery",R,V_queryContext
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceFavoritesDataCoordinator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5f62c

// -[SCCommerceFavoritesDataCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5f634

// -[SCCommerceFavoritesDataCoordinator initWithShowcaseFetcher:favoritesCoordinator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d5f63c

// -[SCCommerceFavoritesDataCoordinator checkIsInSync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106d5f77c

// -[SCCommerceFavoritesDataCoordinator loadNext]
// Type encoding: v16@0:8
// Implementation: 0x106d5f8ec

// -[SCCommerceFavoritesDataCoordinator canLoadMorePages]
// Type encoding: B16@0:8
// Implementation: 0x106d5f9c0

// -[SCCommerceFavoritesDataCoordinator topItemIds]
// Type encoding: @16@0:8
// Implementation: 0x106d5fa10

// -[SCCommerceFavoritesDataCoordinator _prepareCoordinator]
// Type encoding: v16@0:8
// Implementation: 0x106d5fa2c

// -[SCCommerceFavoritesDataCoordinator _handleFavoritesFetchedWithItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5fb54

// -[SCCommerceFavoritesDataCoordinator _loadNextPage]
// Type encoding: v16@0:8
// Implementation: 0x106d5fc08

// -[SCCommerceFavoritesDataCoordinator _handleProductsFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5fe58

// -[SCCommerceFavoritesDataCoordinator _handleError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5ff7c

// -[SCCommerceFavoritesDataCoordinator _compareFavoritesItems:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d5ffd8

// -[SCCommerceFavoritesDataCoordinator items]
// Type encoding: @16@0:8
// Implementation: 0x106d6008c

// -[SCCommerceFavoritesDataCoordinator pageSize]
// Type encoding: Q16@0:8
// Implementation: 0x106d60098

// -[SCCommerceFavoritesDataCoordinator queryContext]
// Type encoding: @16@0:8
// Implementation: 0x106d600a0

// -[SCCommerceFavoritesDataCoordinator showcaseFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106d600ac

// -[SCCommerceFavoritesDataCoordinator setShowcaseFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d600b4

// -[SCCommerceFavoritesDataCoordinator favoritesCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x106d600e4

// -[SCCommerceFavoritesDataCoordinator setFavoritesCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d600ec

// -[SCCommerceFavoritesDataCoordinator eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x106d6011c

// -[SCCommerceFavoritesDataCoordinator setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d60124

// -[SCCommerceFavoritesDataCoordinator serialQueue]
// Type encoding: @16@0:8
// Implementation: 0x106d60154

// -[SCCommerceFavoritesDataCoordinator setSerialQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6015c

// -[SCCommerceFavoritesDataCoordinator favoritePages]
// Type encoding: @16@0:8
// Implementation: 0x106d6018c

// -[SCCommerceFavoritesDataCoordinator setFavoritePages:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d60198

// -[SCCommerceFavoritesDataCoordinator currentPage]
// Type encoding: Q16@0:8
// Implementation: 0x106d601a0

// -[SCCommerceFavoritesDataCoordinator setCurrentPage:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106d601a8

// -[SCCommerceFavoritesDataCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x106d601b0

// -[SCCommerceFavoritesDataCoordinator setIsLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x106d601bc

// -[SCCommerceFavoritesDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d601c4

// +[SCCommerceFavoritesDataCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106d5f620

@end
