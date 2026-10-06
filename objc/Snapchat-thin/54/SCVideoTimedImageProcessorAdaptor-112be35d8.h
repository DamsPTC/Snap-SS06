// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTimedImageProcessorAdaptor
// Superclass: NSObject
// Address: 0x112be35d8

@interface SCVideoTimedImageProcessorAdaptor

// Property: imageProcessCommandsInfo; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTimedImageProcessorAdaptor initWithInputTrackId:videoSegments:imageProcessQueue:renderEffectDAGs:outputSize:videoSourceSize:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32@40{CGSize=dd}48{CGSize=dd}64@80
// Implementation: 0x10905ed34

// -[SCVideoTimedImageProcessorAdaptor _layerInstructionFromSegments:outputSize:videoSourceSize:]
// Type encoding: @56@0:8@16{CGSize=dd}24{CGSize=dd}40
// Implementation: 0x10905eee4

// -[SCVideoTimedImageProcessorAdaptor warmUpProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905f310

// -[SCVideoTimedImageProcessorAdaptor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:]
// Type encoding: v88@0:8^{__CVBuffer=}16^{__CVBuffer=}24q32{?=qiIq}40@64@72@?80
// Implementation: 0x10905f318

// -[SCVideoTimedImageProcessorAdaptor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:]
// Type encoding: v84@0:8@16^{__CVBuffer=}24@32{?=qiIq}40@64B72@?76
// Implementation: 0x10905f530

// -[SCVideoTimedImageProcessorAdaptor cancelProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905f56c

// -[SCVideoTimedImageProcessorAdaptor imageProcessCommandsInfo]
// Type encoding: @16@0:8
// Implementation: 0x10905f574

// -[SCVideoTimedImageProcessorAdaptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10905f57c

@end
