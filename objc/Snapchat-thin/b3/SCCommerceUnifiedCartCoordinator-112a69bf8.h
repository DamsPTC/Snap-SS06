// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceUnifiedCartCoordinator
// Superclass: NSObject
// Address: 0x112a69bf8

@interface SCCommerceUnifiedCartCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceUnifiedCartCoordinator initWithDocObjectContext:artifactManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1057b9978

// -[SCCommerceUnifiedCartCoordinator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057b9a70

// -[SCCommerceUnifiedCartCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057b9a78

// -[SCCommerceUnifiedCartCoordinator canAddAllLineItemsToCheckout:]
// Type encoding: B24@0:8@16
// Implementation: 0x1057b9a80

// -[SCCommerceUnifiedCartCoordinator prepareLineItemsForCheckoutForStoreId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057b9c10

// -[SCCommerceUnifiedCartCoordinator isCartFetchingLineItemArtifactsForStoreId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1057b9d78

// -[SCCommerceUnifiedCartCoordinator getLineItemsForStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057b9f44

// -[SCCommerceUnifiedCartCoordinator clearCartForStore:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057bac04

// -[SCCommerceUnifiedCartCoordinator numberOfCarts]
// Type encoding: q16@0:8
// Implementation: 0x1057bafec

// -[SCCommerceUnifiedCartCoordinator getCarts]
// Type encoding: @16@0:8
// Implementation: 0x1057bb03c

// -[SCCommerceUnifiedCartCoordinator getCart:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057bb99c

// -[SCCommerceUnifiedCartCoordinator addLineItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057bba2c

// -[SCCommerceUnifiedCartCoordinator removeLineItem:storeId:variantId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057bc8fc

// -[SCCommerceUnifiedCartCoordinator editLineItemQuantity:quantity:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1057bd260

// -[SCCommerceUnifiedCartCoordinator _wrapCartMutationCompletionBlock:success:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x1057bd59c

// -[SCCommerceUnifiedCartCoordinator _announceCartDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1057bd604

// -[SCCommerceUnifiedCartCoordinator _fetchArtifactsForLineItemIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057bd674

// -[SCCommerceUnifiedCartCoordinator _fetchArtifactsForLineItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057bd738

// -[SCCommerceUnifiedCartCoordinator _cancelArtifactRequestForLineItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057bd9b4

// -[SCCommerceUnifiedCartCoordinator _updateBitmojiItemWithLineItem:productImageUrl:highResAssetUrl:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057bda30

// -[SCCommerceUnifiedCartCoordinator _announceLineItemArtifactFetchingFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057be24c

// -[SCCommerceUnifiedCartCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057be49c

// +[SCCommerceUnifiedCartCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1057b9a64

@end
