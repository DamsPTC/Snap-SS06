// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCPlusGiftingPurchaseServiceImpl
// Superclass: NSObject
// Address: 0x112a0f338

@interface SCCPlusGiftingPurchaseServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCPlusGiftingPurchaseServiceImpl initWithStoreKitServices:grpcClientFactory:performerProvider:circumstanceEngine:attributedPage:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x104fd57c4

// -[SCCPlusGiftingPurchaseServiceImpl getAvailibilityWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104fd5918

// -[SCCPlusGiftingPurchaseServiceImpl fetchProductsWithRecipientUserId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104fd59f0

// -[SCCPlusGiftingPurchaseServiceImpl fetchRedeemProductWithProductIdentifier:promotionalOffer:callback:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104fd5fb0

// -[SCCPlusGiftingPurchaseServiceImpl presentEmailRequiredDialogIfNeeded]
// Type encoding: B16@0:8
// Implementation: 0x104fd6518

// -[SCCPlusGiftingPurchaseServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fd6760

// +[SCCPlusGiftingPurchaseServiceImpl _fetchGiftProductsFromServer:circumstanceEngine:performer:recipientUserId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104fd6520

@end
