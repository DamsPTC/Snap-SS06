// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingStaticSampleBufferProvider
// Superclass: NSObject
// Address: 0x112be3308

@interface SCVideoTranscodingStaticSampleBufferProvider

// Property: timeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_timeRange
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTranscodingStaticSampleBufferProvider initWithAsset:staticFrameConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090597e0

// -[SCVideoTranscodingStaticSampleBufferProvider prepareFetchingFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x1090598a4

// -[SCVideoTranscodingStaticSampleBufferProvider decodeNextAudioSampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x109059b40

// -[SCVideoTranscodingStaticSampleBufferProvider audioProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109059b48

// -[SCVideoTranscodingStaticSampleBufferProvider decodeNextVideoFrame:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}24@0:8^@16
// Implementation: 0x109059b50

// -[SCVideoTranscodingStaticSampleBufferProvider videoProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109059c54

// -[SCVideoTranscodingStaticSampleBufferProvider cancelFetching]
// Type encoding: v16@0:8
// Implementation: 0x109059c88

// -[SCVideoTranscodingStaticSampleBufferProvider avgFrameDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x109059cc0

// -[SCVideoTranscodingStaticSampleBufferProvider timeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x109059cdc

// -[SCVideoTranscodingStaticSampleBufferProvider setTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x109059cf4

// -[SCVideoTranscodingStaticSampleBufferProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109059d0c

@end
