// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleStrokeCanvas
// Superclass: NSObject
// Address: 0x112bc6258

@interface SCSingleStrokeCanvas

// Property: drawerType; attributes: Tq,R,N,V_drawerType
// Property: smoothingAlgorithmVersion; attributes: Tq,N,V_smoothingAlgorithmVersion

// -[SCSingleStrokeCanvas init]
// Type encoding: @16@0:8
// Implementation: 0x108e8aeac

// -[SCSingleStrokeCanvas setSmoothingAlgorithmVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e8af6c

// -[SCSingleStrokeCanvas updateWithStroke:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8b004

// -[SCSingleStrokeCanvas _updateDrawingData:emoji:lineWidth:drawerType:]
// Type encoding: v48@0:8@16@24d32q40
// Implementation: 0x108e8b0e4

// -[SCSingleStrokeCanvas drawStrokeToContext:drawRect:]
// Type encoding: v56@0:8^{CGContext=}16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x108e8b1ac

// -[SCSingleStrokeCanvas drawerType]
// Type encoding: q16@0:8
// Implementation: 0x108e8b210

// -[SCSingleStrokeCanvas smoothingAlgorithmVersion]
// Type encoding: q16@0:8
// Implementation: 0x108e8b218

// -[SCSingleStrokeCanvas .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e8b220

@end
