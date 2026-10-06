// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingStaticImageFrameProvider
// Superclass: NSObject
// Address: 0x112be32b8

@interface SCVideoTranscodingStaticImageFrameProvider

// Property: timeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_timeRange
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTranscodingStaticImageFrameProvider initWithImage:frameRate:duration:audioAsset:useIOSurfaceBacking:]
// Type encoding: @52@0:8@16Q24d32@40B48
// Implementation: 0x109058b74

// -[SCVideoTranscodingStaticImageFrameProvider prepareFetchingFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109058c48

// -[SCVideoTranscodingStaticImageFrameProvider decodeNextAudioSampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x109058c8c

// -[SCVideoTranscodingStaticImageFrameProvider audioProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109058cf4

// -[SCVideoTranscodingStaticImageFrameProvider decodeNextVideoFrame:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}24@0:8^@16
// Implementation: 0x109058d10

// -[SCVideoTranscodingStaticImageFrameProvider videoProviderStatus]
// Type encoding: q16@0:8
// Implementation: 0x109058e3c

// -[SCVideoTranscodingStaticImageFrameProvider cancelFetching]
// Type encoding: v16@0:8
// Implementation: 0x109058e80

// -[SCVideoTranscodingStaticImageFrameProvider avgFrameDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x109058ebc

// -[SCVideoTranscodingStaticImageFrameProvider _createIOSurfaceImagePixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x109058ed8

// -[SCVideoTranscodingStaticImageFrameProvider _createImagePixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x109059190

// -[SCVideoTranscodingStaticImageFrameProvider _releasePixelBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090593dc

// -[SCVideoTranscodingStaticImageFrameProvider _prepareFetchingImageFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109059404

// -[SCVideoTranscodingStaticImageFrameProvider _prepareFetchingAudioFrameWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x109059488

// -[SCVideoTranscodingStaticImageFrameProvider timeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x10905975c

// -[SCVideoTranscodingStaticImageFrameProvider setTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x109059774

// -[SCVideoTranscodingStaticImageFrameProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10905978c

@end
