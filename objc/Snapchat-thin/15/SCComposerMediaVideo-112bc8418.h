// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMediaVideo
// Superclass: NSObject
// Address: 0x112bc8418

@interface SCComposerMediaVideo

// Property: asset; attributes: T@"AVAsset",R,N,V_asset
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMediaVideo initWithFileURL:videoImportServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108eabee8

// -[SCComposerMediaVideo getWidth]
// Type encoding: d16@0:8
// Implementation: 0x108eabfb8

// -[SCComposerMediaVideo getHeight]
// Type encoding: d16@0:8
// Implementation: 0x108eac024

// -[SCComposerMediaVideo getDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x108eac090

// -[SCComposerMediaVideo getMediaUrl]
// Type encoding: @16@0:8
// Implementation: 0x108eac0d8

// -[SCComposerMediaVideo getMp4DataWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108eac0e0

// -[SCComposerMediaVideo extractSegmentWithStartTimeMs:durationMs:callback:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x108eac158

// -[SCComposerMediaVideo dispose]
// Type encoding: v16@0:8
// Implementation: 0x108eac4f8

// -[SCComposerMediaVideo pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x108eac528

// -[SCComposerMediaVideo asset]
// Type encoding: @16@0:8
// Implementation: 0x108eac534

// -[SCComposerMediaVideo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108eac53c

@end
