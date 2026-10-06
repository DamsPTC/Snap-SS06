// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessRequestGraphInput
// Superclass: NSObject
// Address: 0x112be4de8

@interface SCImageProcessRequestGraphInput

// Property: pixelBuffer; attributes: T^{__CVBuffer=},R,N,V_pixelBuffer
// Property: bufferId; attributes: T@"NSString",R,N,V_bufferId
// Property: contentIsUnchanged; attributes: TB,N,V_contentIsUnchanged
// Property: colorSpace; attributes: Tq,R,N,V_colorSpace
// Property: orientation; attributes: Tq,R,N,V_orientation
// Property: transform; attributes: T{CGAffineTransform=dddddd},N,V_transform
// Property: cpuTransform; attributes: T{CGAffineTransform=dddddd},N,V_cpuTransform
// Property: presentationTimeOffset; attributes: T@"NSValue",&,N,V_presentationTimeOffset

// -[SCImageProcessRequestGraphInput initWithPixelBuffer:bufferId:orientation:]
// Type encoding: @40@0:8^{__CVBuffer=}16@24q32
// Implementation: 0x109085ca4

// -[SCImageProcessRequestGraphInput dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109085d60

// -[SCImageProcessRequestGraphInput pixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x109085dac

// -[SCImageProcessRequestGraphInput bufferId]
// Type encoding: @16@0:8
// Implementation: 0x109085db4

// -[SCImageProcessRequestGraphInput contentIsUnchanged]
// Type encoding: B16@0:8
// Implementation: 0x109085dbc

// -[SCImageProcessRequestGraphInput setContentIsUnchanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x109085dc4

// -[SCImageProcessRequestGraphInput colorSpace]
// Type encoding: q16@0:8
// Implementation: 0x109085dcc

// -[SCImageProcessRequestGraphInput orientation]
// Type encoding: q16@0:8
// Implementation: 0x109085dd4

// -[SCImageProcessRequestGraphInput transform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x109085ddc

// -[SCImageProcessRequestGraphInput setTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x109085df4

// -[SCImageProcessRequestGraphInput cpuTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x109085e0c

// -[SCImageProcessRequestGraphInput setCpuTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x109085e24

// -[SCImageProcessRequestGraphInput presentationTimeOffset]
// Type encoding: @16@0:8
// Implementation: 0x109085e3c

// -[SCImageProcessRequestGraphInput setPresentationTimeOffset:]
// Type encoding: v24@0:8@16
// Implementation: 0x109085e44

// -[SCImageProcessRequestGraphInput .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109085e74

@end
