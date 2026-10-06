// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingLensModeAggregator
// Superclass: NSObject
// Address: 0x112bbc168

@interface SCLensProcessingLensModeAggregator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: didAppliedCameraModeObservable; attributes: T@"SCObservable",R,N
// Property: didRemoveCameraModeObservable; attributes: T@"SCObservable",R,N
// Property: didLoadCameraModeObservable; attributes: T@"SCObservable",R,N
// Property: cameraModeActivatedObservable; attributes: T@"SCObservable",R,N
// Property: photoPickerDelegate; attributes: T@"<SCLensProcessingPhotoPickerDelegate>",W,N,V_photoPickerDelegate

// -[SCLensProcessingLensModeAggregator initWithEffectFeatureProvider:effectApplicator:lensModeSortingStrategy:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108ca3aec

// -[SCLensProcessingLensModeAggregator applyCameraModeWithLens:identifier:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108ca3f4c

// -[SCLensProcessingLensModeAggregator removeCameraModeFor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ca4178

// -[SCLensProcessingLensModeAggregator didAppliedCameraModeObservable]
// Type encoding: @16@0:8
// Implementation: 0x108ca4228

// -[SCLensProcessingLensModeAggregator didLoadCameraModeObservable]
// Type encoding: @16@0:8
// Implementation: 0x108ca427c

// -[SCLensProcessingLensModeAggregator didRemoveCameraModeObservable]
// Type encoding: @16@0:8
// Implementation: 0x108ca4518

// -[SCLensProcessingLensModeAggregator cameraModeActivatedObservable]
// Type encoding: @16@0:8
// Implementation: 0x108ca460c

// -[SCLensProcessingLensModeAggregator requestImagePickerForEffectId:photoPickerOptions:selectionLimit:useLensCoreTinselTracking:interfaceAction:completion:]
// Type encoding: v60@0:8@16Q24Q32B40Q44@?52
// Implementation: 0x108ca4634

// -[SCLensProcessingLensModeAggregator requestPlayButtonForEffectId:interfaceAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108ca4844

// -[SCLensProcessingLensModeAggregator requestSnapButtonForEffectId:interfaceAction:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x108ca4848

// -[SCLensProcessingLensModeAggregator requestAttachmentButtonForEffectId:interfaceAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108ca484c

// -[SCLensProcessingLensModeAggregator requestModalCardForEffectId:headerId:descriptionId:interfaceAction:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x108ca4850

// -[SCLensProcessingLensModeAggregator requestHideIntefaceElementsForEffectId:interfaceAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108ca4854

// -[SCLensProcessingLensModeAggregator _mapEffectsObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ca4858

// -[SCLensProcessingLensModeAggregator _removeCameraModeWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ca4bd0

// -[SCLensProcessingLensModeAggregator _applyCameraModeWithLens:identifier:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108ca4e80

// -[SCLensProcessingLensModeAggregator _failedToApplyLayers:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ca5204

// -[SCLensProcessingLensModeAggregator _effectsApplingEffect:identifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ca5474

// -[SCLensProcessingLensModeAggregator _effectsRemovingIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ca5530

// -[SCLensProcessingLensModeAggregator _effectLayerTypeForCameraModeIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ca55cc

// -[SCLensProcessingLensModeAggregator photoPickerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108ca56b8

// -[SCLensProcessingLensModeAggregator setPhotoPickerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ca56d0

// -[SCLensProcessingLensModeAggregator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ca56dc

@end
