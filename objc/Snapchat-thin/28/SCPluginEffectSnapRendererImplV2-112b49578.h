// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPluginEffectSnapRendererImplV2
// Superclass: NSObject
// Address: 0x112b49578

@interface SCPluginEffectSnapRendererImplV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPluginEffectSnapRendererImplV2 initWithSnapDocManager:circumstanceEngine:timeProvider:snapDocEditorFactory:lazyVideoTranscoder:snapDocOverlayImageGenerationServices:overlayFormatServices:musicMediaLoader:musicTrackAudioDataLoader:temporaryFileWriterServices:snapRendererLogger:performer:imageCache:videoUrlCache:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x106f31aa4

// -[SCPluginEffectSnapRendererImplV2 requiresRenderPlugins]
// Type encoding: B16@0:8
// Implementation: 0x106f31e00

// -[SCPluginEffectSnapRendererImplV2 ngsmeUserInitiatedTargetResolutionWidth]
// Type encoding: i16@0:8
// Implementation: 0x106f31e08

// -[SCPluginEffectSnapRendererImplV2 ngsmeUserInitiatedTargetResolutionHeight]
// Type encoding: i16@0:8
// Implementation: 0x106f31e20

// -[SCPluginEffectSnapRendererImplV2 useNgsmeInputBasedResolution]
// Type encoding: B16@0:8
// Implementation: 0x106f31e38

// -[SCPluginEffectSnapRendererImplV2 useBGRAPixelBuffer]
// Type encoding: B16@0:8
// Implementation: 0x106f31e50

// -[SCPluginEffectSnapRendererImplV2 generateGlobalOverlay]
// Type encoding: B16@0:8
// Implementation: 0x106f31e68

// -[SCPluginEffectSnapRendererImplV2 renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x106f31e80

// -[SCPluginEffectSnapRendererImplV2 _retrieveMediasForSnapDoc:response:destination:snapSource:renderCTItemInstances:renderLogger:plugins:]
// Type encoding: v72@0:8@16@24q32q40@48@56@64
// Implementation: 0x106f31fc8

// -[SCPluginEffectSnapRendererImplV2 _renderSnapDocInEditor:toResponse:destination:snapSource:renderCTItemInstances:inputMedias:renderLogger:plugins:outputSnapDocPersistedData:durationMs:renderingPath:]
// Type encoding: v152@0:8@16@24q32q40@48@56@64@72{?=@@@@@@@}80Q136q144
// Implementation: 0x106f32714

// -[SCPluginEffectSnapRendererImplV2 _renderSnapDocInEditor:withCTItemInstance:medias:renderLogger:durationMs:renderingPath:plugins:response:destination:snapSource:progressHandler:]
// Type encoding: @104@0:8@16@24@32@40Q48q56@64@72q80q88@?96
// Implementation: 0x106f33364

// -[SCPluginEffectSnapRendererImplV2 _applyPlugin:toMedias:snapDocEditor:renderLogger:durationMs:renderingPath:response:destination:snapSource:progressHandler:]
// Type encoding: @96@0:8@16@24@32@40Q48q56@64q72q80@?88
// Implementation: 0x106f337e8

// -[SCPluginEffectSnapRendererImplV2 _handlePreparedPlugin:snapDocEditor:withMedias:renderLogger:durationMs:musicSelection:renderingPath:resultPromise:response:destination:snapSource:progressHandler:]
// Type encoding: v112@0:8@16@24@32@40Q48@56q64@72@80q88q96@?104
// Implementation: 0x106f33dcc

// -[SCPluginEffectSnapRendererImplV2 _renderImageWithSampleBuffers:withRenderPlugin:renderLogger:resultPromise:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106f343a0

// -[SCPluginEffectSnapRendererImplV2 _completeResponse:withSnapDocEditorFuture:staticOverlayFromPlugin:renderLogger:outputSnapDocPersistedData:]
// Type encoding: v104@0:8@16@24@32@40{?=@@@@@@@}48
// Implementation: 0x106f3470c

// -[SCPluginEffectSnapRendererImplV2 _renderVideoWithMedias:snapDocEditor:withRenderPlugin:renderLogger:durationMs:musicSelection:resultPromise:response:destination:snapSource:progressHandler:]
// Type encoding: v104@0:8@16@24@32@40Q48@56@64@72q80q88@?96
// Implementation: 0x106f34afc

// -[SCPluginEffectSnapRendererImplV2 _renderNgsmeSnap:withRenderPlugin:renderLogger:resultPromise:destination:snapSource:originalSnapDoc:progressHandler:]
// Type encoding: v80@0:8@16@24@32@40q48q56@64@?72
// Implementation: 0x106f34e44

// -[SCPluginEffectSnapRendererImplV2 _transcodeInputWithNGSMESnap:destination:snapSource:originalSnapDoc:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x106f35214

// -[SCPluginEffectSnapRendererImplV2 _transcodeOutput]
// Type encoding: @16@0:8
// Implementation: 0x106f35658

// -[SCPluginEffectSnapRendererImplV2 _snapDocWithOutputImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3573c

// -[SCPluginEffectSnapRendererImplV2 _snapDocWithOutputVideoAsset:destination:outputResolution:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x106f357fc

// -[SCPluginEffectSnapRendererImplV2 _snapDocWithMediaInput:mediaType:dimensions:durationMs:]
// Type encoding: @52@0:8@16i24{CGSize=dd}28d44
// Implementation: 0x106f358e8

// -[SCPluginEffectSnapRendererImplV2 _applyPersistedData:staticOverlayFromPlugin:processingMetadataAppliers:toSnapDocEditor:]
// Type encoding: @96@0:8{?=@@@@@@@}16@72@80@88
// Implementation: 0x106f35900

// -[SCPluginEffectSnapRendererImplV2 _outputPersistedDataWithEditor:error:]
// Type encoding: {?=@@@@@@@}32@0:8@16^@24
// Implementation: 0x106f361f4

// -[SCPluginEffectSnapRendererImplV2 preparePlaybackModel:destination:withPlugins:toResponse:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x106f36664

// -[SCPluginEffectSnapRendererImplV2 _preparePlaybackModel:withPlugins:renderCTItems:destination:response:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x106f36728

// -[SCPluginEffectSnapRendererImplV2 _prepareNGSMESnapFromEditor:inputMedia:renderCTItems:renderPlugins:durationMs:destination:response:]
// Type encoding: v72@0:8@16@24@32@40Q48q56@64
// Implementation: 0x106f36af0

// -[SCPluginEffectSnapRendererImplV2 mediasContainCustomTimeRanges:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f37318

// -[SCPluginEffectSnapRendererImplV2 trackCountForMedias:]
// Type encoding: q24@0:8@16
// Implementation: 0x106f37708

// -[SCPluginEffectSnapRendererImplV2 _warmupWithSampleBuffers:withRenderPlugin:renderLogger:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106f37904

// -[SCPluginEffectSnapRendererImplV2 _buildNGSMESnapWithMedias:snapDocEditor:withRenderPlugins:renderLogger:durationMs:musicSelection:globalOverlayFuture:response:]
// Type encoding: v80@0:8@16@24@32@40Q48@56@64@72
// Implementation: 0x106f37ab4

// -[SCPluginEffectSnapRendererImplV2 _sampleBuffersFromImages:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f39450

// -[SCPluginEffectSnapRendererImplV2 _pluginFactoriesForDestination:factories:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x106f396fc

// -[SCPluginEffectSnapRendererImplV2 _pluginWithCTItem:plugins:destination:error:]
// Type encoding: @48@0:8@16@24q32^@40
// Implementation: 0x106f398b0

// -[SCPluginEffectSnapRendererImplV2 _renderingPathForSnapDoc:destination:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106f39a68

// -[SCPluginEffectSnapRendererImplV2 _mediasFutureForSnapDoc:renderingPath:error:]
// Type encoding: @40@0:8@16q24^@32
// Implementation: 0x106f39af4

// -[SCPluginEffectSnapRendererImplV2 _durationMsForSnapDoc:renderingPath:error:]
// Type encoding: Q40@0:8@16q24^@32
// Implementation: 0x106f39bb8

// -[SCPluginEffectSnapRendererImplV2 _mediasFutureForSnapDoc:imageOnly:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f39e04

// -[SCPluginEffectSnapRendererImplV2 _musicSelectionWithSnapDocEditor:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3a9dc

// -[SCPluginEffectSnapRendererImplV2 _loadMusicSelectionWithMusicTrackPlaybackLayer:promise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f3ad44

// -[SCPluginEffectSnapRendererImplV2 _overlayImageFromSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3b038

// -[SCPluginEffectSnapRendererImplV2 _globalOverlayImageFutureForEditor:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3b218

// -[SCPluginEffectSnapRendererImplV2 _warmupFramesFromMedias:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3b3e0

// -[SCPluginEffectSnapRendererImplV2 _imagesFromMedias:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3b5b0

// -[SCPluginEffectSnapRendererImplV2 _videosFromMedias:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3b6dc

// -[SCPluginEffectSnapRendererImplV2 _thumbnailMediaFutureForAsset:videoURL:trackIndex:timeRange:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106f3b808

// -[SCPluginEffectSnapRendererImplV2 cropImageTo9_16:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3bbe8

// -[SCPluginEffectSnapRendererImplV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f3bdfc

@end
