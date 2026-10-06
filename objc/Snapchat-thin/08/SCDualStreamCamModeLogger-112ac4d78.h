// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDualStreamCamModeLogger
// Superclass: NSObject
// Address: 0x112ac4d78

@interface SCDualStreamCamModeLogger

// Property: multiCamLayoutSelections; attributes: T@"NSArray",R,N,V_multiCamLayoutSelections
// Property: multiCamActivationSource; attributes: Tq,N,V_multiCamActivationSource
// Property: multiCamActions; attributes: T@"NSArray",R,N,V_multiCamActions
// Property: toolbarButtonTapCount; attributes: TQ,R,N,V_toolbarButtonTapCount
// Property: cccButtonTapCount; attributes: TQ,R,N,V_cccButtonTapCount

// -[SCDualStreamCamModeLogger initWithCameraUserBlizzardLogger:lensId:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1060be040

// -[SCDualStreamCamModeLogger onEnableDualStreamCamModeFromDM]
// Type encoding: v16@0:8
// Implementation: 0x1060be14c

// -[SCDualStreamCamModeLogger beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060be158

// -[SCDualStreamCamModeLogger didTapNonDMDualStreamCamPrimaryButton]
// Type encoding: v16@0:8
// Implementation: 0x1060be1a8

// -[SCDualStreamCamModeLogger didTapLayout:]
// Type encoding: v20@0:8i16
// Implementation: 0x1060be1b8

// -[SCDualStreamCamModeLogger willEnableModeWithActiveCameraPosition:isActivatedFromLensCarousel:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1060be274

// -[SCDualStreamCamModeLogger onDisableMode]
// Type encoding: v16@0:8
// Implementation: 0x1060be38c

// -[SCDualStreamCamModeLogger usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1060be3e4

// -[SCDualStreamCamModeLogger reset]
// Type encoding: v16@0:8
// Implementation: 0x1060be5bc

// -[SCDualStreamCamModeLogger didChangeDevicePositionWhileModeEnabled]
// Type encoding: v16@0:8
// Implementation: 0x1060be674

// -[SCDualStreamCamModeLogger logCameraShortcutTapWithParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060be6b4

// -[SCDualStreamCamModeLogger logCameraShortcutTapFromDeepLinkWithQueryParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060bea58

// -[SCDualStreamCamModeLogger logMultiCamCarouselActivation]
// Type encoding: v16@0:8
// Implementation: 0x1060bec8c

// -[SCDualStreamCamModeLogger _didScheduleCapture]
// Type encoding: v16@0:8
// Implementation: 0x1060bed00

// -[SCDualStreamCamModeLogger _observeCaptureVideoStrategyEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060bed4c

// -[SCDualStreamCamModeLogger _observeCaptureImageStrategyEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060befc4

// -[SCDualStreamCamModeLogger _logTimelineSegmentCreateWithRecordedVideoFuture:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060bf190

// -[SCDualStreamCamModeLogger _logTimelineSegmentCreateWithImageConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060bf410

// -[SCDualStreamCamModeLogger _logTimelineSegmentCreate:multiCamLayoutSelections:multiCamActions:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1060bf4e8

// -[SCDualStreamCamModeLogger logMultiCamModeActivationWithIsActivatedFromLensCarousel:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060bf614

// -[SCDualStreamCamModeLogger multiCamLayoutSelections]
// Type encoding: @16@0:8
// Implementation: 0x1060bf6c8

// -[SCDualStreamCamModeLogger multiCamActivationSource]
// Type encoding: q16@0:8
// Implementation: 0x1060bf6d0

// -[SCDualStreamCamModeLogger setMultiCamActivationSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1060bf6d8

// -[SCDualStreamCamModeLogger multiCamActions]
// Type encoding: @16@0:8
// Implementation: 0x1060bf6e0

// -[SCDualStreamCamModeLogger toolbarButtonTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1060bf6e8

// -[SCDualStreamCamModeLogger cccButtonTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1060bf6f0

// -[SCDualStreamCamModeLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060bf6f8

@end
