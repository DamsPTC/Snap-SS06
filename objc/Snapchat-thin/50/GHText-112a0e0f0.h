// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHText
// Superclass: GHRenderableObject
// Address: 0x112a0e0f0

@interface GHText

// Property: fontDescriptor; attributes: T^{__CTFontDescriptor=},R,N,V_fontDescriptor
// Property: fontRef; attributes: T^{__CTFont=},R,N,V_fontRef
// Property: children; attributes: T@"NSArray",R,N,V_children
// Property: contents; attributes: T@"NSArray",R,N,V_contents
// Property: fillDescription; attributes: T@"NSString",R,N,V_fillDescription
// Property: strokeDescription; attributes: T@"NSString",R,N,V_strokeDescription
// Property: strokeWidth; attributes: Td,R,N,V_strokeWidth
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GHText cleanLineEndings]
// Type encoding: B16@0:8
// Implementation: 0x104fb30bc

// -[GHText fontDescriptor]
// Type encoding: ^{__CTFontDescriptor=}16@0:8
// Implementation: 0x104fb30c4

// -[GHText fontRef]
// Type encoding: ^{__CTFont=}16@0:8
// Implementation: 0x104fb3134

// -[GHText children]
// Type encoding: @16@0:8
// Implementation: 0x104fb3188

// -[GHText addGlyphsToArray:withSVGContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fb3ba4

// -[GHText initWithDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fb3cd4

// -[GHText calculatedHash]
// Type encoding: Q16@0:8
// Implementation: 0x104fb3e2c

// -[GHText isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104fb3ea0

// -[GHText renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fb3fd0

// -[GHText getBoundingBoxWithSVGContext:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fb4a90

// -[GHText getClippingTypeWithSVGContext:]
// Type encoding: I24@0:8@16
// Implementation: 0x104fb4cac

// -[GHText setupFontDescriptorWithBaseDescriptor:andBaseFont:]
// Type encoding: v32@0:8^{__CTFontDescriptor=}16^{__CTFont=}24
// Implementation: 0x104fb4cb4

// -[GHText dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104fb4d80

// -[GHText contents]
// Type encoding: @16@0:8
// Implementation: 0x104fb4de8

// -[GHText fillDescription]
// Type encoding: @16@0:8
// Implementation: 0x104fb4df8

// -[GHText strokeDescription]
// Type encoding: @16@0:8
// Implementation: 0x104fb4e08

// -[GHText strokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x104fb4e18

// -[GHText .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fb4e28

@end
