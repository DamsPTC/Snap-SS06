// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSolidStrokeDrawer
// Superclass: NSObject
// Address: 0x112bc6348

@interface SCSolidStrokeDrawer

// Property: delegate; attributes: T@"<SCStrokeDrawerDelegate>",W,N,Vdelegate
// Property: defaultStrokeWidth; attributes: Td,N,V_defaultStrokeWidth

// -[SCSolidStrokeDrawer init]
// Type encoding: @16@0:8
// Implementation: 0x108e8c4cc

// -[SCSolidStrokeDrawer updateDrawerMetadata:emoji:contentSize:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x108e8c524

// -[SCSolidStrokeDrawer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108e8c568

// -[SCSolidStrokeDrawer clearDrawing]
// Type encoding: v16@0:8
// Implementation: 0x108e8c5b0

// -[SCSolidStrokeDrawer drawPoint:pointSet:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e8c5fc

// -[SCSolidStrokeDrawer redrawPoints:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8c7e4

// -[SCSolidStrokeDrawer drawRect:rect:]
// Type encoding: v56@0:8^{CGContext=}16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x108e8cb10

// -[SCSolidStrokeDrawer isPointEligibleForAdding:previousPoint:scale:]
// Type encoding: B40@0:8@16@24d32
// Implementation: 0x108e8cb6c

// -[SCSolidStrokeDrawer scaleRange]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108e8cc28

// -[SCSolidStrokeDrawer _addQuadCurveWithPoint1:point2:point3:isFirstThreePoints:]
// Type encoding: v68@0:8{CGPoint=dd}16{CGPoint=dd}32{CGPoint=dd}48B64
// Implementation: 0x108e8cc44

// -[SCSolidStrokeDrawer delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e8cd60

// -[SCSolidStrokeDrawer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8cd78

// -[SCSolidStrokeDrawer defaultStrokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x108e8cd84

// -[SCSolidStrokeDrawer setDefaultStrokeWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e8cd8c

// -[SCSolidStrokeDrawer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e8cd94

@end
