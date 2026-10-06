// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTrackedImage
// Superclass: NSObject
// Address: 0x112cb5448

@interface SCVideoTrackedImage

// Property: normalizedSize; attributes: T{CGSize=dd},R,N,V_normalizedSize
// Property: image; attributes: T@"UIImage",R,C,N,V_image
// Property: transform; attributes: T@"SCVideoTrackedImageTransform",R,C,N,V_transform

// -[SCVideoTrackedImage initWithFullSizeImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x109173b10

// -[SCVideoTrackedImage initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b73d2e0

// -[SCVideoTrackedImage initWithNormalizedSize:image:transform:]
// Type encoding: @48@0:8{CGSize=dd}16@32@40
// Implementation: 0x10b73d3c4

// -[SCVideoTrackedImage copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b73d484

// -[SCVideoTrackedImage encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b73d4a8

// -[SCVideoTrackedImage hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b73d544

// -[SCVideoTrackedImage isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b73d5fc

// -[SCVideoTrackedImage normalizedSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b73d6b8

// -[SCVideoTrackedImage image]
// Type encoding: @16@0:8
// Implementation: 0x10b73d6c0

// -[SCVideoTrackedImage transform]
// Type encoding: @16@0:8
// Implementation: 0x10b73d6c8

// -[SCVideoTrackedImage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b73d6d0

@end
