// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserFeatureLauncher
// Superclass: NSObject
// Address: 0x112bf52d8

@interface SCUserFeatureLauncher

// Property: isLaunched; attributes: TB,R,N
// Property: scope; attributes: T@,R,N

// -[SCUserFeatureLauncher initWithScopeExposer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10050e970

// -[SCUserFeatureLauncher launchFeatureWithScope:owner:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091edd5c

// -[SCUserFeatureLauncher isLaunched]
// Type encoding: B16@0:8
// Implementation: 0x1091ede30

// -[SCUserFeatureLauncher scope]
// Type encoding: @16@0:8
// Implementation: 0x1091ede78

// -[SCUserFeatureLauncher endLaunchedFeature]
// Type encoding: v16@0:8
// Implementation: 0x1091edeb8

// -[SCUserFeatureLauncher endLaunchedFeature:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091edec0

// -[SCUserFeatureLauncher detectedDeallocationOfObjectAssociatedWithScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091edf90

// -[SCUserFeatureLauncher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091edfc4

@end
