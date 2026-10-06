// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingContentManagerHandler
// Superclass: NSObject
// Address: 0x112a7b088

@interface SCStreamingContentManagerHandler

// Property: useSimplifiedProxyURLs; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingContentManagerHandler initWithPlaybackResolver:circumstanceEngine:manifestRewriter:performerProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1059007bc

// -[SCStreamingContentManagerHandler handleProxyRequest:urlProvider:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1059008c8

// -[SCStreamingContentManagerHandler handleStreamingProxyRequest:urlProvider:updateBlock:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x105900cd4

// -[SCStreamingContentManagerHandler useSimplifiedProxyURLs]
// Type encoding: B16@0:8
// Implementation: 0x105900d64

// -[SCStreamingContentManagerHandler _handleUrl:range:requestContext:extraInfo:urlProvider:completion:]
// Type encoding: @72@0:8@16{_NSRange=QQ}24@40@48@56@?64
// Implementation: 0x105900d6c

// -[SCStreamingContentManagerHandler _transformM3U8:originalURLBase:requestContext:extraInfo:urlProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10590150c

// -[SCStreamingContentManagerHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10590175c

@end
