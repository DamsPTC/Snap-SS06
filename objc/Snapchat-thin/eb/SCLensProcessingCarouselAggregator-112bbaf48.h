// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingCarouselAggregator
// Superclass: NSObject
// Address: 0x112bbaf48

@interface SCLensProcessingCarouselAggregator

// Property: appliedLens; attributes: T@"SCLens",&,V_appliedLens
// Property: currentlyApplingLens; attributes: T@"SCLens",&,V_currentlyApplingLens
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: appliedLensObservable; attributes: T@"SCObservable",R,N,V_appliedLensSubject
// Property: willTurnOnLensObservable; attributes: T@"SCObservable",R,N,V_willTurnOnLensSubject
// Property: didTurnOnLensObservable; attributes: T@"SCObservable",R,N,V_didTurnOnLensSubject
// Property: didTurnOffLensObservable; attributes: T@"SCObservable",R,N,V_didTurnOffLensSubject
// Property: didLoadEffectObservable; attributes: T@"SCObservable",R,N
// Property: clearEffectObservable; attributes: T@"SCObservable",R,N,V_clearEffectSubject
// Property: photoPickerDelegate; attributes: T@"<SCLensProcessingPhotoPickerDelegate>",W,N,VphotoPickerDelegate
// Property: attachmentButtonDelegate; attributes: T@"<SCLensProcessingAttachmentButtonDelegate>",W,N,VattachmentButtonDelegate
// Property: modalCardDelegate; attributes: T@"<SCLensProcessingModalCardDelegate>",W,N,VmodalCardDelegate
// Property: playButtonDelegate; attributes: T@"<SCLensProcessingPlayButtonDelegate>",W,N,VplayButtonDelegate
// Property: snapButtonDelegate; attributes: T@"<SCLensProcessingSnapButtonDelegate>",W,N,VsnapButtonDelegate
// Property: interfaceElementsDelegate; attributes: T@"<SCLensProcessingUIVisibilityDelegate>",W,N,VinterfaceElementsDelegate

// -[SCLensProcessingCarouselAggregator initWithEffectApplicator:effectFeatureProvider:systemScope:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108c7fe64

// -[SCLensProcessingCarouselAggregator applyLens:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108c7ffc0

// -[SCLensProcessingCarouselAggregator clearLens]
// Type encoding: v16@0:8
// Implementation: 0x108c803e0

// -[SCLensProcessingCarouselAggregator requestImagePickerForEffectId:photoPickerOptions:selectionLimit:useLensCoreTinselTracking:interfaceAction:completion:]
// Type encoding: v60@0:8@16Q24Q32B40Q44@?52
// Implementation: 0x108c8055c

// -[SCLensProcessingCarouselAggregator requestPlayButtonForEffectId:interfaceAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108c80748

// -[SCLensProcessingCarouselAggregator requestSnapButtonForEffectId:interfaceAction:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x108c80828

// -[SCLensProcessingCarouselAggregator requestAttachmentButtonForEffectId:interfaceAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108c809cc

// -[SCLensProcessingCarouselAggregator requestModalCardForEffectId:headerId:descriptionId:interfaceAction:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x108c80aac

// -[SCLensProcessingCarouselAggregator requestHideIntefaceElementsForEffectId:interfaceAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108c80c9c

// -[SCLensProcessingCarouselAggregator didLoadEffectObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c80d58

// -[SCLensProcessingCarouselAggregator _shouldActivateLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c80d60

// -[SCLensProcessingCarouselAggregator _appliedEffectFromId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c80ebc

// -[SCLensProcessingCarouselAggregator _cancelCurrentLens]
// Type encoding: v16@0:8
// Implementation: 0x108c80fac

// -[SCLensProcessingCarouselAggregator appliedLens]
// Type encoding: @16@0:8
// Implementation: 0x108c8106c

// -[SCLensProcessingCarouselAggregator setAppliedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c81078

// -[SCLensProcessingCarouselAggregator currentlyApplingLens]
// Type encoding: @16@0:8
// Implementation: 0x108c81080

// -[SCLensProcessingCarouselAggregator setCurrentlyApplingLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c8108c

// -[SCLensProcessingCarouselAggregator appliedLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c81094

// -[SCLensProcessingCarouselAggregator didTurnOffLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c8109c

// -[SCLensProcessingCarouselAggregator didTurnOnLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c810a4

// -[SCLensProcessingCarouselAggregator willTurnOnLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c810ac

// -[SCLensProcessingCarouselAggregator clearEffectObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c810b4

// -[SCLensProcessingCarouselAggregator attachmentButtonDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108c810bc

// -[SCLensProcessingCarouselAggregator setAttachmentButtonDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c810d4

// -[SCLensProcessingCarouselAggregator interfaceElementsDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108c810e0

// -[SCLensProcessingCarouselAggregator setInterfaceElementsDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c810f8

// -[SCLensProcessingCarouselAggregator modalCardDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108c81104

// -[SCLensProcessingCarouselAggregator setModalCardDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c8111c

// -[SCLensProcessingCarouselAggregator photoPickerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108c81128

// -[SCLensProcessingCarouselAggregator setPhotoPickerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c81140

// -[SCLensProcessingCarouselAggregator playButtonDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108c8114c

// -[SCLensProcessingCarouselAggregator setPlayButtonDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c81164

// -[SCLensProcessingCarouselAggregator snapButtonDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108c81170

// -[SCLensProcessingCarouselAggregator setSnapButtonDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c81188

// -[SCLensProcessingCarouselAggregator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c81194

@end
