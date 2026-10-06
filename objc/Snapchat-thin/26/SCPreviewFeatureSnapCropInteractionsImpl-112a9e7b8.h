// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureSnapCropInteractionsImpl
// Superclass: SCPreviewFeatureSnapCropImpl
// Address: 0x112a9e7b8

@interface SCPreviewFeatureSnapCropInteractionsImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureSnapCropInteractionsImpl initWithPreviewConfiguration:userInteractionStateLogger:viewportController:videoObjectTracker:previewABServices:creativeToolsABServices:previewScopeServices:simpleContentFetcher:tooltipsProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x105da96fc

// -[SCPreviewFeatureSnapCropInteractionsImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da9898

// -[SCPreviewFeatureSnapCropInteractionsImpl createCropToolBarButtonItemWithTarget:selector:]
// Type encoding: @32@0:8@16:24
// Implementation: 0x105da9910

// -[SCPreviewFeatureSnapCropInteractionsImpl createInitialCroppingState:containerView:contentScaleFactor:contentAspectFitSize:]
// Type encoding: @56@0:8@16@24d32{CGSize=dd}40
// Implementation: 0x105da998c

// -[SCPreviewFeatureSnapCropInteractionsImpl createAndSetIdentityCroppingState:containerView:contentScaleFactor:]
// Type encoding: @48@0:8{CGSize=dd}16@32d40
// Implementation: 0x105da99c8

// -[SCPreviewFeatureSnapCropInteractionsImpl identityCroppingState]
// Type encoding: @16@0:8
// Implementation: 0x105da9a6c

// -[SCPreviewFeatureSnapCropInteractionsImpl createOverlayViewWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105da9a8c

// -[SCPreviewFeatureSnapCropInteractionsImpl currentCroppingState]
// Type encoding: @16@0:8
// Implementation: 0x105da9bf0

// -[SCPreviewFeatureSnapCropInteractionsImpl isCroppingActivated]
// Type encoding: B16@0:8
// Implementation: 0x105da9c94

// -[SCPreviewFeatureSnapCropInteractionsImpl activateCropToolWithAnimated:]
// Type encoding: B20@0:8B16
// Implementation: 0x105da9ca4

// -[SCPreviewFeatureSnapCropInteractionsImpl _activateCroppingFromPreviewWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105da9d70

// -[SCPreviewFeatureSnapCropInteractionsImpl _setupOverlayViewWithAnimated:hideOverlayComponents:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105da9dd0

// -[SCPreviewFeatureSnapCropInteractionsImpl deactivateCropTool]
// Type encoding: B16@0:8
// Implementation: 0x105daa150

// -[SCPreviewFeatureSnapCropInteractionsImpl boundsForBorderOverlayView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x105daa1f4

// -[SCPreviewFeatureSnapCropInteractionsImpl cropAwareMediaOrientation]
// Type encoding: q16@0:8
// Implementation: 0x105daa1fc

// -[SCPreviewFeatureSnapCropInteractionsImpl preferredImageSizeForMediaSize:maxImageSize:]
// Type encoding: {CGSize=dd}48@0:8{CGSize=dd}16{CGSize=dd}32
// Implementation: 0x105daa280

// -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidChangeTransform:]
// Type encoding: v24@0:8@16
// Implementation: 0x105daa28c

// -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidFinishTransform:]
// Type encoding: v24@0:8@16
// Implementation: 0x105daa7bc

// -[SCPreviewFeatureSnapCropInteractionsImpl croppingWillDeactivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105daa9a8

// -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidDeactivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105daaa28

// -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidShowTeachingTooltip:]
// Type encoding: v24@0:8@16
// Implementation: 0x105daaac0

// -[SCPreviewFeatureSnapCropInteractionsImpl snapEditor:didTriggerLifecycle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105daaafc

// -[SCPreviewFeatureSnapCropInteractionsImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105daab64

// -[SCPreviewFeatureSnapCropInteractionsImpl editCount]
// Type encoding: q16@0:8
// Implementation: 0x105daac28

// -[SCPreviewFeatureSnapCropInteractionsImpl _setBlurryBackgroundIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105daac94

// -[SCPreviewFeatureSnapCropInteractionsImpl _setBackgroundImageWithFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dab58c

// -[SCPreviewFeatureSnapCropInteractionsImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105dab884

// -[SCPreviewFeatureSnapCropInteractionsImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dab898

@end
