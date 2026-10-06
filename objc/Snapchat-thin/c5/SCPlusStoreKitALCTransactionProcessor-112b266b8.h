// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitALCTransactionProcessor
// Superclass: NSObject
// Address: 0x112b266b8

@interface SCPlusStoreKitALCTransactionProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoreKitALCTransactionProcessor initWithPerformer:paymentQueue:grpcClient:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100a16264

// -[SCPlusStoreKitALCTransactionProcessor finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c60574

// -[SCPlusStoreKitALCTransactionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c610b0

// +[SCPlusStoreKitALCTransactionProcessor _finishTransaction:entityId:paymentQueue:performer:grpcClient:purchaseHandleManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106c60708

// +[SCPlusStoreKitALCTransactionProcessor _sendToServer:entityId:product:paymentQueue:grpcClient:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106c60c84

// +[SCPlusStoreKitALCTransactionProcessor _sendIAPToServer:entityId:product:paymentQueue:grpcClient:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106c60dd8

@end
