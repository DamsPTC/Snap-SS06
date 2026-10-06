// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeaturePinningImpl
// Superclass: NSObject
// Address: 0x112a9def8

@interface SCPreviewFeaturePinningImpl

// Property: delegate; attributes: T@"<SCPreviewFeaturePinningDelegate>",W,N,V_delegate
// Property: viewToPin; attributes: T@"UIView<SCMovableView><SCVideoTrackedView>",R,N,V_viewToPin
// Property: isPreparingPinning; attributes: TB,R,N,V_isPreparingPinning
// Property: isCurrentlyPinning; attributes: TB,R,N,V_isCurrentlyPinning
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeaturePinningImpl initWithPreviewConfiguration:stickerLogger:alignmentFeature:batchCaptureFeature:bounceFeature:stickerContainerFeature:videoPlaybackFeature:videoObjectTracker:creativeExpressionsManager:videoTracking:previewScopeServices:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x105d9602c

// -[SCPreviewFeaturePinningImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105d962bc

// -[SCPreviewFeaturePinningImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d96320

// -[SCPreviewFeaturePinningImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d9632c

// -[SCPreviewFeaturePinningImpl isPinningSupported]
// Type encoding: B16@0:8
// Implementation: 0x105d96334

// -[SCPreviewFeaturePinningImpl shouldAllowGestureWhilePinning:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d9645c

// -[SCPreviewFeaturePinningImpl pinView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d96558

// -[SCPreviewFeaturePinningImpl preparePinningForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d96650

// -[SCPreviewFeaturePinningImpl skimThroughVideoForPinningInReverse:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x105d968f4

// -[SCPreviewFeaturePinningImpl presentTooltipFromView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d96aa4

// -[SCPreviewFeaturePinningImpl hideTooltip]
// Type encoding: v16@0:8
// Implementation: 0x105d96b0c

// -[SCPreviewFeaturePinningImpl _enablePinningForView:atPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x105d96b38

// -[SCPreviewFeaturePinningImpl _handlePinningCompleteForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d96c98

// -[SCPreviewFeaturePinningImpl _resumeAfterPinningWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105d96cd4

// -[SCPreviewFeaturePinningImpl _finishedSkimmingForPinning]
// Type encoding: v16@0:8
// Implementation: 0x105d96d18

// -[SCPreviewFeaturePinningImpl _presentTooltipFromView:withMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d96da8

// -[SCPreviewFeaturePinningImpl didFinishLongPressInPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d96ee8

// -[SCPreviewFeaturePinningImpl featureType]
// Type encoding: Q16@0:8
// Implementation: 0x105d96ff8

// -[SCPreviewFeaturePinningImpl _trackingObjectContainerView]
// Type encoding: @16@0:8
// Implementation: 0x105d97000

// -[SCPreviewFeaturePinningImpl _disableVideoTrackingForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d97048

// -[SCPreviewFeaturePinningImpl _trackingChangedForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d97098

// -[SCPreviewFeaturePinningImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d97170

// -[SCPreviewFeaturePinningImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d97188

// -[SCPreviewFeaturePinningImpl viewToPin]
// Type encoding: @16@0:8
// Implementation: 0x105d97194

// -[SCPreviewFeaturePinningImpl isPreparingPinning]
// Type encoding: B16@0:8
// Implementation: 0x105d9719c

// -[SCPreviewFeaturePinningImpl isCurrentlyPinning]
// Type encoding: B16@0:8
// Implementation: 0x105d971a4

// -[SCPreviewFeaturePinningImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d971ac

@end
