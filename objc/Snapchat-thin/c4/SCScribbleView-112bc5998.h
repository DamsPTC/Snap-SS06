// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScribbleView
// Superclass: UIView
// Address: 0x112bc5998

@interface SCScribbleView

// Property: incrementalImage; attributes: T@"UIImage",&,N,V_incrementalImage
// Property: brushSizeAffordance; attributes: T@"SCBrushSizeAffordance",&,N,V_brushSizeAffordance
// Property: path; attributes: T@"UIBezierPath",&,N,V_path
// Property: scribbleBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_scribbleBounds
// Property: startPoint; attributes: T{CGPoint=dd},N,V_startPoint
// Property: pointBuffer; attributes: T{?=[5{CGPoint=dd}]},N,V_pointBuffer
// Property: pointCounter; attributes: TI,N,V_pointCounter
// Property: scale; attributes: Td,N,V_scale
// Property: lastScale; attributes: Td,N,V_lastScale
// Property: delegate; attributes: T@"<SCScribbleViewDelegate>",W,N,V_delegate
// Property: color; attributes: T@"UIColor",&,N,V_color
// Property: drawingGestureRecognizer; attributes: T@"SCDrawingGestureRecognizer",&,N,V_drawingGestureRecognizer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScribbleView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e7a284

// -[SCScribbleView drawRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e7a388

// -[SCScribbleView drawBitmap]
// Type encoding: v16@0:8
// Implementation: 0x108e7a438

// -[SCScribbleView _scribblePress:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7a538

// -[SCScribbleView _setBrushAffordanceWidth:withCenter:]
// Type encoding: v40@0:8d16{CGPoint=dd}24
// Implementation: 0x108e7a7b8

// -[SCScribbleView _setBrushAffordanceColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7a7c8

// -[SCScribbleView _toggleBrushAffordanceShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e7a7d8

// -[SCScribbleView _setBrushAffordanceVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e7a874

// -[SCScribbleView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108e7a888

// -[SCScribbleView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e7a890

// -[SCScribbleView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7a8b0

// -[SCScribbleView color]
// Type encoding: @16@0:8
// Implementation: 0x108e7a8c4

// -[SCScribbleView setColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7a8d4

// -[SCScribbleView drawingGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x108e7a914

// -[SCScribbleView setDrawingGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7a924

// -[SCScribbleView incrementalImage]
// Type encoding: @16@0:8
// Implementation: 0x108e7a964

// -[SCScribbleView setIncrementalImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7a974

// -[SCScribbleView brushSizeAffordance]
// Type encoding: @16@0:8
// Implementation: 0x108e7a9b4

// -[SCScribbleView setBrushSizeAffordance:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7a9c4

// -[SCScribbleView path]
// Type encoding: @16@0:8
// Implementation: 0x108e7aa04

// -[SCScribbleView setPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e7aa14

// -[SCScribbleView scribbleBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e7aa54

// -[SCScribbleView setScribbleBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e7aa6c

// -[SCScribbleView startPoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108e7aa84

// -[SCScribbleView setStartPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108e7aa98

// -[SCScribbleView pointBuffer]
// Type encoding: {?=[5{CGPoint=dd}]}16@0:8
// Implementation: 0x108e7aaac

// -[SCScribbleView setPointBuffer:]
// Type encoding: v96@0:8{?=[5{CGPoint=dd}]}16
// Implementation: 0x108e7aad4

// -[SCScribbleView pointCounter]
// Type encoding: I16@0:8
// Implementation: 0x108e7aafc

// -[SCScribbleView setPointCounter:]
// Type encoding: v20@0:8I16
// Implementation: 0x108e7ab0c

// -[SCScribbleView scale]
// Type encoding: d16@0:8
// Implementation: 0x108e7ab1c

// -[SCScribbleView setScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e7ab2c

// -[SCScribbleView lastScale]
// Type encoding: d16@0:8
// Implementation: 0x108e7ab3c

// -[SCScribbleView setLastScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e7ab4c

// -[SCScribbleView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e7ab5c

@end
