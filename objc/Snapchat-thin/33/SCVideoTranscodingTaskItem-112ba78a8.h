// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingTaskItem
// Superclass: NSObject
// Address: 0x112ba78a8

@interface SCVideoTranscodingTaskItem

// Property: taskId; attributes: T@"NSString",R,C,N,V_taskId
// Property: videoAsset; attributes: T@"AVAsset",R,C,N,V_videoAsset
// Property: assetAudioMix; attributes: T@"AVAudioMix",R,C,N,V_assetAudioMix
// Property: outputURL; attributes: T@"NSURL",R,C,N,V_outputURL
// Property: assetReaderCompositionOutputBuilder; attributes: T@"<SCVideoCompositionBuilding>",R,C,N,V_assetReaderCompositionOutputBuilder
// Property: processedReason; attributes: TQ,R,N,V_processedReason
// Property: inputImage; attributes: T@"UIImage",R,C,N,V_inputImage
// Property: inputImageFrameRate; attributes: TQ,R,N,V_inputImageFrameRate
// Property: inputImageDuration; attributes: Td,R,N,V_inputImageDuration

// -[SCVideoTranscodingTaskItem initWithTaskId:videoAsset:assetAudioMix:outputURL:assetReaderCompositionOutputBuilder:processedReason:]
// Type encoding: @64@0:8@16@24@32@40@48Q56
// Implementation: 0x1085785e4

// -[SCVideoTranscodingTaskItem initStaticImageTaskWithTaskId:inputImage:inputImageFrameRate:inputImageDuration:outputURL:processedReason:]
// Type encoding: @64@0:8@16@24Q32d40@48Q56
// Implementation: 0x108578728

// -[SCVideoTranscodingTaskItem taskId]
// Type encoding: @16@0:8
// Implementation: 0x108578828

// -[SCVideoTranscodingTaskItem videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x108578830

// -[SCVideoTranscodingTaskItem assetAudioMix]
// Type encoding: @16@0:8
// Implementation: 0x108578838

// -[SCVideoTranscodingTaskItem outputURL]
// Type encoding: @16@0:8
// Implementation: 0x108578840

// -[SCVideoTranscodingTaskItem assetReaderCompositionOutputBuilder]
// Type encoding: @16@0:8
// Implementation: 0x108578848

// -[SCVideoTranscodingTaskItem processedReason]
// Type encoding: Q16@0:8
// Implementation: 0x108578850

// -[SCVideoTranscodingTaskItem inputImage]
// Type encoding: @16@0:8
// Implementation: 0x108578858

// -[SCVideoTranscodingTaskItem inputImageFrameRate]
// Type encoding: Q16@0:8
// Implementation: 0x108578860

// -[SCVideoTranscodingTaskItem inputImageDuration]
// Type encoding: d16@0:8
// Implementation: 0x108578868

// -[SCVideoTranscodingTaskItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108578870

@end
