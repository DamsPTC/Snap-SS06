// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitGiftTransactionProcessor
// Superclass: NSObject
// Address: 0x112b267f8

@interface SCPlusStoreKitGiftTransactionProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoreKitGiftTransactionProcessor initWithPerformer:paymentQueue:grpcClient:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100a15794

// -[SCPlusStoreKitGiftTransactionProcessor finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c63af4

// -[SCPlusStoreKitGiftTransactionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c64428

// +[SCPlusStoreKitGiftTransactionProcessor _finishTransaction:recipientUserId:paymentQueue:performer:grpcClient:purchaseHandleManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106c63c88

// +[SCPlusStoreKitGiftTransactionProcessor _sendToServer:recipientUserId:productInfo:grpcClient:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c64114

@end
