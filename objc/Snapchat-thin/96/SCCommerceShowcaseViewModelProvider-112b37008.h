// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceShowcaseViewModelProvider
// Superclass: NSObject
// Address: 0x112b37008

@interface SCCommerceShowcaseViewModelProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentPage; attributes: Tq,R,V_currentPage
// Property: nextPage; attributes: Tq,R,V_nextPage
// Property: canLoadMorePages; attributes: TB,R,V_canLoadMorePages
// Property: items; attributes: T@"NSArray",R,V_items
// Property: errorModel; attributes: T@"_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel",R,V_errorModel

// -[SCCommerceShowcaseViewModelProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d60e5c

// -[SCCommerceShowcaseViewModelProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d60e64

// -[SCCommerceShowcaseViewModelProvider initWithDataCoordinator:catalogCellViewModelTitleType:configProvider:favoritesCoordinator:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x106d60e6c

// -[SCCommerceShowcaseViewModelProvider clearError]
// Type encoding: v16@0:8
// Implementation: 0x106d61004

// -[SCCommerceShowcaseViewModelProvider loadNext]
// Type encoding: v16@0:8
// Implementation: 0x106d61008

// -[SCCommerceShowcaseViewModelProvider _updateItemsWithNewViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d61010

// -[SCCommerceShowcaseViewModelProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d610bc

// -[SCCommerceShowcaseViewModelProvider _handleItemLoadingDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x106d613ec

// -[SCCommerceShowcaseViewModelProvider _handleItemLoadingDidSucceedWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6152c

// -[SCCommerceShowcaseViewModelProvider _handleItemLoadingDidFail]
// Type encoding: v16@0:8
// Implementation: 0x106d61674

// -[SCCommerceShowcaseViewModelProvider _itemsHasPaginationModel]
// Type encoding: B16@0:8
// Implementation: 0x106d61888

// -[SCCommerceShowcaseViewModelProvider _handleUpdatedItemsWithNewViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d61938

// -[SCCommerceShowcaseViewModelProvider _handleFinalItemsLoaded]
// Type encoding: v16@0:8
// Implementation: 0x106d61b10

// -[SCCommerceShowcaseViewModelProvider _performItemLoadingDidSucceedWithExtraData:favoriteItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d61c64

// -[SCCommerceShowcaseViewModelProvider _handleItemReloadIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106d61fc4

// -[SCCommerceShowcaseViewModelProvider _fetchFavoriteItems]
// Type encoding: v16@0:8
// Implementation: 0x106d61fc8

// -[SCCommerceShowcaseViewModelProvider _handleFavoriteStateFetchSucceed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d620b8

// -[SCCommerceShowcaseViewModelProvider _updateViewModelFavoriteStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d621c4

// -[SCCommerceShowcaseViewModelProvider _updateItemWithCellFavoriteState:productCellViewModel:itemIndex:]
// Type encoding: v40@0:8q16@24Q32
// Implementation: 0x106d62438

// -[SCCommerceShowcaseViewModelProvider _reloadItemsAtIndicies:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d62648

// -[SCCommerceShowcaseViewModelProvider items]
// Type encoding: @16@0:8
// Implementation: 0x106d62798

// -[SCCommerceShowcaseViewModelProvider currentPage]
// Type encoding: q16@0:8
// Implementation: 0x106d627a4

// -[SCCommerceShowcaseViewModelProvider nextPage]
// Type encoding: q16@0:8
// Implementation: 0x106d627ac

// -[SCCommerceShowcaseViewModelProvider canLoadMorePages]
// Type encoding: B16@0:8
// Implementation: 0x106d627b4

// -[SCCommerceShowcaseViewModelProvider errorModel]
// Type encoding: @16@0:8
// Implementation: 0x106d627c0

// -[SCCommerceShowcaseViewModelProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d627cc

// +[SCCommerceShowcaseViewModelProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106d60e50

@end
