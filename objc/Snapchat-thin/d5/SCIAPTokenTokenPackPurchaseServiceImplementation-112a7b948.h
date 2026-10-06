// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIAPTokenTokenPackPurchaseServiceImplementation
// Superclass: NSObject
// Address: 0x112a7b948

@interface SCIAPTokenTokenPackPurchaseServiceImplementation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: purchaseUpdateObservable; attributes: T@"SCObservable",R,N
// Property: promotionsUpdateObservable; attributes: T@"SCObservable",R,N
// Property: tokenBalance; attributes: T@"SCIAPTokenTokenBalance",R,N
// Property: tokenBalanceObservable; attributes: T@"SCObservable",R,N
// Property: tokenShopLocale; attributes: T@"NSString",R,C,N

// -[SCIAPTokenTokenPackPurchaseServiceImplementation initWithBundle:paymentQueue:mainQueuePerformer:performerProvider:preferences:onDemandResourceDownloader:notificationPool:inAppProductService:grpcClientFactory:tokenLogger:circumstanceEngine:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1059121fc

// -[SCIAPTokenTokenPackPurchaseServiceImplementation dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1059124cc

// -[SCIAPTokenTokenPackPurchaseServiceImplementation paymentQueue:updatedTransactions:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105912518

// -[SCIAPTokenTokenPackPurchaseServiceImplementation processPendingTransactionsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10591266c

// -[SCIAPTokenTokenPackPurchaseServiceImplementation purchaseProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x105912748

// -[SCIAPTokenTokenPackPurchaseServiceImplementation fetchPromotions]
// Type encoding: v16@0:8
// Implementation: 0x10591285c

// -[SCIAPTokenTokenPackPurchaseServiceImplementation fetchTokenBalance]
// Type encoding: v16@0:8
// Implementation: 0x105912938

// -[SCIAPTokenTokenPackPurchaseServiceImplementation isTokenShopEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105912a14

// -[SCIAPTokenTokenPackPurchaseServiceImplementation purchaseUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105912a1c

// -[SCIAPTokenTokenPackPurchaseServiceImplementation promotionsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105912a44

// -[SCIAPTokenTokenPackPurchaseServiceImplementation tokenBalance]
// Type encoding: @16@0:8
// Implementation: 0x105912a6c

// -[SCIAPTokenTokenPackPurchaseServiceImplementation tokenBalanceObservable]
// Type encoding: @16@0:8
// Implementation: 0x105912a74

// -[SCIAPTokenTokenPackPurchaseServiceImplementation tokenShopLocale]
// Type encoding: @16@0:8
// Implementation: 0x105912a7c

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPendingTransactionsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105912ad4

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _purchaseProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x105912b78

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _handleUpdatedTransactions:]
// Type encoding: v24@0:8@16
// Implementation: 0x105912cf8

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _resetCurrentAndProcessNextTransactionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105912d30

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processNextTransactionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105912d5c

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasingTransaction]
// Type encoding: v16@0:8
// Implementation: 0x105912e38

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasedTransaction]
// Type encoding: v16@0:8
// Implementation: 0x105912f14

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasedTransactionWithProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x105913230

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasedTransactionWithProduct:appStoreReceipt:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105913330

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processFailedTransaction]
// Type encoding: v16@0:8
// Implementation: 0x1059136e8

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processRestoredTransaction]
// Type encoding: v16@0:8
// Implementation: 0x1059138ac

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _processDeferredTransaction]
// Type encoding: v16@0:8
// Implementation: 0x1059139d8

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _fetchPromotions]
// Type encoding: v16@0:8
// Implementation: 0x105913b20

// -[SCIAPTokenTokenPackPurchaseServiceImplementation _fetchTokenBalance]
// Type encoding: v16@0:8
// Implementation: 0x105913d1c

// -[SCIAPTokenTokenPackPurchaseServiceImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105913d64

@end
