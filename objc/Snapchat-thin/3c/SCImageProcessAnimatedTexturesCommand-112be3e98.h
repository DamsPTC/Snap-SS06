// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessAnimatedTexturesCommand
// Superclass: SCImageProcessCommandImpl
// Address: 0x112be3e98

@interface SCImageProcessAnimatedTexturesCommand

// Property: shouldUseFullWidth; attributes: TB,N,V_shouldUseFullWidth
// Property: fadeRatio; attributes: Td,N,V_fadeRatio
// Property: shouldFade; attributes: TB,N,V_shouldFade
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessAnimatedTexturesCommand initWithImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x109071ce8

// -[SCImageProcessAnimatedTexturesCommand initWithImages:tintColors:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109071cf0

// -[SCImageProcessAnimatedTexturesCommand loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109071e04

// -[SCImageProcessAnimatedTexturesCommand unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109072198

// -[SCImageProcessAnimatedTexturesCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x10907220c

// -[SCImageProcessAnimatedTexturesCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x109072580

// -[SCImageProcessAnimatedTexturesCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10907258c

// -[SCImageProcessAnimatedTexturesCommand fadeRatio]
// Type encoding: d16@0:8
// Implementation: 0x109072684

// -[SCImageProcessAnimatedTexturesCommand setFadeRatio:]
// Type encoding: v24@0:8d16
// Implementation: 0x109072694

// -[SCImageProcessAnimatedTexturesCommand shouldFade]
// Type encoding: B16@0:8
// Implementation: 0x1090726a4

// -[SCImageProcessAnimatedTexturesCommand setShouldFade:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090726b4

// -[SCImageProcessAnimatedTexturesCommand shouldUseFullWidth]
// Type encoding: B16@0:8
// Implementation: 0x1090726c4

// -[SCImageProcessAnimatedTexturesCommand setShouldUseFullWidth:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090726d4

// -[SCImageProcessAnimatedTexturesCommand .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090726e4

@end
