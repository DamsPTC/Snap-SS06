// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIAPTokenItemEntitleServiceImplementation
// Superclass: NSObject
// Address: 0x112a7b7b8

@interface SCIAPTokenItemEntitleServiceImplementation

// Property: consumeItemUpdateObservable; attributes: T@"SCObservable",R,N
// Property: getItemsUpdateObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCIAPTokenItemEntitleServiceImplementation initWithBundle:performerProvider:grpcClientFactory:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10590d874

// -[SCIAPTokenItemEntitleServiceImplementation getItemsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10590d9cc

// -[SCIAPTokenItemEntitleServiceImplementation consumeItemUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10590d9f4

// -[SCIAPTokenItemEntitleServiceImplementation consumeItemWithIdentifer:appId:itemSku:consumptionQuantity:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x10590da1c

// -[SCIAPTokenItemEntitleServiceImplementation getItemsWithAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590db98

// -[SCIAPTokenItemEntitleServiceImplementation _getItemsWithAppId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590dcac

// -[SCIAPTokenItemEntitleServiceImplementation _consumeItemWithIdentifer:appId:itemSku:consumptionQuantity:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x10590de9c

// -[SCIAPTokenItemEntitleServiceImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10590e158

@end
