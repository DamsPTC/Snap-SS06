// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceProductCatalogRouter
// Superclass: NSObject
// Address: 0x1129fb810

@interface SCCommerceProductCatalogRouter

// Property: showcaseServices; attributes: T@"SCCommerceShowcaseServices",&,N,V_showcaseServices
// Property: imageSourceProvider; attributes: T@"<SCDynamicImageSourceProviderFactory>",&,N,V_imageSourceProvider
// Property: imageFetchingService; attributes: T@"<SCImageFetchingService>",&,N,V_imageFetchingService
// Property: container; attributes: T@"<SCUIContainer>",&,N,V_container
// Property: navigation; attributes: T@"<SCCommerceSIGNavigationFacade>",&,N,V_navigation
// Property: commerceOrigin; attributes: T@"SCCommerceProductCatalogSource",&,N,V_commerceOrigin
// Property: grapheneLogger; attributes: T@"SCCommerceGrapheneLogger",&,N,V_grapheneLogger
// Property: heroImage; attributes: T@"UIImage",&,N,V_heroImage
// Property: resultTitle; attributes: T@"NSString",&,N,V_resultTitle
// Property: userId; attributes: T@"NSString",&,N,V_userId
// Property: storeMetadata; attributes: T@"SCCommerceStoreMetadata",&,N,V_storeMetadata
// Property: configProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_configProvider
// Property: favoritesCoordinator; attributes: T@"<SCCommerceFavoritesCoordinating>",&,N,V_favoritesCoordinator
// Property: favoritesCatalogScopeLauncher; attributes: T@"SCUserFeatureMultiLauncher",&,N,V_favoritesCatalogScopeLauncher
// Property: toastPresenter; attributes: T@"SCCommerceToastPresenter",&,N,V_toastPresenter
// Property: commerceTooltips; attributes: T@"SCCommerceTooltips",&,N,V_commerceTooltips
// Property: commerceIconProvider; attributes: T@"<SCCommerceIconProvider>",&,N,V_commerceIconProvider
// Property: compositeImageFetcher; attributes: T@"<SCCommerceCompositeImageFetching>",&,N,V_compositeImageFetcher
// Property: sendToScopeLauncher; attributes: T@"SCUserFeatureLauncher",&,N,V_sendToScopeLauncher
// Property: sendToScopeServices; attributes: T@"_TtC13SCSendToScope21SCSendToScopeServices",&,N,V_sendToScopeServices
// Property: shoppingLensLauncherScopeServices; attributes: T@"_TtC32SCShoppingLensLauncherScopeProxy35SCShoppingLensLauncherScopeServices",&,N,V_shoppingLensLauncherScopeServices
// Property: PDPSharingProvider; attributes: T@"SCCommerceProductCatalogPDPSharingProvider",&,N,V_PDPSharingProvider
// Property: cartCoordinator; attributes: T@"<SCCommerceCartCoordinating>",&,N,V_cartCoordinator
// Property: reviewOrderScopeExposer; attributes: T@"SCScopeExposer",&,N,V_reviewOrderScopeExposer
// Property: fitFinderCellScopeExposer; attributes: T@"SCMultiScopeExposer",&,N,V_fitFinderCellScopeExposer
// Property: reportProductScopeExposer; attributes: T@"SCScopeExposer",&,N,V_reportProductScopeExposer
// Property: PDPSharingPreviewViewModel; attributes: T@"SCCommerceProductSharingPreviewViewModel",&,N,V_PDPSharingPreviewViewModel
// Property: onDemandResourceDownloader; attributes: T@"<SCOnDemandResourceDownloader>",&,N,V_onDemandResourceDownloader
// Property: adConfigProvider; attributes: T@"SCLazy",&,N,V_adConfigProvider
// Property: grapheneRegistry; attributes: T@"SCLazy",&,N,V_grapheneRegistry
// Property: userNetworkServices; attributes: T@"SCUserNetworkServices",&,N,V_userNetworkServices
// Property: shoppingLensFeatureLauncher; attributes: T@"SCUserFeatureLauncher",&,N,V_shoppingLensFeatureLauncher
// Property: webBrowsingScopeExposer; attributes: T@"SCScopeExposer",&,N,V_webBrowsingScopeExposer
// Property: eventLogger; attributes: T@"<SCCommerceEventLogger>",&,N,V_eventLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceProductCatalogRouter initWithUIContainer:sigContainer:showcaseServices:configProvider:imageSourceProvider:imageFetchingService:commerceOrigin:grapheneRegistry:heroImage:resultTitle:favoritesCoordinator:favoritesCatalogScopeLauncher:notificationPool:commerceIconProvider:compositeImageFetcher:userPreferences:featureSettingsService:sendToScopeLauncher:sendToScopeServices:cartCoordinator:reviewOrderScopeExposer:fitFinderCellScopeExposer:reportProductScopeExposer:textSender:conversationDestinationParser:userId:resourceDownloader:adConfigProvider:userNetworkServices:shoppingLensFeatureLauncher:shoppingLensLauncherScopeServices:multiMerchantEnabled:webBrowsingScopeExposer:]
// Type encoding: @276@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256B264@268
// Implementation: 0x104dcf014

// -[SCCommerceProductCatalogRouter presentShoppingCart:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dcf7b4

// -[SCCommerceProductCatalogRouter presentWebPageForURL:fallbackURL:buttonType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104dcf90c

// -[SCCommerceProductCatalogRouter presentFavoritesCatalog]
// Type encoding: v16@0:8
// Implementation: 0x104dcfcf4

// -[SCCommerceProductCatalogRouter presentShowcaseWithProductSetId:adId:title:calloutText:shopUrl:delegate:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x104dcfe6c

// -[SCCommerceProductCatalogRouter presentShowcaseWithContext:title:calloutText:shopUrl:delegate:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104dd004c

// -[SCCommerceProductCatalogRouter presentStoreWithStoreProductSetQuery:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dd01e0

// -[SCCommerceProductCatalogRouter presentProductPage:storeId:store:commerceOrigin:pdpEntrySource:delegate:]
// Type encoding: v64@0:8Q16@24@32@40@48@56
// Implementation: 0x104dd05ec

// -[SCCommerceProductCatalogRouter presentSharingForProductWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd0a18

// -[SCCommerceProductCatalogRouter activeViewController]
// Type encoding: @16@0:8
// Implementation: 0x104dd0fe0

// -[SCCommerceProductCatalogRouter popLastViewController]
// Type encoding: B16@0:8
// Implementation: 0x104dd0fe8

// -[SCCommerceProductCatalogRouter dismissWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104dd10b8

// -[SCCommerceProductCatalogRouter showFavoritesToast:productId:productImage:wasFavorited:]
// Type encoding: v40@0:8B16Q20@28B36
// Implementation: 0x104dd1124

// -[SCCommerceProductCatalogRouter openTryOnView:productId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104dd134c

// -[SCCommerceProductCatalogRouter openProductReportViewWithProductId:categoryId:storeId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104dd1630

// -[SCCommerceProductCatalogRouter webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd176c

// -[SCCommerceProductCatalogRouter _presentNewViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd17d8

// -[SCCommerceProductCatalogRouter _previousPageName]
// Type encoding: q16@0:8
// Implementation: 0x104dd17e4

// -[SCCommerceProductCatalogRouter _currentPageName]
// Type encoding: q16@0:8
// Implementation: 0x104dd1908

// -[SCCommerceProductCatalogRouter _resetLoggerWithVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd19a8

// -[SCCommerceProductCatalogRouter _loggingProviderFromVC:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dd1aa8

// -[SCCommerceProductCatalogRouter _logPageImpression]
// Type encoding: v16@0:8
// Implementation: 0x104dd1b04

// -[SCCommerceProductCatalogRouter _logPageOpen:storeId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104dd1b90

// -[SCCommerceProductCatalogRouter _logCurrentPageClose]
// Type encoding: v16@0:8
// Implementation: 0x104dd1d5c

// -[SCCommerceProductCatalogRouter _logPageClose:destination:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104dd1e0c

// -[SCCommerceProductCatalogRouter _logHeroSessionCloseIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd1fbc

// -[SCCommerceProductCatalogRouter _logPDPShareButtonTapped]
// Type encoding: @16@0:8
// Implementation: 0x104dd201c

// -[SCCommerceProductCatalogRouter _logPDPSend]
// Type encoding: v16@0:8
// Implementation: 0x104dd20d0

// -[SCCommerceProductCatalogRouter _titleType]
// Type encoding: q16@0:8
// Implementation: 0x104dd2170

// -[SCCommerceProductCatalogRouter _isTryOnVisible]
// Type encoding: B16@0:8
// Implementation: 0x104dd249c

// -[SCCommerceProductCatalogRouter _reloadFavoriteStateForActiveVCIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104dd25b0

// -[SCCommerceProductCatalogRouter _endSendToScope]
// Type encoding: v16@0:8
// Implementation: 0x104dd265c

// -[SCCommerceProductCatalogRouter _endLaunchedSendToScope]
// Type encoding: v16@0:8
// Implementation: 0x104dd278c

// -[SCCommerceProductCatalogRouter _createPreviewFromProductSharingViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dd27d0

// -[SCCommerceProductCatalogRouter _didSharePDP]
// Type encoding: v16@0:8
// Implementation: 0x104dd2830

// -[SCCommerceProductCatalogRouter _didRecievePDPSharingError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd2884

// -[SCCommerceProductCatalogRouter _openDeepLinkURL:webURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dd28c4

// -[SCCommerceProductCatalogRouter _attachToPresentingContainer]
// Type encoding: v16@0:8
// Implementation: 0x104dd2a0c

// -[SCCommerceProductCatalogRouter favoritesBrowserWillDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104dd2a14

// -[SCCommerceProductCatalogRouter reviewOrderPageWillPresent]
// Type encoding: v16@0:8
// Implementation: 0x104dd2a68

// -[SCCommerceProductCatalogRouter reviewOrderPageDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104dd2a6c

// -[SCCommerceProductCatalogRouter tray:positionDidChange:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104dd2b38

// -[SCCommerceProductCatalogRouter didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd2c80

// -[SCCommerceProductCatalogRouter didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104dd2cfc

// -[SCCommerceProductCatalogRouter didSharePDP]
// Type encoding: v16@0:8
// Implementation: 0x104dd2d00

// -[SCCommerceProductCatalogRouter didRecievePDPSharingError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd2db4

// -[SCCommerceProductCatalogRouter willRemoveFromStack]
// Type encoding: v16@0:8
// Implementation: 0x104dd2e9c

// -[SCCommerceProductCatalogRouter didRemoveFromStack]
// Type encoding: v16@0:8
// Implementation: 0x104dd2ea0

// -[SCCommerceProductCatalogRouter willAddToStack]
// Type encoding: v16@0:8
// Implementation: 0x104dd2ec4

// -[SCCommerceProductCatalogRouter didAddToStack]
// Type encoding: v16@0:8
// Implementation: 0x104dd2ec8

// -[SCCommerceProductCatalogRouter didDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104dd2ecc

// -[SCCommerceProductCatalogRouter shoppingLensCameraWantsToExit:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd2f10

// -[SCCommerceProductCatalogRouter shoppingLensCameraDidExit]
// Type encoding: v16@0:8
// Implementation: 0x104dd2f94

// -[SCCommerceProductCatalogRouter shoppingLensDidTapOnProduct:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104dd2f98

// -[SCCommerceProductCatalogRouter reportDidComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dd2f9c

// -[SCCommerceProductCatalogRouter eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x104dd2fe8

// -[SCCommerceProductCatalogRouter setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd2ff0

// -[SCCommerceProductCatalogRouter showcaseServices]
// Type encoding: @16@0:8
// Implementation: 0x104dd3020

// -[SCCommerceProductCatalogRouter setShowcaseServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3028

// -[SCCommerceProductCatalogRouter imageSourceProvider]
// Type encoding: @16@0:8
// Implementation: 0x104dd3058

// -[SCCommerceProductCatalogRouter setImageSourceProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3060

// -[SCCommerceProductCatalogRouter imageFetchingService]
// Type encoding: @16@0:8
// Implementation: 0x104dd3090

// -[SCCommerceProductCatalogRouter setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3098

// -[SCCommerceProductCatalogRouter container]
// Type encoding: @16@0:8
// Implementation: 0x104dd30c8

// -[SCCommerceProductCatalogRouter setContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd30d0

// -[SCCommerceProductCatalogRouter navigation]
// Type encoding: @16@0:8
// Implementation: 0x104dd3100

// -[SCCommerceProductCatalogRouter setNavigation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3108

// -[SCCommerceProductCatalogRouter commerceOrigin]
// Type encoding: @16@0:8
// Implementation: 0x104dd3138

// -[SCCommerceProductCatalogRouter setCommerceOrigin:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3140

// -[SCCommerceProductCatalogRouter grapheneLogger]
// Type encoding: @16@0:8
// Implementation: 0x104dd3170

// -[SCCommerceProductCatalogRouter setGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3178

// -[SCCommerceProductCatalogRouter heroImage]
// Type encoding: @16@0:8
// Implementation: 0x104dd31a8

// -[SCCommerceProductCatalogRouter setHeroImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd31b0

// -[SCCommerceProductCatalogRouter resultTitle]
// Type encoding: @16@0:8
// Implementation: 0x104dd31e0

// -[SCCommerceProductCatalogRouter setResultTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd31e8

// -[SCCommerceProductCatalogRouter userId]
// Type encoding: @16@0:8
// Implementation: 0x104dd3218

// -[SCCommerceProductCatalogRouter setUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3220

// -[SCCommerceProductCatalogRouter storeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x104dd3250

// -[SCCommerceProductCatalogRouter setStoreMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3258

// -[SCCommerceProductCatalogRouter configProvider]
// Type encoding: @16@0:8
// Implementation: 0x104dd3288

// -[SCCommerceProductCatalogRouter setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3290

// -[SCCommerceProductCatalogRouter favoritesCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104dd32c0

// -[SCCommerceProductCatalogRouter setFavoritesCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd32c8

// -[SCCommerceProductCatalogRouter favoritesCatalogScopeLauncher]
// Type encoding: @16@0:8
// Implementation: 0x104dd32f8

// -[SCCommerceProductCatalogRouter setFavoritesCatalogScopeLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3300

// -[SCCommerceProductCatalogRouter toastPresenter]
// Type encoding: @16@0:8
// Implementation: 0x104dd3330

// -[SCCommerceProductCatalogRouter setToastPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3338

// -[SCCommerceProductCatalogRouter commerceTooltips]
// Type encoding: @16@0:8
// Implementation: 0x104dd3368

// -[SCCommerceProductCatalogRouter setCommerceTooltips:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3370

// -[SCCommerceProductCatalogRouter commerceIconProvider]
// Type encoding: @16@0:8
// Implementation: 0x104dd33a0

// -[SCCommerceProductCatalogRouter setCommerceIconProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd33a8

// -[SCCommerceProductCatalogRouter compositeImageFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104dd33d8

// -[SCCommerceProductCatalogRouter setCompositeImageFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd33e0

// -[SCCommerceProductCatalogRouter sendToScopeLauncher]
// Type encoding: @16@0:8
// Implementation: 0x104dd3410

// -[SCCommerceProductCatalogRouter setSendToScopeLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3418

// -[SCCommerceProductCatalogRouter sendToScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x104dd3448

// -[SCCommerceProductCatalogRouter setSendToScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3450

// -[SCCommerceProductCatalogRouter shoppingLensLauncherScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x104dd3480

// -[SCCommerceProductCatalogRouter setShoppingLensLauncherScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3488

// -[SCCommerceProductCatalogRouter PDPSharingProvider]
// Type encoding: @16@0:8
// Implementation: 0x104dd34b8

// -[SCCommerceProductCatalogRouter setPDPSharingProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd34c0

// -[SCCommerceProductCatalogRouter cartCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104dd34f0

// -[SCCommerceProductCatalogRouter setCartCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd34f8

// -[SCCommerceProductCatalogRouter reviewOrderScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x104dd3528

// -[SCCommerceProductCatalogRouter setReviewOrderScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3530

// -[SCCommerceProductCatalogRouter fitFinderCellScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x104dd3560

// -[SCCommerceProductCatalogRouter setFitFinderCellScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3568

// -[SCCommerceProductCatalogRouter reportProductScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x104dd3598

// -[SCCommerceProductCatalogRouter setReportProductScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd35a0

// -[SCCommerceProductCatalogRouter PDPSharingPreviewViewModel]
// Type encoding: @16@0:8
// Implementation: 0x104dd35d0

// -[SCCommerceProductCatalogRouter setPDPSharingPreviewViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd35d8

// -[SCCommerceProductCatalogRouter onDemandResourceDownloader]
// Type encoding: @16@0:8
// Implementation: 0x104dd3608

// -[SCCommerceProductCatalogRouter setOnDemandResourceDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3610

// -[SCCommerceProductCatalogRouter adConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x104dd3640

// -[SCCommerceProductCatalogRouter setAdConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3648

// -[SCCommerceProductCatalogRouter grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x104dd3678

// -[SCCommerceProductCatalogRouter setGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3680

// -[SCCommerceProductCatalogRouter userNetworkServices]
// Type encoding: @16@0:8
// Implementation: 0x104dd36b0

// -[SCCommerceProductCatalogRouter setUserNetworkServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd36b8

// -[SCCommerceProductCatalogRouter shoppingLensFeatureLauncher]
// Type encoding: @16@0:8
// Implementation: 0x104dd36e8

// -[SCCommerceProductCatalogRouter setShoppingLensFeatureLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd36f0

// -[SCCommerceProductCatalogRouter webBrowsingScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x104dd3720

// -[SCCommerceProductCatalogRouter setWebBrowsingScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd3728

// -[SCCommerceProductCatalogRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dd3758

@end
