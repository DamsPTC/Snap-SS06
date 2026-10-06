// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: Clip
// Superclass: NSObject
// Address: 0x112bf8140

@interface Clip

// Property: clipPipelineState; attributes: T@"<MTLComputePipelineState>",&,N,V_clipPipelineState
// Property: device; attributes: T@"<MTLDevice>",&,N,V_device
// Property: clipParameters; attributes: T{ClipParameters=ff},N,V_clipParameters

// -[Clip evaluateOnCPUWithInputs:outputs:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x109cd4688

// -[Clip initWithParameterDictionary:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd4794

// -[Clip outputShapesForInputShapes:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd49e4

// -[Clip setWeightData:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109cd4cac

// -[Clip encodeToCommandBuffer:inputs:outputs:error:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x109cd4cb4

// -[Clip clipPipelineState]
// Type encoding: @16@0:8
// Implementation: 0x109cd4f58

// -[Clip setClipPipelineState:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd4f60

// -[Clip device]
// Type encoding: @16@0:8
// Implementation: 0x109cd4f90

// -[Clip setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd4f98

// -[Clip clipParameters]
// Type encoding: {ClipParameters=ff}16@0:8
// Implementation: 0x109cd4fc8

// -[Clip setClipParameters:]
// Type encoding: v24@0:8{ClipParameters=ff}16
// Implementation: 0x109cd4fd0

// -[Clip .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109cd4fd8

@end
