// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceProductPageBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x1129fbc98

@interface SCCommerceProductPageBusinessLogic

// Property: delegate; attributes: T@"<SCCommerceProductPageBusinessLogicDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceProductPageBusinessLogic initWithProductIdentifier:store:delegate:showcaseFetcher:configProvider:isLastInNavStack:grapheneLogger:eventLogger:commerceOrigin:pdpEntrySource:favoritesCoordinator:canLaunchFavorites:toastPresenter:cartCoordinator:tryOnButtonVisible:multiMerchantEnabled:]
// Type encoding: @128@0:8Q16@24@32@40@48B56@60@68@76@84@92B100@104@112B120B124
// Implementation: 0x104de40a4

// -[SCCommerceProductPageBusinessLogic loadProduct]
// Type encoding: v16@0:8
// Implementation: 0x104de4400

// -[SCCommerceProductPageBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x104de4578

// -[SCCommerceProductPageBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de501c

// -[SCCommerceProductPageBusinessLogic _sizeRecommendationRecieved:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de54d0

// -[SCCommerceProductPageBusinessLogic _availableModules:favoriteState:]
// Type encoding: @28@0:8B16q20
// Implementation: 0x104de5578

// -[SCCommerceProductPageBusinessLogic _arTryOnButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104de56f0

// -[SCCommerceProductPageBusinessLogic _reportButtonTappedWithCategoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de576c

// -[SCCommerceProductPageBusinessLogic _variantSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de57f8

// -[SCCommerceProductPageBusinessLogic _loadVariantProductInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de595c

// -[SCCommerceProductPageBusinessLogic _updateVariantWidgetViewModelWithLoading:error:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x104de5be0

// -[SCCommerceProductPageBusinessLogic _clearStateAndEmitLoading]
// Type encoding: v16@0:8
// Implementation: 0x104de5e20

// -[SCCommerceProductPageBusinessLogic _errorViewModel]
// Type encoding: @16@0:8
// Implementation: 0x104de5e84

// -[SCCommerceProductPageBusinessLogic _loadingViewModel]
// Type encoding: @16@0:8
// Implementation: 0x104de5fd0

// -[SCCommerceProductPageBusinessLogic _userDismissed]
// Type encoding: v16@0:8
// Implementation: 0x104de603c

// -[SCCommerceProductPageBusinessLogic _backButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104de6070

// -[SCCommerceProductPageBusinessLogic _actionButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104de60a4

// -[SCCommerceProductPageBusinessLogic _cartButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104de64f8

// -[SCCommerceProductPageBusinessLogic _addToCart]
// Type encoding: v16@0:8
// Implementation: 0x104de65b0

// -[SCCommerceProductPageBusinessLogic _shareButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104de681c

// -[SCCommerceProductPageBusinessLogic _shopOnStoreTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de6ad4

// -[SCCommerceProductPageBusinessLogic _variantSelectorTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de6b2c

// -[SCCommerceProductPageBusinessLogic _reloadExistingVariantWidget]
// Type encoding: v16@0:8
// Implementation: 0x104de6c98

// -[SCCommerceProductPageBusinessLogic _relatedProductsTapped:storeId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104de6e38

// -[SCCommerceProductPageBusinessLogic _toggleFavoriteWithId:image:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104de6ec4

// -[SCCommerceProductPageBusinessLogic _updateFavoriteStateWithProductId:state:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104de7050

// -[SCCommerceProductPageBusinessLogic _handleToggleCompleteWithSucessWithProductId:wasFavorited:success:image:]
// Type encoding: v40@0:8Q16B24B28@32
// Implementation: 0x104de70ec

// -[SCCommerceProductPageBusinessLogic _sectionTitleForWidget:]
// Type encoding: @24@0:8@16
// Implementation: 0x104de73f0

// -[SCCommerceProductPageBusinessLogic _loadProductWithProductInfo:widgetsInfo:pageTitle:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104de74bc

// -[SCCommerceProductPageBusinessLogic _reloadFavoriteStateForProductsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104de7718

// -[SCCommerceProductPageBusinessLogic _updateFavoriteItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de782c

// -[SCCommerceProductPageBusinessLogic _togglePendingFavoriteStateWithProductId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de7bb8

// -[SCCommerceProductPageBusinessLogic _refreshCartItemCount]
// Type encoding: v16@0:8
// Implementation: 0x104de7d60

// -[SCCommerceProductPageBusinessLogic _isNativeCheckoutEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104de7df8

// -[SCCommerceProductPageBusinessLogic _loadProductPageWidgets:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de7e24

// -[SCCommerceProductPageBusinessLogic _loadItemRecommendationWidget:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de8084

// -[SCCommerceProductPageBusinessLogic _loadShopOnStoreWidget:storeName:storeIconUrl:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104de8118

// -[SCCommerceProductPageBusinessLogic _loadVariantWidget:variantDimensionNames:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104de8200

// -[SCCommerceProductPageBusinessLogic _loadArTryOnWidget:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de8494

// -[SCCommerceProductPageBusinessLogic _loadFitFinderWidget]
// Type encoding: v16@0:8
// Implementation: 0x104de850c

// -[SCCommerceProductPageBusinessLogic _loadVariantWidgetHelper:itemVariants:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104de8574

// -[SCCommerceProductPageBusinessLogic _loadVariantOnMainThreadWidgetHelper:itemVariants:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104de86b8

// -[SCCommerceProductPageBusinessLogic _loadNextLastWidgetPage]
// Type encoding: v16@0:8
// Implementation: 0x104de87a4

// -[SCCommerceProductPageBusinessLogic _storeIdFromWidgets]
// Type encoding: @16@0:8
// Implementation: 0x104de88e4

// -[SCCommerceProductPageBusinessLogic _productLineItemFromInfo]
// Type encoding: @16@0:8
// Implementation: 0x104de8aa8

// -[SCCommerceProductPageBusinessLogic didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104de8dd4

// -[SCCommerceProductPageBusinessLogic delegate]
// Type encoding: @16@0:8
// Implementation: 0x104de8f30

// -[SCCommerceProductPageBusinessLogic setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de8f50

// -[SCCommerceProductPageBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104de8f64

@end
