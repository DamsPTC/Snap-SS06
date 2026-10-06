// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessCompoundCommand
// Superclass: SCImageProcessCommandImpl
// Address: 0x112be4028

@interface SCImageProcessCompoundCommand


// -[SCImageProcessCompoundCommand initWithCommands:]
// Type encoding: @24@0:8@16
// Implementation: 0x109073e80

// -[SCImageProcessCompoundCommand isLoaded]
// Type encoding: B16@0:8
// Implementation: 0x109073f04

// -[SCImageProcessCompoundCommand isGPUPass]
// Type encoding: B16@0:8
// Implementation: 0x10907401c

// -[SCImageProcessCompoundCommand isRenderingCompatible]
// Type encoding: B16@0:8
// Implementation: 0x109074134

// -[SCImageProcessCompoundCommand loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10907424c

// -[SCImageProcessCompoundCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x109074394

// -[SCImageProcessCompoundCommand unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109074588

// -[SCImageProcessCompoundCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x1090746b4

// -[SCImageProcessCompoundCommand innerCommands]
// Type encoding: @16@0:8
// Implementation: 0x1090748b4

// -[SCImageProcessCompoundCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090748e4

// -[SCImageProcessCompoundCommand .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090749bc

@end
