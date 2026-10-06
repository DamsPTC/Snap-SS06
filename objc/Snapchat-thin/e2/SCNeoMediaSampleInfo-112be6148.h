// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaSampleInfo
// Superclass: NSObject
// Address: 0x112be6148

@interface SCNeoMediaSampleInfo

// Property: presentationTime; attributes: T{?=qiIq},R,N,V_presentationTime
// Property: presentationDuration; attributes: T{?=qiIq},R,N,V_presentationDuration
// Property: presentationTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N
// Property: decodeTime; attributes: T{?=qiIq},R,N,V_decodeTime
// Property: duration; attributes: T{?=qiIq},R,N,V_duration
// Property: bufferPosition; attributes: TQ,R,N,V_bufferPosition
// Property: sizeInBytes; attributes: TQ,R,N,V_sizeInBytes
// Property: samplesPerChunk; attributes: TQ,R,N,V_samplesPerChunk
// Property: isSync; attributes: TB,R,N,V_isSync
// Property: sampleSizes; attributes: T@"SCNeoStructVector",R,N,V_sampleSizes

// -[SCNeoMediaSampleInfo initWithPresentationTime:presentationDuration:decodeTime:duration:bufferPosition:sizeInBytes:samplesPerChunk:isSync:sampleSizes:]
// Type encoding: @148@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64{?=qiIq}88Q112Q120Q128B136@140
// Implementation: 0x1090a4400

// -[SCNeoMediaSampleInfo presentationTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x1090a450c

// -[SCNeoMediaSampleInfo description]
// Type encoding: @16@0:8
// Implementation: 0x1090a4550

// -[SCNeoMediaSampleInfo presentationTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a45d0

// -[SCNeoMediaSampleInfo presentationDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a45e0

// -[SCNeoMediaSampleInfo decodeTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a45f0

// -[SCNeoMediaSampleInfo duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a4600

// -[SCNeoMediaSampleInfo bufferPosition]
// Type encoding: Q16@0:8
// Implementation: 0x1090a4610

// -[SCNeoMediaSampleInfo sizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x1090a4618

// -[SCNeoMediaSampleInfo samplesPerChunk]
// Type encoding: Q16@0:8
// Implementation: 0x1090a4620

// -[SCNeoMediaSampleInfo isSync]
// Type encoding: B16@0:8
// Implementation: 0x1090a4628

// -[SCNeoMediaSampleInfo sampleSizes]
// Type encoding: @16@0:8
// Implementation: 0x1090a4630

// -[SCNeoMediaSampleInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a4638

@end
