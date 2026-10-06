// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAARKitPointHandler
// Superclass: NSObject
// Address: 0x112bf9e28

@interface LSAARKitPointHandler


// -[LSAARKitPointHandler init]
// Type encoding: @16@0:8
// Implementation: 0x10adc1d44

// -[LSAARKitPointHandler getTrackedPoints]
// Type encoding: {unique_ptr<LS::World::TrackedPoints, std::default_delete<LS::World::TrackedPoints>>=^{TrackedPoints}}16@0:8
// Implementation: 0x10adc1dcc

// -[LSAARKitPointHandler updateARAnchors:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc1ea0

// -[LSAARKitPointHandler removeARAnchors:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adc21c8

// -[LSAARKitPointHandler createTrackedPoint:delegate:]
// Type encoding: v32@0:8{LSAObjCppPtrWrapper<const LS::World::TrackedPointParameters>=^{TrackedPointParameters}}16@24
// Implementation: 0x10adc2400

// -[LSAARKitPointHandler deleteTrackedPoint:delegate:]
// Type encoding: v28@0:8I16@20
// Implementation: 0x10adc26c0

// -[LSAARKitPointHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adc290c

// -[LSAARKitPointHandler .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adc294c

@end
