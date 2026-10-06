// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHShapeGroup
// Superclass: SVGAttributedObject
// Address: 0x112a0e690

@interface GHShapeGroup

// Property: children; attributes: T@"NSArray",R,N,V_children
// Property: childDefinitions; attributes: T@"NSArray",&,N,V_childDefinitions
// Property: transform; attributes: T{CGAffineTransform=dddddd},R,N,Vtransform
// Property: hidden; attributes: TB,R,N
// Property: attributes; attributes: T@"NSDictionary",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GHShapeGroup hidden]
// Type encoding: B16@0:8
// Implementation: 0x104fba738

// -[GHShapeGroup calculateTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x104fba76c

// -[GHShapeGroup cloneWithOverridingDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fba90c

// -[GHShapeGroup setCloneTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x104fba9c0

// -[GHShapeGroup children]
// Type encoding: @16@0:8
// Implementation: 0x104fba9e0

// -[GHShapeGroup initWithDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fbb594

// -[GHShapeGroup calculatedHash]
// Type encoding: Q16@0:8
// Implementation: 0x104fbb65c

// -[GHShapeGroup isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104fbb6b4

// -[GHShapeGroup usesParentsCoordinates]
// Type encoding: B16@0:8
// Implementation: 0x104fbb78c

// -[GHShapeGroup getBoundingBoxWithSVGContext:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fbb854

// -[GHShapeGroup renderChildrenIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fbba60

// -[GHShapeGroup newClipMaskWithSVGContext:andObjectBox:]
// Type encoding: @56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x104fbbd54

// -[GHShapeGroup addToClipForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fbbe44

// -[GHShapeGroup addToClipPathForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fbc368

// -[GHShapeGroup getClippingTypeWithSVGContext:]
// Type encoding: I24@0:8@16
// Implementation: 0x104fbc4cc

// -[GHShapeGroup renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fbc608

// -[GHShapeGroup findRenderableObject:withSVGContext:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x104fbc60c

// -[GHShapeGroup addNamedObjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fbc7e0

// -[GHShapeGroup transform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x104fbc9f8

// -[GHShapeGroup childDefinitions]
// Type encoding: @16@0:8
// Implementation: 0x104fbca18

// -[GHShapeGroup setChildDefinitions:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fbca28

// -[GHShapeGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fbca68

@end
