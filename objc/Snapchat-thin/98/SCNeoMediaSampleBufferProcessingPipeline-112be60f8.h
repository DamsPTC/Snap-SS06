// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaSampleBufferProcessingPipeline
// Superclass: NSObject
// Address: 0x112be60f8

@interface SCNeoMediaSampleBufferProcessingPipeline

// Property: processedQueueState; attributes: TQ,V_processedQueueState
// Property: decodedQueueState; attributes: TQ,V_decodedQueueState
// Property: delegate; attributes: T@"<SCNeoMediaSampleBufferProcessingPipelineDelegate>",W,N,V_delegate
// Property: processor; attributes: T@"<SCNeoMediaSampleBufferProcessor>",&,N,V_processor
// Property: enabled; attributes: TB,N,V_enabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMediaSampleBufferProcessingPipeline initWithOutput:codecRegistry:timebase:instruments:bufferQueueSize:queue:ignorePrecedingFramesOnSeek:maxDecodingFramesInFlight:decodeAndSortVideoFrames:maxNumberOfForwardDecodedFrames:enableSpsReorderDepth:discardStaleFramesOnSeek:trackProgressObserver:]
// Type encoding: @104@0:8@16@24^{OpaqueCMTimebase=}32@40Q48@56B64Q68B76Q80B88B92@96
// Implementation: 0x1090a28dc

// -[SCNeoMediaSampleBufferProcessingPipeline dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090a2c9c

// -[SCNeoMediaSampleBufferProcessingPipeline _requiresDecoderForFormatDescription:]
// Type encoding: B24@0:8^{opaqueCMFormatDescription=}16
// Implementation: 0x1090a2d24

// -[SCNeoMediaSampleBufferProcessingPipeline _prepareDecoderWithFormatDescription:]
// Type encoding: B24@0:8^{opaqueCMFormatDescription=}16
// Implementation: 0x1090a2d50

// -[SCNeoMediaSampleBufferProcessingPipeline processedQueueStateDidChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090a2f10

// -[SCNeoMediaSampleBufferProcessingPipeline decodedQueueStateDidChange:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090a2f14

// -[SCNeoMediaSampleBufferProcessingPipeline _mutateProcessedBufferQueueWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1090a2f18

// -[SCNeoMediaSampleBufferProcessingPipeline _mutateDecodedBufferQueueWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1090a2f5c

// -[SCNeoMediaSampleBufferProcessingPipeline _didFinishProcessingSampleBuffer:flushId:error:]
// Type encoding: v40@0:8^{opaqueCMSampleBuffer=}16Q24@32
// Implementation: 0x1090a2f98

// -[SCNeoMediaSampleBufferProcessingPipeline _updateOutputRegistration]
// Type encoding: v16@0:8
// Implementation: 0x1090a314c

// -[SCNeoMediaSampleBufferProcessingPipeline isBlockedOnOutputConsumption]
// Type encoding: B16@0:8
// Implementation: 0x1090a3268

// -[SCNeoMediaSampleBufferProcessingPipeline hasRegisteredToOutput]
// Type encoding: B16@0:8
// Implementation: 0x1090a32b8

// -[SCNeoMediaSampleBufferProcessingPipeline _dequeueNextBufferToProcessIfNeededInQueue:]
// Type encoding: B24@0:8^{opaqueCMBufferQueue=}16
// Implementation: 0x1090a32ec

// -[SCNeoMediaSampleBufferProcessingPipeline _forwardProcessedBuffersToOutput]
// Type encoding: v16@0:8
// Implementation: 0x1090a3550

// -[SCNeoMediaSampleBufferProcessingPipeline _processDecodedBuffers]
// Type encoding: v16@0:8
// Implementation: 0x1090a36ec

// -[SCNeoMediaSampleBufferProcessingPipeline seekTo:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090a3758

// -[SCNeoMediaSampleBufferProcessingPipeline _flush]
// Type encoding: v16@0:8
// Implementation: 0x1090a3780

// -[SCNeoMediaSampleBufferProcessingPipeline _flushToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090a37b0

// -[SCNeoMediaSampleBufferProcessingPipeline notifyEndOfStream]
// Type encoding: v16@0:8
// Implementation: 0x1090a383c

// -[SCNeoMediaSampleBufferProcessingPipeline prepareForLoop]
// Type encoding: v16@0:8
// Implementation: 0x1090a3880

// -[SCNeoMediaSampleBufferProcessingPipeline reset]
// Type encoding: v16@0:8
// Implementation: 0x1090a38a8

// -[SCNeoMediaSampleBufferProcessingPipeline setInstruments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a39a8

// -[SCNeoMediaSampleBufferProcessingPipeline _playableRangeIsUnderMaxThreshold]
// Type encoding: B16@0:8
// Implementation: 0x1090a39c8

// -[SCNeoMediaSampleBufferProcessingPipeline _updateCanEnqueueSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090a3a18

// -[SCNeoMediaSampleBufferProcessingPipeline canEnqueueSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090a3ad8

// -[SCNeoMediaSampleBufferProcessingPipeline setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090a3ae0

// -[SCNeoMediaSampleBufferProcessingPipeline _didDecodeSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090a3b20

// -[SCNeoMediaSampleBufferProcessingPipeline forceEnableVTDecoder]
// Type encoding: B16@0:8
// Implementation: 0x1090a3c94

// -[SCNeoMediaSampleBufferProcessingPipeline setFramesNeedsReorderingWithDepth:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090a3c9c

// -[SCNeoMediaSampleBufferProcessingPipeline enqueueSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090a3ce0

// -[SCNeoMediaSampleBufferProcessingPipeline decoder:didOutputSampleBuffer:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x1090a40a4

// -[SCNeoMediaSampleBufferProcessingPipeline decoderDidSkipBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a4128

// -[SCNeoMediaSampleBufferProcessingPipeline decoder:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090a412c

// -[SCNeoMediaSampleBufferProcessingPipeline decoderDidReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a4194

// -[SCNeoMediaSampleBufferProcessingPipeline playableRangeTrackerDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a4198

// -[SCNeoMediaSampleBufferProcessingPipeline delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090a419c

// -[SCNeoMediaSampleBufferProcessingPipeline setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a41b4

// -[SCNeoMediaSampleBufferProcessingPipeline processor]
// Type encoding: @16@0:8
// Implementation: 0x1090a41c0

// -[SCNeoMediaSampleBufferProcessingPipeline setProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a41c8

// -[SCNeoMediaSampleBufferProcessingPipeline enabled]
// Type encoding: B16@0:8
// Implementation: 0x1090a41e8

// -[SCNeoMediaSampleBufferProcessingPipeline processedQueueState]
// Type encoding: Q16@0:8
// Implementation: 0x1090a41f0

// -[SCNeoMediaSampleBufferProcessingPipeline setProcessedQueueState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090a41f8

// -[SCNeoMediaSampleBufferProcessingPipeline decodedQueueState]
// Type encoding: Q16@0:8
// Implementation: 0x1090a4200

// -[SCNeoMediaSampleBufferProcessingPipeline setDecodedQueueState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090a4208

// -[SCNeoMediaSampleBufferProcessingPipeline .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a4210

@end
