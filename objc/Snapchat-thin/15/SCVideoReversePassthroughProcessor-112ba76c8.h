// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoReversePassthroughProcessor
// Superclass: NSObject
// Address: 0x112ba76c8

@interface SCVideoReversePassthroughProcessor


// -[SCVideoReversePassthroughProcessor initWithSegment:outputURL:transcodingConfiguration:transcodingLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108566158

// -[SCVideoReversePassthroughProcessor processWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108566254

// -[SCVideoReversePassthroughProcessor _createTranscodingSessionForReversePreprocessWithSegment:inputAsset:videoSourceSize:videoTargetSize:videoSourceBitrate:targetBitrate:outputUrl:taskId:]
// Type encoding: @96@0:8@16@24{CGSize=dd}32{CGSize=dd}48d64d72@80@88
// Implementation: 0x108566778

// -[SCVideoReversePassthroughProcessor _handleTranscodingSuccessForIntermediateAssetUrl:videoTargetSize:videoTargetBitrate:completionHandler:]
// Type encoding: v56@0:8@16{CGSize=dd}24Q40@?48
// Implementation: 0x108566a40

// -[SCVideoReversePassthroughProcessor _handleReverseSuccessForIntermediateAssetUrl:reversedSegment:videoTargetSize:videoTargetBitrate:completionHandler:]
// Type encoding: v64@0:8@16@24{CGSize=dd}32Q48@?56
// Implementation: 0x108566b44

// -[SCVideoReversePassthroughProcessor _handleTranscodingCancelledForIntermediateAssetUrl:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108566c54

// -[SCVideoReversePassthroughProcessor _handleTranscodingFailureForIntermediateAssetUrl:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108566d10

// -[SCVideoReversePassthroughProcessor _handleReverseFailureForIntermediateAssetUrl:error:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108566dcc

// -[SCVideoReversePassthroughProcessor _reversedCompressedFrameBuffersWithIntermediateAssetURL:CompletionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108566e68

// -[SCVideoReversePassthroughProcessor _accessNextCompressedSampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x108567264

// -[SCVideoReversePassthroughProcessor _finishWritingWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108567348

// -[SCVideoReversePassthroughProcessor _setupAssetReaderAndWriterWithAssetURL:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x108567474

// -[SCVideoReversePassthroughProcessor _setupReaderVideoOutput:inputAsset:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x1085675b0

// -[SCVideoReversePassthroughProcessor _setupReaderAudioOutput:inputAsset:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108567694

// -[SCVideoReversePassthroughProcessor _setupWriterVideoInputWithIntermediateAsset:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x1085677d8

// -[SCVideoReversePassthroughProcessor _setupWriterAudioInputWithIntermediateAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085678fc

// -[SCVideoReversePassthroughProcessor _readVideoSampleBuffers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085679ec

// -[SCVideoReversePassthroughProcessor _wrapOutputAndReturnInCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108567b28

// -[SCVideoReversePassthroughProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108567d28

// +[SCVideoReversePassthroughProcessor performer]
// Type encoding: @16@0:8
// Implementation: 0x10856608c

@end
