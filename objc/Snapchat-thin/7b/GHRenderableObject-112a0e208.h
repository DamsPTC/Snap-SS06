// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHRenderableObject
// Superclass: SVGAttributedObject
// Address: 0x112a0e208

@interface GHRenderableObject

// Property: fillColor; attributes: T@"UIColor",&,N,V_fillColor
// Property: defaultFillColor; attributes: T@"NSString",R,N
// Property: transform; attributes: T{CGAffineTransform=dddddd},N,Vtransform
// Property: hidden; attributes: TB,R,N
// Property: attributes; attributes: T@"NSDictionary",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GHRenderableObject setupContext:withAttributes:withSVGContext:]
// Type encoding: v40@0:8^{CGContext=}16@24@32
// Implementation: 0x104fb7fec

// -[GHRenderableObject hidden]
// Type encoding: B16@0:8
// Implementation: 0x104fb8110

// -[GHRenderableObject addNamedObjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fb815c

// -[GHRenderableObject valueForStyleAttribute:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fb8274

// -[GHRenderableObject defaultFillColor]
// Type encoding: @16@0:8
// Implementation: 0x104fb82f0

// -[GHRenderableObject initWithDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fb834c

// -[GHRenderableObject renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fb8400

// -[GHRenderableObject addToClipForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fb8404

// -[GHRenderableObject addToClipPathForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fb8408

// -[GHRenderableObject getClippingTypeWithSVGContext:]
// Type encoding: I24@0:8@16
// Implementation: 0x104fb840c

// -[GHRenderableObject getBoundingBoxWithSVGContext:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fb8414

// -[GHRenderableObject hitTest:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x104fb8428

// -[GHRenderableObject findRenderableObject:withSVGContext:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x104fb8430

// -[GHRenderableObject transform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x104fb8468

// -[GHRenderableObject setTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x104fb8488

// -[GHRenderableObject fillColor]
// Type encoding: @16@0:8
// Implementation: 0x104fb84a8

// -[GHRenderableObject setFillColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fb84b8

// -[GHRenderableObject .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fb84f8

// +[GHRenderableObject setupContext:withAttributes:withSVGContext:]
// Type encoding: v40@0:8^{CGContext=}16@24@32
// Implementation: 0x104fb7b74

// +[GHRenderableObject boundingBoxForRenderableObject:withSVGContext:givenParentObjectsBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}64@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fb7e08

@end
