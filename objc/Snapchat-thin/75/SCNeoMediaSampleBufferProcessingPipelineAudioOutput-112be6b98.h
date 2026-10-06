// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaSampleBufferProcessingPipelineAudioOutput
// Superclass: NSObject
// Address: 0x112be6b98

@interface SCNeoMediaSampleBufferProcessingPipelineAudioOutput

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput initWithPlayerOutput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090b7c44

// -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput cancelReadyToEnqueueSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b7c9c

// -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput enqueueSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090b7ca4

// -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput isReadyToEnqueueSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090b7cac

// -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput onReadyToEnqueueSampleBuffer:queue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1090b7cb4

// -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput supportsFormatDescription:]
// Type encoding: B24@0:8^{opaqueCMFormatDescription=}16
// Implementation: 0x1090b7cbc

// -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b7ce0

@end
