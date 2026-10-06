// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureCTLensImpl
// Superclass: NSObject
// Address: 0x112a9c878

@interface SCPreviewFeatureCTLensImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: isRemoteInferenceLensApplied; attributes: TB,R,N,V_isRemoteInferenceLensApplied
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N

// -[SCPreviewFeatureCTLensImpl initWithPreviewABServices:creativeToolsABServices:toolLensController:previewConfiguration:previewScopeServices:previewCommonLoggingServices:minervaImageProcessing:imagePlayback:featureSettingsService:simpleContentFetcher:freemiumGate:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x105d3e4a0

// -[SCPreviewFeatureCTLensImpl isPreviewLensTypeMatchingCurrentLensConfig:currentLensConfigType:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x105d3ec2c

// -[SCPreviewFeatureCTLensImpl _applyLensIfNeededWithLensState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d3ec8c

// -[SCPreviewFeatureCTLensImpl isFeatureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105d3f034

// -[SCPreviewFeatureCTLensImpl _shouldHideCTLensForPerfectSelfie]
// Type encoding: B16@0:8
// Implementation: 0x105d3f1ec

// -[SCPreviewFeatureCTLensImpl _shouldShowToolWithApplyType:]
// Type encoding: B20@0:8i16
// Implementation: 0x105d3f2b8

// -[SCPreviewFeatureCTLensImpl toolbarItemConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d3f31c

// -[SCPreviewFeatureCTLensImpl state]
// Type encoding: @16@0:8
// Implementation: 0x105d3f404

// -[SCPreviewFeatureCTLensImpl _ctpLensTypeFromTypeString:]
// Type encoding: i24@0:8@16
// Implementation: 0x105d3f46c

// -[SCPreviewFeatureCTLensImpl _lensTypeFromTypeString:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d3f50c

// -[SCPreviewFeatureCTLensImpl _ctpLensTypeFromPreviewToolLensType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x105d3f5ac

// -[SCPreviewFeatureCTLensImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d3f5d0

// -[SCPreviewFeatureCTLensImpl handleCTLensButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x105d3f610

// -[SCPreviewFeatureCTLensImpl _handleRemoteInference]
// Type encoding: v16@0:8
// Implementation: 0x105d3f774

// -[SCPreviewFeatureCTLensImpl fetchRetouchedImageForOriginalImage:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d3f8f0

// -[SCPreviewFeatureCTLensImpl downscaleImage:withScaleFactor:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x105d3faec

// -[SCPreviewFeatureCTLensImpl _toggleRemoteInference]
// Type encoding: v16@0:8
// Implementation: 0x105d3fb58

// -[SCPreviewFeatureCTLensImpl _fetchFTUXImage]
// Type encoding: @16@0:8
// Implementation: 0x105d3ff40

// -[SCPreviewFeatureCTLensImpl _showFTUXWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d401a4

// -[SCPreviewFeatureCTLensImpl _removeAppliedLens]
// Type encoding: v16@0:8
// Implementation: 0x105d4050c

// -[SCPreviewFeatureCTLensImpl _applyLens:withToolType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d406b4

// -[SCPreviewFeatureCTLensImpl _handleLensAppliedWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d408d4

// -[SCPreviewFeatureCTLensImpl _applyExclusiveGatedLens:withLensType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d40948

// -[SCPreviewFeatureCTLensImpl _handleGatedLensApplied:lensMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d40b04

// -[SCPreviewFeatureCTLensImpl _revertGatedLens:lensMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d40ba0

// -[SCPreviewFeatureCTLensImpl _handleStateChange]
// Type encoding: v16@0:8
// Implementation: 0x105d40c28

// -[SCPreviewFeatureCTLensImpl _tooltipTitle]
// Type encoding: @16@0:8
// Implementation: 0x105d40e80

// -[SCPreviewFeatureCTLensImpl _imageForToolType:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d40f6c

// -[SCPreviewFeatureCTLensImpl _hintText]
// Type encoding: @16@0:8
// Implementation: 0x105d4107c

// -[SCPreviewFeatureCTLensImpl _selectedLensType]
// Type encoding: Q16@0:8
// Implementation: 0x105d410ec

// -[SCPreviewFeatureCTLensImpl _cleanUpWithError]
// Type encoding: v16@0:8
// Implementation: 0x105d41178

// -[SCPreviewFeatureCTLensImpl _setLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d412e8

// -[SCPreviewFeatureCTLensImpl _unselectedIconForIconName:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d4192c

// -[SCPreviewFeatureCTLensImpl _sigIconTypeFillForIconName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d41a20

// -[SCPreviewFeatureCTLensImpl _sigIconTypeStrokeForIconName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d41ab8

// -[SCPreviewFeatureCTLensImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d41b50

// -[SCPreviewFeatureCTLensImpl reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105d41bf0

// -[SCPreviewFeatureCTLensImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d41d80

// -[SCPreviewFeatureCTLensImpl editCount]
// Type encoding: q16@0:8
// Implementation: 0x105d41da8

// -[SCPreviewFeatureCTLensImpl isRemoteInferenceLensApplied]
// Type encoding: B16@0:8
// Implementation: 0x105d41db8

// -[SCPreviewFeatureCTLensImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105d41dc0

// -[SCPreviewFeatureCTLensImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d41dc8

@end
