// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoDecoder
// Superclass: NSObject
// Address: 0x112be3178

@interface SCVideoDecoder

// Property: timeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_timeRange
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoDecoder initWithVideoAsset:videoComposition:assetReaderCompositionOutputBuilder:assetAudioMix:shouldMuteAudio:enableStereoAudio:audioProcessingWrapper:audioProcessingSessionFactory:error:]
// Type encoding: @80@0:8@16@24@32@40B48B52@56@64^@72
// Implementation: 0x109057218

// -[SCVideoDecoder prepareFetchingFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109057444

// -[SCVideoDecoder decodeNextAudioSampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x109057a24

// -[SCVideoDecoder audioProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109057b60

// -[SCVideoDecoder decodeNextVideoFrame:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}24@0:8^@16
// Implementation: 0x109057b68

// -[SCVideoDecoder videoProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109057c84

// -[SCVideoDecoder cancelFetching]
// Type encoding: v16@0:8
// Implementation: 0x109057c8c

// -[SCVideoDecoder avgFrameDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x109057cbc

// -[SCVideoDecoder _createAudioSampleBuffer:withPresentationTimeOffset:]
// Type encoding: ^{opaqueCMSampleBuffer=}48@0:8^{opaqueCMSampleBuffer=}16{?=qiIq}24
// Implementation: 0x109057cd0

// -[SCVideoDecoder timeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x109057e00

// -[SCVideoDecoder setTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x109057e18

// -[SCVideoDecoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109057e30

@end
