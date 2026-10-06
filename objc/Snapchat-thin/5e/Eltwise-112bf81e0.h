// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: Eltwise
// Superclass: NSObject
// Address: 0x112bf81e0

@interface Eltwise

// Property: eltwisePipelineState; attributes: T@"<MTLComputePipelineState>",&,N,V_eltwisePipelineState
// Property: device; attributes: T@"<MTLDevice>",&,N,V_device
// Property: eltwiseParameters; attributes: T{EltwiseParameters=iBiii},N,V_eltwiseParameters

// -[Eltwise evaluateOnCPUWithInputs:outputs:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x109cd5b00

// -[Eltwise initWithParameterDictionary:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd60c4

// -[Eltwise outputShapesForInputShapes:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd62e4

// -[Eltwise setWeightData:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109cd6478

// -[Eltwise encodeToCommandBuffer:inputs:outputs:error:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x109cd6480

// -[Eltwise eltwisePipelineState]
// Type encoding: @16@0:8
// Implementation: 0x109cd6760

// -[Eltwise setEltwisePipelineState:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd6768

// -[Eltwise device]
// Type encoding: @16@0:8
// Implementation: 0x109cd6798

// -[Eltwise setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd67a0

// -[Eltwise eltwiseParameters]
// Type encoding: {EltwiseParameters=iBiii}16@0:8
// Implementation: 0x109cd67d0

// -[Eltwise setEltwiseParameters:]
// Type encoding: v36@0:8{EltwiseParameters=iBiii}16
// Implementation: 0x109cd67e4

// -[Eltwise .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109cd67f8

@end
