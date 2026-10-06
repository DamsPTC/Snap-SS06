// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoMockImageProcessor
// Superclass: NSObject
// Address: 0x112be3560

@interface SCVideoMockImageProcessor

// Property: imageProcessCommandsInfo; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoMockImageProcessor warmUpProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905db28

// -[SCVideoMockImageProcessor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:]
// Type encoding: v88@0:8^{__CVBuffer=}16^{__CVBuffer=}24q32{?=qiIq}40@64@72@?80
// Implementation: 0x10905db2c

// -[SCVideoMockImageProcessor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:]
// Type encoding: v84@0:8@16^{__CVBuffer=}24@32{?=qiIq}40@64B72@?76
// Implementation: 0x10905db40

// -[SCVideoMockImageProcessor cancelProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905db88

// -[SCVideoMockImageProcessor imageProcessCommandsInfo]
// Type encoding: @16@0:8
// Implementation: 0x10905db8c

@end
