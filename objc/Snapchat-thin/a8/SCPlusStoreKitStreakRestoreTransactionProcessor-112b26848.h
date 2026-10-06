// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitStreakRestoreTransactionProcessor
// Superclass: NSObject
// Address: 0x112b26848

@interface SCPlusStoreKitStreakRestoreTransactionProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoreKitStreakRestoreTransactionProcessor initWithPerformer:paymentQueue:grpcClient:nativeMessagingServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100a15964

// -[SCPlusStoreKitStreakRestoreTransactionProcessor finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c644cc

// -[SCPlusStoreKitStreakRestoreTransactionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c64f84

// +[SCPlusStoreKitStreakRestoreTransactionProcessor _finishTransaction:conversationId:traceId:paymentQueue:performer:grpcClient:purchaseHandleManager:nativeMessagingServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106c645b8

// +[SCPlusStoreKitStreakRestoreTransactionProcessor _sendToServer:conversationId:traceId:productInfo:grpcClient:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106c64c3c

@end
