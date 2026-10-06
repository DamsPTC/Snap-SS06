// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPGRPCNetworkFeedsClient
// Superclass: NSObject
// Address: 0x112a46748

@interface CTPGRPCNetworkFeedsClient

// Property: feedService; attributes: T@"SCLazy",&,N,V_feedService
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPGRPCNetworkFeedsClient initWithGRPCClient:feedsConverter:circumstanceEngine:userDataFactory:bloopsOptionService:logger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1055851e8

// -[CTPGRPCNetworkFeedsClient feedTreeForContext:supportedFeedTypes:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x10558539c

// -[CTPGRPCNetworkFeedsClient feedTreeRawResponseForContext:supportedFeedTypes:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1055853a4

// -[CTPGRPCNetworkFeedsClient feedFromFeedTreeRawResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055853ac

// -[CTPGRPCNetworkFeedsClient _feedTreeForContext:supportedFeedTypes:shouldParseResponse:]
// Type encoding: @36@0:8Q16@24B32
// Implementation: 0x10558543c

// -[CTPGRPCNetworkFeedsClient _feedTreeForContext:supportedFeedTypes:cameoOptions:shouldParseResponse:]
// Type encoding: @44@0:8Q16@24@32B40
// Implementation: 0x1055855e8

// -[CTPGRPCNetworkFeedsClient feedService]
// Type encoding: @16@0:8
// Implementation: 0x105586140

// -[CTPGRPCNetworkFeedsClient setFeedService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105586148

// -[CTPGRPCNetworkFeedsClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105586178

@end
