// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMinervaImageProcessingExtendParams
// Superclass: NSObject
// Address: 0x112bb2258

@interface SCMinervaImageProcessingExtendParams

// Property: originalImageSize; attributes: T{CGSize=dd},R,N,V_originalImageSize
// Property: leftSideDelta; attributes: Tq,R,N,V_leftSideDelta
// Property: rightSideDelta; attributes: Tq,R,N,V_rightSideDelta
// Property: topSideDelta; attributes: Tq,R,N,V_topSideDelta
// Property: bottomSideDelta; attributes: Tq,R,N,V_bottomSideDelta
// Property: downscaleImage; attributes: TB,R,N,V_downscaleImage

// -[SCMinervaImageProcessingExtendParams initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bb276c

// -[SCMinervaImageProcessingExtendParams initWithOriginalImageSize:leftSideDelta:rightSideDelta:topSideDelta:bottomSideDelta:downscaleImage:]
// Type encoding: @68@0:8{CGSize=dd}16q32q40q48q56B64
// Implementation: 0x108bb2864

// -[SCMinervaImageProcessingExtendParams copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108bb28e8

// -[SCMinervaImageProcessingExtendParams encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb290c

// -[SCMinervaImageProcessingExtendParams hash]
// Type encoding: Q16@0:8
// Implementation: 0x108bb29e4

// -[SCMinervaImageProcessingExtendParams isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108bb2a90

// -[SCMinervaImageProcessingExtendParams originalImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108bb2b70

// -[SCMinervaImageProcessingExtendParams leftSideDelta]
// Type encoding: q16@0:8
// Implementation: 0x108bb2b78

// -[SCMinervaImageProcessingExtendParams rightSideDelta]
// Type encoding: q16@0:8
// Implementation: 0x108bb2b80

// -[SCMinervaImageProcessingExtendParams topSideDelta]
// Type encoding: q16@0:8
// Implementation: 0x108bb2b88

// -[SCMinervaImageProcessingExtendParams bottomSideDelta]
// Type encoding: q16@0:8
// Implementation: 0x108bb2b90

// -[SCMinervaImageProcessingExtendParams downscaleImage]
// Type encoding: B16@0:8
// Implementation: 0x108bb2b98

@end
