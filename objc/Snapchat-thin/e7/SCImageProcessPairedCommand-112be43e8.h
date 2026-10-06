// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPairedCommand
// Superclass: SCImageProcessCommandImpl
// Address: 0x112be43e8

@interface SCImageProcessPairedCommand

// Property: isLoaded; attributes: TB,R,N
// Property: leftCommand; attributes: T@"<SCImageProcessCommand>",R,N,V_leftCommand
// Property: rightCommand; attributes: T@"<SCImageProcessCommand>",R,N,V_rightCommand

// -[SCImageProcessPairedCommand initWithLeftCommand:rightCommand:alpha:]
// Type encoding: @36@0:8@16@24f32
// Implementation: 0x1090785c0

// -[SCImageProcessPairedCommand isLoaded]
// Type encoding: B16@0:8
// Implementation: 0x109078690

// -[SCImageProcessPairedCommand isGPUPass]
// Type encoding: B16@0:8
// Implementation: 0x1090786ec

// -[SCImageProcessPairedCommand isRenderingCompatible]
// Type encoding: B16@0:8
// Implementation: 0x109078738

// -[SCImageProcessPairedCommand inputConstraint]
// Type encoding: Q16@0:8
// Implementation: 0x10907881c

// -[SCImageProcessPairedCommand loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109078878

// -[SCImageProcessPairedCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x10907891c

// -[SCImageProcessPairedCommand unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109078bdc

// -[SCImageProcessPairedCommand hash]
// Type encoding: Q16@0:8
// Implementation: 0x109078c3c

// -[SCImageProcessPairedCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109078cf0

// -[SCImageProcessPairedCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x109078de0

// -[SCImageProcessPairedCommand innerCommands]
// Type encoding: @16@0:8
// Implementation: 0x109078e80

// -[SCImageProcessPairedCommand leftCommand]
// Type encoding: @16@0:8
// Implementation: 0x109078f3c

// -[SCImageProcessPairedCommand rightCommand]
// Type encoding: @16@0:8
// Implementation: 0x109078f4c

// -[SCImageProcessPairedCommand .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109078f5c

@end
