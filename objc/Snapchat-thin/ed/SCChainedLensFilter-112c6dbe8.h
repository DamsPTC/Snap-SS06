// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChainedLensFilter
// Superclass: NSObject
// Address: 0x112c6dbe8

@interface SCChainedLensFilter

// Property: filter; attributes: T@"<SCLensFilterProtocol>",R,N,V_filter
// Property: nextFilter; attributes: T@"<SCLensFilterProtocol>",R,N,V_nextFilter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChainedLensFilter initWithFilter:nextFilter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c3edb0

// -[SCChainedLensFilter filterLenses:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c3eef4

// -[SCChainedLensFilter _traverseWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100c3ff78

// -[SCChainedLensFilter _count]
// Type encoding: Q16@0:8
// Implementation: 0x100c3fed8

// -[SCChainedLensFilter _arrayRepresentation]
// Type encoding: @16@0:8
// Implementation: 0x10b0dd2ec

// -[SCChainedLensFilter isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c3fe08

// -[SCChainedLensFilter filter]
// Type encoding: @16@0:8
// Implementation: 0x100c3eff8

// -[SCChainedLensFilter nextFilter]
// Type encoding: @16@0:8
// Implementation: 0x100c3f0d4

// -[SCChainedLensFilter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c40058

// +[SCChainedLensFilter chainedLensFilterWithFilters:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c3ec7c

@end
