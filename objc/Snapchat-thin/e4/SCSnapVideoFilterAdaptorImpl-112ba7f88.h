// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapVideoFilterAdaptorImpl
// Superclass: NSObject
// Address: 0x112ba7f88

@interface SCSnapVideoFilterAdaptorImpl

// Property: previewCameraSourceOverlayService; attributes: T@"SCPreviewCameraSourceOverlayService",&,N,V_previewCameraSourceOverlayService
// Property: multiSnapOverlayStates; attributes: T@"NSArray",&,N,V_multiSnapOverlayStates
// Property: multiSnapDrawingCache; attributes: T@"SCMultiSnapDrawingCacheImpl",&,N,V_multiSnapDrawingCache
// Property: overlayAndTrackedImagesHandler; attributes: T@?,C,N,V_overlayAndTrackedImagesHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapVideoFilterAdaptorImpl initLegacy]
// Type encoding: @16@0:8
// Implementation: 0x10853ef30

// -[SCSnapVideoFilterAdaptorImpl initWithUserSession:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:stickerInjector:ctpItemViewService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1085924d8

// -[SCSnapVideoFilterAdaptorImpl activeVideoPaths]
// Type encoding: @16@0:8
// Implementation: 0x108592668

// -[SCSnapVideoFilterAdaptorImpl addVideoPathToActiveVideoPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085926ac

// -[SCSnapVideoFilterAdaptorImpl removeVideoPathFromActiveVideoPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085926fc

// -[SCSnapVideoFilterAdaptorImpl currentUserId]
// Type encoding: @16@0:8
// Implementation: 0x10859274c

// -[SCSnapVideoFilterAdaptorImpl generateOverlayAndTrackedImagesForMultiSnapWithOverlaySize:outputSize:inputVideoDurationMS:spectaclesTranscodingConfig:videoPlaybackSpeed:mediaDestination:completion:]
// Type encoding: v88@0:8{CGSize=dd}16{CGSize=dd}32@48@56d64Q72@?80
// Implementation: 0x10859278c

// -[SCSnapVideoFilterAdaptorImpl hasMultiSnapOverlayState]
// Type encoding: B16@0:8
// Implementation: 0x108592a14

// -[SCSnapVideoFilterAdaptorImpl hasSameMultiSnapOverlayStateWithAdaptor:]
// Type encoding: B24@0:8@16
// Implementation: 0x108592a54

// -[SCSnapVideoFilterAdaptorImpl containsTrackedImagesForMultiSnapOverlayState]
// Type encoding: B16@0:8
// Implementation: 0x108592cac

// -[SCSnapVideoFilterAdaptorImpl clearMultiSnapOverlayState]
// Type encoding: v16@0:8
// Implementation: 0x108592d00

// -[SCSnapVideoFilterAdaptorImpl generateOverlayAndTrackedImagesForMultiSnapAtIndex:overlaySize:outputSize:spectaclesTranscodingConfig:videoPlaybackSpeed:mediaDestination:completion:]
// Type encoding: v88@0:8Q16{CGSize=dd}24{CGSize=dd}40@56d64Q72@?80
// Implementation: 0x108592d08

// -[SCSnapVideoFilterAdaptorImpl virtualCommandsForRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x108592ee4

// -[SCSnapVideoFilterAdaptorImpl commandsForRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x108592f50

// -[SCSnapVideoFilterAdaptorImpl videoCPUCommandForFilterName:config:isSpectacles:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108592fbc

// -[SCSnapVideoFilterAdaptorImpl imageCommandForFilterName:config:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108593048

// -[SCSnapVideoFilterAdaptorImpl imageCommandForCommandConfiguration:filterConfiguration:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085930dc

// -[SCSnapVideoFilterAdaptorImpl mainAppImageProcessCommandProvider]
// Type encoding: @16@0:8
// Implementation: 0x108593160

// -[SCSnapVideoFilterAdaptorImpl imageCommandForMultiSnapV2ThumbnailFromFilterName:]
// Type encoding: @24@0:8@16
// Implementation: 0x108593168

// -[SCSnapVideoFilterAdaptorImpl spectaclesRectificationCommandForConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085931c8

// -[SCSnapVideoFilterAdaptorImpl _legacyCameraActiveVideoPaths]
// Type encoding: @16@0:8
// Implementation: 0x108593234

// -[SCSnapVideoFilterAdaptorImpl previewCameraSourceOverlayService]
// Type encoding: @16@0:8
// Implementation: 0x10859323c

// -[SCSnapVideoFilterAdaptorImpl setPreviewCameraSourceOverlayService:]
// Type encoding: v24@0:8@16
// Implementation: 0x108593244

// -[SCSnapVideoFilterAdaptorImpl overlayAndTrackedImagesHandler]
// Type encoding: @?16@0:8
// Implementation: 0x108593274

// -[SCSnapVideoFilterAdaptorImpl setOverlayAndTrackedImagesHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10859327c

// -[SCSnapVideoFilterAdaptorImpl multiSnapOverlayStates]
// Type encoding: @16@0:8
// Implementation: 0x108593284

// -[SCSnapVideoFilterAdaptorImpl setMultiSnapOverlayStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x10859328c

// -[SCSnapVideoFilterAdaptorImpl multiSnapDrawingCache]
// Type encoding: @16@0:8
// Implementation: 0x1085932bc

// -[SCSnapVideoFilterAdaptorImpl setMultiSnapDrawingCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085932c4

// -[SCSnapVideoFilterAdaptorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085932f4

@end
