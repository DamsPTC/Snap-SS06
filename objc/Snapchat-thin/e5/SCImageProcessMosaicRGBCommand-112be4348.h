// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessMosaicRGBCommand
// Superclass: SCImageProcessCommandImpl
// Address: 0x112be4348

@interface SCImageProcessMosaicRGBCommand


// -[SCImageProcessMosaicRGBCommand initWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x10907761c

// -[SCImageProcessMosaicRGBCommand dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090776ec

// -[SCImageProcessMosaicRGBCommand loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10907773c

// -[SCImageProcessMosaicRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x109077910

// -[SCImageProcessMosaicRGBCommand unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109077ac4

// -[SCImageProcessMosaicRGBCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x109077b24

// -[SCImageProcessMosaicRGBCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109077b30

// +[SCImageProcessMosaicRGBCommand commandWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x1090775d4

@end
