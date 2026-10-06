// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIAPTokenItemOrderServiceImplementation
// Superclass: NSObject
// Address: 0x112a7b808

@interface SCIAPTokenItemOrderServiceImplementation

// Property: orderUpdateObservable; attributes: T@"SCObservable",R,N
// Property: listItemUpdateObservable; attributes: T@"SCObservable",R,N
// Property: consumeOrderUpdateObservable; attributes: T@"SCObservable",R,N
// Property: getUnconsumedOrdersUpdateObservable; attributes: T@"SCObservable",R,N
// Property: itemOrderConfirmedUpdateObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCIAPTokenItemOrderServiceImplementation initWithBundle:performerProvider:grpcClientFactory:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10590e1b8

// -[SCIAPTokenItemOrderServiceImplementation listItemUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10590e358

// -[SCIAPTokenItemOrderServiceImplementation orderUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10590e380

// -[SCIAPTokenItemOrderServiceImplementation consumeOrderUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10590e3a8

// -[SCIAPTokenItemOrderServiceImplementation getUnconsumedOrdersUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10590e3d0

// -[SCIAPTokenItemOrderServiceImplementation itemOrderConfirmedUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10590e3f8

// -[SCIAPTokenItemOrderServiceImplementation listItemsWithAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590e420

// -[SCIAPTokenItemOrderServiceImplementation orderItemWithItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590e534

// -[SCIAPTokenItemOrderServiceImplementation consumeOrderWithOrderId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590e648

// -[SCIAPTokenItemOrderServiceImplementation getUnconsumedOrdersWithAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590e75c

// -[SCIAPTokenItemOrderServiceImplementation itemOrderConfirmedWithAppId:forSku:orderId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10590e870

// -[SCIAPTokenItemOrderServiceImplementation _listItemsWithAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590ea04

// -[SCIAPTokenItemOrderServiceImplementation _orderItemWithItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590ecdc

// -[SCIAPTokenItemOrderServiceImplementation _consumeOrderWithOrderId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590efb0

// -[SCIAPTokenItemOrderServiceImplementation _getUnconsumedOrdersWithAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590f1d0

// -[SCIAPTokenItemOrderServiceImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10590f410

@end
