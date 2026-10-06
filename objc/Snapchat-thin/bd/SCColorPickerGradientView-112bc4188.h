// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCColorPickerGradientView
// Superclass: UIView
// Address: 0x112bc4188

@interface SCColorPickerGradientView

// Property: gradientView; attributes: T@"SCGradientView",&,N,V_gradientView
// Property: gradientViewForColorLookup; attributes: T@"SCGradientView",&,N,V_gradientViewForColorLookup
// Property: shapeMaskView; attributes: T@"SIGShapeView",&,N,V_shapeMaskView
// Property: currentColors; attributes: T@"NSArray",&,N,V_currentColors
// Property: currentCGColors; attributes: T@"NSArray",&,N,V_currentCGColors
// Property: adjustedBrightness; attributes: Td,N,V_adjustedBrightness
// Property: adjustedSaturation; attributes: Td,N,V_adjustedSaturation
// Property: adjustedAlpha; attributes: Td,N,V_adjustedAlpha
// Property: savedHue; attributes: Td,N,V_savedHue
// Property: useColorPickerV2; attributes: TB,N,V_useColorPickerV2
// Property: animateForCompact; attributes: TB,N,V_animateForCompact
// Property: maskPath; attributes: T@"UIBezierPath",&,N,V_maskPath
// Property: adjustingColorEnabled; attributes: TB,N,GisAdjustingColorEnabled,V_adjustingColorEnabled

// -[SCColorPickerGradientView initWithPaletteModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e40168

// -[SCColorPickerGradientView _setupColorsFromPalette:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e401dc

// -[SCColorPickerGradientView _setupGradientView]
// Type encoding: v16@0:8
// Implementation: 0x108e40798

// -[SCColorPickerGradientView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e40ac4

// -[SCColorPickerGradientView pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x108e40bd8

// -[SCColorPickerGradientView setMaskPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e40c10

// -[SCColorPickerGradientView setAdjustingColorEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e40e18

// -[SCColorPickerGradientView adjustSaturation:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e40e68

// -[SCColorPickerGradientView adjustBrightness:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e40e78

// -[SCColorPickerGradientView gradientColorForLocation:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x108e40e88

// -[SCColorPickerGradientView locationForColor:]
// Type encoding: {CGPoint=dd}24@0:8@16
// Implementation: 0x108e4102c

// -[SCColorPickerGradientView _adjustColors]
// Type encoding: v16@0:8
// Implementation: 0x108e4113c

// -[SCColorPickerGradientView reloadColorsFromPalette:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e413d8

// -[SCColorPickerGradientView animateForCompact]
// Type encoding: B16@0:8
// Implementation: 0x108e41534

// -[SCColorPickerGradientView setAnimateForCompact:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e41544

// -[SCColorPickerGradientView maskPath]
// Type encoding: @16@0:8
// Implementation: 0x108e41554

// -[SCColorPickerGradientView isAdjustingColorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108e41564

// -[SCColorPickerGradientView gradientView]
// Type encoding: @16@0:8
// Implementation: 0x108e41574

// -[SCColorPickerGradientView setGradientView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e41584

// -[SCColorPickerGradientView gradientViewForColorLookup]
// Type encoding: @16@0:8
// Implementation: 0x108e415c4

// -[SCColorPickerGradientView setGradientViewForColorLookup:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e415d4

// -[SCColorPickerGradientView shapeMaskView]
// Type encoding: @16@0:8
// Implementation: 0x108e41614

// -[SCColorPickerGradientView setShapeMaskView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e41624

// -[SCColorPickerGradientView currentColors]
// Type encoding: @16@0:8
// Implementation: 0x108e41664

// -[SCColorPickerGradientView setCurrentColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e41674

// -[SCColorPickerGradientView currentCGColors]
// Type encoding: @16@0:8
// Implementation: 0x108e416b4

// -[SCColorPickerGradientView setCurrentCGColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e416c4

// -[SCColorPickerGradientView adjustedBrightness]
// Type encoding: d16@0:8
// Implementation: 0x108e41704

// -[SCColorPickerGradientView setAdjustedBrightness:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e41714

// -[SCColorPickerGradientView adjustedSaturation]
// Type encoding: d16@0:8
// Implementation: 0x108e41724

// -[SCColorPickerGradientView setAdjustedSaturation:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e41734

// -[SCColorPickerGradientView adjustedAlpha]
// Type encoding: d16@0:8
// Implementation: 0x108e41744

// -[SCColorPickerGradientView setAdjustedAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e41754

// -[SCColorPickerGradientView savedHue]
// Type encoding: d16@0:8
// Implementation: 0x108e41764

// -[SCColorPickerGradientView setSavedHue:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e41774

// -[SCColorPickerGradientView useColorPickerV2]
// Type encoding: B16@0:8
// Implementation: 0x108e41784

// -[SCColorPickerGradientView setUseColorPickerV2:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e41794

// -[SCColorPickerGradientView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e417a4

@end
