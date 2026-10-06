// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoFrameSamplerImpl
// Superclass: NSObject
// Address: 0x112be2e80

@interface SCManagedVideoFrameSamplerImpl

// Property: frameSampleBlock; attributes: T@?,C,N,V_frameSampleBlock
// Property: ciContext; attributes: T@"CIContext",&,N,V_ciContext

// -[SCManagedVideoFrameSamplerImpl sampleNextFrame:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1090532ec

// -[SCManagedVideoFrameSamplerImpl ciContext]
// Type encoding: @16@0:8
// Implementation: 0x10905331c

// -[SCManagedVideoFrameSamplerImpl didReceiveVideoSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x109053374

// -[SCManagedVideoFrameSamplerImpl frameSampleBlock]
// Type encoding: @?16@0:8
// Implementation: 0x1090534d4

// -[SCManagedVideoFrameSamplerImpl setFrameSampleBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1090534dc

// -[SCManagedVideoFrameSamplerImpl setCiContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090534e4

// -[SCManagedVideoFrameSamplerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109053514

@end
