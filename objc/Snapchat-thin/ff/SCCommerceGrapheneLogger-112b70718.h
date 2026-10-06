// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceGrapheneLogger
// Superclass: NSObject
// Address: 0x112b70718

@interface SCCommerceGrapheneLogger

// Property: graphene; attributes: T@"SCGrapheneCommerceMetric2",&,N,V_graphene

// -[SCCommerceGrapheneLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c04d88

// -[SCCommerceGrapheneLogger logPageImpressionWithSourcePage:page:commerceOrigin:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107af3230

// -[SCCommerceGrapheneLogger logTouchWithSourcePage:touchName:commerceOrigin:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107af32bc

// -[SCCommerceGrapheneLogger logProductCellTapWithRow:column:commerceOrigin:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x107af3348

// -[SCCommerceGrapheneLogger logProductsViewedWithMaxRow:catalogType:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107af3434

// -[SCCommerceGrapheneLogger logCommerceError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af34d8

// -[SCCommerceGrapheneLogger logCatalogPDPWebTapped]
// Type encoding: v16@0:8
// Implementation: 0x107af352c

// -[SCCommerceGrapheneLogger logAbortedCheckout:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107af3560

// -[SCCommerceGrapheneLogger logShowcaseTotalSessionTime:catalogType:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x107af35bc

// -[SCCommerceGrapheneLogger logShowcaseTotalWebviewTime:catalogType:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x107af3628

// -[SCCommerceGrapheneLogger logMyShoppingBagSeenOnProfile]
// Type encoding: v16@0:8
// Implementation: 0x107af3694

// -[SCCommerceGrapheneLogger logMyShoppingBagLaunchedWithNumCarts:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af36c8

// -[SCCommerceGrapheneLogger logReviewOrderLaunchedWithNumItems:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af374c

// -[SCCommerceGrapheneLogger logMyShoppingBagCheckoutLaunchedWithCompleteOrder:]
// Type encoding: v20@0:8B16
// Implementation: 0x107af37d0

// -[SCCommerceGrapheneLogger logMyShoppingBagSessionTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107af3838

// -[SCCommerceGrapheneLogger logReviewOrderV2Launched]
// Type encoding: v16@0:8
// Implementation: 0x107af388c

// -[SCCommerceGrapheneLogger logReviewOrderV2GoToCheckout]
// Type encoding: v16@0:8
// Implementation: 0x107af38c0

// -[SCCommerceGrapheneLogger graphene]
// Type encoding: @16@0:8
// Implementation: 0x107af38f4

// -[SCCommerceGrapheneLogger setGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c04e68

// -[SCCommerceGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107af38fc

@end
