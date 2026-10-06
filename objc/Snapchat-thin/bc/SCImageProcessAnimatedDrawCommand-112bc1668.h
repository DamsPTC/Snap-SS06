// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessAnimatedDrawCommand
// Superclass: SCImageProcessCommandImpl
// Address: 0x112bc1668

@interface SCImageProcessAnimatedDrawCommand


// -[SCImageProcessAnimatedDrawCommand initWithImages:vertexCoordinatesProviders:flipVertically:videoSpeedFactor:cropppingState:]
// Type encoding: @52@0:8@16@24B32d36@44
// Implementation: 0x108d405bc

// -[SCImageProcessAnimatedDrawCommand dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108d40c84

// -[SCImageProcessAnimatedDrawCommand loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x108d40cf0

// -[SCImageProcessAnimatedDrawCommand loadTexturesAtTime:offset:outputWidth:outputHeight:]
// Type encoding: v64@0:8{?=qiIq}16@40Q48Q56
// Implementation: 0x108d40f14

// -[SCImageProcessAnimatedDrawCommand unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x108d41508

// -[SCImageProcessAnimatedDrawCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x108d415b0

// -[SCImageProcessAnimatedDrawCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x108d41f5c

// -[SCImageProcessAnimatedDrawCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d41f68

// -[SCImageProcessAnimatedDrawCommand .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d420ec

// +[SCImageProcessAnimatedDrawCommand commandWithVideoTrackedImages:videoSpeedFactor:croppingState:targetTrajectoryFactory:]
// Type encoding: @48@0:8@16d24@32@40
// Implementation: 0x108d407b4

@end
