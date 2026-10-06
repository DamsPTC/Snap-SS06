// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAAudioMixProcessing
// Superclass: NSObject
// Address: 0x112bf8640

@interface LSAAudioMixProcessing

// Property: audioMix; attributes: T@"AVAudioMix",R,N,V_audioMix
// Property: sampleRate; attributes: Ti,R,N
// Property: numChannels; attributes: Ti,R,N

// -[LSAAudioMixProcessing sampleRate]
// Type encoding: i16@0:8
// Implementation: 0x10ad78f9c

// -[LSAAudioMixProcessing numChannels]
// Type encoding: i16@0:8
// Implementation: 0x10ad78fb8

// -[LSAAudioMixProcessing initWithAudioAssetTrack:processCallback:]
// Type encoding: @88@0:8@16{Function<zoo::AnyContainer<zoo::GenericPolicy<void *[6], snap::type_erasure::ICF_SafeDestroy, zoo::Move, zoo::Copy>::Policy>, void (std::vector<float> &&)>=^?[56c]}24
// Implementation: 0x10ad78fd0

// -[LSAAudioMixProcessing audioMix]
// Type encoding: @16@0:8
// Implementation: 0x10ad7903c

// -[LSAAudioMixProcessing .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad79784

// -[LSAAudioMixProcessing .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad797c4

@end
