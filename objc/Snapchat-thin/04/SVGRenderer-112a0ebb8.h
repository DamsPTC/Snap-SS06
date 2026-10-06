// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SVGRenderer
// Superclass: SVGParser
// Address: 0x112a0ebb8

@interface SVGRenderer

// Property: colorMap; attributes: T@"NSMutableDictionary",&,N,V_colorMap
// Property: namedObjects; attributes: T@"NSDictionary",&,N,V_namedObjects
// Property: currentColor; attributes: T@"UIColor",&,N,V_currentColor
// Property: isoLanguage; attributes: T@"NSString",&,N,V_isoLanguage
// Property: contents; attributes: T@"GHShapeGroup",R,N,V_contents
// Property: viewRect; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: transform; attributes: T{CGAffineTransform=dddddd},R,N,V_transform
// Property: hidden; attributes: TB,R,N
// Property: attributes; attributes: T@"NSDictionary",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SVGRenderer initWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fcb028

// -[SVGRenderer initWithContentsOfURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fcb100

// -[SVGRenderer hidden]
// Type encoding: B16@0:8
// Implementation: 0x104fcb1d8

// -[SVGRenderer explicitLineScaling]
// Type encoding: d16@0:8
// Implementation: 0x104fcb214

// -[SVGRenderer attributes]
// Type encoding: @16@0:8
// Implementation: 0x104fcb21c

// -[SVGRenderer contents]
// Type encoding: @16@0:8
// Implementation: 0x104fcb260

// -[SVGRenderer namedObjects]
// Type encoding: @16@0:8
// Implementation: 0x104fcb308

// -[SVGRenderer setCurrentColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fcb3a4

// -[SVGRenderer colorForSVGColorString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fcb3dc

// -[SVGRenderer viewRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x104fcb4b8

// -[SVGRenderer objectAtURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fcb654

// -[SVGRenderer objectNamed:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fcb710

// -[SVGRenderer renderIntoContext:]
// Type encoding: v24@0:8^{CGContext=}16
// Implementation: 0x104fcb77c

// -[SVGRenderer findRenderableObject:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x104fcb7c0

// -[SVGRenderer renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fcb824

// -[SVGRenderer findRenderableObject:withSVGContext:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x104fcb8c0

// -[SVGRenderer addToClipForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fcb944

// -[SVGRenderer addToClipPathForContext:withSVGContext:objectBoundingBox:]
// Type encoding: v64@0:8^{CGContext=}16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fcb948

// -[SVGRenderer getClippingTypeWithSVGContext:]
// Type encoding: I24@0:8@16
// Implementation: 0x104fcb9d8

// -[SVGRenderer getBoundingBoxWithSVGContext:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fcba3c

// -[SVGRenderer transform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x104fcba40

// -[SVGRenderer colorMap]
// Type encoding: @16@0:8
// Implementation: 0x104fcba60

// -[SVGRenderer setColorMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fcba70

// -[SVGRenderer setNamedObjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fcbab0

// -[SVGRenderer currentColor]
// Type encoding: @16@0:8
// Implementation: 0x104fcbaf0

// -[SVGRenderer isoLanguage]
// Type encoding: @16@0:8
// Implementation: 0x104fcbb00

// -[SVGRenderer setIsoLanguage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fcbb10

// -[SVGRenderer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fcbb50

// +[SVGRenderer rendererQueue]
// Type encoding: @16@0:8
// Implementation: 0x104fcaf8c

// +[SVGRenderer defaultAttributes]
// Type encoding: @16@0:8
// Implementation: 0x104fcb024

@end
