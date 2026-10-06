// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitDreamsTransactionProcessor
// Superclass: NSObject
// Address: 0x112b267a8

@interface SCPlusStoreKitDreamsTransactionProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoreKitDreamsTransactionProcessor initWithPerformer:paymentQueue:grpcClient:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100a16010

// -[SCPlusStoreKitDreamsTransactionProcessor finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c630f0

// -[SCPlusStoreKitDreamsTransactionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c63a50

// +[SCPlusStoreKitDreamsTransactionProcessor _finishTransaction:generationId:paymentQueue:performer:grpcClient:purchaseHandleManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106c63284

// +[SCPlusStoreKitDreamsTransactionProcessor _sendToServer:generationId:product:paymentQueue:grpcClient:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106c63778

@end
