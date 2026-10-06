// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLookseryAudioProcessingWrapper
// Superclass: NSObject
// Address: 0x112be29a8

@interface SCLookseryAudioProcessingWrapper


// -[SCLookseryAudioProcessingWrapper init]
// Type encoding: @16@0:8
// Implementation: 0x1090416d4

// -[SCLookseryAudioProcessingWrapper dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090417e0

// -[SCLookseryAudioProcessingWrapper setupWithFormat:]
// Type encoding: v24@0:8r^{AudioStreamBasicDescription=dIIIIIIII}16
// Implementation: 0x109041844

// -[SCLookseryAudioProcessingWrapper setParametersWithAudioFilterStyleId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904198c

// -[SCLookseryAudioProcessingWrapper _updateParametersWithCurrentAudioFilterStyleId]
// Type encoding: v16@0:8
// Implementation: 0x109041a00

// -[SCLookseryAudioProcessingWrapper _setDenoiseParameters]
// Type encoding: v16@0:8
// Implementation: 0x109041e40

// -[SCLookseryAudioProcessingWrapper _loadPresetFromPath:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109041ee0

// -[SCLookseryAudioProcessingWrapper processBufferList:]
// Type encoding: i24@0:8^{AudioBufferList=I[1{AudioBuffer=II^v}]}16
// Implementation: 0x1090422b4

// -[SCLookseryAudioProcessingWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090423f8

@end
