// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitBitmojiTransactionProcessor
// Superclass: NSObject
// Address: 0x112b26708

@interface SCPlusStoreKitBitmojiTransactionProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoreKitBitmojiTransactionProcessor initWithPerformer:paymentQueue:grpcClient:v2GrpcClient:configProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100a160dc

// -[SCPlusStoreKitBitmojiTransactionProcessor finishTransaction:metadata:purchaseHandleManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c61154

// -[SCPlusStoreKitBitmojiTransactionProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c624f8

// +[SCPlusStoreKitBitmojiTransactionProcessor _finishTransaction:contentId:domainInfo:paymentQueue:performer:grpcClient:v2GrpcClient:configProvider:purchaseHandleManager:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x106c613c4

// +[SCPlusStoreKitBitmojiTransactionProcessor _sendToServer:contentId:domainInfo:product:paymentQueue:grpcClient:v2GrpcClient:configProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106c619dc

// +[SCPlusStoreKitBitmojiTransactionProcessor _sendIAPToServer:contentId:domainInfo:product:paymentQueue:grpcClient:configProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106c61be4

// +[SCPlusStoreKitBitmojiTransactionProcessor _sendIAPV2ToServer:contentId:domainInfo:product:paymentQueue:v2GrpcClient:configProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106c62140

@end
