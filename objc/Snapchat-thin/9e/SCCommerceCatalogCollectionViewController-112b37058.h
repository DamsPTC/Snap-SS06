// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceCatalogCollectionViewController
// Superclass: UIViewController
// Address: 0x112b37058

@interface SCCommerceCatalogCollectionViewController

// Property: maxRowScrolled; attributes: TQ,R,N,V_maxRowScrolled
// Property: paginationProvider; attributes: T@"<SCCommercePaginationProviding>",&,N,V_paginationProvider
// Property: scrollView; attributes: T@"UIScrollView",R,N,V_scrollView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceCatalogCollectionViewController _itemIndexForIndexPath:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d62850

// -[SCCommerceCatalogCollectionViewController _itemRowForIndexPath:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d628ac

// -[SCCommerceCatalogCollectionViewController _itemColumnForIndexPath:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d629fc

// -[SCCommerceCatalogCollectionViewController initWithImageSourceProvider:imageFetchingService:actionHandler:catalogMetricType:storeCategoryId:showcaseTracker:productImpressionTracker:heroCellViewModel:resultTitle:sourcePage:eventLogger:commerceIconProvider:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80q88@96@104
// Implementation: 0x106d62b4c

// -[SCCommerceCatalogCollectionViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106d62e1c

// -[SCCommerceCatalogCollectionViewController scrollToTop:]
// Type encoding: v20@0:8B16
// Implementation: 0x106d62e90

// -[SCCommerceCatalogCollectionViewController showCalloutBarWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d62ed0

// -[SCCommerceCatalogCollectionViewController setPaginationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d631ac

// -[SCCommerceCatalogCollectionViewController isScrolledToTop]
// Type encoding: B16@0:8
// Implementation: 0x106d63224

// -[SCCommerceCatalogCollectionViewController restartVisibleProductImpressions]
// Type encoding: v16@0:8
// Implementation: 0x106d63270

// -[SCCommerceCatalogCollectionViewController finalizeVisibleProductImpressions]
// Type encoding: v16@0:8
// Implementation: 0x106d63464

// -[SCCommerceCatalogCollectionViewController _calloutBarTapped]
// Type encoding: v16@0:8
// Implementation: 0x106d63694

// -[SCCommerceCatalogCollectionViewController timeUntilFirstProductLoadedSeconds]
// Type encoding: d16@0:8
// Implementation: 0x106d63728

// -[SCCommerceCatalogCollectionViewController _reloadDataJumpingToTop:]
// Type encoding: v20@0:8B16
// Implementation: 0x106d63758

// -[SCCommerceCatalogCollectionViewController _loadNextPageWithActionModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d637a0

// -[SCCommerceCatalogCollectionViewController _reset]
// Type encoding: v16@0:8
// Implementation: 0x106d63820

// -[SCCommerceCatalogCollectionViewController _performReset]
// Type encoding: v16@0:8
// Implementation: 0x106d638d4

// -[SCCommerceCatalogCollectionViewController _setDateReady]
// Type encoding: v16@0:8
// Implementation: 0x106d63930

// -[SCCommerceCatalogCollectionViewController _sendActionForProductCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106d63988

// -[SCCommerceCatalogCollectionViewController _setupCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x106d63a40

// -[SCCommerceCatalogCollectionViewController _showErrorOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d63fe4

// -[SCCommerceCatalogCollectionViewController _hideErrorOverlay]
// Type encoding: v16@0:8
// Implementation: 0x106d64210

// -[SCCommerceCatalogCollectionViewController errorButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d64248

// -[SCCommerceCatalogCollectionViewController favoritesHeartButtonWasTappedForProductId:productImage:currentHeartState:trackingId:]
// Type encoding: v48@0:8Q16@24q32@40
// Implementation: 0x106d642e4

// -[SCCommerceCatalogCollectionViewController loadNextPageIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106d64468

// -[SCCommerceCatalogCollectionViewController _itemIndexShouldLoadNextPage:]
// Type encoding: B24@0:8q16
// Implementation: 0x106d645f0

// -[SCCommerceCatalogCollectionViewController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x106d646b4

// -[SCCommerceCatalogCollectionViewController collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x106d649a8

// -[SCCommerceCatalogCollectionViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x106d64a50

// -[SCCommerceCatalogCollectionViewController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x106d64a54

// -[SCCommerceCatalogCollectionViewController collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x106d64a58

// -[SCCommerceCatalogCollectionViewController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d64b0c

// -[SCCommerceCatalogCollectionViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106d64b14

// -[SCCommerceCatalogCollectionViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d64c54

// -[SCCommerceCatalogCollectionViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106d64ee4

// -[SCCommerceCatalogCollectionViewController collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d64ff0

// -[SCCommerceCatalogCollectionViewController collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d6513c

// -[SCCommerceCatalogCollectionViewController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106d6529c

// -[SCCommerceCatalogCollectionViewController _heroCellForViewModel:indexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d652a0

// -[SCCommerceCatalogCollectionViewController _productCellForViewModel:indexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d65398

// -[SCCommerceCatalogCollectionViewController _storeCellForViewModel:indexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d654d0

// -[SCCommerceCatalogCollectionViewController _paginationLoadingCellForViewModel:indexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d655f4

// -[SCCommerceCatalogCollectionViewController _paginationErrorCellForViewModel:indexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d6567c

// -[SCCommerceCatalogCollectionViewController _isSectionForHero:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d65778

// -[SCCommerceCatalogCollectionViewController _isSectionForProducts:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d65798

// -[SCCommerceCatalogCollectionViewController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d657b8

// -[SCCommerceCatalogCollectionViewController didTapRetryForSCCommerceCatalogPaginationErrorCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d65acc

// -[SCCommerceCatalogCollectionViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d65ad0

// -[SCCommerceCatalogCollectionViewController _handlePageItemsLoadedWithAddedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d66114

// -[SCCommerceCatalogCollectionViewController _handlePageFinalItemsLoadedWithRemovedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d66354

// -[SCCommerceCatalogCollectionViewController _handlePageItemsLoadingUpdatedWithChangedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6658c

// -[SCCommerceCatalogCollectionViewController _updateCellAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d668e0

// -[SCCommerceCatalogCollectionViewController _handlePageItemsLoadingFailedWithChangedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d66abc

// -[SCCommerceCatalogCollectionViewController _updateImpressionTracking]
// Type encoding: v16@0:8
// Implementation: 0x106d66ac0

// -[SCCommerceCatalogCollectionViewController _impressionViewItemForCell:collectionView:indexPath:startTimestamp:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106d66cc4

// -[SCCommerceCatalogCollectionViewController _logButtonTapWithCurrentHeartState:trackingId:productId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x106d66f1c

// -[SCCommerceCatalogCollectionViewController maxRowScrolled]
// Type encoding: Q16@0:8
// Implementation: 0x106d66fbc

// -[SCCommerceCatalogCollectionViewController paginationProvider]
// Type encoding: @16@0:8
// Implementation: 0x106d66fcc

// -[SCCommerceCatalogCollectionViewController scrollView]
// Type encoding: @16@0:8
// Implementation: 0x106d66fdc

// -[SCCommerceCatalogCollectionViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d66fec

@end
