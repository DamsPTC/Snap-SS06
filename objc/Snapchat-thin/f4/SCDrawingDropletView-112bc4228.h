// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDrawingDropletView
// Superclass: SIGShapeView
// Address: 0x112bc4228

@interface SCDrawingDropletView

// Property: dropletMode; attributes: Tq,N,V_dropletMode
// Property: contentView; attributes: T@"SIGShapeView",&,N,V_contentView

// -[SCDrawingDropletView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e44258

// -[SCDrawingDropletView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108e44454

// -[SCDrawingDropletView isExpanded]
// Type encoding: B16@0:8
// Implementation: 0x108e444a0

// -[SCDrawingDropletView setDropletMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e444bc

// -[SCDrawingDropletView setDropletMode:dropletSize:]
// Type encoding: v40@0:8q16{CGSize=dd}24
// Implementation: 0x108e444cc

// -[SCDrawingDropletView setCurrentPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e445c8

// -[SCDrawingDropletView setPath:forShapeLayer:animatedShadow:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108e446ec

// -[SCDrawingDropletView contentShapeLayer]
// Type encoding: @16@0:8
// Implementation: 0x108e447b0

// -[SCDrawingDropletView dropletMode]
// Type encoding: q16@0:8
// Implementation: 0x108e44f04

// -[SCDrawingDropletView contentView]
// Type encoding: @16@0:8
// Implementation: 0x108e44f14

// -[SCDrawingDropletView setContentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e44f24

// -[SCDrawingDropletView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e44f64

// +[SCDrawingDropletView sizeForDropletMode:]
// Type encoding: {CGSize=dd}24@0:8q16
// Implementation: 0x108e447f4

// +[SCDrawingDropletView pathForDropletMode:]
// Type encoding: @24@0:8q16
// Implementation: 0x108e4484c

// +[SCDrawingDropletView closedPath]
// Type encoding: @16@0:8
// Implementation: 0x108e448f4

// +[SCDrawingDropletView largeClosedPath]
// Type encoding: @16@0:8
// Implementation: 0x108e44a94

// +[SCDrawingDropletView largeClosedPathWithScale:]
// Type encoding: @24@0:8d16
// Implementation: 0x108e44ab0

// +[SCDrawingDropletView expandedPath]
// Type encoding: @16@0:8
// Implementation: 0x108e44c54

// +[SCDrawingDropletView eyeDropperPath]
// Type encoding: @16@0:8
// Implementation: 0x108e44eb4

@end
