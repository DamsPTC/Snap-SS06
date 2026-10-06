// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaCompositionDecoder
// Superclass: NSObject
// Address: 0x112be3150

@interface SCMediaCompositionDecoder

// Property: timeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_timeRange
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaCompositionDecoder initWithMediaInputs:shouldMuteAudio:enableStereoAudio:audioProcessingWrapper:audioProcessingSessionFactory:overrideAudioAsset:visualRenderSize:useIOSurfaceBacking:]
// Type encoding: @76@0:8@16B24B28@32@40@48{CGSize=dd}56B72
// Implementation: 0x109055ce0

// -[SCMediaCompositionDecoder prepareFetchingFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109055e78

// -[SCMediaCompositionDecoder decodeNextAudioSampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x109055f24

// -[SCMediaCompositionDecoder audioProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109055f88

// -[SCMediaCompositionDecoder decodeNextVideoFrame:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}24@0:8^@16
// Implementation: 0x109055f90

// -[SCMediaCompositionDecoder videoProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x1090560b4

// -[SCMediaCompositionDecoder cancelFetching]
// Type encoding: v16@0:8
// Implementation: 0x1090560bc

// -[SCMediaCompositionDecoder avgFrameDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090560e4

// -[SCMediaCompositionDecoder _prepareFetchingAudioFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109056100

// -[SCMediaCompositionDecoder _prepareFetchingVideoFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109056410

// -[SCMediaCompositionDecoder _prepareFetchingAudioFrameWithImageInput:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109056718

// -[SCMediaCompositionDecoder _prepareFetchingVideoFrameWithImageInput:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x1090567f4

// -[SCMediaCompositionDecoder _prepareFetchingAudioFrameWithVideoInput:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x1090568fc

// -[SCMediaCompositionDecoder _prepareFetchingVideoFrameWithVideoInput:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109056a2c

// -[SCMediaCompositionDecoder _startAudioDecodingWithAsset:timeRange:error:]
// Type encoding: B80@0:8@16{?={?=qiIq}{?=qiIq}}24^@72
// Implementation: 0x109056bb8

// -[SCMediaCompositionDecoder _copyNextAudioSampleBufferAndSetOutputTimeStamp]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x109056ee8

// -[SCMediaCompositionDecoder _decodeNextVideoFrameAndSetOutputTimeStamp:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}24@0:8^@16
// Implementation: 0x109056fe0

// -[SCMediaCompositionDecoder timeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x109057184

// -[SCMediaCompositionDecoder setTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x109057198

// -[SCMediaCompositionDecoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090571ac

@end
