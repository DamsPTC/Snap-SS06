// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitServiceImpl
// Superclass: NSObject
// Address: 0x112b26488

@interface SCPlusStoreKitServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: transactionsObservable; attributes: T@"SCObservable",R,N

// -[SCPlusStoreKitServiceImpl initWithPerformerProvider:grpcClientFactory:appLifecycleManager:applicationLifecycleEvents:applicationPreferences:grapheneRegistry:nativeMessagingServices:circumstanceEngine:userService:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100a11254

// -[SCPlusStoreKitServiceImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106c59e08

// -[SCPlusStoreKitServiceImpl addStoreKitObserver]
// Type encoding: v16@0:8
// Implementation: 0x106c59e5c

// -[SCPlusStoreKitServiceImpl transactionsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106c59f30

// -[SCPlusStoreKitServiceImpl validateProductIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c59f38

// -[SCPlusStoreKitServiceImpl validateProductIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c5a2dc

// -[SCPlusStoreKitServiceImpl purchaseSubscription:promotionalOffer:referralId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c5a380

// -[SCPlusStoreKitServiceImpl purchaseGift:recipientUserId:externalId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c5a59c

// -[SCPlusStoreKitServiceImpl purchaseStreakRestore:conversationId:traceId:externalId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c5a78c

// -[SCPlusStoreKitServiceImpl purchaseBulkStreakRestore:traceId:externalId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c5a984

// -[SCPlusStoreKitServiceImpl purchaseDream:generationId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c5ab74

// -[SCPlusStoreKitServiceImpl purchaseBitmojiContent:contentId:domainInfo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c5ad70

// -[SCPlusStoreKitServiceImpl purchaseALCProduct:entityId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c5af64

// -[SCPlusStoreKitServiceImpl restorePurchases]
// Type encoding: @16@0:8
// Implementation: 0x106c5b160

// -[SCPlusStoreKitServiceImpl subscribeWithTransactionId:productId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c5b490

// -[SCPlusStoreKitServiceImpl latestSubscriptionTransactionWithRequestor:]
// Type encoding: @24@0:8q16
// Implementation: 0x106c5b86c

// -[SCPlusStoreKitServiceImpl eligibleOfferInfoWithRequestor:]
// Type encoding: @24@0:8q16
// Implementation: 0x106c5b878

// -[SCPlusStoreKitServiceImpl isLinkedToDeviceAccount]
// Type encoding: @16@0:8
// Implementation: 0x106c5bb1c

// -[SCPlusStoreKitServiceImpl _fetchExternalUserIdApplyingSk2Policy:]
// Type encoding: @20@0:8B16
// Implementation: 0x106c5bc98

// -[SCPlusStoreKitServiceImpl paymentQueue:updatedTransactions:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106c5be80

// -[SCPlusStoreKitServiceImpl paymentQueue:removedTransactions:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106c5bf10

// -[SCPlusStoreKitServiceImpl paymentQueueRestoreCompletedTransactionsFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c5c118

// -[SCPlusStoreKitServiceImpl paymentQueue:restoreCompletedTransactionsFailedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106c5c2c0

// -[SCPlusStoreKitServiceImpl _resolveSKProductsForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c5c384

// -[SCPlusStoreKitServiceImpl _hasQueuedSubscriptionTransaction]
// Type encoding: B16@0:8
// Implementation: 0x106c5cad0

// -[SCPlusStoreKitServiceImpl _addStoreKitObserverIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106c5cb6c

// -[SCPlusStoreKitServiceImpl _notifyObservers]
// Type encoding: v16@0:8
// Implementation: 0x106c5cbdc

// -[SCPlusStoreKitServiceImpl _updatePendingTransactions]
// Type encoding: v16@0:8
// Implementation: 0x106c5cd00

// -[SCPlusStoreKitServiceImpl _updateLifecycleObserver]
// Type encoding: v16@0:8
// Implementation: 0x106c5cd98

// -[SCPlusStoreKitServiceImpl _processNextTransactionOnIdleIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106c5cefc

// -[SCPlusStoreKitServiceImpl _processNextTransactionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106c5d188

// -[SCPlusStoreKitServiceImpl _finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c5d73c

// -[SCPlusStoreKitServiceImpl _transactionProcessorForProductType:]
// Type encoding: @24@0:8q16
// Implementation: 0x106c5d874

// -[SCPlusStoreKitServiceImpl _purchaseProduct:handle:promotionalOffer:externalId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106c5d8b4

// -[SCPlusStoreKitServiceImpl _purchaseSKProduct:handle:promotionalOffer:externalId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106c5db50

// -[SCPlusStoreKitServiceImpl _submitSubscriptionPaymentWithHandle:product:promotionalOffer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106c5de64

// -[SCPlusStoreKitServiceImpl _dispatchSyntheticSubscribeForProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c5e2b0

// -[SCPlusStoreKitServiceImpl _submitNonSubscriptionPaymentWithHandle:product:externalId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106c5e31c

// -[SCPlusStoreKitServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c5e434

@end
