// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTimedImageProcessor
// Superclass: NSObject
// Address: 0x112be3588

@interface SCVideoTimedImageProcessor

// Property: imageProcessCommandsInfo; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTimedImageProcessor initWithImageProcessQueue:renderEffectDAGs:outputSize:createTextureCacheHolder:]
// Type encoding: @52@0:8@16@24{CGSize=dd}32B48
// Implementation: 0x10905db98

// -[SCVideoTimedImageProcessor warmUpProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905dcac

// -[SCVideoTimedImageProcessor _renderEffectDagIndexContainingPresentationTime:]
// Type encoding: q40@0:8{?=qiIq}16
// Implementation: 0x10905dd70

// -[SCVideoTimedImageProcessor _renderEffectDagWithPresentationTime:error:]
// Type encoding: @48@0:8{?=qiIq}16^@40
// Implementation: 0x10905de5c

// -[SCVideoTimedImageProcessor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:]
// Type encoding: v88@0:8^{__CVBuffer=}16^{__CVBuffer=}24q32{?=qiIq}40@64@72@?80
// Implementation: 0x10905e17c

// -[SCVideoTimedImageProcessor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:]
// Type encoding: v84@0:8@16^{__CVBuffer=}24@32{?=qiIq}40@64B72@?76
// Implementation: 0x10905e394

// -[SCVideoTimedImageProcessor cancelProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905e630

// -[SCVideoTimedImageProcessor unloadGPUCommandsOrRenderPassesForRenderEffectDAG:]
// Type encoding: v24@0:8@16
// Implementation: 0x10905e6c0

// -[SCVideoTimedImageProcessor imageProcessCommandsInfo]
// Type encoding: @16@0:8
// Implementation: 0x10905e80c

// -[SCVideoTimedImageProcessor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10905ea40

// -[SCVideoTimedImageProcessor _createPixelBufferPoolIfNeededWithSize:]
// Type encoding: v32@0:8{?=QQ}16
// Implementation: 0x10905eab4

// -[SCVideoTimedImageProcessor _createPixelBufferPoolWithSize:]
// Type encoding: B32@0:8{?=QQ}16
// Implementation: 0x10905eb20

// -[SCVideoTimedImageProcessor _releasePixelBufferPool]
// Type encoding: v16@0:8
// Implementation: 0x10905eca8

// -[SCVideoTimedImageProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10905ece0

@end
