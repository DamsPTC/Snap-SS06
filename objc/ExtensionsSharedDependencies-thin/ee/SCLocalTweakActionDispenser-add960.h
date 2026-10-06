// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocalTweakActionDispenser
// Superclass: NSObject
// Address: 0xadd960

@interface SCLocalTweakActionDispenser


// -[SCLocalTweakActionDispenser initWithTweakStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x607098

// -[SCLocalTweakActionDispenser dispenseLocalTweakActionWithCategory:collection:name:action:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x6070b0

// -[SCLocalTweakActionDispenser _addAction:category:collection:name:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x6070b8

// -[SCLocalTweakActionDispenser _removeAction:category:collection:name:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x6070bc

// -[SCLocalTweakActionDispenser _tweakDidFireForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x6070c0

// -[SCLocalTweakActionDispenser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x6070c4

// +[SCLocalTweakActionDispenser shared]
// Type encoding: @16@0:8
// Implementation: 0x607090

@end
