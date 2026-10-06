// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCZoomingState
// Superclass: NSObject
// Address: 0x112ad0718

@interface SCZoomingState

// Property: defaultFactor; attributes: Td,R,N,V_defaultFactor
// Property: effectiveScale; attributes: Td,R,N
// Property: initialScale; attributes: Td,N,V_initialScale
// Property: linearScale; attributes: Td,N,V_linearScale
// Property: exponentialScale; attributes: Td,N,V_exponentialScale
// Property: totalOffsetForExpScale; attributes: Td,N,V_totalOffsetForExpScale

// -[SCZoomingState init]
// Type encoding: @16@0:8
// Implementation: 0x1061af398

// -[SCZoomingState initWithDefaultFactor:]
// Type encoding: @24@0:8d16
// Implementation: 0x1061af3a0

// -[SCZoomingState reset]
// Type encoding: v16@0:8
// Implementation: 0x1061af400

// -[SCZoomingState effectiveScale]
// Type encoding: d16@0:8
// Implementation: 0x1061af41c

// -[SCZoomingState setLinearScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061af428

// -[SCZoomingState setExponentialScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061af434

// -[SCZoomingState setTotalOffsetForExpScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061af470

// -[SCZoomingState _calculateExponentialScaleWithRelativeOffset:]
// Type encoding: d24@0:8d16
// Implementation: 0x1061af494

// -[SCZoomingState _calculateRelativeOffsetWithExponentialScale:]
// Type encoding: d24@0:8d16
// Implementation: 0x1061af4d8

// -[SCZoomingState _scaleChangeForOffset:]
// Type encoding: d24@0:8d16
// Implementation: 0x1061af538

// -[SCZoomingState _clampScale:]
// Type encoding: v24@0:8^d16
// Implementation: 0x1061af54c

// -[SCZoomingState defaultFactor]
// Type encoding: d16@0:8
// Implementation: 0x1061af5cc

// -[SCZoomingState initialScale]
// Type encoding: d16@0:8
// Implementation: 0x1061af5d4

// -[SCZoomingState setInitialScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061af5dc

// -[SCZoomingState linearScale]
// Type encoding: d16@0:8
// Implementation: 0x1061af5e4

// -[SCZoomingState exponentialScale]
// Type encoding: d16@0:8
// Implementation: 0x1061af5ec

// -[SCZoomingState totalOffsetForExpScale]
// Type encoding: d16@0:8
// Implementation: 0x1061af5f4

@end
