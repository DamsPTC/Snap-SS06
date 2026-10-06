// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHTextArea
// Superclass: GHText
// Address: 0x112a0e140

@interface GHTextArea

// Property: frameSetter; attributes: T^{__CTFramesetter=},R,N
// Property: frame; attributes: T^{__CTFrame=},R,N
// Property: size; attributes: T{CGSize=dd},R,N
// Property: box; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: definition; attributes: T@"NSDictionary",R,N,V_definition
// Property: text; attributes: T@"NSAttributedString",R,N,V_text

// -[GHTextArea initWithDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fb4e88

// -[GHTextArea calculatedHash]
// Type encoding: Q16@0:8
// Implementation: 0x104fb5788

// -[GHTextArea isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104fb57fc

// -[GHTextArea cleanLineEndings]
// Type encoding: B16@0:8
// Implementation: 0x104fb58d4

// -[GHTextArea text]
// Type encoding: @16@0:8
// Implementation: 0x104fb5940

// -[GHTextArea frameSetter]
// Type encoding: ^{__CTFramesetter=}16@0:8
// Implementation: 0x104fb5a38

// -[GHTextArea size]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x104fb5a94

// -[GHTextArea frame]
// Type encoding: ^{__CTFrame=}16@0:8
// Implementation: 0x104fb5c38

// -[GHTextArea children]
// Type encoding: @16@0:8
// Implementation: 0x104fb5cbc

// -[GHTextArea renderIntoContext:withSVGContext:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x104fb5cc4

// -[GHTextArea box]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x104fb5f7c

// -[GHTextArea getBoundingBoxWithSVGContext:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fb605c

// -[GHTextArea dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104fb6060

// -[GHTextArea definition]
// Type encoding: @16@0:8
// Implementation: 0x104fb60c8

// -[GHTextArea .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fb60d8

// +[GHTextArea attributedStringFromTSpan:optimize:preserveLineEndings:attributes:baseFont:baseFontDescriptor:]
// Type encoding: @56@0:8@16B24B28@32^{__CTFont=}40^{__CTFontDescriptor=}48
// Implementation: 0x104fb4f10

@end
