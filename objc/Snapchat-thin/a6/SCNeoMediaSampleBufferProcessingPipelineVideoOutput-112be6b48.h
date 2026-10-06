// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaSampleBufferProcessingPipelineVideoOutput
// Superclass: NSObject
// Address: 0x112be6b48

@interface SCNeoMediaSampleBufferProcessingPipelineVideoOutput

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput initWithPlayerOutput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090b7ba4

// -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput cancelReadyToEnqueueSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b7bfc

// -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput enqueueSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090b7c04

// -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput isReadyToEnqueueSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090b7c0c

// -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput onReadyToEnqueueSampleBuffer:queue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1090b7c14

// -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput supportsFormatDescription:]
// Type encoding: B24@0:8^{opaqueCMFormatDescription=}16
// Implementation: 0x1090b7c1c

// -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b7c40

@end
