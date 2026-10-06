// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAVideoWriter
// Superclass: NSObject
// Address: 0x112bf87a8

@interface LSAVideoWriter

// Property: writerCreationFailed; attributes: TB,V_writerCreationFailed
// Property: assetWriter; attributes: T@"AVAssetWriter",&,V_assetWriter
// Property: pixelAdapter; attributes: T@"AVAssetWriterInputPixelBufferAdaptor",&,V_pixelAdapter
// Property: pixelBufferPool; attributes: T^{__CVPixelBufferPool=},V_pixelBufferPool
// Property: audioInfo; attributes: T{AudioInfo=iii},R,N,V_audioInfo

// -[LSAVideoWriter initWithURL:outputSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10ad7fa38

// -[LSAVideoWriter initWithURL:outputSize:audioInfo:]
// Type encoding: @52@0:8@16{CGSize=dd}24{AudioInfo=iii}40
// Implementation: 0x10ad7fa48

// -[LSAVideoWriter createWriterAsync:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7fc3c

// -[LSAVideoWriter startSessionAtTimeIfRequired:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10ad8039c

// -[LSAVideoWriter createPixelBufferForWriting]
// Type encoding: {CFRefHolder<__CVBuffer *>=^{__CVBuffer}}16@0:8
// Implementation: 0x10ad8048c

// -[LSAVideoWriter writePixelBuffer:forTime:]
// Type encoding: v48@0:8r^v16{?=qiIq}24
// Implementation: 0x10ad805fc

// -[LSAVideoWriter writeAudioBuffer:]
// Type encoding: v24@0:8r^v16
// Implementation: 0x10ad80824

// -[LSAVideoWriter finishWritingAtTime:error:]
// Type encoding: B48@0:8{?=qiIq}16^@40
// Implementation: 0x10ad809c4

// -[LSAVideoWriter _createCMSampleBufferFrom:time:]
// Type encoding: {CFRefHolder<opaqueCMSampleBuffer *>=^{opaqueCMSampleBuffer}}48@0:8r^v16{?=qiIq}24
// Implementation: 0x10ad80d4c

// -[LSAVideoWriter _flushEnqueuedPixelData]
// Type encoding: B16@0:8
// Implementation: 0x10ad80e18

// -[LSAVideoWriter _flushEnqueuedAudioData]
// Type encoding: B16@0:8
// Implementation: 0x10ad80f30

// -[LSAVideoWriter _finalizeEnqueuedSamples]
// Type encoding: v16@0:8
// Implementation: 0x10ad80fb8

// -[LSAVideoWriter _popNextEnqueuedSampleBuffer:]
// Type encoding: ^{opaqueCMSampleBuffer=}24@0:8@16
// Implementation: 0x10ad8117c

// -[LSAVideoWriter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10ad81210

// -[LSAVideoWriter writerCreationFailed]
// Type encoding: B16@0:8
// Implementation: 0x10ad81378

// -[LSAVideoWriter setWriterCreationFailed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad81384

// -[LSAVideoWriter assetWriter]
// Type encoding: @16@0:8
// Implementation: 0x10ad8138c

// -[LSAVideoWriter setAssetWriter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad81398

// -[LSAVideoWriter pixelAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10ad813a0

// -[LSAVideoWriter setPixelAdapter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad813ac

// -[LSAVideoWriter pixelBufferPool]
// Type encoding: ^{__CVPixelBufferPool=}16@0:8
// Implementation: 0x10ad813b4

// -[LSAVideoWriter setPixelBufferPool:]
// Type encoding: v24@0:8^{__CVPixelBufferPool=}16
// Implementation: 0x10ad813bc

// -[LSAVideoWriter audioInfo]
// Type encoding: {AudioInfo=iii}16@0:8
// Implementation: 0x10ad813c4

// -[LSAVideoWriter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad813d4

// -[LSAVideoWriter .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad81434

@end
