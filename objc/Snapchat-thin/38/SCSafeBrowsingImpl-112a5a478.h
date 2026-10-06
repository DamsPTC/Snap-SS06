// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSafeBrowsingImpl
// Superclass: NSObject
// Address: 0x112a5a478

@interface SCSafeBrowsingImpl


// -[SCSafeBrowsingImpl initWithSnapTokenProvider:attestationProvider:grapheneRegistry:unifiedGRPCClientFactory:circumstanceEngine:networkConnectivityAnnouncer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1056dcc10

// -[SCSafeBrowsingImpl checkUrl:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056dce10

// -[SCSafeBrowsingImpl checkUrl:includeConnectivityCheck:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x1056dce20

// -[SCSafeBrowsingImpl learnMoreURL]
// Type encoding: @16@0:8
// Implementation: 0x1056dd114

// -[SCSafeBrowsingImpl _fetchUrlReputationV2WithRequest:successBlock:failureBlock:attemptIdx:callOptionsBuilder:urlToCheck:]
// Type encoding: v64@0:8@16@?24@?32q40@48@56
// Implementation: 0x1056dd128

// -[SCSafeBrowsingImpl _handleGetUrlReputationV2Response:error:attemptIdx:successBlock:failureBlock:callOptionsBuilder:request:url:]
// Type encoding: v80@0:8@16@24q32@?40@?48@56@64@72
// Implementation: 0x1056dd344

// -[SCSafeBrowsingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056dd7ac

@end
