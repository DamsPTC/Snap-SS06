// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHTextLine
// Superclass: GHAttributedObject
// Address: 0x112a0e1b8

@interface GHTextLine

// Property: lineRef; attributes: T^{__CTLine=},R,N,V_lineRef
// Property: transform; attributes: T{CGAffineTransform=dddddd},R,N,V_transform
// Property: fillDescription; attributes: T@"NSString",R,N,VfillDescription
// Property: strokeDescription; attributes: T@"NSString",R,N,VstrokeDescription
// Property: strokeWidth; attributes: Td,R,N,VstrokeWidth
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GHTextLine initWithAttributes:andTextLine:]
// Type encoding: @32@0:8@16^{__CTLine=}24
// Implementation: 0x104fb651c

// -[GHTextLine calculatedHash]
// Type encoding: Q16@0:8
// Implementation: 0x104fb6650

// -[GHTextLine isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104fb66b0

// -[GHTextLine getBoundingBoxWithSVGContext:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fb676c

// -[GHTextLine newPath]
// Type encoding: ^{CGPath=}16@0:8
// Implementation: 0x104fb6874

// -[GHTextLine glyphTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x104fb6b78

// -[GHTextLine addGlyphsToArray:withSVGContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fb6e40

// -[GHTextLine addGlyphsToContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fb71bc

// -[GHTextLine renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fb7378

// -[GHTextLine getClippingTypeWithSVGContext:]
// Type encoding: I24@0:8@16
// Implementation: 0x104fb764c

// -[GHTextLine dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104fb7654

// -[GHTextLine fillDescription]
// Type encoding: @16@0:8
// Implementation: 0x104fb76a8

// -[GHTextLine strokeDescription]
// Type encoding: @16@0:8
// Implementation: 0x104fb76b8

// -[GHTextLine strokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x104fb76c8

// -[GHTextLine lineRef]
// Type encoding: ^{__CTLine=}16@0:8
// Implementation: 0x104fb76d8

// -[GHTextLine transform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x104fb76e8

// -[GHTextLine .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fb7708

@end
