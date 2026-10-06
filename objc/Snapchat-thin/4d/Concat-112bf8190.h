// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: Concat
// Superclass: NSObject
// Address: 0x112bf8190

@interface Concat

// Property: concatPipelineState; attributes: T@"<MTLComputePipelineState>",&,N,V_concatPipelineState
// Property: device; attributes: T@"<MTLDevice>",&,N,V_device

// -[Concat evaluateOnCPUWithInputs:outputs:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x109cd5008

// -[Concat initWithParameterDictionary:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd52dc

// -[Concat outputShapesForInputShapes:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd54a8

// -[Concat setWeightData:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109cd57d0

// -[Concat encodeToCommandBuffer:inputs:outputs:error:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x109cd57d8

// -[Concat concatPipelineState]
// Type encoding: @16@0:8
// Implementation: 0x109cd5a60

// -[Concat setConcatPipelineState:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd5a68

// -[Concat device]
// Type encoding: @16@0:8
// Implementation: 0x109cd5a98

// -[Concat setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd5aa0

// -[Concat .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109cd5ad0

@end
