// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingMediaFetcher
// Superclass: NSObject
// Address: 0x112a7b038

@interface SCStreamingMediaFetcher

// Property: requestHandler; attributes: T@"<SCWebProxyRequestHandling>",R,W,N,V_requestHandler
// Property: extraInfoProvider; attributes: T@"<SCStreamingRequestExtraInfoProviding>",R,W,N,V_extraInfoProvider
// Property: streamingDelegate; attributes: T@"<SCStreamingDelegate>",R,W,N,V_streamingDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingMediaFetcher initWithRequestHandler:extraInfoProvider:streamingDelegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105900328

// -[SCStreamingMediaFetcher fetchMediaDataForRequestInfo:byteRangeValue:completionQueue:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1059003dc

// -[SCStreamingMediaFetcher requestHandler]
// Type encoding: @16@0:8
// Implementation: 0x105900744

// -[SCStreamingMediaFetcher extraInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x10590075c

// -[SCStreamingMediaFetcher streamingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105900774

// -[SCStreamingMediaFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10590078c

@end
