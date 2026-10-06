// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TCSampleBufferVideoView
// Superclass: TCVideoView
// Address: 0x112bac718

@interface TCSampleBufferVideoView

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[TCSampleBufferVideoView initWithFrame:rendererController:videoViewListener:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x1089412e4

// -[TCSampleBufferVideoView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108941434

// -[TCSampleBufferVideoView startWithSink:]
// Type encoding: B24@0:8@16
// Implementation: 0x1089414b0

// -[TCSampleBufferVideoView stop]
// Type encoding: v16@0:8
// Implementation: 0x108941564

// -[TCSampleBufferVideoView onFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1089415d4

// -[TCSampleBufferVideoView onNativeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1089416f0

// -[TCSampleBufferVideoView _sampleBufferDisplayLayer]
// Type encoding: @16@0:8
// Implementation: 0x108941804

// -[TCSampleBufferVideoView _uploadImageBuffer:]
// Type encoding: v24@0:8^{__CVBuffer=}16
// Implementation: 0x108941808

// -[TCSampleBufferVideoView _uploadYUVTexture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10894183c

// -[TCSampleBufferVideoView _enqueueImageBuffer:completion:]
// Type encoding: v32@0:8^{__CVBuffer=}16@?24
// Implementation: 0x108941a68

// -[TCSampleBufferVideoView _createPixelBufferPoolIfNeededWithPixelBufferSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108941d1c

// -[TCSampleBufferVideoView _createPixelBufferPoolWithPixelBufferSize:]
// Type encoding: ^{__CVPixelBufferPool=}32@0:8{CGSize=dd}16
// Implementation: 0x108941dac

// -[TCSampleBufferVideoView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108941f2c

// +[TCSampleBufferVideoView layerClass]
// Type encoding: #16@0:8
// Implementation: 0x1089412d8

@end
