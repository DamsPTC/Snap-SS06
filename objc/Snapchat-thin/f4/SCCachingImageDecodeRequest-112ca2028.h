// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingImageDecodeRequest
// Superclass: NSObject
// Address: 0x112ca2028

@interface SCCachingImageDecodeRequest

// Property: upstreamRequest; attributes: T@"<SCCachingMediaRequest>",&,N,V_upstreamRequest
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: progressReceiver; attributes: T@"<SCProgressReceiving>",W,N,V_progressReceiver

// -[SCCachingImageDecodeRequest initWithPerformer:resultHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b67d190

// -[SCCachingImageDecodeRequest initWithQueue:resultHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b67d254

// -[SCCachingImageDecodeRequest isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x10b67d318

// -[SCCachingImageDecodeRequest setUpstreamRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67d338

// -[SCCachingImageDecodeRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b67d3a0

// -[SCCachingImageDecodeRequest performWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67d4fc

// -[SCCachingImageDecodeRequest progressReceiver]
// Type encoding: @16@0:8
// Implementation: 0x10b67d684

// -[SCCachingImageDecodeRequest setProgressReceiver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67d69c

// -[SCCachingImageDecodeRequest upstreamRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b67d6a8

// -[SCCachingImageDecodeRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b67d6b0

@end
