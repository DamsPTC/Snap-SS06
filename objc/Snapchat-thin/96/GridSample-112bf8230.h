// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GridSample
// Superclass: NSObject
// Address: 0x112bf8230

@interface GridSample

// Property: gridSamplePipelineState; attributes: T@"<MTLComputePipelineState>",&,N,V_gridSamplePipelineState
// Property: device; attributes: T@"<MTLDevice>",&,N,V_device
// Property: layerPadding; attributes: T@"NSString",&,N,V_layerPadding
// Property: gridSampleParameters; attributes: T{GridSampleParameters=ii},N,V_gridSampleParameters
// Property: layerResize; attributes: T@"NSString",&,N,V_layerResize

// -[GridSample evaluateOnCPUWithInputs:outputs:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x109cd6858

// -[GridSample initWithParameterDictionary:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd6f8c

// -[GridSample outputShapesForInputShapes:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x109cd71cc

// -[GridSample setWeightData:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109cd7584

// -[GridSample encodeToCommandBuffer:inputs:outputs:error:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x109cd758c

// -[GridSample gridSamplePipelineState]
// Type encoding: @16@0:8
// Implementation: 0x109cd7818

// -[GridSample setGridSamplePipelineState:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd7820

// -[GridSample device]
// Type encoding: @16@0:8
// Implementation: 0x109cd7850

// -[GridSample setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd7858

// -[GridSample layerPadding]
// Type encoding: @16@0:8
// Implementation: 0x109cd7888

// -[GridSample setLayerPadding:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd7890

// -[GridSample gridSampleParameters]
// Type encoding: {GridSampleParameters=ii}16@0:8
// Implementation: 0x109cd78c0

// -[GridSample setGridSampleParameters:]
// Type encoding: v24@0:8{GridSampleParameters=ii}16
// Implementation: 0x109cd78c8

// -[GridSample layerResize]
// Type encoding: @16@0:8
// Implementation: 0x109cd78d0

// -[GridSample setLayerResize:]
// Type encoding: v24@0:8@16
// Implementation: 0x109cd78d8

// -[GridSample .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109cd7908

@end
