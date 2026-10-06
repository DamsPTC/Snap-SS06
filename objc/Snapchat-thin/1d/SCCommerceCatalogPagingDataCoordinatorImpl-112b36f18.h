// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceCatalogPagingDataCoordinatorImpl
// Superclass: NSObject
// Address: 0x112b36f18

@interface SCCommerceCatalogPagingDataCoordinatorImpl

// Property: storeModel; attributes: T@"SCCommerceStoreDataModel",R,N,V_storeModel
// Property: items; attributes: T@"NSArray",R,V_items
// Property: pageSize; attributes: Tq,R,V_pageSize
// Property: isLoading; attributes: TB,R,V_isLoading
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceCatalogPagingDataCoordinatorImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5e660

// -[SCCommerceCatalogPagingDataCoordinatorImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5e668

// -[SCCommerceCatalogPagingDataCoordinatorImpl initWithStoreFetcher:shouldExposeStoreItem:storeModel:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x106d5e670

// -[SCCommerceCatalogPagingDataCoordinatorImpl loadItemsForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5e7cc

// -[SCCommerceCatalogPagingDataCoordinatorImpl clearQuery]
// Type encoding: v16@0:8
// Implementation: 0x106d5e8f0

// -[SCCommerceCatalogPagingDataCoordinatorImpl updateQueryString:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5e9f4

// -[SCCommerceCatalogPagingDataCoordinatorImpl _loadItemsForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5eb3c

// -[SCCommerceCatalogPagingDataCoordinatorImpl _cachedItemsForPage:queryString:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x106d5ebd0

// -[SCCommerceCatalogPagingDataCoordinatorImpl _loadCachedItems:forPage:queryString:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x106d5ec28

// -[SCCommerceCatalogPagingDataCoordinatorImpl _updateCachedItems:page:queryString:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x106d5ec6c

// -[SCCommerceCatalogPagingDataCoordinatorImpl _fetchItemsForPageHelper:error:page:queryString:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x106d5ed90

// -[SCCommerceCatalogPagingDataCoordinatorImpl _fetchItemsForPage:queryString:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106d5efc8

// -[SCCommerceCatalogPagingDataCoordinatorImpl _updateItemsWithProducts:queryString:page:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106d5f184

// -[SCCommerceCatalogPagingDataCoordinatorImpl _isNotLoading]
// Type encoding: v16@0:8
// Implementation: 0x106d5f290

// -[SCCommerceCatalogPagingDataCoordinatorImpl _announceItemLoadingDidBeginForPage:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106d5f370

// -[SCCommerceCatalogPagingDataCoordinatorImpl _announceItemLoadingDidSucceedForPage:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106d5f474

// -[SCCommerceCatalogPagingDataCoordinatorImpl _announceItemLoadingFailed]
// Type encoding: v16@0:8
// Implementation: 0x106d5f534

// -[SCCommerceCatalogPagingDataCoordinatorImpl items]
// Type encoding: @16@0:8
// Implementation: 0x106d5f590

// -[SCCommerceCatalogPagingDataCoordinatorImpl pageSize]
// Type encoding: q16@0:8
// Implementation: 0x106d5f59c

// -[SCCommerceCatalogPagingDataCoordinatorImpl isLoading]
// Type encoding: B16@0:8
// Implementation: 0x106d5f5a4

// -[SCCommerceCatalogPagingDataCoordinatorImpl storeModel]
// Type encoding: @16@0:8
// Implementation: 0x106d5f5b0

// -[SCCommerceCatalogPagingDataCoordinatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d5f5b8

// +[SCCommerceCatalogPagingDataCoordinatorImpl announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106d5e654

@end
