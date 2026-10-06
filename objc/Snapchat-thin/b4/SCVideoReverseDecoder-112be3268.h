// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoReverseDecoder
// Superclass: NSObject
// Address: 0x112be3268

@interface SCVideoReverseDecoder

// Property: timeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_timeRange
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoReverseDecoder initWithVideoAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x109058238

// -[SCVideoReverseDecoder dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109058300

// -[SCVideoReverseDecoder prepareFetchingFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10905834c

// -[SCVideoReverseDecoder decodeNextAudioSampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x1090587f4

// -[SCVideoReverseDecoder audioProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x1090587fc

// -[SCVideoReverseDecoder _decodeGroupOfPicturesAtFrameIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x109058804

// -[SCVideoReverseDecoder decodeNextVideoFrame:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}24@0:8^@16
// Implementation: 0x109058994

// -[SCVideoReverseDecoder videoProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109058adc

// -[SCVideoReverseDecoder cancelFetching]
// Type encoding: v16@0:8
// Implementation: 0x109058ae4

// -[SCVideoReverseDecoder avgFrameDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x109058ae8

// -[SCVideoReverseDecoder timeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x109058b04

// -[SCVideoReverseDecoder setTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x109058b18

// -[SCVideoReverseDecoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109058b2c

@end
