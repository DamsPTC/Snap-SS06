// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSnapOverlayGenerator
// Superclass: NSObject
// Address: 0x112bbf750

@interface SCMultiSnapOverlayGenerator


// +[SCMultiSnapOverlayGenerator overlayAndVideoTrackedImagesForOverlayState:overlaySize:outputSize:durationMs:useOutputSizeForStaticOverlay:spectaclesTranscodingConfig:userSession:previewCameraSourceOverlayService:multiSnapDrawingCache:videoPlaybackSpeed:targetTrajectoryFactory:stickerInjector:ctpItemViewService:captionCache:stickerCache:overlayGenerationType:disposableBag:completion:]
// Type encoding: v172@0:8@16{CGSize=dd}24{CGSize=dd}40@56B64@68@76@84@92d100@108@116@124@132@140Q148@156@?164
// Implementation: 0x108cf52fc

// +[SCMultiSnapOverlayGenerator containsTrackedImagesForOverlayState:]
// Type encoding: B24@0:8@16
// Implementation: 0x108cf7030

// +[SCMultiSnapOverlayGenerator _videoTrackedImageFor3dCaption:outputSize:isCircular:userSession:previewCameraSourceOverlayService:]
// Type encoding: @60@0:8@16{CGSize=dd}24B40@44@52
// Implementation: 0x108cf72c0

// +[SCMultiSnapOverlayGenerator _videoTrackedImagesGeoFilter:outputSize:userSession:previewCameraSourceOverlayService:]
// Type encoding: @56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x108cf7814

// +[SCMultiSnapOverlayGenerator _videoTrackedImageVenueFilter:outputSize:userSession:previewCameraSourceOverlayService:]
// Type encoding: @56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x108cf7d88

// +[SCMultiSnapOverlayGenerator _videoTrackedImageStreakFilter:outputSize:userSession:previewCameraSourceOverlayService:]
// Type encoding: @56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x108cf80a0

// +[SCMultiSnapOverlayGenerator _videoTrackedImagefromSticker:galleryInfoFilters:userSession:stickerSize:stickerInjector:ctpItemViewService:disposableBag:durationMs:]
// Type encoding: @88@0:8@16@24@32{CGSize=dd}40@56@64@72@80
// Implementation: 0x108cf82cc

// +[SCMultiSnapOverlayGenerator _videoTrackedImagesForAutoCaptions:outputSize:previewCameraSourceOverlayService:]
// Type encoding: @48@0:8@16{CGSize=dd}24@40
// Implementation: 0x108cf8a88

@end
