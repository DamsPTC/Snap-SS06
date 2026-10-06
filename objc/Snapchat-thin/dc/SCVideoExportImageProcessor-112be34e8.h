// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoExportImageProcessor
// Superclass: NSObject
// Address: 0x112be34e8

@interface SCVideoExportImageProcessor

// Property: imageProcessCommandsInfo; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoExportImageProcessor initWithImageProcessQueue:viewportTransform:cpuBufferTransform:readColorSpaceFromInputPixelBuffers:colorSpace:GPUCommands:CPUCommands:backgroundCommand:outputSize:]
// Type encoding: @172@0:8@16{CGAffineTransform=dddddd}24{CGAffineTransform=dddddd}72B120q124@132@140@148{CGSize=dd}156
// Implementation: 0x10905d1f0

// -[SCVideoExportImageProcessor warmUpProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905d390

// -[SCVideoExportImageProcessor processImageWithInputPixelBuffer:outputPixelBuffer:orientation:presentationTime:presentationTimeOffset:transcodingTaskId:completionHandler:]
// Type encoding: v88@0:8^{__CVBuffer=}16^{__CVBuffer=}24q32{?=qiIq}40@64@72@?80
// Implementation: 0x10905d3dc

// -[SCVideoExportImageProcessor processImageWithGraphInputs:outputPixelBuffer:outputRenderer:presentationTime:transcodingTaskId:enableCPUFallback:completionHandler:]
// Type encoding: v84@0:8@16^{__CVBuffer=}24@32{?=qiIq}40@64B72@?76
// Implementation: 0x10905d748

// -[SCVideoExportImageProcessor _registerNotificationHandlers]
// Type encoding: v16@0:8
// Implementation: 0x10905d7d0

// -[SCVideoExportImageProcessor cancelProcessing]
// Type encoding: v16@0:8
// Implementation: 0x10905d85c

// -[SCVideoExportImageProcessor imageProcessCommandsInfo]
// Type encoding: @16@0:8
// Implementation: 0x10905d860

// -[SCVideoExportImageProcessor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10905d958

// -[SCVideoExportImageProcessor _cleanupCommands]
// Type encoding: v16@0:8
// Implementation: 0x10905d99c

// -[SCVideoExportImageProcessor commandNeedAsyncWarmup]
// Type encoding: B16@0:8
// Implementation: 0x10905da18

// -[SCVideoExportImageProcessor _imageLensCommandWarmupTimeout]
// Type encoding: v16@0:8
// Implementation: 0x10905da20

// -[SCVideoExportImageProcessor _imageLensCommandWarmupComplete]
// Type encoding: v16@0:8
// Implementation: 0x10905da24

// -[SCVideoExportImageProcessor _startOperationQueue]
// Type encoding: v16@0:8
// Implementation: 0x10905da28

// -[SCVideoExportImageProcessor _cleanupPendingOperationQueue]
// Type encoding: v16@0:8
// Implementation: 0x10905da88

// -[SCVideoExportImageProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10905dab0

@end
