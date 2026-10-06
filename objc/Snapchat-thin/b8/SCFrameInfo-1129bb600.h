// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFrameInfo
// Superclass: NSObject
// Address: 0x1129bb600

@interface SCFrameInfo

// Property: description; attributes: T@"NSString",N,R

// -[SCFrameInfo description]
// Type encoding: @16@0:8
// Implementation: 0x104473c90

// -[SCFrameInfo init]
// Type encoding: @16@0:8
// Implementation: 0x104473cb4

// -[SCFrameInfo copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104473cfc

// -[SCFrameInfo matchDidDisplayFirstFrame:didDisplayNewFrame:didChangeDisplayState:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x104473d20

// +[SCFrameInfo didDisplayFirstFrameWithState:timestamp:hasUIStabilized:]
// Type encoding: @36@0:8q16d24B32
// Implementation: 0x100c7b490

// +[SCFrameInfo didDisplayNewFrameWithState:timestamp:wasFrameLate:hasUIStabilized:]
// Type encoding: @40@0:8q16d24B32B36
// Implementation: 0x104473d00

// +[SCFrameInfo didChangeDisplayStateWithState:]
// Type encoding: @24@0:8q16
// Implementation: 0x1000b60dc

@end
