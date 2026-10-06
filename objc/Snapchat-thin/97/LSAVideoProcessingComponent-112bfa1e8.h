// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAVideoProcessingComponent
// Superclass: LSABaseComponent
// Address: 0x112bfa1e8

@interface LSAVideoProcessingComponent


// -[LSAVideoProcessingComponent setProcessingMode:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10adcf6d4

// -[LSAVideoProcessingComponent setViewPortAspectRatioNumerator:denominator:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10adcfa3c

// -[LSAVideoProcessingComponent setOutputResolution:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10adcfb10

// -[LSAVideoProcessingComponent setScreenScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x10adcfe18

// -[LSAVideoProcessingComponent setYuvRenderingResolutionWidth:height:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10adcfec8

// -[LSAVideoProcessingComponent setCameraInfoWithProcessingInfo:cameraType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10adcff84

// -[LSAVideoProcessingComponent processPixelBuffer:processingInfo:info:error:]
// Type encoding: @48@0:8^{__CVBuffer=}16@24^@32^@40
// Implementation: 0x10add0304

// -[LSAVideoProcessingComponent processPixelBufferV2:processingInfo:error:]
// Type encoding: ^{__CVBuffer=}40@0:8^{__CVBuffer=}16@24^@32
// Implementation: 0x10add0c88

// -[LSAVideoProcessingComponent processTexture:textureSize:data:pixelBuffer:processingInfo:info:error:]
// Type encoding: @76@0:8i16{CGSize=dd}20^v36^{__CVBuffer=}44@52^@60^@68
// Implementation: 0x10add13a4

// -[LSAVideoProcessingComponent processTexture:textureSize:data:processingInfo:info:error:]
// Type encoding: @68@0:8i16{CGSize=dd}20^v36@44^@52^@60
// Implementation: 0x10add299c

// -[LSAVideoProcessingComponent processImage:maxPixelSize:processingInfo:info:error:]
// Type encoding: @56@0:8@16q24@32^@40^@48
// Implementation: 0x10add29c8

// -[LSAVideoProcessingComponent processToImageFromPixelBuffer:processingInfo:error:]
// Type encoding: @40@0:8^{__CVBuffer=}16@24^@32
// Implementation: 0x10add3a1c

// -[LSAVideoProcessingComponent imageProcessingConfigFromProcessingInfo:cameraInfo:]
// Type encoding: {shared_ptr<LS::ImageProcessingConfig>=^{ImageProcessingConfig}^{__shared_weak_count}}32@0:8@16r^v24
// Implementation: 0x10add4b2c

// -[LSAVideoProcessingComponent imageFromBGRAPixelBuffer:processingInfo:cameraInfo:coreManager:]
// Type encoding: {unique_ptr<LS::Image, std::default_delete<LS::Image>>=^{Image}}56@0:8^{__CVBuffer=}16@24r^v32{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}40
// Implementation: 0x10add4be0

// -[LSAVideoProcessingComponent _processBGRAPixelBuffer:processingInfo:coreManager:]
// Type encoding: @48@0:8^{__CVBuffer=}16@24{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}32
// Implementation: 0x10add4db0

// -[LSAVideoProcessingComponent isCameraFrameNeededForNextSubmission]
// Type encoding: B16@0:8
// Implementation: 0x10add57fc

// -[LSAVideoProcessingComponent imageAndTextureFromYUVPixelBuffer:processingInfo:cameraInfo:inputSize:shouldDownscaleImage:coreManager:]
// Type encoding: {tuple<std::unique_ptr<LS::Image>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, CGSize>={__tuple_impl<std::__tuple_indices<0, 1, 2, 3, 4>, std::unique_ptr<LS::Image>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, CGSize>={unique_ptr<LS::Image, std::default_delete<LS::Image>>=^{Image}}{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}{CGSize=dd}}}76@0:8^{__CVBuffer=}16@24r^v32{CGSize=dd}40B56{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}60
// Implementation: 0x10add58c0

// -[LSAVideoProcessingComponent imageAndTextureFromYUVPixelBuffer:processingInfo:cameraInfo:inputSize:shouldDownscaleImage:cameraFrameNeeded:coreManager:]
// Type encoding: {tuple<std::unique_ptr<LS::Image>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, CGSize>={__tuple_impl<std::__tuple_indices<0, 1, 2, 3, 4>, std::unique_ptr<LS::Image>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, std::shared_ptr<LS::TextureBase>, CGSize>={unique_ptr<LS::Image, std::default_delete<LS::Image>>=^{Image}}{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}{shared_ptr<LS::TextureBase>=^{TextureBase}^{__shared_weak_count}}{CGSize=dd}}}80@0:8^{__CVBuffer=}16@24r^v32{CGSize=dd}40B56B60{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}64
// Implementation: 0x10add59d8

// -[LSAVideoProcessingComponent _processYUVPixelBuffer:processingInfo:coreManager:]
// Type encoding: @48@0:8^{__CVBuffer=}16@24{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}32
// Implementation: 0x10add6038

// -[LSAVideoProcessingComponent _processYUVPixelBufferV2:processingInfo:coreManager:]
// Type encoding: ^{__CVBuffer=}48@0:8^{__CVBuffer=}16@24{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}32
// Implementation: 0x10add6e58

// -[LSAVideoProcessingComponent _processBGRAPixelBufferV2:processingInfo:coreManager:]
// Type encoding: ^{__CVBuffer=}48@0:8^{__CVBuffer=}16@24{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}32
// Implementation: 0x10add8090

// -[LSAVideoProcessingComponent _isPostCaptureProcessingMode:]
// Type encoding: B24@0:8@16
// Implementation: 0x10add8c40

// -[LSAVideoProcessingComponent _postCaptureRequiresTextureForExport:]
// Type encoding: B24@0:8@16
// Implementation: 0x10add8c5c

// -[LSAVideoProcessingComponent setTexTransformToPortraitOrientation:texTransformToOriginalOrientation:sizeTransformToPortraitOrientation:sizeTransformToOriginalOrientation:imageOrientation:]
// Type encoding: v56@0:8^{Transform=ii}16^{Transform=ii}24^{RectTransform=i}32^{RectTransform=i}40q48
// Implementation: 0x10add8cc8

// -[LSAVideoProcessingComponent updateTextureOrientationWithCameraInfo:]
// Type encoding: v24@0:8r^v16
// Implementation: 0x10add8d14

// -[LSAVideoProcessingComponent prepareFrameBufferForTextureSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10add8da4

// -[LSAVideoProcessingComponent setupSafeRenderZones:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10add8e50

// -[LSAVideoProcessingComponent prepareConvertorsForInputSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10add923c

// -[LSAVideoProcessingComponent prepareTextureConverter]
// Type encoding: v16@0:8
// Implementation: 0x10add9304

// -[LSAVideoProcessingComponent outputInfoDictionary]
// Type encoding: @16@0:8
// Implementation: 0x10add93a4

// -[LSAVideoProcessingComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10add979c

// -[LSAVideoProcessingComponent clearResources]
// Type encoding: v16@0:8
// Implementation: 0x10add981c

// -[LSAVideoProcessingComponent uiImageFromTexture:]
// Type encoding: @24@0:8@16
// Implementation: 0x10add9a08

// -[LSAVideoProcessingComponent setViewport:completion:]
// Type encoding: v248@0:8{LSALensViewport={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}16@?240
// Implementation: 0x10adda104

// -[LSAVideoProcessingComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10addab84

// -[LSAVideoProcessingComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10addac14

// +[LSAVideoProcessingComponent shouldUseFinishOnRecordingFromARKit:]
// Type encoding: B20@0:8B16
// Implementation: 0x10add98f8

// +[LSAVideoProcessingComponent aspectRatioModeForFillMode:]
// Type encoding: i24@0:8q16
// Implementation: 0x10add99f8

// +[LSAVideoProcessingComponent _prepareOutputTextureWithTexture:processingInfo:]
// Type encoding: {shared_ptr<LS::TextureWithTransform>=^{TextureWithTransform}^{__shared_weak_count}}32@0:8r^v16@24
// Implementation: 0x10add9e48

@end
