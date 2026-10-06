// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceProductPageViewController
// Superclass: UIViewController
// Address: 0x1129fbce8

@interface SCCommerceProductPageViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N
// Property: headerItem; attributes: T@"SIGHeaderItem",?,R,N,V_headerItem
// Property: footerItem; attributes: T@"SIGFooterItem",?,R,N
// Property: overlayItem; attributes: T@"SCOverlayItem",?,R,N
// Property: productId; attributes: TQ,?,R,N,V_productId
// Property: storeId; attributes: T@"NSString",?,R,N,V_storeId
// Property: exitEvent; attributes: Tq,?,N,V_exitEvent

// -[SCCommerceProductPageViewController initWithHarness:imageSourceProvider:imageFetchingService:eventLogger:commerceTooltips:commerceIconProvider:compositeImageFetcher:heroAssetHelper:fitFinderCellScopeExposer:queryContext:productId:storeId:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88Q96@104
// Implementation: 0x104de9140

// -[SCCommerceProductPageViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104de947c

// -[SCCommerceProductPageViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104de9800

// -[SCCommerceProductPageViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104de9860

// -[SCCommerceProductPageViewController _initErrorView]
// Type encoding: v16@0:8
// Implementation: 0x104de98b8

// -[SCCommerceProductPageViewController _initCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x104de9b54

// -[SCCommerceProductPageViewController _initHeaderView]
// Type encoding: v16@0:8
// Implementation: 0x104de9c18

// -[SCCommerceProductPageViewController _showError]
// Type encoding: v16@0:8
// Implementation: 0x104dea0c8

// -[SCCommerceProductPageViewController _hideError]
// Type encoding: v16@0:8
// Implementation: 0x104dea1d0

// -[SCCommerceProductPageViewController _registerCollectionViewCells]
// Type encoding: v16@0:8
// Implementation: 0x104dea210

// -[SCCommerceProductPageViewController closeHeroImageSession]
// Type encoding: v16@0:8
// Implementation: 0x104dea3c4

// -[SCCommerceProductPageViewController descriptionCellToggleButtonWasTapped]
// Type encoding: v16@0:8
// Implementation: 0x104dea3dc

// -[SCCommerceProductPageViewController shopButtonWasTapped]
// Type encoding: v16@0:8
// Implementation: 0x104dea510

// -[SCCommerceProductPageViewController sharingButtonWasTapped]
// Type encoding: v16@0:8
// Implementation: 0x104dea574

// -[SCCommerceProductPageViewController favoritesHeartButtonWasTappedWithFavorited:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dea5d8

// -[SCCommerceProductPageViewController favoritesHeartButtonWasTappedForProductId:productImage:currentHeartState:trackingId:]
// Type encoding: v48@0:8Q16@24q32@40
// Implementation: 0x104dea644

// -[SCCommerceProductPageViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x104dea6e0

// -[SCCommerceProductPageViewController _startRenderingViewModels]
// Type encoding: v16@0:8
// Implementation: 0x104dea6e8

// -[SCCommerceProductPageViewController _updateWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dea800

// -[SCCommerceProductPageViewController _performAnimatedUpdatesWithViewModel:diff:]
// Type encoding: v64@0:8@16{SCCommerceProductPageViewModelDiff=BBBBBBBBBqq@}24
// Implementation: 0x104deac00

// -[SCCommerceProductPageViewController _performReloadUpdatesWithDiff:]
// Type encoding: v56@0:8{SCCommerceProductPageViewModelDiff=BBBBBBBBBqq@}16
// Implementation: 0x104deb090

// -[SCCommerceProductPageViewController _finishReloadUpdatesWithDiff:]
// Type encoding: v56@0:8{SCCommerceProductPageViewModelDiff=BBBBBBBBBqq@}16
// Implementation: 0x104deb368

// -[SCCommerceProductPageViewController didSelectDismissalActionWithHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104deb4ec

// -[SCCommerceProductPageViewController _didTapCartButton]
// Type encoding: v16@0:8
// Implementation: 0x104deb550

// -[SCCommerceProductPageViewController _didTapReportButton]
// Type encoding: v16@0:8
// Implementation: 0x104deb5b4

// -[SCCommerceProductPageViewController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x104deb7f8

// -[SCCommerceProductPageViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x104debb80

// -[SCCommerceProductPageViewController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x104debb94

// -[SCCommerceProductPageViewController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x104debb9c

// -[SCCommerceProductPageViewController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104debd0c

// -[SCCommerceProductPageViewController collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104dec694

// -[SCCommerceProductPageViewController collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104dec794

// -[SCCommerceProductPageViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dec8dc

// -[SCCommerceProductPageViewController collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dec8e0

// -[SCCommerceProductPageViewController collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x104deca70

// -[SCCommerceProductPageViewController _cellIdentifierForIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x104decaa0

// -[SCCommerceProductPageViewController _relatedProductWidgetModel]
// Type encoding: @16@0:8
// Implementation: 0x104decbcc

// -[SCCommerceProductPageViewController _viewModelRelatedProducts]
// Type encoding: @16@0:8
// Implementation: 0x104decd48

// -[SCCommerceProductPageViewController _showLastWidgetLoadingCell]
// Type encoding: B16@0:8
// Implementation: 0x104dece84

// -[SCCommerceProductPageViewController _setupPickerView]
// Type encoding: v16@0:8
// Implementation: 0x104decfa0

// -[SCCommerceProductPageViewController _setupPickerViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x104ded198

// -[SCCommerceProductPageViewController _closePickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ded754

// -[SCCommerceProductPageViewController _presentPickerViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104ded958

// -[SCCommerceProductPageViewController productOptionPickerView:didSelectOption:selectedItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104dedb7c

// -[SCCommerceProductPageViewController _overlayTapped]
// Type encoding: v16@0:8
// Implementation: 0x104dedb84

// -[SCCommerceProductPageViewController errorButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dedb8c

// -[SCCommerceProductPageViewController didRecieveRecommendation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dedbf0

// -[SCCommerceProductPageViewController didCloseQuestionnaire:]
// Type encoding: v24@0:8q16
// Implementation: 0x104dedc78

// -[SCCommerceProductPageViewController shareButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104dedcbc

// -[SCCommerceProductPageViewController shopOnStoreTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dedd20

// -[SCCommerceProductPageViewController variantSelectorTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dedda8

// -[SCCommerceProductPageViewController blizzardPageType]
// Type encoding: q16@0:8
// Implementation: 0x104dede30

// -[SCCommerceProductPageViewController availableModules]
// Type encoding: @16@0:8
// Implementation: 0x104dede38

// -[SCCommerceProductPageViewController blizzardPageTimeUntilReadySeconds]
// Type encoding: d16@0:8
// Implementation: 0x104dede48

// -[SCCommerceProductPageViewController _updateImpressionTracking]
// Type encoding: v16@0:8
// Implementation: 0x104dede78

// -[SCCommerceProductPageViewController _impressionViewItemForCell:collectionView:indexPath:startTimestamp:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104dee07c

// -[SCCommerceProductPageViewController reloadFavoriteStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104dee358

// -[SCCommerceProductPageViewController didLoadImage:atIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dee3bc

// -[SCCommerceProductPageViewController didLoadImage:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104dee45c

// -[SCCommerceProductPageViewController didChangeFromIndex:toIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x104dee518

// -[SCCommerceProductPageViewController didTapArTryOnButton]
// Type encoding: v16@0:8
// Implementation: 0x104dee550

// -[SCCommerceProductPageViewController _showFavoritesPDPTooltipIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104dee5b4

// -[SCCommerceProductPageViewController _setDateReady]
// Type encoding: v16@0:8
// Implementation: 0x104dee754

// -[SCCommerceProductPageViewController _setSwipeDate]
// Type encoding: v16@0:8
// Implementation: 0x104dee7bc

// -[SCCommerceProductPageViewController _logHeroSessionClose]
// Type encoding: v16@0:8
// Implementation: 0x104dee814

// -[SCCommerceProductPageViewController headerItem]
// Type encoding: @16@0:8
// Implementation: 0x104dee9b4

// -[SCCommerceProductPageViewController productId]
// Type encoding: Q16@0:8
// Implementation: 0x104dee9c4

// -[SCCommerceProductPageViewController storeId]
// Type encoding: @16@0:8
// Implementation: 0x104dee9d4

// -[SCCommerceProductPageViewController exitEvent]
// Type encoding: q16@0:8
// Implementation: 0x104dee9e4

// -[SCCommerceProductPageViewController setExitEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x104dee9f4

// -[SCCommerceProductPageViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104deea04

@end
