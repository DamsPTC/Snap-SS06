// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceShowcaseDataCoordinator
// Superclass: NSObject
// Address: 0x112b36fb8

@interface SCCommerceShowcaseDataCoordinator

// Property: items; attributes: T@"NSArray",R,V_items
// Property: pageSize; attributes: TQ,R,V_pageSize
// Property: queryContext; attributes: T@"SCCommerceProductSetQuery",R,V_queryContext
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceShowcaseDataCoordinator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6023c

// -[SCCommerceShowcaseDataCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d60244

// -[SCCommerceShowcaseDataCoordinator initWithLegacyShowcaseFetcher:configProvider:productSetId:adId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106d6024c

// -[SCCommerceShowcaseDataCoordinator initWithShowcaseFetcher:configProvider:queryContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106d60350

// -[SCCommerceShowcaseDataCoordinator initWithShowcaseFetcher:configProvider:queryContext:filter:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106d60358

// -[SCCommerceShowcaseDataCoordinator loadNext]
// Type encoding: v16@0:8
// Implementation: 0x106d6045c

// -[SCCommerceShowcaseDataCoordinator canLoadMorePages]
// Type encoding: B16@0:8
// Implementation: 0x106d60530

// -[SCCommerceShowcaseDataCoordinator topItemIds]
// Type encoding: @16@0:8
// Implementation: 0x106d60550

// -[SCCommerceShowcaseDataCoordinator reloadProductFavoriteState]
// Type encoding: v16@0:8
// Implementation: 0x106d60578

// -[SCCommerceShowcaseDataCoordinator _commonInit]
// Type encoding: v16@0:8
// Implementation: 0x106d605e0

// -[SCCommerceShowcaseDataCoordinator _loadNextItems]
// Type encoding: v16@0:8
// Implementation: 0x106d60694

// -[SCCommerceShowcaseDataCoordinator _resolveGetProductSetRequest:cursor:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d60998

// -[SCCommerceShowcaseDataCoordinator _updateItemsWithProducts:cursor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d60b40

// -[SCCommerceShowcaseDataCoordinator _didFailToLoadItemsWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d60d28

// -[SCCommerceShowcaseDataCoordinator items]
// Type encoding: @16@0:8
// Implementation: 0x106d60d88

// -[SCCommerceShowcaseDataCoordinator pageSize]
// Type encoding: Q16@0:8
// Implementation: 0x106d60d94

// -[SCCommerceShowcaseDataCoordinator queryContext]
// Type encoding: @16@0:8
// Implementation: 0x106d60d9c

// -[SCCommerceShowcaseDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d60da8

// +[SCCommerceShowcaseDataCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106d60230

@end
