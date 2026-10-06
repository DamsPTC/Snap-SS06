// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureSnapCropImpl
// Superclass: NSObject
// Address: 0x112a9e768

@interface SCPreviewFeatureSnapCropImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: configuration; attributes: T@"<SCPreviewConfiguration>",W,N,V_configuration
// Property: previewView; attributes: T@"UIView<SCPreviewViewProtocol>",W,N,V_previewView
// Property: previewScopeServices; attributes: T@"SCPreviewScopeServices",W,N,V_previewScopeServices
// Property: previewABServices; attributes: T@"SCPreviewABServices",W,N,V_previewABServices
// Property: creativeToolsABServices; attributes: T@"SCCreativeToolsABServices",W,N,V_creativeToolsABServices
// Property: overlayView; attributes: T@"UIView<SCCropOverlayView>",&,N,V_overlayView
// Property: delegate; attributes: T@"<SCPreviewFeatureSnapCropDelegate>",W,N,V_delegate
// Property: listener; attributes: T@"<SCCropOverlayViewListener>",W,N,V_listener
// Property: isCroppingActivated; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N

// -[SCPreviewFeatureSnapCropImpl initWithPreviewConfiguration:previewABServices:creativeToolsABServices:previewScopeServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105da875c

// -[SCPreviewFeatureSnapCropImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da8950

// -[SCPreviewFeatureSnapCropImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105da8a3c

// -[SCPreviewFeatureSnapCropImpl createCropToolBarButtonItemWithTarget:selector:]
// Type encoding: @32@0:8@16:24
// Implementation: 0x105da8a44

// -[SCPreviewFeatureSnapCropImpl createOverlayViewWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105da8a4c

// -[SCPreviewFeatureSnapCropImpl createInitialCroppingState:containerView:contentScaleFactor:contentAspectFitSize:]
// Type encoding: @56@0:8@16@24d32{CGSize=dd}40
// Implementation: 0x105da8a54

// -[SCPreviewFeatureSnapCropImpl createAndSetIdentityCroppingState:containerView:contentScaleFactor:]
// Type encoding: @48@0:8{CGSize=dd}16@32d40
// Implementation: 0x105da8da4

// -[SCPreviewFeatureSnapCropImpl identityCroppingState]
// Type encoding: @16@0:8
// Implementation: 0x105da8e10

// -[SCPreviewFeatureSnapCropImpl currentCroppingState]
// Type encoding: @16@0:8
// Implementation: 0x105da8e28

// -[SCPreviewFeatureSnapCropImpl croppingAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x105da8e30

// -[SCPreviewFeatureSnapCropImpl isCroppingActivated]
// Type encoding: B16@0:8
// Implementation: 0x105da8e74

// -[SCPreviewFeatureSnapCropImpl activateCropToolWithAnimated:]
// Type encoding: B20@0:8B16
// Implementation: 0x105da8e7c

// -[SCPreviewFeatureSnapCropImpl deactivateCropTool]
// Type encoding: B16@0:8
// Implementation: 0x105da8e84

// -[SCPreviewFeatureSnapCropImpl aiCropToolApplied]
// Type encoding: B16@0:8
// Implementation: 0x105da8e8c

// -[SCPreviewFeatureSnapCropImpl boundsForBorderOverlayView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x105da8e94

// -[SCPreviewFeatureSnapCropImpl cropAwareMediaOrientation]
// Type encoding: q16@0:8
// Implementation: 0x105da8f34

// -[SCPreviewFeatureSnapCropImpl preferredImageSizeForMediaSize:maxImageSize:]
// Type encoding: {CGSize=dd}48@0:8{CGSize=dd}16{CGSize=dd}32
// Implementation: 0x105da9078

// -[SCPreviewFeatureSnapCropImpl _shouldUseAspectFillByDefault:containerSize:contentScaleFactor:contentAspectFitSize:]
// Type encoding: B64@0:8@16{CGSize=dd}24d40{CGSize=dd}48
// Implementation: 0x105da90ac

// -[SCPreviewFeatureSnapCropImpl _shouldRotateByDefault:]
// Type encoding: B24@0:8@16
// Implementation: 0x105da91f4

// -[SCPreviewFeatureSnapCropImpl currentlyDisplayingSegmentCroppingState]
// Type encoding: @16@0:8
// Implementation: 0x105da9268

// -[SCPreviewFeatureSnapCropImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da93e0

// -[SCPreviewFeatureSnapCropImpl reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105da9480

// -[SCPreviewFeatureSnapCropImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105da9518

// -[SCPreviewFeatureSnapCropImpl overlayView]
// Type encoding: @16@0:8
// Implementation: 0x105da9540

// -[SCPreviewFeatureSnapCropImpl setOverlayView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da9548

// -[SCPreviewFeatureSnapCropImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105da9578

// -[SCPreviewFeatureSnapCropImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da9590

// -[SCPreviewFeatureSnapCropImpl listener]
// Type encoding: @16@0:8
// Implementation: 0x105da959c

// -[SCPreviewFeatureSnapCropImpl setListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da95b4

// -[SCPreviewFeatureSnapCropImpl configuration]
// Type encoding: @16@0:8
// Implementation: 0x105da95c0

// -[SCPreviewFeatureSnapCropImpl setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da95d8

// -[SCPreviewFeatureSnapCropImpl previewView]
// Type encoding: @16@0:8
// Implementation: 0x105da95e4

// -[SCPreviewFeatureSnapCropImpl setPreviewView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da95fc

// -[SCPreviewFeatureSnapCropImpl previewScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x105da9608

// -[SCPreviewFeatureSnapCropImpl setPreviewScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da9620

// -[SCPreviewFeatureSnapCropImpl previewABServices]
// Type encoding: @16@0:8
// Implementation: 0x105da962c

// -[SCPreviewFeatureSnapCropImpl setPreviewABServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da9644

// -[SCPreviewFeatureSnapCropImpl creativeToolsABServices]
// Type encoding: @16@0:8
// Implementation: 0x105da9650

// -[SCPreviewFeatureSnapCropImpl setCreativeToolsABServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105da9668

// -[SCPreviewFeatureSnapCropImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105da9674

// -[SCPreviewFeatureSnapCropImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105da967c

@end
