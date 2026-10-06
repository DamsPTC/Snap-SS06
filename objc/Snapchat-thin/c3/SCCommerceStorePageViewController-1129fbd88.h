// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceStorePageViewController
// Superclass: UIViewController
// Address: 0x1129fbd88

@interface SCCommerceStorePageViewController

// Property: showcaseFetcher; attributes: T@"<SCCommerceShowcaseFetching>",&,N,V_showcaseFetcher
// Property: imageSourceProvider; attributes: T@"<SCDynamicImageSourceProviderFactory>",&,N,V_imageSourceProvider
// Property: imageFetchingService; attributes: T@"<SCImageFetchingService>",&,N,V_imageFetchingService
// Property: configProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_configProvider
// Property: commerceIconProvider; attributes: T@"<SCCommerceIconProvider>",&,N,V_commerceIconProvider
// Property: eventLogger; attributes: T@"<SCCommerceEventLogger>",&,N,V_eventLogger
// Property: cartCoordinator; attributes: T@"<SCCommerceCartCoordinating>",&,N,V_cartCoordinator
// Property: favoritesCoordinator; attributes: T@"<SCCommerceFavoritesCoordinating>",&,N,V_favoritesCoordinator
// Property: showcaseDataCoordinators; attributes: T@"NSMutableArray",&,N,V_showcaseDataCoordinators
// Property: tabBarInteractionCoordinator; attributes: T@"SIGTabBarScrollViewCoordinator",&,N,V_tabBarInteractionCoordinator
// Property: scrollView; attributes: T@"UIScrollView",&,N,V_scrollView
// Property: containerView; attributes: T@"UIView",&,N,V_containerView
// Property: errorView; attributes: T@"_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView",&,N,V_errorView
// Property: cartButton; attributes: T@"_TtC20SCCommerceSwiftViews20SCCommerceCartButton",&,N,V_cartButton
// Property: catalogViewControllers; attributes: T@"NSMutableArray",&,N,V_catalogViewControllers
// Property: viewModelProviders; attributes: T@"NSMutableArray",&,N,V_viewModelProviders
// Property: storeId; attributes: T@"NSString",&,N,V_storeId
// Property: categoryId; attributes: T@"NSString",&,N,V_categoryId
// Property: queryContext; attributes: T@"SCCommerceProductSetQuery",&,N,V_queryContext
// Property: categories; attributes: T@"NSArray",&,N,V_categories
// Property: lastOpenedTabTimestamp; attributes: T@"NSDate",&,N,V_lastOpenedTabTimestamp
// Property: lastOpenedTabIndex; attributes: TQ,N,V_lastOpenedTabIndex
// Property: isLastInNavStack; attributes: TB,N,V_isLastInNavStack
// Property: delegate; attributes: T@"<SCCommerceStorePageViewControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: productId; attributes: TQ,?,R,N,VproductId
// Property: exitEvent; attributes: Tq,?,N,VexitEvent
// Property: headerItem; attributes: T@"SIGHeaderItem",?,R,N,V_headerItem
// Property: footerItem; attributes: T@"SIGFooterItem",?,R,N
// Property: overlayItem; attributes: T@"SCOverlayItem",?,R,N
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCCommerceStorePageViewController initWithStoreId:categoryId:queryContext:showcaseFetcher:configProvider:imageSourceProvider:imageFetchingService:commerceIconProvider:eventLogger:cartCoordinator:favoritesCoordinator:isLastInNavStack:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64@72@80@88@96B104
// Implementation: 0x104def9ac

// -[SCCommerceStorePageViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104defca8

// -[SCCommerceStorePageViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104defd10

// -[SCCommerceStorePageViewController _setupScrollView]
// Type encoding: v16@0:8
// Implementation: 0x104defd78

// -[SCCommerceStorePageViewController _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x104df05dc

// -[SCCommerceStorePageViewController _fetchStore]
// Type encoding: v16@0:8
// Implementation: 0x104df0bcc

// -[SCCommerceStorePageViewController _loadViewWithStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df0dbc

// -[SCCommerceStorePageViewController _loadViewWithErrorState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df1010

// -[SCCommerceStorePageViewController _loadTabsWithCategories:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df11dc

// -[SCCommerceStorePageViewController _addTabControllerWithPreviousPage:categoryModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104df17ac

// -[SCCommerceStorePageViewController _tabSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df2254

// -[SCCommerceStorePageViewController _wireTabAtIndex:includeAdjacent:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x104df233c

// -[SCCommerceStorePageViewController _categoryMetricsForIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x104df24c0

// -[SCCommerceStorePageViewController _timestampOpenedTabAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104df2694

// -[SCCommerceStorePageViewController _currentCatalogCollectionViewController]
// Type encoding: @16@0:8
// Implementation: 0x104df26e8

// -[SCCommerceStorePageViewController _refreshCartItemCount]
// Type encoding: v16@0:8
// Implementation: 0x104df274c

// -[SCCommerceStorePageViewController reloadFavoriteStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104df2828

// -[SCCommerceStorePageViewController didSelectDismissalActionWithHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df2870

// -[SCCommerceStorePageViewController blizzardPageType]
// Type encoding: q16@0:8
// Implementation: 0x104df28a0

// -[SCCommerceStorePageViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x104df28a8

// -[SCCommerceStorePageViewController pageDidAppearForIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104df28b0

// -[SCCommerceStorePageViewController errorButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df29ec

// -[SCCommerceStorePageViewController _didTapCartButton]
// Type encoding: v16@0:8
// Implementation: 0x104df29f0

// -[SCCommerceStorePageViewController handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104df2a58

// -[SCCommerceStorePageViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104df2e1c

// -[SCCommerceStorePageViewController headerItem]
// Type encoding: @16@0:8
// Implementation: 0x104df2e64

// -[SCCommerceStorePageViewController productId]
// Type encoding: Q16@0:8
// Implementation: 0x104df2e74

// -[SCCommerceStorePageViewController exitEvent]
// Type encoding: q16@0:8
// Implementation: 0x104df2e84

// -[SCCommerceStorePageViewController setExitEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x104df2e94

// -[SCCommerceStorePageViewController storeId]
// Type encoding: @16@0:8
// Implementation: 0x104df2ea4

// -[SCCommerceStorePageViewController setStoreId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df2eb4

// -[SCCommerceStorePageViewController categoryId]
// Type encoding: @16@0:8
// Implementation: 0x104df2ef4

// -[SCCommerceStorePageViewController setCategoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df2f04

// -[SCCommerceStorePageViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104df2f44

// -[SCCommerceStorePageViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df2f64

// -[SCCommerceStorePageViewController showcaseFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104df2f78

// -[SCCommerceStorePageViewController setShowcaseFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df2f88

// -[SCCommerceStorePageViewController imageSourceProvider]
// Type encoding: @16@0:8
// Implementation: 0x104df2fc8

// -[SCCommerceStorePageViewController setImageSourceProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df2fd8

// -[SCCommerceStorePageViewController imageFetchingService]
// Type encoding: @16@0:8
// Implementation: 0x104df3018

// -[SCCommerceStorePageViewController setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3028

// -[SCCommerceStorePageViewController configProvider]
// Type encoding: @16@0:8
// Implementation: 0x104df3068

// -[SCCommerceStorePageViewController setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3078

// -[SCCommerceStorePageViewController commerceIconProvider]
// Type encoding: @16@0:8
// Implementation: 0x104df30b8

// -[SCCommerceStorePageViewController setCommerceIconProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df30c8

// -[SCCommerceStorePageViewController eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x104df3108

// -[SCCommerceStorePageViewController setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3118

// -[SCCommerceStorePageViewController cartCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104df3158

// -[SCCommerceStorePageViewController setCartCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3168

// -[SCCommerceStorePageViewController favoritesCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104df31a8

// -[SCCommerceStorePageViewController setFavoritesCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df31b8

// -[SCCommerceStorePageViewController showcaseDataCoordinators]
// Type encoding: @16@0:8
// Implementation: 0x104df31f8

// -[SCCommerceStorePageViewController setShowcaseDataCoordinators:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3208

// -[SCCommerceStorePageViewController tabBarInteractionCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104df3248

// -[SCCommerceStorePageViewController setTabBarInteractionCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3258

// -[SCCommerceStorePageViewController scrollView]
// Type encoding: @16@0:8
// Implementation: 0x104df3298

// -[SCCommerceStorePageViewController setScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df32a8

// -[SCCommerceStorePageViewController containerView]
// Type encoding: @16@0:8
// Implementation: 0x104df32e8

// -[SCCommerceStorePageViewController setContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df32f8

// -[SCCommerceStorePageViewController errorView]
// Type encoding: @16@0:8
// Implementation: 0x104df3338

// -[SCCommerceStorePageViewController setErrorView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3348

// -[SCCommerceStorePageViewController cartButton]
// Type encoding: @16@0:8
// Implementation: 0x104df3388

// -[SCCommerceStorePageViewController setCartButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3398

// -[SCCommerceStorePageViewController catalogViewControllers]
// Type encoding: @16@0:8
// Implementation: 0x104df33d8

// -[SCCommerceStorePageViewController setCatalogViewControllers:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df33e8

// -[SCCommerceStorePageViewController viewModelProviders]
// Type encoding: @16@0:8
// Implementation: 0x104df3428

// -[SCCommerceStorePageViewController setViewModelProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3438

// -[SCCommerceStorePageViewController queryContext]
// Type encoding: @16@0:8
// Implementation: 0x104df3478

// -[SCCommerceStorePageViewController setQueryContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3488

// -[SCCommerceStorePageViewController categories]
// Type encoding: @16@0:8
// Implementation: 0x104df34c8

// -[SCCommerceStorePageViewController setCategories:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df34d8

// -[SCCommerceStorePageViewController lastOpenedTabTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104df3518

// -[SCCommerceStorePageViewController setLastOpenedTabTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104df3528

// -[SCCommerceStorePageViewController lastOpenedTabIndex]
// Type encoding: Q16@0:8
// Implementation: 0x104df3568

// -[SCCommerceStorePageViewController setLastOpenedTabIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104df3578

// -[SCCommerceStorePageViewController isLastInNavStack]
// Type encoding: B16@0:8
// Implementation: 0x104df3588

// -[SCCommerceStorePageViewController setIsLastInNavStack:]
// Type encoding: v20@0:8B16
// Implementation: 0x104df3598

// -[SCCommerceStorePageViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104df35a8

@end
