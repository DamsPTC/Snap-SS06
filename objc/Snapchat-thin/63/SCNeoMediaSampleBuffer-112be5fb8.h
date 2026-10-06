// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaSampleBuffer
// Superclass: NSObject
// Address: 0x112be5fb8

@interface SCNeoMediaSampleBuffer

// Property: blockBuffer; attributes: T^{OpaqueCMBlockBuffer=},R,N,V_blockBuffer
// Property: trackInfo; attributes: T@"SCNeoMediaTrackInfo",R,N,V_trackInfo
// Property: presentationTime; attributes: T{?=qiIq},R,N
// Property: presentationDuration; attributes: T{?=qiIq},R,N
// Property: presentationEndTime; attributes: T{?=qiIq},R,N

// -[SCNeoMediaSampleBuffer initWithOwnedBlockBuffer:timingInfoSize:timingInfoArray:sampleSizes:samplesPerChunk:trackInfo:]
// Type encoding: @64@0:8^{OpaqueCMBlockBuffer=}16Q24r^{?={?=qiIq}{?=qiIq}{?=qiIq}}32@40Q48@56
// Implementation: 0x1090a1db4

// -[SCNeoMediaSampleBuffer initWithOwnedBlockBuffer:timingInfoSize:timingInfoArray:sampleSizes:samplesPerChunk:timeOffset:trackInfo:]
// Type encoding: @88@0:8^{OpaqueCMBlockBuffer=}16Q24r^{?={?=qiIq}{?=qiIq}{?=qiIq}}32@40Q48{?=qiIq}56@80
// Implementation: 0x1090a1de8

// -[SCNeoMediaSampleBuffer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090a2068

// -[SCNeoMediaSampleBuffer presentationTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a20bc

// -[SCNeoMediaSampleBuffer presentationDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a20d0

// -[SCNeoMediaSampleBuffer presentationEndTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a20e4

// -[SCNeoMediaSampleBuffer sampleBufferRefRepresentationWithError:]
// Type encoding: ^{opaqueCMSampleBuffer=}24@0:8^@16
// Implementation: 0x1090a2130

// -[SCNeoMediaSampleBuffer mediaSampleBufferWithTimeOffset:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x1090a21fc

// -[SCNeoMediaSampleBuffer blockBuffer]
// Type encoding: ^{OpaqueCMBlockBuffer=}16@0:8
// Implementation: 0x1090a2428

// -[SCNeoMediaSampleBuffer trackInfo]
// Type encoding: @16@0:8
// Implementation: 0x1090a2430

// -[SCNeoMediaSampleBuffer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a2438

// +[SCNeoMediaSampleBuffer mediaSampleBufferWithSampleBufferRef:trackInfo:]
// Type encoding: @32@0:8^{opaqueCMSampleBuffer=}16@24
// Implementation: 0x1090a229c

@end
