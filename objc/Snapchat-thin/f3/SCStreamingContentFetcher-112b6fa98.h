// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingContentFetcher
// Superclass: NSObject
// Address: 0x112b6fa98

@interface SCStreamingContentFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingContentFetcher initWithCallbackBlock:serialCallbackQueue:numberOfBytes:]
// Type encoding: @40@0:8@?16@24Q32
// Implementation: 0x107adfec4

// -[SCStreamingContentFetcher putBytesSlice:]
// Type encoding: v24@0:8@16
// Implementation: 0x107adff94

// -[SCStreamingContentFetcher setError:message:networkCode:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x107ae0108

// -[SCStreamingContentFetcher onComplete]
// Type encoding: v16@0:8
// Implementation: 0x107ae01ec

// -[SCStreamingContentFetcher _handleCallingBackWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ae01f0

// -[SCStreamingContentFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ae0200

@end
