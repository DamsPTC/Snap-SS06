// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCognacIAPTokenLoggingImpl
// Superclass: NSObject
// Address: 0x112a66b88

@interface SCCognacIAPTokenLoggingImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCognacIAPTokenLoggingImpl initWithUserBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x10579b7e4

// -[SCCognacIAPTokenLoggingImpl logTokenShopImpressionWithEntryPoint:hasBadged:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10579b858

// -[SCCognacIAPTokenLoggingImpl logUnconsumedGrantWithTokenCount:tokenPackId:transactionId:transactionStatus:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10579b988

// -[SCCognacIAPTokenLoggingImpl logGiftShopImpression]
// Type encoding: v16@0:8
// Implementation: 0x10579bb54

// -[SCCognacIAPTokenLoggingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10579bb9c

@end
