// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKPaymentProductRequestor
// Superclass: NSObject
// Address: 0x1129e6f68

@interface FBSDKPaymentProductRequestor

// Property: transaction; attributes: T@"SKPaymentTransaction",&,N,V_transaction
// Property: appStoreReceiptProvider; attributes: T@"<FBSDKAppStoreReceiptProviding>",R,N,V_appStoreReceiptProvider
// Property: productsRequest; attributes: T@"<FBSDKProductsRequest>",&,N,V_productsRequest
// Property: productRequestFactory; attributes: T@"<FBSDKProductsRequestCreating>",R,N,V_productRequestFactory
// Property: settings; attributes: T@"<FBSDKSettings>",R,N,V_settings
// Property: eventLogger; attributes: T@"<FBSDKEventLogging>",R,N,V_eventLogger
// Property: gateKeeperManager; attributes: T#,R,N,V_gateKeeperManager
// Property: store; attributes: T@"<FBSDKDataPersisting>",R,N,V_store
// Property: loggerFactory; attributes: T@"<__FBSDKLoggerCreating>",R,N,V_loggerFactory
// Property: originalTransactionSet; attributes: T@"NSMutableSet",&,N,V_originalTransactionSet
// Property: eventsWithReceipt; attributes: T@"NSSet",&,N,V_eventsWithReceipt
// Property: formatter; attributes: T@"NSDateFormatter",R,N,V_formatter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKPaymentProductRequestor initWithTransaction:settings:eventLogger:gateKeeperManager:store:loggerFactory:productsRequestFactory:appStoreReceiptProvider:]
// Type encoding: @80@0:8@16@24@32#40@48@56@64@72
// Implementation: 0x10497ab48

// -[FBSDKPaymentProductRequestor setProductsRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497ae2c

// -[FBSDKPaymentProductRequestor resolveProducts]
// Type encoding: v16@0:8
// Implementation: 0x10497ae88

// -[FBSDKPaymentProductRequestor getTruncatedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10497b028

// -[FBSDKPaymentProductRequestor logTransactionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497b09c

// -[FBSDKPaymentProductRequestor isSubscription:]
// Type encoding: B24@0:8@16
// Implementation: 0x10497b150

// -[FBSDKPaymentProductRequestor getEventParametersOfProduct:withTransaction:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10497b1d4

// -[FBSDKPaymentProductRequestor appendOriginalTransactionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497b78c

// -[FBSDKPaymentProductRequestor clearOriginalTransactionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497b870

// -[FBSDKPaymentProductRequestor isStartTrial:ofProduct:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10497b954

// -[FBSDKPaymentProductRequestor durationOfSubscriptionPeriod:]
// Type encoding: @24@0:8@16
// Implementation: 0x10497bbe4

// -[FBSDKPaymentProductRequestor productsRequest:didReceiveResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10497bcb0

// -[FBSDKPaymentProductRequestor requestDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497bdcc

// -[FBSDKPaymentProductRequestor request:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10497bdd0

// -[FBSDKPaymentProductRequestor cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x10497bdf8

// -[FBSDKPaymentProductRequestor logImplicitSubscribeTransaction:ofProduct:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10497be7c

// -[FBSDKPaymentProductRequestor logImplicitPurchaseTransaction:ofProduct:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10497c0d0

// -[FBSDKPaymentProductRequestor logImplicitTransactionEvent:valueToSum:parameters:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x10497c234

// -[FBSDKPaymentProductRequestor fetchDeviceReceipt]
// Type encoding: @16@0:8
// Implementation: 0x10497c3ac

// -[FBSDKPaymentProductRequestor transaction]
// Type encoding: @16@0:8
// Implementation: 0x10497c414

// -[FBSDKPaymentProductRequestor setTransaction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497c41c

// -[FBSDKPaymentProductRequestor appStoreReceiptProvider]
// Type encoding: @16@0:8
// Implementation: 0x10497c428

// -[FBSDKPaymentProductRequestor productsRequest]
// Type encoding: @16@0:8
// Implementation: 0x10497c430

// -[FBSDKPaymentProductRequestor productRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x10497c438

// -[FBSDKPaymentProductRequestor settings]
// Type encoding: @16@0:8
// Implementation: 0x10497c440

// -[FBSDKPaymentProductRequestor eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x10497c448

// -[FBSDKPaymentProductRequestor gateKeeperManager]
// Type encoding: #16@0:8
// Implementation: 0x10497c450

// -[FBSDKPaymentProductRequestor store]
// Type encoding: @16@0:8
// Implementation: 0x10497c458

// -[FBSDKPaymentProductRequestor loggerFactory]
// Type encoding: @16@0:8
// Implementation: 0x10497c460

// -[FBSDKPaymentProductRequestor originalTransactionSet]
// Type encoding: @16@0:8
// Implementation: 0x10497c468

// -[FBSDKPaymentProductRequestor setOriginalTransactionSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497c470

// -[FBSDKPaymentProductRequestor eventsWithReceipt]
// Type encoding: @16@0:8
// Implementation: 0x10497c47c

// -[FBSDKPaymentProductRequestor setEventsWithReceipt:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497c484

// -[FBSDKPaymentProductRequestor formatter]
// Type encoding: @16@0:8
// Implementation: 0x10497c490

// -[FBSDKPaymentProductRequestor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10497c498

// +[FBSDKPaymentProductRequestor initialize]
// Type encoding: v16@0:8
// Implementation: 0x10497aaec

// +[FBSDKPaymentProductRequestor pendingRequestors]
// Type encoding: @16@0:8
// Implementation: 0x10497ae20

@end
