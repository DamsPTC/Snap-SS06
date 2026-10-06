// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHShape
// Superclass: GHRenderableObject
// Address: 0x112a0e370

@interface GHShape

// Property: strokeColor; attributes: T@"NSString",R,N,V_strokeColor
// Property: isClosed; attributes: TB,R,N,VisClosed
// Property: quartzPath; attributes: T^{CGPath=},R,N,V_quartzPath

// -[GHShape newQuartzPath]
// Type encoding: ^{CGPath=}16@0:8
// Implementation: 0x104fb8c48

// -[GHShape setupContext:withAttributes:withSVGContext:]
// Type encoding: v40@0:8^{CGContext=}16@24@32
// Implementation: 0x104fb8c50

// -[GHShape addPathToQuartzContext:]
// Type encoding: v24@0:8^{CGContext=}16
// Implementation: 0x104fb8cd8

// -[GHShape quartzPath]
// Type encoding: ^{CGPath=}16@0:8
// Implementation: 0x104fb8d00

// -[GHShape strokeColor]
// Type encoding: @16@0:8
// Implementation: 0x104fb8d38

// -[GHShape isClosed]
// Type encoding: B16@0:8
// Implementation: 0x104fb8d44

// -[GHShape hitTest:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x104fb8d4c

// -[GHShape getBoundingBoxWithSVGContext:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fb8dc4

// -[GHShape renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fb8e94

// -[GHShape addToClipForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fb95d8

// -[GHShape addToClipPathForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fb967c

// -[GHShape getClippingTypeWithSVGContext:]
// Type encoding: I24@0:8@16
// Implementation: 0x104fb96f4

// -[GHShape dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104fb9748

// -[GHShape .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fb9798

@end
