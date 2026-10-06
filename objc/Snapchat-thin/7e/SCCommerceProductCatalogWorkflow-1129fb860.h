// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceProductCatalogWorkflow
// Superclass: NSObject
// Address: 0x1129fb860

@interface SCCommerceProductCatalogWorkflow

// Property: router; attributes: T@"SCCommerceProductCatalogRouter",&,N,V_router
// Property: browserConfiguration; attributes: T@"SCCommerceProductCatalogConfiguration",&,N,V_browserConfiguration
// Property: delegate; attributes: T@"<SCCommerceProductCatalogDelegate>",W,N,V_delegate
// Property: eventLogger; attributes: T@"<SCCommerceEventLogger>",&,N,V_eventLogger
// Property: showcaseServices; attributes: T@"SCCommerceShowcaseServices",&,N,V_showcaseServices
// Property: cartCoordinator; attributes: T@"<SCCommerceCartCoordinating>",&,N,V_cartCoordinator
// Property: favoritesCoordinator; attributes: T@"<SCCommerceFavoritesCoordinating>",&,N,V_favoritesCoordinator
// Property: pdpEntrySource; attributes: T@"SCCommercePDPEntrySource",&,N,V_pdpEntrySource
// Property: storeMetadata; attributes: T@"SCCommerceStoreMetadata",&,N,V_storeMetadata
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceProductCatalogWorkflow initWithBrowserConfiguration:showcaseServices:delegate:blizzardUserServices:grapheneRegistry:eventLogger:cartCoordinator:favoritesCoordinator:router:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104dd3920

// -[SCCommerceProductCatalogWorkflow launch]
// Type encoding: v16@0:8
// Implementation: 0x104dd3af0

// -[SCCommerceProductCatalogWorkflow dismissWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104dd3bdc

// -[SCCommerceProductCatalogWorkflow _createCommerceSession:blizzardUserServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104dd3c2c

// -[SCCommerceProductCatalogWorkflow productPageDismissed]
// Type encoding: v16@0:8
// Implementation: 0x104dd500c

// -[SCCommerceProductCatalogWorkflow productPageBackButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104dd5010

// -[SCCommerceProductCatalogWorkflow sharingButtonTappedWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd50e4

// -[SCCommerceProductCatalogWorkflow presentWebPageForURL:fallbackURL:buttonType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104dd5208

// -[SCCommerceProductCatalogWorkflow viewFavoritesTapped]
// Type encoding: v16@0:8
// Implementation: 0x104dd5348

// -[SCCommerceProductCatalogWorkflow presentRelatedProduct:storeId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104dd5434

// -[SCCommerceProductCatalogWorkflow shopOnStoreTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd554c

// -[SCCommerceProductCatalogWorkflow cartButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd5884

// -[SCCommerceProductCatalogWorkflow openTryOnView:productId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104dd5a84

// -[SCCommerceProductCatalogWorkflow reportButtonTappedWithProductId:categoryId:storeId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104dd5bbc

// -[SCCommerceProductCatalogWorkflow productCellTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd5c34

// -[SCCommerceProductCatalogWorkflow showcaseDidTapCloseButton]
// Type encoding: v16@0:8
// Implementation: 0x104dd5c78

// -[SCCommerceProductCatalogWorkflow ctaButtonTappedWithDeeplink:fallbackWebURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dd5c7c

// -[SCCommerceProductCatalogWorkflow bannerTappedWithDeeplink:fallbackWebURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dd5c8c

// -[SCCommerceProductCatalogWorkflow didSwitchCategoryTo:storeId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dd5c9c

// -[SCCommerceProductCatalogWorkflow didTapStoreProductWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd5d20

// -[SCCommerceProductCatalogWorkflow didTapDismissStore]
// Type encoding: v16@0:8
// Implementation: 0x104dd5d64

// -[SCCommerceProductCatalogWorkflow didTapCartButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd5e38

// -[SCCommerceProductCatalogWorkflow didLoadStoreInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd5e40

// -[SCCommerceProductCatalogWorkflow toggleFavoriteWithId:productImage:trackingId:completion:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x104dd5e44

// -[SCCommerceProductCatalogWorkflow _navBackAndCloseIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104dd5fd4

// -[SCCommerceProductCatalogWorkflow _launch]
// Type encoding: v16@0:8
// Implementation: 0x104dd6030

// -[SCCommerceProductCatalogWorkflow _close]
// Type encoding: v16@0:8
// Implementation: 0x104dd6cfc

// -[SCCommerceProductCatalogWorkflow _presentWebPageForURL:fallbackURL:buttonType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104dd6d28

// -[SCCommerceProductCatalogWorkflow _presentPDPWithProductId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104dd6d30

// -[SCCommerceProductCatalogWorkflow _presentPDPOnMainQueueWithProductId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104dd6e10

// -[SCCommerceProductCatalogWorkflow handleFavoritesToggleComplete:productId:trackingId:productImage:wasFavorited:completion:]
// Type encoding: v56@0:8B16Q20@28@36B44@?48
// Implementation: 0x104dd7014

// -[SCCommerceProductCatalogWorkflow _presentRelatedProduct:storeId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104dd70a8

// -[SCCommerceProductCatalogWorkflow router]
// Type encoding: @16@0:8
// Implementation: 0x104dd712c

// -[SCCommerceProductCatalogWorkflow setRouter:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd7134

// -[SCCommerceProductCatalogWorkflow browserConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104dd7164

// -[SCCommerceProductCatalogWorkflow setBrowserConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd716c

// -[SCCommerceProductCatalogWorkflow delegate]
// Type encoding: @16@0:8
// Implementation: 0x104dd719c

// -[SCCommerceProductCatalogWorkflow setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd71b4

// -[SCCommerceProductCatalogWorkflow eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x104dd71c0

// -[SCCommerceProductCatalogWorkflow setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd71c8

// -[SCCommerceProductCatalogWorkflow showcaseServices]
// Type encoding: @16@0:8
// Implementation: 0x104dd71f8

// -[SCCommerceProductCatalogWorkflow setShowcaseServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd7200

// -[SCCommerceProductCatalogWorkflow cartCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104dd7230

// -[SCCommerceProductCatalogWorkflow setCartCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd7238

// -[SCCommerceProductCatalogWorkflow favoritesCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104dd7268

// -[SCCommerceProductCatalogWorkflow setFavoritesCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd7270

// -[SCCommerceProductCatalogWorkflow pdpEntrySource]
// Type encoding: @16@0:8
// Implementation: 0x104dd72a0

// -[SCCommerceProductCatalogWorkflow setPdpEntrySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd72a8

// -[SCCommerceProductCatalogWorkflow storeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x104dd72d8

// -[SCCommerceProductCatalogWorkflow setStoreMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dd72e0

// -[SCCommerceProductCatalogWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dd7310

@end
