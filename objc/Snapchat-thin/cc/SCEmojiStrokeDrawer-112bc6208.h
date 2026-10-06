// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEmojiStrokeDrawer
// Superclass: NSObject
// Address: 0x112bc6208

@interface SCEmojiStrokeDrawer

// Property: delegate; attributes: T@"<SCStrokeDrawerDelegate>",W,N,Vdelegate
// Property: defaultStrokeWidth; attributes: Td,N,V_defaultStrokeWidth

// -[SCEmojiStrokeDrawer init]
// Type encoding: @16@0:8
// Implementation: 0x108e8a2b8

// -[SCEmojiStrokeDrawer updateDrawerMetadata:emoji:contentSize:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x108e8a32c

// -[SCEmojiStrokeDrawer clearDrawing]
// Type encoding: v16@0:8
// Implementation: 0x108e8a370

// -[SCEmojiStrokeDrawer drawPoint:pointSet:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e8a3b4

// -[SCEmojiStrokeDrawer redrawPoints:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8a430

// -[SCEmojiStrokeDrawer drawRect:rect:]
// Type encoding: v56@0:8^{CGContext=}16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x108e8a578

// -[SCEmojiStrokeDrawer scaleRange]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108e8a7d4

// -[SCEmojiStrokeDrawer isPointEligibleForAdding:previousPoint:scale:]
// Type encoding: B40@0:8@16@24d32
// Implementation: 0x108e8a7f0

// -[SCEmojiStrokeDrawer _addPointsIfNeeded:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8{CGPoint=dd}16
// Implementation: 0x108e8a8b4

// -[SCEmojiStrokeDrawer _mid:p2:]
// Type encoding: {CGPoint=dd}48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x108e8a914

// -[SCEmojiStrokeDrawer _addLinearPointsIfNeeded:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8{CGPoint=dd}16
// Implementation: 0x108e8a92c

// -[SCEmojiStrokeDrawer _addQuadCurvePointsIfNeeded:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8{CGPoint=dd}16
// Implementation: 0x108e8ab24

// -[SCEmojiStrokeDrawer delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e8ae40

// -[SCEmojiStrokeDrawer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8ae58

// -[SCEmojiStrokeDrawer defaultStrokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x108e8ae64

// -[SCEmojiStrokeDrawer setDefaultStrokeWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e8ae6c

// -[SCEmojiStrokeDrawer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e8ae74

@end
