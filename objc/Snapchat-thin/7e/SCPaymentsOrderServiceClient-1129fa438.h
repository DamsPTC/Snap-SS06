// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPaymentsOrderServiceClient
// Superclass: NSObject
// Address: 0x1129fa438

@interface SCPaymentsOrderServiceClient

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPaymentsOrderServiceClient initWithUserId:grapheneRegistry:unifiedGRPCClientFactory:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104d9de9c

// -[SCPaymentsOrderServiceClient getOrderHistoryWithLimit:offset:completionBlock:]
// Type encoding: v40@0:8Q16Q24@?32
// Implementation: 0x104d9e0d4

// -[SCPaymentsOrderServiceClient _vendCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x104d9e2a8

// -[SCPaymentsOrderServiceClient _handleDidGetOrderHistoryWithResponse:request:startTimeStamp:error:completion:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x104d9e394

// -[SCPaymentsOrderServiceClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d9e6f8

@end
