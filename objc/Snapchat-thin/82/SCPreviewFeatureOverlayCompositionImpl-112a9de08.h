// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureOverlayCompositionImpl
// Superclass: NSObject
// Address: 0x112a9de08

@interface SCPreviewFeatureOverlayCompositionImpl

// Property: delegate; attributes: T@"<SCPreviewFeatureOverlayCompositionDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureOverlayCompositionImpl initWithConfiguration:autoCaptions:caption:drawing:snapCrop:stickerContainer:filterOverlayComposition:previewABProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105d91f6c

// -[SCPreviewFeatureOverlayCompositionImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d92114

// -[SCPreviewFeatureOverlayCompositionImpl getScreenshotAsynchronouslyWithRequest:transcodingTaskId:callbackQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105d9211c

// -[SCPreviewFeatureOverlayCompositionImpl getScreenshotAsynchronouslyWithCallbackQueue:croppingAspectRatio:completionBlock:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x105d9409c

// -[SCPreviewFeatureOverlayCompositionImpl getScreenshotAndOverlaysAsynchronouslyWithCallbackQueue:croppingAspectRatio:UCOImageIncluded:imageTranscodingTaskId:completionBlock:]
// Type encoding: v52@0:8@16d24B32@36@?44
// Implementation: 0x105d94224

// -[SCPreviewFeatureOverlayCompositionImpl getOverlayAndVideoTrackedImagesWithCroppingAspectRatio:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x105d94810

// -[SCPreviewFeatureOverlayCompositionImpl getOverlayForVideoShouldGenerateThumbnail:croppingAspectRatio:callbackQueue:completionBlock:]
// Type encoding: v44@0:8B16d20@28@?36
// Implementation: 0x105d949a8

// -[SCPreviewFeatureOverlayCompositionImpl _allVideoTrackedImagesWithCroppingAspectRatio:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x105d94a6c

// -[SCPreviewFeatureOverlayCompositionImpl _allVideoTrackedImageFuturesWithCroppingAspectRatio:]
// Type encoding: @24@0:8d16
// Implementation: 0x105d94dd8

// -[SCPreviewFeatureOverlayCompositionImpl _geofilterPngDataIfOnlyDrawnFilterAndFitsScreen:]
// Type encoding: @32@0:8{CGSize=dd}16
// Implementation: 0x105d94f94

// -[SCPreviewFeatureOverlayCompositionImpl _translatedTrackedImages:withTimeBase:]
// Type encoding: @48@0:8@16{?=qiIq}24
// Implementation: 0x105d95088

// -[SCPreviewFeatureOverlayCompositionImpl _translateTrajectory:withTimeBase:]
// Type encoding: @48@0:8@16{?=qiIq}24
// Implementation: 0x105d953c4

// -[SCPreviewFeatureOverlayCompositionImpl _translateImageTrajectory:withTimeBase:]
// Type encoding: @48@0:8@16{?=qiIq}24
// Implementation: 0x105d95580

// -[SCPreviewFeatureOverlayCompositionImpl hasDrawingsOrStaticStickers]
// Type encoding: B16@0:8
// Implementation: 0x105d95658

// -[SCPreviewFeatureOverlayCompositionImpl drawingsOrStaticStickersImage]
// Type encoding: @16@0:8
// Implementation: 0x105d956d4

// -[SCPreviewFeatureOverlayCompositionImpl hasStaticStickerOverlay]
// Type encoding: B16@0:8
// Implementation: 0x105d957c4

// -[SCPreviewFeatureOverlayCompositionImpl hasOverlayImage]
// Type encoding: B16@0:8
// Implementation: 0x105d9588c

// -[SCPreviewFeatureOverlayCompositionImpl overlayImage]
// Type encoding: @16@0:8
// Implementation: 0x105d958e4

// -[SCPreviewFeatureOverlayCompositionImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d95a68

// -[SCPreviewFeatureOverlayCompositionImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d95a80

// -[SCPreviewFeatureOverlayCompositionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d95a8c

@end
