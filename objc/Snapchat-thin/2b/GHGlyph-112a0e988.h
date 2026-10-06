// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHGlyph
// Superclass: GHAttributedObject
// Address: 0x112a0e988

@interface GHGlyph

// Property: fillDescription; attributes: T@"NSString",&,N,V_fillDescription
// Property: strokeDescription; attributes: T@"NSString",&,N,V_strokeDescription
// Property: rotationAngleInRadians; attributes: Td,N,V_rotationAngleInRadians
// Property: strokeWidth; attributes: Td,N,V_strokeWidth
// Property: font; attributes: T^{__CTFont=},R,N,V_font
// Property: glyph; attributes: TS,R,N,V_glyph
// Property: textAttributes; attributes: T@"NSDictionary",R,N,V_textAttributes
// Property: offset; attributes: T{CGPoint=dd},R,N,V_offset
// Property: renderPoint; attributes: T{CGPoint=dd},R,N,V_renderPoint
// Property: width; attributes: Td,R,N,V_width
// Property: transform; attributes: T{CGAffineTransform=dddddd},R,N,V_transform
// Property: boundingBox; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GHGlyph initWithDictionary:textAttributes:font:glyph:transform:offset:andWidth:]
// Type encoding: @116@0:8@16@24^{__CTFont=}32S40{CGAffineTransform=dddddd}44{CGPoint=dd}92d108
// Implementation: 0x104fc55b8

// -[GHGlyph calculatedHash]
// Type encoding: Q16@0:8
// Implementation: 0x104fc5788

// -[GHGlyph boundingBox]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x104fc5910

// -[GHGlyph isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104fc5948

// -[GHGlyph dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104fc5abc

// -[GHGlyph setRenderPoint:withPerpendicular:]
// Type encoding: v48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x104fc5b10

// -[GHGlyph isPointInBoundingBox:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x104fc5e34

// -[GHGlyph addPathToContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fc5fd0

// -[GHGlyph addGlyphsToArray:withSVGContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fc6130

// -[GHGlyph addGlyphsToContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fc6140

// -[GHGlyph renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fc6144

// -[GHGlyph font]
// Type encoding: ^{__CTFont=}16@0:8
// Implementation: 0x104fc6148

// -[GHGlyph glyph]
// Type encoding: S16@0:8
// Implementation: 0x104fc6158

// -[GHGlyph textAttributes]
// Type encoding: @16@0:8
// Implementation: 0x104fc6168

// -[GHGlyph offset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x104fc6178

// -[GHGlyph renderPoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x104fc618c

// -[GHGlyph rotationAngleInRadians]
// Type encoding: d16@0:8
// Implementation: 0x104fc61a0

// -[GHGlyph setRotationAngleInRadians:]
// Type encoding: v24@0:8d16
// Implementation: 0x104fc61b0

// -[GHGlyph width]
// Type encoding: d16@0:8
// Implementation: 0x104fc61c0

// -[GHGlyph transform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x104fc61d0

// -[GHGlyph fillDescription]
// Type encoding: @16@0:8
// Implementation: 0x104fc61f0

// -[GHGlyph setFillDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fc6200

// -[GHGlyph strokeDescription]
// Type encoding: @16@0:8
// Implementation: 0x104fc6240

// -[GHGlyph setStrokeDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fc6250

// -[GHGlyph strokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x104fc6290

// -[GHGlyph setStrokeWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x104fc62a0

// -[GHGlyph .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fc62b0

// +[GHGlyph positionGlyphs:alongCGPath:]
// Type encoding: v32@0:8@16^{CGPath=}24
// Implementation: 0x104fc4d94

// +[GHGlyph rectForGlyphs:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fc5b60

@end
