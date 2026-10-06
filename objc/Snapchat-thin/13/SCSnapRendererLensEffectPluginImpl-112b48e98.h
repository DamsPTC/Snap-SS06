// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapRendererLensEffectPluginImpl
// Superclass: NSObject
// Address: 0x112b48e98

@interface SCSnapRendererLensEffectPluginImpl

// Property: supportsYUVInput; attributes: TB,R,N
// Property: textureType; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapRendererLensEffectPluginImpl initWithLaunchDataServices:lensRenderingFactory:lensEffectWarmer:cameraLifecycleEventObservable:applicationLifecycleEvents:performerProvider:lensProcessingUseCase:performer:crashLogger:lensContentPreparationStrategy:memoriesNavigationServiceFuture:offscreenPlaybackEventNotifierObjc:processingMetadataApplyingFactory:lensLaunchTimeOverrideEnabled:shouldGenerateOnCameraPage:]
// Type encoding: @128@0:8@16@24@32@40@48@56Q64@72@80@88@96@104@112B120B124
// Implementation: 0x100c565d4

// -[SCSnapRendererLensEffectPluginImpl prepareResourcesWithInputCount:snapInfo:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x106f24014

// -[SCSnapRendererLensEffectPluginImpl supportsYUVInput]
// Type encoding: B16@0:8
// Implementation: 0x106f2468c

// -[SCSnapRendererLensEffectPluginImpl textureType]
// Type encoding: q16@0:8
// Implementation: 0x106f24694

// -[SCSnapRendererLensEffectPluginImpl isWarmingUpWithVideoInputsRequired]
// Type encoding: B16@0:8
// Implementation: 0x106f2469c

// -[SCSnapRendererLensEffectPluginImpl warmupWithVideoInputs:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f24770

// -[SCSnapRendererLensEffectPluginImpl cleanUpResourcesAndReturnError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106f24be4

// -[SCSnapRendererLensEffectPluginImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x106f24bfc

// -[SCSnapRendererLensEffectPluginImpl processVideoInputs:inputTextures:outputTexture:timestamp:error:]
// Type encoding: @72@0:8@16@24@32{?=qiIq}40^@64
// Implementation: 0x106f24c2c

// -[SCSnapRendererLensEffectPluginImpl renderStaticOverlayWithSize:error:]
// Type encoding: @40@0:8{CGSize=dd}16^@32
// Implementation: 0x106f24ea4

// -[SCSnapRendererLensEffectPluginImpl processingMetadataApplier]
// Type encoding: @16@0:8
// Implementation: 0x106f24eac

// -[SCSnapRendererLensEffectPluginImpl warmContentForLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f24ed4

// -[SCSnapRendererLensEffectPluginImpl setLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f25064

// -[SCSnapRendererLensEffectPluginImpl setLaunchMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f250a0

// -[SCSnapRendererLensEffectPluginImpl setOverrideLensLaunchTime:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f250d0

// -[SCSnapRendererLensEffectPluginImpl defaultVideoPipelineResolution]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106f250d8

// -[SCSnapRendererLensEffectPluginImpl _subscribeToLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x100c57058

// -[SCSnapRendererLensEffectPluginImpl _cameraSessionDidStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x106f2527c

// -[SCSnapRendererLensEffectPluginImpl _cameraSessionDidStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x106f2528c

// -[SCSnapRendererLensEffectPluginImpl _cameraWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x106f25290

// -[SCSnapRendererLensEffectPluginImpl _cameraDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106f252b8

// -[SCSnapRendererLensEffectPluginImpl _willResignActive]
// Type encoding: v16@0:8
// Implementation: 0x106f252c0

// -[SCSnapRendererLensEffectPluginImpl _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106f252c4

// -[SCSnapRendererLensEffectPluginImpl _didBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x106f252ec

// -[SCSnapRendererLensEffectPluginImpl _completePrepareResourcesPromiseWithValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f25348

// -[SCSnapRendererLensEffectPluginImpl _completePrepareResourcesPromiseWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f253b0

// -[SCSnapRendererLensEffectPluginImpl _resetForCurrentEffect]
// Type encoding: v16@0:8
// Implementation: 0x106f253e4

// -[SCSnapRendererLensEffectPluginImpl _reset]
// Type encoding: v16@0:8
// Implementation: 0x106f254e4

// -[SCSnapRendererLensEffectPluginImpl _setupLaunchConfigurationWithSnapInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f25508

// -[SCSnapRendererLensEffectPluginImpl _processVideoInputs:timestamp:error:]
// Type encoding: @56@0:8@16{?=qiIq}24^@48
// Implementation: 0x106f25888

// -[SCSnapRendererLensEffectPluginImpl _handlePrimaryStreamPixelBuffer:timestamp:error:]
// Type encoding: @56@0:8^{__CVBuffer=}16{?=qiIq}24^@48
// Implementation: 0x106f25f20

// -[SCSnapRendererLensEffectPluginImpl _initializeResourceIdsForInputCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106f25fe8

// -[SCSnapRendererLensEffectPluginImpl _prepareMusicResourcesWithSnapInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f26070

// -[SCSnapRendererLensEffectPluginImpl _isInvalidMusicTrackId:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106f26208

// -[SCSnapRendererLensEffectPluginImpl _emitPlaybackEventForRenderTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x106f26218

// -[SCSnapRendererLensEffectPluginImpl _didCompleteLensWarmupWithProcessingComponents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f26400

// -[SCSnapRendererLensEffectPluginImpl _configureExternalStreams]
// Type encoding: v16@0:8
// Implementation: 0x106f265f8

// -[SCSnapRendererLensEffectPluginImpl _processPixelBuffer:timestamp:error:]
// Type encoding: @56@0:8^{__CVBuffer=}16{?=qiIq}24^@48
// Implementation: 0x106f26708

// -[SCSnapRendererLensEffectPluginImpl _snapRendererErrorFromPreparationError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f2681c

// -[SCSnapRendererLensEffectPluginImpl _reportNonFatalWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f26920

// -[SCSnapRendererLensEffectPluginImpl _reportNonFatalWithError:lensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f26928

// -[SCSnapRendererLensEffectPluginImpl setIsLensPluginEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f26a64

// -[SCSnapRendererLensEffectPluginImpl isLensPluginEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106f26a94

// -[SCSnapRendererLensEffectPluginImpl setIsPreparationCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106f26ac8

// -[SCSnapRendererLensEffectPluginImpl isPreparationCompleted]
// Type encoding: B16@0:8
// Implementation: 0x106f26af8

// -[SCSnapRendererLensEffectPluginImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f26b2c

@end
