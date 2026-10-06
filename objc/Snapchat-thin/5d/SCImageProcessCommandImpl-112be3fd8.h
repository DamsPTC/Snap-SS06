// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessCommandImpl
// Superclass: NSObject
// Address: 0x112be3fd8

@interface SCImageProcessCommandImpl

// Property: program; attributes: T@"<SCImageProcessProgram>",R,N,V_program
// Property: isLoaded; attributes: TB,R,N,V_isLoaded
// Property: isResourcesDownloaded; attributes: TB,R,N
// Property: isGPUPass; attributes: TB,R,N
// Property: isUnifiedCameraObjectCompatible; attributes: TB,R,N
// Property: isUnifiedCameraObjectExportable; attributes: TB,R,N
// Property: isRenderingCompatible; attributes: TB,R,N
// Property: isColorFilter; attributes: TB,R,N
// Property: inputConstraint; attributes: TQ,R,N
// Property: isPixelBufferInputCompatible; attributes: TB,R,N
// Property: appliesInputTransform; attributes: TB,R,N
// Property: appliesInputOrientation; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessCommandImpl initWithProgram:]
// Type encoding: @24@0:8@16
// Implementation: 0x109073590

// -[SCImageProcessCommandImpl loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109073604

// -[SCImageProcessCommandImpl isGPUPass]
// Type encoding: B16@0:8
// Implementation: 0x10907370c

// -[SCImageProcessCommandImpl isUnifiedCameraObjectCompatible]
// Type encoding: B16@0:8
// Implementation: 0x109073714

// -[SCImageProcessCommandImpl isRenderingCompatible]
// Type encoding: B16@0:8
// Implementation: 0x10907371c

// -[SCImageProcessCommandImpl isColorFilter]
// Type encoding: B16@0:8
// Implementation: 0x109073724

// -[SCImageProcessCommandImpl isUnifiedCameraObjectExportable]
// Type encoding: B16@0:8
// Implementation: 0x10907372c

// -[SCImageProcessCommandImpl isPixelBufferInputCompatible]
// Type encoding: B16@0:8
// Implementation: 0x109073734

// -[SCImageProcessCommandImpl appliesInputTransform]
// Type encoding: B16@0:8
// Implementation: 0x10907373c

// -[SCImageProcessCommandImpl appliesInputOrientation]
// Type encoding: B16@0:8
// Implementation: 0x109073744

// -[SCImageProcessCommandImpl isResourcesDownloaded]
// Type encoding: B16@0:8
// Implementation: 0x10907374c

// -[SCImageProcessCommandImpl lensIds]
// Type encoding: @16@0:8
// Implementation: 0x109073754

// -[SCImageProcessCommandImpl inputConstraint]
// Type encoding: Q16@0:8
// Implementation: 0x109073770

// -[SCImageProcessCommandImpl drawWithPixelSize:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: B128@0:8{?=QQ}16{?=QQ}32{?=ff}48Q56{CGAffineTransform=dddddd}64@112^@120
// Implementation: 0x109073778

// -[SCImageProcessCommandImpl runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x109073a98

// -[SCImageProcessCommandImpl unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109073be0

// -[SCImageProcessCommandImpl commandName]
// Type encoding: @16@0:8
// Implementation: 0x109073bec

// -[SCImageProcessCommandImpl innerCommands]
// Type encoding: @16@0:8
// Implementation: 0x109073bf8

// -[SCImageProcessCommandImpl baseisEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109073c5c

// -[SCImageProcessCommandImpl hash]
// Type encoding: Q16@0:8
// Implementation: 0x109073ca4

// -[SCImageProcessCommandImpl isLoaded]
// Type encoding: B16@0:8
// Implementation: 0x109073ce0

// -[SCImageProcessCommandImpl program]
// Type encoding: @16@0:8
// Implementation: 0x109073ce8

// -[SCImageProcessCommandImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109073cf0

@end
