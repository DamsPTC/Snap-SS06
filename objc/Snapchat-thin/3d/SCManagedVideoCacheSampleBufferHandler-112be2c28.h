// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoCacheSampleBufferHandler
// Superclass: NSObject
// Address: 0x112be2c28

@interface SCManagedVideoCacheSampleBufferHandler

// Property: bufferedFrameCount; attributes: TQ,R,N,V_bufferedFrameCount

// -[SCManagedVideoCacheSampleBufferHandler init]
// Type encoding: @16@0:8
// Implementation: 0x109046ed8

// -[SCManagedVideoCacheSampleBufferHandler appendCachedVideoSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109046f54

// -[SCManagedVideoCacheSampleBufferHandler handleCachedSampleBuffersIfNeededWithPresentationTime:processingFrameBlock:completeBlock:]
// Type encoding: v56@0:8{?=qiIq}16@?40@?48
// Implementation: 0x109047008

// -[SCManagedVideoCacheSampleBufferHandler _shouldHandleCachedSampleBufferWithCurrentPresentationTime:]
// Type encoding: B40@0:8{?=qiIq}16
// Implementation: 0x1090470e8

// -[SCManagedVideoCacheSampleBufferHandler _handleCachedSampleBufferWithCurrentPresentationTime:callbackBlock:]
// Type encoding: v48@0:8{?=qiIq}16@?40
// Implementation: 0x10904724c

// -[SCManagedVideoCacheSampleBufferHandler _releaseCachedSampleBuffers]
// Type encoding: v16@0:8
// Implementation: 0x109047364

// -[SCManagedVideoCacheSampleBufferHandler bufferedFrameCount]
// Type encoding: Q16@0:8
// Implementation: 0x10904745c

// -[SCManagedVideoCacheSampleBufferHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109047464

@end
