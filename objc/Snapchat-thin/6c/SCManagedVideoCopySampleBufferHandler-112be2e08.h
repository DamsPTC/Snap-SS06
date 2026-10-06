// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoCopySampleBufferHandler
// Superclass: NSObject
// Address: 0x112be2e08

@interface SCManagedVideoCopySampleBufferHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCManagedVideoCopySampleBufferHandler init]
// Type encoding: @16@0:8
// Implementation: 0x109052eac

// -[SCManagedVideoCopySampleBufferHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109052ee8

// -[SCManagedVideoCopySampleBufferHandler cleanupPixelBufferPool]
// Type encoding: v16@0:8
// Implementation: 0x109052f2c

// -[SCManagedVideoCopySampleBufferHandler copyVideoSampleBufferWithInputSampleBuffer:targetAspectRatio:]
// Type encoding: ^{opaqueCMSampleBuffer=}32@0:8^{opaqueCMSampleBuffer=}16d24
// Implementation: 0x109052f94

// -[SCManagedVideoCopySampleBufferHandler _createPixelBufferPoolIfNeededWithPixelBufferSize:]
// Type encoding: B32@0:8{CGSize=dd}16
// Implementation: 0x1090530f4

// -[SCManagedVideoCopySampleBufferHandler _createPixelBufferPoolWithPixelBufferSize:]
// Type encoding: ^{__CVPixelBufferPool=}32@0:8{CGSize=dd}16
// Implementation: 0x109053198

@end
