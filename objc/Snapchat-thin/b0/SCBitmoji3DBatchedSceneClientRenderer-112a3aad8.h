// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmoji3DBatchedSceneClientRenderer
// Superclass: NSObject
// Address: 0x112a3aad8

@interface SCBitmoji3DBatchedSceneClientRenderer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmoji3DBatchedSceneClientRenderer initWithLensProcessor:lensWarmer:bitmojiSceneDataFetcher:bitmojiGLBFetcher:bitmojiAvatarProvider:configProvider:performerProvider:lifecycleManager:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105493f84

// -[SCBitmoji3DBatchedSceneClientRenderer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105494138

// -[SCBitmoji3DBatchedSceneClientRenderer renderImageDataForCurrentAvatarWithCallback:sceneIds:friendAvatarId:renderSurface:trimImage:lensId:clientRenderGating:attribution:text:imageType:isStaging:engineType:scale:]
// Type encoding: @108@0:8@16@24@32Q40B48@52@60@68@76Q84B92i96Q100
// Implementation: 0x105494188

// -[SCBitmoji3DBatchedSceneClientRenderer clearResources]
// Type encoding: v16@0:8
// Implementation: 0x105496000

// -[SCBitmoji3DBatchedSceneClientRenderer _colorizeImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105496108

// -[SCBitmoji3DBatchedSceneClientRenderer _trimImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105496274

// -[SCBitmoji3DBatchedSceneClientRenderer _getClientRenderSceneResultObservableWithRenderSurface:sceneId:avatarId:friendAvatarId:clientRenderGating:attribution:text:isStaging:engineType:scale:]
// Type encoding: @88@0:8Q16@24@32@40@48@56@64B72i76Q80
// Implementation: 0x105496650

// -[SCBitmoji3DBatchedSceneClientRenderer _constructCustomojiAvatarAssetUrlFromSceneId:avatarId:friendAvatarId:isStaging:engineType:scale:]
// Type encoding: @56@0:8@16@24@32B40i44Q48
// Implementation: 0x105496a2c

// -[SCBitmoji3DBatchedSceneClientRenderer _logGenericErrorWithRenderSurface:error:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105496b44

// -[SCBitmoji3DBatchedSceneClientRenderer _logCancelWithRenderSurface:step:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105496bb0

// -[SCBitmoji3DBatchedSceneClientRenderer _logRenderFinishWithRenderSurface:durationMS:isStartup:]
// Type encoding: v36@0:8Q16q24B32
// Implementation: 0x105496c18

// -[SCBitmoji3DBatchedSceneClientRenderer _compressImageAndLogMetricsWithProcessedImage:renderSurface:previousRequestStartTime:isFirstRender:imageType:]
// Type encoding: @52@0:8@16Q24q32B40Q44
// Implementation: 0x105496cbc

// -[SCBitmoji3DBatchedSceneClientRenderer _processLensRenderingWithMemento:processor:configurator:renderSurface:previousRequestStartTime:isFirstRender:trimImage:error:imageType:scale:]
// Type encoding: @88@0:8@16@24@32Q40q48B56B60^@64Q72Q80
// Implementation: 0x105496e14

// -[SCBitmoji3DBatchedSceneClientRenderer _renderingFailedWithError:sceneIds:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105497174

// -[SCBitmoji3DBatchedSceneClientRenderer _processLensActiviationWithProcessor:assetsWarmEnumerator:configurator:sceneIds:trimImage:callback:renderSurface:initialRequestTime:imageType:scale:clientRenderGating:]
// Type encoding: v100@0:8@16@24@32@40B48@52Q60q68Q76Q84@92
// Implementation: 0x1054972ac

// -[SCBitmoji3DBatchedSceneClientRenderer _enqueueRenderingWithMemento:assetsWarmEnumerator:callback:sceneIds:trimImage:renderSurface:initialRequestTime:imageType:scale:clientRenderGating:]
// Type encoding: v92@0:8@16@24@32@40B48Q52q60Q68Q76@84
// Implementation: 0x10549789c

// -[SCBitmoji3DBatchedSceneClientRenderer _prepareRenderingWithMemento:assetsWarmEnumerator:callback:sceneIds:trimImage:renderSurface:initialRequestTime:imageType:scale:clientRenderGating:]
// Type encoding: v92@0:8@16@24@32@40B48Q52q60Q68Q76@84
// Implementation: 0x105497ad0

// -[SCBitmoji3DBatchedSceneClientRenderer _shouldColorizeClientRenders]
// Type encoding: B16@0:8
// Implementation: 0x105497f5c

// -[SCBitmoji3DBatchedSceneClientRenderer _end:]
// Type encoding: v24@0:8@16
// Implementation: 0x105497f74

// -[SCBitmoji3DBatchedSceneClientRenderer _isAppBackgrounded]
// Type encoding: B16@0:8
// Implementation: 0x105498068

// -[SCBitmoji3DBatchedSceneClientRenderer _shouldCancelForAppBackground]
// Type encoding: B16@0:8
// Implementation: 0x105498070

// -[SCBitmoji3DBatchedSceneClientRenderer _shouldCancelCallback:clientRenderGating:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1054980a8

// -[SCBitmoji3DBatchedSceneClientRenderer _cancellationErrorForGating:]
// Type encoding: @24@0:8@16
// Implementation: 0x105498110

// -[SCBitmoji3DBatchedSceneClientRenderer _clearResources]
// Type encoding: v16@0:8
// Implementation: 0x105498158

// -[SCBitmoji3DBatchedSceneClientRenderer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105498190

@end
