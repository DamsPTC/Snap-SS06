// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShortLinkDecodingGRPCService
// Superclass: NSObject
// Address: 0x112a5aba8

@interface SCShortLinkDecodingGRPCService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCShortLinkDecodingGRPCService initWithUnifiedGRPCClientFactory:circumstanceEngine:grapheneRegistry:notificationPool:useUnauthAPI:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x1056e1cec

// -[SCShortLinkDecodingGRPCService decodeShortLinkURL:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056e1e70

// -[SCShortLinkDecodingGRPCService showDecodeFailureErrorMessageUI]
// Type encoding: v16@0:8
// Implementation: 0x1056e1ff4

// -[SCShortLinkDecodingGRPCService _grpcUnifiedGrpcServiceForUnifiedGRPCClientFactory:serviceHost:serviceName:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1056e20f4

// -[SCShortLinkDecodingGRPCService _extractShortLinkURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056e227c

// -[SCShortLinkDecodingGRPCService _decodeShortLinkURLForShortLinkURL:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056e22cc

// -[SCShortLinkDecodingGRPCService _logGrapheneMetricsWithStartTime:hasError:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1056e27f8

// -[SCShortLinkDecodingGRPCService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056e2928

@end
