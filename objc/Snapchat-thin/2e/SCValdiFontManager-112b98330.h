// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiFontManager
// Superclass: NSObject
// Address: 0x112b98330

@interface SCValdiFontManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiFontManager _lockFreeRegisterFontWithFontName:data:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x1080a1ff8

// -[SCValdiFontManager registerFontWithFontName:data:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x1080a21e0

// -[SCValdiFontManager _lockFreeModuleFontWithName:fontSize:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1080a227c

// -[SCValdiFontManager fontWithName:fontSize:legibilityWeight:]
// Type encoding: @40@0:8@16d24Q32
// Implementation: 0x1080a2464

// -[SCValdiFontManager defaultTraitCollection]
// Type encoding: @16@0:8
// Implementation: 0x1080a2840

// -[SCValdiFontManager shouldBypassContextForLegibilityWeight]
// Type encoding: B16@0:8
// Implementation: 0x1080a2908

// -[SCValdiFontManager setFontLoader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080a2958

// -[SCValdiFontManager addFontDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080a299c

// -[SCValdiFontManager removeFontDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080a2a04

// -[SCValdiFontManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080a2a44

@end
