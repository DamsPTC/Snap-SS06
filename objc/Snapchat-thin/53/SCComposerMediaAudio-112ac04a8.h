// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMediaAudio
// Superclass: NSObject
// Address: 0x112ac04a8

@interface SCComposerMediaAudio

// Property: asset; attributes: T@"AVAsset",R,N,V_asset
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMediaAudio initWithTemporaryFileWriterServices:AudioData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10604384c

// -[SCComposerMediaAudio initWithTemporaryFileWriterServices:AVAsset:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10604397c

// -[SCComposerMediaAudio initWithTemporaryFileWriterServices:FileURL:deleteOnDispose:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106043d28

// -[SCComposerMediaAudio getDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x106043e6c

// -[SCComposerMediaAudio getSamplesWithSampleCount:callback:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x106043f14

// -[SCComposerMediaAudio getBeatAmplitudesWithFps:callback:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x10604473c

// -[SCComposerMediaAudio getMp4DataWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106045384

// -[SCComposerMediaAudio extractSegmentWithStartTimeMs:durationMs:callback:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x106045584

// -[SCComposerMediaAudio dispose]
// Type encoding: v16@0:8
// Implementation: 0x106045898

// -[SCComposerMediaAudio _exportAsynchronouslyWithTimeRange:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106045940

// -[SCComposerMediaAudio pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106045b84

// -[SCComposerMediaAudio asset]
// Type encoding: @16@0:8
// Implementation: 0x106045b90

// -[SCComposerMediaAudio .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106045b98

@end
