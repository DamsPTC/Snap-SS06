// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleStrokeDrawingView
// Superclass: UIView
// Address: 0x112bc62a8

@interface SCSingleStrokeDrawingView

// Property: drawerType; attributes: Tq,R,N,V_drawerType
// Property: smoothingVersion; attributes: Tq,N,V_smoothingVersion
// Property: currentStrokeUniqueId; attributes: Tq,N,V_currentStrokeUniqueId
// Property: defaultStrokeWidth; attributes: Td,N,V_defaultStrokeWidth
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSingleStrokeDrawingView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e8b280

// -[SCSingleStrokeDrawingView addPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8b37c

// -[SCSingleStrokeDrawingView finishDrawingStroke]
// Type encoding: v16@0:8
// Implementation: 0x108e8b3e8

// -[SCSingleStrokeDrawingView setDefaultStrokeWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e8b454

// -[SCSingleStrokeDrawingView hasDrawing]
// Type encoding: B16@0:8
// Implementation: 0x108e8b498

// -[SCSingleStrokeDrawingView clearDrawingView]
// Type encoding: v16@0:8
// Implementation: 0x108e8b4c0

// -[SCSingleStrokeDrawingView updateWithStroke:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8b4f8

// -[SCSingleStrokeDrawingView stroke]
// Type encoding: @16@0:8
// Implementation: 0x108e8b608

// -[SCSingleStrokeDrawingView lineColor]
// Type encoding: @16@0:8
// Implementation: 0x108e8b664

// -[SCSingleStrokeDrawingView lineWidth]
// Type encoding: d16@0:8
// Implementation: 0x108e8b694

// -[SCSingleStrokeDrawingView updateDrawingData:emoji:lineWidth:drawerType:]
// Type encoding: v48@0:8@16@24d32q40
// Implementation: 0x108e8b6a4

// -[SCSingleStrokeDrawingView clampedScale:]
// Type encoding: d24@0:8d16
// Implementation: 0x108e8b7bc

// -[SCSingleStrokeDrawingView isPointEligibleForAdding:previousPoint:scale:]
// Type encoding: B40@0:8@16@24d32
// Implementation: 0x108e8b810

// -[SCSingleStrokeDrawingView setSmoothingVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e8b820

// -[SCSingleStrokeDrawingView changeDrawerType:mapScale:]
// Type encoding: d32@0:8q16d24
// Implementation: 0x108e8b8e8

// -[SCSingleStrokeDrawingView _mapScaleValuefromDrawer:toDrawer:scale:]
// Type encoding: d40@0:8@16@24d32
// Implementation: 0x108e8b97c

// -[SCSingleStrokeDrawingView drawRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e8ba44

// -[SCSingleStrokeDrawingView strokeDrawerRequestRedraw:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8baa4

// -[SCSingleStrokeDrawingView strokeDrawer:requestDrawInRect:]
// Type encoding: v56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x108e8bac0

// -[SCSingleStrokeDrawingView drawerType]
// Type encoding: q16@0:8
// Implementation: 0x108e8badc

// -[SCSingleStrokeDrawingView smoothingVersion]
// Type encoding: q16@0:8
// Implementation: 0x108e8baec

// -[SCSingleStrokeDrawingView currentStrokeUniqueId]
// Type encoding: q16@0:8
// Implementation: 0x108e8bafc

// -[SCSingleStrokeDrawingView setCurrentStrokeUniqueId:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e8bb0c

// -[SCSingleStrokeDrawingView defaultStrokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x108e8bb1c

// -[SCSingleStrokeDrawingView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e8bb2c

@end
