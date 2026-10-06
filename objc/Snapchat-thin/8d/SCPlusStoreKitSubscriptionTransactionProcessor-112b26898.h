// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitSubscriptionTransactionProcessor
// Superclass: NSObject
// Address: 0x112b26898

@interface SCPlusStoreKitSubscriptionTransactionProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoreKitSubscriptionTransactionProcessor initWithPerformer:paymentQueue:grpcClient:userService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100a1562c

// -[SCPlusStoreKitSubscriptionTransactionProcessor finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c64fcc

// -[SCPlusStoreKitSubscriptionTransactionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c6668c

// +[SCPlusStoreKitSubscriptionTransactionProcessor _finishTransaction:referralId:paymentQueue:performer:grpcClient:purchaseHandleManager:userService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106c651b8

// +[SCPlusStoreKitSubscriptionTransactionProcessor _processSubscribeForTransaction:productInfo:referralId:paymentQueue:performer:grpcClient:purchaseHandleManager:userService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106c654cc

// +[SCPlusStoreKitSubscriptionTransactionProcessor _finishConsumableTransaction:paymentQueue:performer:grpcClient:purchaseHandleManager:userService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106c65a9c

// +[SCPlusStoreKitSubscriptionTransactionProcessor _sendToServer:productInfo:referralId:grpcClient:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c6618c

// +[SCPlusStoreKitSubscriptionTransactionProcessor _sendConsumeSubscriptionRequest:productInfo:grpcClient:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c6641c

@end
