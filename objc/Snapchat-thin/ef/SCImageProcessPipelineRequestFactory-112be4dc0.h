// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPipelineRequestFactory
// Superclass: NSObject
// Address: 0x112be4dc0

@interface SCImageProcessPipelineRequestFactory


// -[SCImageProcessPipelineRequestFactory colorFilterRequestWithGlWrapper:imageData:pixelSize:backgroundAnimationCommand:commands:bakedImageHandler:outputImageBaker:renderer:orientation:viewportTransform:backgroundColor:context:taskId:completionHandler:colorFilterSessionId:presentationTime:]
// Type encoding: @208@0:8@16@24{?=QQ}32@48@56@?64@72@80q88{CGAffineTransform=dddddd}96@144@152@160@?168@176{?=qiIq}184
// Implementation: 0x109085084

// -[SCImageProcessPipelineRequestFactory pixelRequestWithImageData:inputPixelSize:outputPixelSize:presentationTime:backgroundAnimationCommand:commands:orientation:viewportTransform:context:bakedImageHandler:completionHandler:]
// Type encoding: @176@0:8@16{?=QQ}24{?=QQ}40{?=qiIq}56@80@88q96{CGAffineTransform=dddddd}104@152@?160@?168
// Implementation: 0x1090852f4

// -[SCImageProcessPipelineRequestFactory requestWithGraphInputs:outputPixelBuffer:pixelBufferPoolRef:textureCacheHolder:presentationTime:outputColorSpace:renderPasses:context:taskId:enableCPUFallback:completionHandler:]
// Type encoding: @116@0:8@16^{__CVBuffer=}24^{__CVPixelBufferPool=}32@40{?=qiIq}48q72@80@88@96B104@?108
// Implementation: 0x1090855c0

// -[SCImageProcessPipelineRequestFactory requestWithGraphInputs:outputRenderer:outputSize:pixelBufferPoolRef:textureCacheHolder:presentationTime:outputColorSpace:renderPasses:context:taskId:enableCPUFallback:completionHandler:]
// Type encoding: @132@0:8@16@24{CGSize=dd}32^{__CVPixelBufferPool=}48@56{?=qiIq}64q88@96@104@112B120@?124
// Implementation: 0x1090856f4

// -[SCImageProcessPipelineRequestFactory videoExportRequestWithInputPixelBuffer:outputPixelBuffer:orientation:viewportTransform:cpuBufferTransform:presentationTime:presentationTimeOffset:colorSpace:GPUCommands:CPUCommands:backgroundCommand:context:taskId:completionHandler:]
// Type encoding: @224@0:8^{__CVBuffer=}16^{__CVBuffer=}24q32{CGAffineTransform=dddddd}40{CGAffineTransform=dddddd}88{?=qiIq}136@160q168@176@184@192@200@208@?216
// Implementation: 0x109085850

// -[SCImageProcessPipelineRequestFactory videoPlaybackRequestWithPixelBuffer:renderer:backgroundAnimationCommand:orientation:presentationTime:viewportTransform:outputCommands:midOutputCommands:backgroundColor:context:completionHandler:]
// Type encoding: @160@0:8^{__CVBuffer=}16@24@32q40{?=qiIq}48{CGAffineTransform=dddddd}72@120@128@136@144@?152
// Implementation: 0x109085a88

@end
