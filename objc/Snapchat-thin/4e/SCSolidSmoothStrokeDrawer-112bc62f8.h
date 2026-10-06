// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSolidSmoothStrokeDrawer
// Superclass: NSObject
// Address: 0x112bc62f8

@interface SCSolidSmoothStrokeDrawer

// Property: delegate; attributes: T@"<SCStrokeDrawerDelegate>",W,N,Vdelegate
// Property: defaultStrokeWidth; attributes: Td,N,V_defaultStrokeWidth

// -[SCSolidSmoothStrokeDrawer init]
// Type encoding: @16@0:8
// Implementation: 0x108e8bbac

// -[SCSolidSmoothStrokeDrawer updateDrawerMetadata:emoji:contentSize:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x108e8bc18

// -[SCSolidSmoothStrokeDrawer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108e8bc5c

// -[SCSolidSmoothStrokeDrawer clearDrawing]
// Type encoding: v16@0:8
// Implementation: 0x108e8bca4

// -[SCSolidSmoothStrokeDrawer drawPoint:pointSet:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e8bcf0

// -[SCSolidSmoothStrokeDrawer redrawPoints:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8bd54

// -[SCSolidSmoothStrokeDrawer _drawPoint:pointSet:numPoints:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108e8be10

// -[SCSolidSmoothStrokeDrawer drawRect:rect:]
// Type encoding: v56@0:8^{CGContext=}16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x108e8bf20

// -[SCSolidSmoothStrokeDrawer scaleRange]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108e8bf7c

// -[SCSolidSmoothStrokeDrawer isPointEligibleForAdding:previousPoint:scale:]
// Type encoding: B40@0:8@16@24d32
// Implementation: 0x108e8bf98

// -[SCSolidSmoothStrokeDrawer finishStrokePointSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8c034

// -[SCSolidSmoothStrokeDrawer _nextPointForCurrentPoint:PointSet:lastPointIndex:]
// Type encoding: {CGPoint=dd}48@0:8{CGPoint=dd}16@32Q40
// Implementation: 0x108e8c128

// -[SCSolidSmoothStrokeDrawer _addPointToLastPoints:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108e8c340

// -[SCSolidSmoothStrokeDrawer _addQuadCurveWithPoint1:point2:point3:isFirstThreePoints:]
// Type encoding: v68@0:8{CGPoint=dd}16{CGPoint=dd}32{CGPoint=dd}48B64
// Implementation: 0x108e8c350

// -[SCSolidSmoothStrokeDrawer delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e8c46c

// -[SCSolidSmoothStrokeDrawer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8c484

// -[SCSolidSmoothStrokeDrawer defaultStrokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x108e8c490

// -[SCSolidSmoothStrokeDrawer setDefaultStrokeWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e8c498

// -[SCSolidSmoothStrokeDrawer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e8c4a0

@end
