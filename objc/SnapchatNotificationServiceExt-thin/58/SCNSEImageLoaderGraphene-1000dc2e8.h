// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNSEImageLoaderGraphene
// Superclass: NSObject
// Address: 0x1000dc2e8

@interface SCNSEImageLoaderGraphene


// -[SCNSEImageLoaderGraphene initWithGrapheneLogger:notificationType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10005afec

// -[SCNSEImageLoaderGraphene logImageLoadAttempt:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10005b0a4

// -[SCNSEImageLoaderGraphene logImageLoadSuccess:cacheHit:startTime:imageSizeBytes:]
// Type encoding: v44@0:8Q16B24d28Q36
// Implementation: 0x10005b1b0

// -[SCNSEImageLoaderGraphene logImageLoadError:imageType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10005b398

// -[SCNSEImageLoaderGraphene logGroupBitmojiLoadAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10005b568

// -[SCNSEImageLoaderGraphene logGroupBitmojiLoadSuccess:]
// Type encoding: v24@0:8d16
// Implementation: 0x10005b63c

// -[SCNSEImageLoaderGraphene logGroupInfoLookupLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x10005b784

// -[SCNSEImageLoaderGraphene .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10005b888

@end
