// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SVGPathGenerator
// Superclass: NSObject
// Address: 0x112a0eb90

@interface SVGPathGenerator


// +[SVGPathGenerator invalidPathCharacters]
// Type encoding: @16@0:8
// Implementation: 0x104fc78b0

// +[SVGPathGenerator addPoint:toRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}64@0:8{CGPoint=dd}16{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x104fc7960

// +[SVGPathGenerator parametersNeededForOperator:]
// Type encoding: q20@0:8C16
// Implementation: 0x104fc7a30

// +[SVGPathGenerator insertionStringForPoint:intoString:atRange:]
// Type encoding: @56@0:8{CGPoint=dd}16@32{_NSRange=QQ}40
// Implementation: 0x104fc7b18

// +[SVGPathGenerator pointOperandRangeForString:selectionRange:]
// Type encoding: {_NSRange=QQ}40@0:8@16{_NSRange=QQ}24
// Implementation: 0x104fc8324

// +[SVGPathGenerator findFailure:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fc8810

// +[SVGPathGenerator maxBoundingBoxForSVGPath:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x104fc8e94

// +[SVGPathGenerator newCGPathFromSVGPath:whileApplyingTransform:]
// Type encoding: ^{CGPath=}72@0:8@16{CGAffineTransform=dddddd}24
// Implementation: 0x104fc9ed0

// +[SVGPathGenerator svgPathFromCGPath:]
// Type encoding: @24@0:8^{CGPath=}16
// Implementation: 0x104fcac54

@end
