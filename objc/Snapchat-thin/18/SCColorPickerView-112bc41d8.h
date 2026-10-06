// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCColorPickerView
// Superclass: UIView
// Address: 0x112bc41d8

@interface SCColorPickerView

// Property: heightExpanded; attributes: TB,N,GisHeightExpanded,V_heightExpanded
// Property: colorLocked; attributes: TB,N,GisColorLocked,V_colorLocked
// Property: delegate; attributes: T@"<SCColorPickerViewDelegate>",W,N,V_delegate
// Property: dropletOriginY; attributes: Td,R,N,V_dropletOriginY
// Property: dropletView; attributes: T@"SCColorPickerDropletView",R,N,V_dropletView

// -[SCColorPickerView initWithColorPickerVersion:paletteType:orientation:]
// Type encoding: @40@0:8Q16Q24Q32
// Implementation: 0x108e41824

// -[SCColorPickerView _setupViewWithColorPickerVersion:paletteType:orientation:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x108e41908

// -[SCColorPickerView _createPaletteSwitchButton]
// Type encoding: v16@0:8
// Implementation: 0x108e41cc0

// -[SCColorPickerView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108e41e34

// -[SCColorPickerView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e41ea0

// -[SCColorPickerView longPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e42288

// -[SCColorPickerView _stateBeganGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e423c8

// -[SCColorPickerView _stateChangedGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e424f0

// -[SCColorPickerView _stateEndedGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e426fc

// -[SCColorPickerView moveDropletToCenter]
// Type encoding: @16@0:8
// Implementation: 0x108e4293c

// -[SCColorPickerView moveDropletToColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e429e0

// -[SCColorPickerView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e42ab8

// -[SCColorPickerView _animatePathToDefault]
// Type encoding: v16@0:8
// Implementation: 0x108e42b90

// -[SCColorPickerView _updatePathsForLocation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108e42d24

// -[SCColorPickerView _pathForLocation:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x108e42e04

// -[SCColorPickerView _pathCurveForLocation:]
// Type encoding: d32@0:8{CGPoint=dd}16
// Implementation: 0x108e4315c

// -[SCColorPickerView _shouldExpandHeightWithGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e431e8

// -[SCColorPickerView _setDropletOriginY:offsetX:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x108e43390

// -[SCColorPickerView _setHeightExpanded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e43480

// -[SCColorPickerView _colorContainerDefaultHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e434e0

// -[SCColorPickerView _defaultHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e4350c

// -[SCColorPickerView _containerViewBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e43518

// -[SCColorPickerView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x108e43598

// -[SCColorPickerView _gradientPickerTouchBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e43674

// -[SCColorPickerView _colorAtLocation:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x108e43700

// -[SCColorPickerView _locationForColor:]
// Type encoding: {CGPoint=dd}24@0:8@16
// Implementation: 0x108e43710

// -[SCColorPickerView _updateDropletWithLocation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108e43720

// -[SCColorPickerView _updateColorWithLocation:animateDroplet:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x108e439b0

// -[SCColorPickerView _paletteSwitchButtonHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e43d2c

// -[SCColorPickerView _togglePaletteModel]
// Type encoding: v16@0:8
// Implementation: 0x108e43d64

// -[SCColorPickerView _updateSwitchViewWithPaletteModel]
// Type encoding: v16@0:8
// Implementation: 0x108e43e40

// -[SCColorPickerView willAnimateColorPickerForViewMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e43fac

// -[SCColorPickerView animateColorPickerForViewMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e44018

// -[SCColorPickerView didAnimateColorPickerForViewMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e440b8

// -[SCColorPickerView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e4411c

// -[SCColorPickerView dropletOriginY]
// Type encoding: d16@0:8
// Implementation: 0x108e4413c

// -[SCColorPickerView dropletView]
// Type encoding: @16@0:8
// Implementation: 0x108e4414c

// -[SCColorPickerView isHeightExpanded]
// Type encoding: B16@0:8
// Implementation: 0x108e4415c

// -[SCColorPickerView setHeightExpanded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e4416c

// -[SCColorPickerView isColorLocked]
// Type encoding: B16@0:8
// Implementation: 0x108e4417c

// -[SCColorPickerView setColorLocked:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e4418c

// -[SCColorPickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e4419c

// +[SCColorPickerView createColorPickerViewWithOrientation:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e41894

// +[SCColorPickerView createPalettedColorPickerViewWithPaletteType:orientation:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x108e418cc

@end
