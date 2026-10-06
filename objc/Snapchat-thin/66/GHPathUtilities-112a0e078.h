// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GHPathUtilities
// Superclass: NSObject
// Address: 0x112a0e078

@interface GHPathUtilities


// +[GHPathUtilities quadraticBezierLengthFromStartPoint:toEndPoint:withControlPoint:andStep:]
// Type encoding: d72@0:8{CGPoint=dd}16{CGPoint=dd}32{CGPoint=dd}48d64
// Implementation: 0x104fb2d28

// +[GHPathUtilities cubicSplineLengthFromStartPoint:toEndPoint:withControlPoint1:withControlPoint2:andStep:]
// Type encoding: d88@0:8{CGPoint=dd}16{CGPoint=dd}32{CGPoint=dd}48{CGPoint=dd}64d80
// Implementation: 0x104fb2db8

// +[GHPathUtilities calculateCubicSplineStepFromFromStartPoint:toEndPoint:withControlPoint1:withControlPoint2:]
// Type encoding: d80@0:8{CGPoint=dd}16{CGPoint=dd}32{CGPoint=dd}48{CGPoint=dd}64
// Implementation: 0x104fb2e88

// +[GHPathUtilities calculateQuadraticSplineStepFromStartPoint:toEndPoint:withControlPoint:]
// Type encoding: d64@0:8{CGPoint=dd}16{CGPoint=dd}32{CGPoint=dd}48
// Implementation: 0x104fb2f6c

@end
