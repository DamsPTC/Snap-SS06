// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapZoomThresholdTracker
// Superclass: NSObject
// Address: 0x112aac3b8

@interface SCMapZoomThresholdTracker

// Property: zoomThresholdCrossingObservable; attributes: T@"SCObservable",R,N,V_zoomThresholdCrossingObservable

// -[SCMapZoomThresholdTracker initWithViewport:zoomThreshold:zoomTolerance:]
// Type encoding: @40@0:8@16d24d32
// Implementation: 0x105f23774

// -[SCMapZoomThresholdTracker _onViewportChange]
// Type encoding: v16@0:8
// Implementation: 0x105f239ec

// -[SCMapZoomThresholdTracker _onViewportChangeWithoutTolerance]
// Type encoding: v16@0:8
// Implementation: 0x105f23acc

// -[SCMapZoomThresholdTracker _publishLower:toHigher:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x105f23b6c

// -[SCMapZoomThresholdTracker _publishHigher:toLower:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x105f23bb0

// -[SCMapZoomThresholdTracker _calculateThresholds]
// Type encoding: v16@0:8
// Implementation: 0x105f23c00

// -[SCMapZoomThresholdTracker zoomThresholdCrossingObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f23c24

// -[SCMapZoomThresholdTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f23c2c

@end
