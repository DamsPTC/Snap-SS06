// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessCPUCommandImpl
// Superclass: SCImageProcessCommandImpl
// Address: 0x112be3f88

@interface SCImageProcessCPUCommandImpl

// Property: program; attributes: T@"<SCImageProcessProgram>",R,N
// Property: isLoaded; attributes: TB,R,N
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

// -[SCImageProcessCPUCommandImpl init]
// Type encoding: @16@0:8
// Implementation: 0x1090734e0

// -[SCImageProcessCPUCommandImpl isLoaded]
// Type encoding: B16@0:8
// Implementation: 0x109073518

// -[SCImageProcessCPUCommandImpl drawWithPixelWidth:pixelHeight:outputWidth:outputHeight:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: B128@0:8Q16Q24Q32Q40{?=ff}48q56{CGAffineTransform=dddddd}64@112^@120
// Implementation: 0x109073520

// -[SCImageProcessCPUCommandImpl unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109073528

// -[SCImageProcessCPUCommandImpl isGPUPass]
// Type encoding: B16@0:8
// Implementation: 0x109073530

// -[SCImageProcessCPUCommandImpl runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x109073538

// -[SCImageProcessCPUCommandImpl runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:]
// Type encoding: @56@0:8@16^{__CVBuffer=}24^{__CVBuffer=}32Q40^@48
// Implementation: 0x109073544

// -[SCImageProcessCPUCommandImpl commandName]
// Type encoding: @16@0:8
// Implementation: 0x109073550

// -[SCImageProcessCPUCommandImpl isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10907355c

@end
