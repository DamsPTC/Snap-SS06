// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitBulkStreakRestoreTransactionProcessor
// Superclass: NSObject
// Address: 0x112b26758

@interface SCPlusStoreKitBulkStreakRestoreTransactionProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoreKitBulkStreakRestoreTransactionProcessor initWithPerformer:paymentQueue:grpcClient:nativeMessagingServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100a15d90

// -[SCPlusStoreKitBulkStreakRestoreTransactionProcessor finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c6260c

// -[SCPlusStoreKitBulkStreakRestoreTransactionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c630a8

// +[SCPlusStoreKitBulkStreakRestoreTransactionProcessor _finishTransaction:traceId:paymentQueue:performer:grpcClient:purchaseHandleManager:nativeMessagingServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106c626d4

// +[SCPlusStoreKitBulkStreakRestoreTransactionProcessor _sendToServer:traceId:productInfo:grpcClient:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c62d88

@end
