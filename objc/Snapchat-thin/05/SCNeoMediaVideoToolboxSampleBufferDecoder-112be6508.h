// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaVideoToolboxSampleBufferDecoder
// Superclass: NSObject
// Address: 0x112be6508

@interface SCNeoMediaVideoToolboxSampleBufferDecoder

// Property: delegate; attributes: T@"<SCNeoMediaSampleBufferDecoderDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMediaVideoToolboxSampleBufferDecoder initWithDelegateQueue:formatDescription:instruments:maxDecodingFramesInFlight:discardStaleFramesOnFlush:]
// Type encoding: @52@0:8@16^{opaqueCMFormatDescription=}24@32Q40B48
// Implementation: 0x1090a76dc

// -[SCNeoMediaVideoToolboxSampleBufferDecoder appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1090a7830

// -[SCNeoMediaVideoToolboxSampleBufferDecoder canAcceptFormatDescription:]
// Type encoding: B24@0:8^{opaqueCMFormatDescription=}16
// Implementation: 0x1090a78e0

// -[SCNeoMediaVideoToolboxSampleBufferDecoder isReadyForMoreSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090a7964

// -[SCNeoMediaVideoToolboxSampleBufferDecoder enqueueSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090a7990

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _handleDecodedImageBuffer:status:presentationDuration:presentationTimeStamp:generationId:decodeTimeStamp:]
// Type encoding: v108@0:8^{__CVBuffer=}16i24{?=qiIq}28{?=qiIq}52Q76{?=qiIq}84
// Implementation: 0x1090a7fa8

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _createDecompressionSessionWithFormatDescription:]
// Type encoding: ^{OpaqueVTDecompressionSession=}24@0:8^{opaqueCMFormatDescription=}16
// Implementation: 0x1090a85b0

// -[SCNeoMediaVideoToolboxSampleBufferDecoder setPreferredPixelOutputFormat:]
// Type encoding: B20@0:8I16
// Implementation: 0x1090a8900

// -[SCNeoMediaVideoToolboxSampleBufferDecoder flush]
// Type encoding: v16@0:8
// Implementation: 0x1090a8930

// -[SCNeoMediaVideoToolboxSampleBufferDecoder seekTo:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090a8980

// -[SCNeoMediaVideoToolboxSampleBufferDecoder dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090a8998

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _resetSessionIfCurrentGeneration:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090a8a38

// -[SCNeoMediaVideoToolboxSampleBufferDecoder reset]
// Type encoding: v16@0:8
// Implementation: 0x1090a8aa4

// -[SCNeoMediaVideoToolboxSampleBufferDecoder status]
// Type encoding: Q16@0:8
// Implementation: 0x1090a8b68

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _onFrameEnqueued]
// Type encoding: v16@0:8
// Implementation: 0x1090a8b70

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _onFrameDequeued]
// Type encoding: v16@0:8
// Implementation: 0x1090a8b88

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _notifyError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a8ba0

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _outputSampleBuffer:generationId:]
// Type encoding: v32@0:8^{opaqueCMSampleBuffer=}16Q24
// Implementation: 0x1090a8ca0

// -[SCNeoMediaVideoToolboxSampleBufferDecoder _skipBufferWithDecodeTimeStamp:presentationTimeStamp:]
// Type encoding: v64@0:8{?=qiIq}16{?=qiIq}40
// Implementation: 0x1090a8dc0

// -[SCNeoMediaVideoToolboxSampleBufferDecoder delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090a8e8c

// -[SCNeoMediaVideoToolboxSampleBufferDecoder setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a8ea4

// -[SCNeoMediaVideoToolboxSampleBufferDecoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a8eb0

@end
