// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: Reduce
// Superclass: NSObject
// Address: 0x112bf8280

@interface Reduce

// Property: reducePipelineState; attributes: T@"<MTLComputePipelineState>",&,N,V_reducePipelineState
// Property: device; attributes: T@"<MTLDevice>",&,N,V_device
// Property: reduceParameters; attributes: T{ReduceParameters=if},N,V_reduceParameters

// -[Reduce evaluateOnCPUWithInputs:outputs:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x109cd7950

// -[Reduce initWithParameterDictionary:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd7e18

// -[Reduce outputShapesForInputShapes:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd8038

// -[Reduce setWeightData:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109cd8380

// -[Reduce encodeToCommandBuffer:inputs:outputs:error:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x109cd8388

// -[Reduce reducePipelineState]
// Type encoding: @16@0:8
// Implementation: 0x109cd8628

// -[Reduce setReducePipelineState:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd8630

// -[Reduce device]
// Type encoding: @16@0:8
// Implementation: 0x109cd8660

// -[Reduce setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd8668

// -[Reduce reduceParameters]
// Type encoding: {ReduceParameters=if}16@0:8
// Implementation: 0x109cd8698

// -[Reduce setReduceParameters:]
// Type encoding: v24@0:8{ReduceParameters=if}16
// Implementation: 0x109cd86a0

// -[Reduce .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109cd86a8

@end
