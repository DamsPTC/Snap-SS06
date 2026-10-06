// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapRendererSnapDocTranscodingImpl
// Superclass: NSObject
// Address: 0x112b49848

@interface SCSnapRendererSnapDocTranscodingImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapRendererSnapDocTranscodingImpl initWithSnapRendererLogger:userSession:previewAssetVideoProviderFactory:audioProcessingSessionFactory:musicMediaLoader:voiceoverMediaLoader:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:captionDataProvider:creativeToolsMemoriesResources:directorModeVideoOptimizationConfig:snapVideoFilterServices:snapDocEditorFactory:snapDocConverterServices:watermarkServices:performer:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x106f42688

// -[SCSnapRendererSnapDocTranscodingImpl requiresRenderPlugins]
// Type encoding: B16@0:8
// Implementation: 0x106f42a3c

// -[SCSnapRendererSnapDocTranscodingImpl renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x106f42a44

// -[SCSnapRendererSnapDocTranscodingImpl _completeResponse:snapDocWithVideoURL:overlayImage:attachments:isAnimatedImage:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x106f4307c

// -[SCSnapRendererSnapDocTranscodingImpl _snapVideoFilterParamsForDestination:]
// Type encoding: @24@0:8q16
// Implementation: 0x106f4316c

// -[SCSnapRendererSnapDocTranscodingImpl _snapDocWithVideoUrl:overlayImage:attachments:isAnimatedImage:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x106f431e8

// -[SCSnapRendererSnapDocTranscodingImpl _addBaseMediaWithVideoURL:editor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f434f0

// -[SCSnapRendererSnapDocTranscodingImpl _addOverlayImage:editor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f438c4

// -[SCSnapRendererSnapDocTranscodingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f43be0

@end
