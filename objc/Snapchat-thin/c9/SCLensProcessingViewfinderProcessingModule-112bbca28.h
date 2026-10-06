// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingViewfinderProcessingModule
// Superclass: NSObject
// Address: 0x112bbca28

@interface SCLensProcessingViewfinderProcessingModule

// Property: imageProcessor; attributes: T@"<SCViewfinderImageProcessing>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingViewfinderProcessingModule initWithLensProcessor:effectApplicator:audioProcessor:metadataProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108cae784

// -[SCLensProcessingViewfinderProcessingModule processSampleBuffer:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cae880

// -[SCLensProcessingViewfinderProcessingModule imageProcessor]
// Type encoding: @16@0:8
// Implementation: 0x108cae948

// -[SCLensProcessingViewfinderProcessingModule processAudioSampleBuffer:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cae94c

// -[SCLensProcessingViewfinderProcessingModule processPixelBufferToImage:orientation:timestamp:]
// Type encoding: @56@0:8^{__CVBuffer=}16q24{?=qiIq}32
// Implementation: 0x108cae990

// -[SCLensProcessingViewfinderProcessingModule .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108caea0c

@end
