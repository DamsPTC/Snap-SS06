// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewDependencyLoadingStates
// Superclass: NSObject
// Address: 0x112b878c8

@interface SCPreviewDependencyLoadingStates

// Property: delegate; attributes: T@"<SCPreviewDependencyLoadingStatesDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewDependencyLoadingStates initWithUserSession:configuration:geoFilterProvider:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107e38e08

// -[SCPreviewDependencyLoadingStates setState:forDependency:]
// Type encoding: B32@0:8Q16Q24
// Implementation: 0x107e39414

// -[SCPreviewDependencyLoadingStates stateForType:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x107e3954c

// -[SCPreviewDependencyLoadingStates allDependenciesLoaded]
// Type encoding: B16@0:8
// Implementation: 0x107e39628

// -[SCPreviewDependencyLoadingStates delegate]
// Type encoding: @16@0:8
// Implementation: 0x107e39734

// -[SCPreviewDependencyLoadingStates setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3974c

// -[SCPreviewDependencyLoadingStates .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e39758

@end
