// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureAutoCaptionsImpl
// Superclass: NSObject
// Address: 0x112a9c148

@interface SCPreviewFeatureAutoCaptionsImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: tapObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: multiSnapDelegate; attributes: T@"<SCPreviewAutoCaptionsMultiSnapDelegate>",W,N,V_multiSnapDelegate
// Property: state; attributes: T@"SCPreviewAutoCaptionsState",R,N
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N
// Property: parentViewControllerDelegate; attributes: T@"<SCPreviewFeatureParentViewControllerAccessing>",W,N,V_parentViewControllerDelegate

// -[SCPreviewFeatureAutoCaptionsImpl initWithAutoCaptionsScopeExposer:previewConfiguration:videoPlayback:videoObjectTracker:videoTrackingServices:notificationPool:previewABServices:previewScopeServices:voiceoverFeature:videoTracking:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105d2631c

// -[SCPreviewFeatureAutoCaptionsImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105d26664

// -[SCPreviewFeatureAutoCaptionsImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d268dc

// -[SCPreviewFeatureAutoCaptionsImpl didUpdateTransformForAutoCaptionsContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2690c

// -[SCPreviewFeatureAutoCaptionsImpl state]
// Type encoding: @16@0:8
// Implementation: 0x105d2696c

// -[SCPreviewFeatureAutoCaptionsImpl updateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2699c

// -[SCPreviewFeatureAutoCaptionsImpl toolbarItemConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d26a20

// -[SCPreviewFeatureAutoCaptionsImpl handleAutoCaptionsButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x105d26b74

// -[SCPreviewFeatureAutoCaptionsImpl autoCaptionsWithGesture:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d26c2c

// -[SCPreviewFeatureAutoCaptionsImpl deleteAutoCaptions]
// Type encoding: v16@0:8
// Implementation: 0x105d26c98

// -[SCPreviewFeatureAutoCaptionsImpl videoTrackedImagesWithCroppingAspectRatio:]
// Type encoding: @24@0:8d16
// Implementation: 0x105d26cdc

// -[SCPreviewFeatureAutoCaptionsImpl setButtonState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105d271b4

// -[SCPreviewFeatureAutoCaptionsImpl tapObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d271bc

// -[SCPreviewFeatureAutoCaptionsImpl renderAutoCaptionsDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d271e4

// -[SCPreviewFeatureAutoCaptionsImpl didLoadAutoCaptionsViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d27508

// -[SCPreviewFeatureAutoCaptionsImpl didUpdateAutoCaptionsViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d2757c

// -[SCPreviewFeatureAutoCaptionsImpl didDeleteAutoCaptions]
// Type encoding: v16@0:8
// Implementation: 0x105d275a0

// -[SCPreviewFeatureAutoCaptionsImpl didReceiveAutoCaptionsError]
// Type encoding: v16@0:8
// Implementation: 0x105d275d0

// -[SCPreviewFeatureAutoCaptionsImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d276a0

// -[SCPreviewFeatureAutoCaptionsImpl _displayHintOnView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d27724

// -[SCPreviewFeatureAutoCaptionsImpl _removeHint]
// Type encoding: v16@0:8
// Implementation: 0x105d27874

// -[SCPreviewFeatureAutoCaptionsImpl _positionHintOnView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d27974

// -[SCPreviewFeatureAutoCaptionsImpl _animateInHint]
// Type encoding: v16@0:8
// Implementation: 0x105d27aa4

// -[SCPreviewFeatureAutoCaptionsImpl _createHintLabel]
// Type encoding: v16@0:8
// Implementation: 0x105d27b54

// -[SCPreviewFeatureAutoCaptionsImpl _drawCaptionsViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d27c38

// -[SCPreviewFeatureAutoCaptionsImpl _applyDurationWithStartSeconds:endSeconds:view:]
// Type encoding: v40@0:8d16d24@32
// Implementation: 0x105d2800c

// -[SCPreviewFeatureAutoCaptionsImpl _assetsForBatchCapture]
// Type encoding: @16@0:8
// Implementation: 0x105d280dc

// -[SCPreviewFeatureAutoCaptionsImpl _assetsForTimelineMode]
// Type encoding: @16@0:8
// Implementation: 0x105d28290

// -[SCPreviewFeatureAutoCaptionsImpl _assetsForDirectorMode]
// Type encoding: @16@0:8
// Implementation: 0x105d28444

// -[SCPreviewFeatureAutoCaptionsImpl _assetsForVideo]
// Type encoding: @16@0:8
// Implementation: 0x105d28448

// -[SCPreviewFeatureAutoCaptionsImpl _videoAssetsWithCache]
// Type encoding: @16@0:8
// Implementation: 0x105d28510

// -[SCPreviewFeatureAutoCaptionsImpl _assetsForVoiceover]
// Type encoding: @16@0:8
// Implementation: 0x105d28604

// -[SCPreviewFeatureAutoCaptionsImpl _exposeAutoCaptionsScope]
// Type encoding: v16@0:8
// Implementation: 0x105d286dc

// -[SCPreviewFeatureAutoCaptionsImpl _updateState]
// Type encoding: v16@0:8
// Implementation: 0x105d28948

// -[SCPreviewFeatureAutoCaptionsImpl _loadState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d28f0c

// -[SCPreviewFeatureAutoCaptionsImpl _presentAutoCaptionsVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d28f80

// -[SCPreviewFeatureAutoCaptionsImpl _dissmissAutoCaptionsVC]
// Type encoding: v16@0:8
// Implementation: 0x105d2900c

// -[SCPreviewFeatureAutoCaptionsImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d29074

// -[SCPreviewFeatureAutoCaptionsImpl reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105d29114

// -[SCPreviewFeatureAutoCaptionsImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d291d4

// -[SCPreviewFeatureAutoCaptionsImpl parentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d291fc

// -[SCPreviewFeatureAutoCaptionsImpl setParentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d29214

// -[SCPreviewFeatureAutoCaptionsImpl multiSnapDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d29220

// -[SCPreviewFeatureAutoCaptionsImpl setMultiSnapDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d29238

// -[SCPreviewFeatureAutoCaptionsImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105d29244

// -[SCPreviewFeatureAutoCaptionsImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d2924c

@end
