// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotifExtOverlayAdder
// Superclass: NSObject
// Address: 0x1000dcc20

@interface SCNotifExtOverlayAdder


// +[SCNotifExtOverlayAdder addOverlay:toImage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100065e14

// +[SCNotifExtOverlayAdder _overlaySize:scaleOfOverlay:backgroundImageSize:]
// Type encoding: {CGSize=dd}56@0:8{CGSize=dd}16d32{CGSize=dd}40
// Implementation: 0x1000660bc

// +[SCNotifExtOverlayAdder _leftMarginForOverlayOfWidth:positionOfOverlay:backgroundImageWidth:]
// Type encoding: d40@0:8d16Q24d32
// Implementation: 0x1000660e4

// +[SCNotifExtOverlayAdder _topMarginForOverlayOfHeight:positionOfOverlay:backgroundImageHeight:]
// Type encoding: d40@0:8d16Q24d32
// Implementation: 0x10006610c

// +[SCNotifExtOverlayAdder _overlayPosition:]
// Type encoding: Q24@0:8@16
// Implementation: 0x100066134

// +[SCNotifExtOverlayAdder _scaleOfOverlay:]
// Type encoding: d24@0:8@16
// Implementation: 0x10006613c

// +[SCNotifExtOverlayAdder _getOverlayImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x100066148

@end
