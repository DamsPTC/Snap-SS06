// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TCVideoViewMetal
// Superclass: TCVideoView
// Address: 0x112bac858

@interface TCVideoViewMetal

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[TCVideoViewMetal initWithFrame:rendererController:videoViewListener:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x1089428c0

// -[TCVideoViewMetal initSelf:videoViewListener:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108942984

// -[TCVideoViewMetal dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108942d7c

// -[TCVideoViewMetal startWithSink:]
// Type encoding: B24@0:8@16
// Implementation: 0x108942df4

// -[TCVideoViewMetal stop]
// Type encoding: v16@0:8
// Implementation: 0x108942ea4

// -[TCVideoViewMetal sinkId]
// Type encoding: @16@0:8
// Implementation: 0x108942f14

// -[TCVideoViewMetal rendererId]
// Type encoding: @16@0:8
// Implementation: 0x108942f3c

// -[TCVideoViewMetal uploadImageBuffer:width:height:]
// Type encoding: v32@0:8^{__CVBuffer=}16i24i28
// Implementation: 0x108942f58

// -[TCVideoViewMetal uploadYUVTextureWithYPlaneAddress:yBytesPerRow:uvPlaneAddress:uvBytesPerRow:width:height:]
// Type encoding: v56@0:8r^v16Q24r^v32Q40i48i52
// Implementation: 0x108943164

// -[TCVideoViewMetal onFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1089433e0

// -[TCVideoViewMetal onNativeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1089435c8

// -[TCVideoViewMetal setSaturationBoost:]
// Type encoding: v20@0:8f16
// Implementation: 0x1089437bc

// -[TCVideoViewMetal drawInMTKView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1089437c0

// -[TCVideoViewMetal render:]
// Type encoding: v24@0:8@16
// Implementation: 0x108943818

// -[TCVideoViewMetal mtkView:drawableSizeWillChange:]
// Type encoding: v40@0:8@16{CGSize=dd}24
// Implementation: 0x108943d40

// -[TCVideoViewMetal .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108943d44

// -[TCVideoViewMetal .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x108943df8

@end
