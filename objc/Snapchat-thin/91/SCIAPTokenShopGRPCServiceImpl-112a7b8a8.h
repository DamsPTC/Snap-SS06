// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIAPTokenShopGRPCServiceImpl
// Superclass: NSObject
// Address: 0x112a7b8a8

@interface SCIAPTokenShopGRPCServiceImpl

// Property: tokenBalance; attributes: T@"SCIAPTokenTokenBalance",R,N
// Property: tokenBalanceObservable; attributes: T@"SCObservable",R,N
// Property: tokenPromotionsObservable; attributes: T@"SCObservable",R,N

// -[SCIAPTokenShopGRPCServiceImpl initWithPerformerProvider:preferences:grpcClientFactory:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059107e0

// -[SCIAPTokenShopGRPCServiceImpl initWithPreferences:performer:tokenBalanceSubject:tokenPromotionsSubject:preferencesObserver:tokenShopGRPCService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105910bd8

// -[SCIAPTokenShopGRPCServiceImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105910d2c

// -[SCIAPTokenShopGRPCServiceImpl tokenBalance]
// Type encoding: @16@0:8
// Implementation: 0x105910d74

// -[SCIAPTokenShopGRPCServiceImpl tokenBalanceObservable]
// Type encoding: @16@0:8
// Implementation: 0x105910ddc

// -[SCIAPTokenShopGRPCServiceImpl getTokenBalanceWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105910e04

// -[SCIAPTokenShopGRPCServiceImpl tokenPromotionsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105911138

// -[SCIAPTokenShopGRPCServiceImpl getTokenPromotionsWithLocale:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105911160

// -[SCIAPTokenShopGRPCServiceImpl purchaseTokenPackWithTokenPackSKU:transactionId:appStoreReceipt:priceInMillis:priceCurrencyCode:appStoreCountryCode:completionQueue:completionBlock:]
// Type encoding: v80@0:8@16@24@32q40@48@56@64@?72
// Implementation: 0x105911568

// -[SCIAPTokenShopGRPCServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105911ad0

@end
