// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessGradientCommand
// Superclass: SCImageProcessCommandImpl
// Address: 0x112be4118

@interface SCImageProcessGradientCommand

// Property: topColor; attributes: T@"UIColor",R,N,V_topColor
// Property: bottomColor; attributes: T@"UIColor",R,N,V_bottomColor
// Property: fadeRatio; attributes: Td,N,V_fadeRatio
// Property: shouldFade; attributes: TB,N,V_shouldFade
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessGradientCommand initWithTopColor:bottomColor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109075e28

// -[SCImageProcessGradientCommand loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109075f30

// -[SCImageProcessGradientCommand unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109076090

// -[SCImageProcessGradientCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x1090760c4

// -[SCImageProcessGradientCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x10907634c

// -[SCImageProcessGradientCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109076358

// -[SCImageProcessGradientCommand copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109076488

// -[SCImageProcessGradientCommand shouldFade]
// Type encoding: B16@0:8
// Implementation: 0x1090764ac

// -[SCImageProcessGradientCommand setShouldFade:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090764bc

// -[SCImageProcessGradientCommand fadeRatio]
// Type encoding: d16@0:8
// Implementation: 0x1090764cc

// -[SCImageProcessGradientCommand setFadeRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x1090764dc

// -[SCImageProcessGradientCommand topColor]
// Type encoding: @16@0:8
// Implementation: 0x1090764ec

// -[SCImageProcessGradientCommand bottomColor]
// Type encoding: @16@0:8
// Implementation: 0x1090764fc

// -[SCImageProcessGradientCommand .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907650c

@end
