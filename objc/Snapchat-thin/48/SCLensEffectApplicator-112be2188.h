// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensEffectApplicator
// Superclass: NSObject
// Address: 0x112be2188

@interface SCLensEffectApplicator

// Property: appliedEffects; attributes: T@"NSArray",&,V_appliedEffects
// Property: currentApplyingEffects; attributes: T@"NSArray",&,V_currentApplyingEffects
// Property: loadedEffects; attributes: T@"NSArray",&,V_loadedEffects
// Property: effectInfoProvider; attributes: T@"<SCLensEffectInfoProviding>",&,V_effectInfoProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: appliedEffectsObservable; attributes: T@"SCObservable",R,N,V_appliedEffectsSubject
// Property: memoryUsage; attributes: T@"SCFuture",R,N
// Property: effectsStatistics; attributes: T@"NSArray",R,N
// Property: willTurnOnEffectsObservable; attributes: T@"SCObservable",R,N,V_willTurnOnEffectsSubject
// Property: willTurnOffEffectsObservable; attributes: T@"SCObservable",R,N,V_willTurnOffEffectsSubject
// Property: didTurnOnEffectsObservable; attributes: T@"SCObservable",R,N,V_didTurnOnEffectsSubject
// Property: didTurnOffEffectsObservable; attributes: T@"SCObservable",R,N,V_didTurnOffEffectsSubject
// Property: failedEffectsObservable; attributes: T@"SCObservable",R,N,V_failedEffectsSubject
// Property: willLoadEffectConcurrentlyObservable; attributes: T@"SCObservable",R,N
// Property: willLoadEffectsObservable; attributes: T@"SCObservable",R,N
// Property: didLoadEffectObservable; attributes: T@"SCObservable",R,N,V_didLoadEffectSubject
// Property: didProcessFirstFrameObservable; attributes: T@"SCObservable",R,N,V_didProcessFirstFrameSubject

// -[SCLensEffectApplicator initWithLensComponent:effectApplicationStrategy:effectErrorHandler:configuration:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x109032ca4

// -[SCLensEffectApplicator initWithLensComponent:effectApplicationStrategy:configuration:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x109033074

// -[SCLensEffectApplicator applyEffectLayer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109033130

// -[SCLensEffectApplicator applyEffectLayers:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10903320c

// -[SCLensEffectApplicator applyEffectLayers:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x109033218

// -[SCLensEffectApplicator forceReloadAppliedEffects]
// Type encoding: v16@0:8
// Implementation: 0x10903338c

// -[SCLensEffectApplicator cancelAllEffects]
// Type encoding: v16@0:8
// Implementation: 0x1090333f0

// -[SCLensEffectApplicator cancelEffectWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109033424

// -[SCLensEffectApplicator willLoadEffectConcurrentlyObservable]
// Type encoding: @16@0:8
// Implementation: 0x109033474

// -[SCLensEffectApplicator willLoadEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1090336c0

// -[SCLensEffectApplicator getEffectsTrace]
// Type encoding: @16@0:8
// Implementation: 0x109033980

// -[SCLensEffectApplicator clearEffectLayerWithType:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109033bbc

// -[SCLensEffectApplicator clearEffectLayerWithTypes:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109033c98

// -[SCLensEffectApplicator clearAllEffects]
// Type encoding: v16@0:8
// Implementation: 0x109033d28

// -[SCLensEffectApplicator clearAllResources]
// Type encoding: v16@0:8
// Implementation: 0x109033dd0

// -[SCLensEffectApplicator memoryUsage]
// Type encoding: @16@0:8
// Implementation: 0x109033e14

// -[SCLensEffectApplicator effectsStatistics]
// Type encoding: @16@0:8
// Implementation: 0x109033f60

// -[SCLensEffectApplicator _applyEffectLayers:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1090341e8

// -[SCLensEffectApplicator _applyEffects:effectLayers:removedEffects:async:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x1090347ac

// -[SCLensEffectApplicator _clearEffectLayerWithTypes:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1090355d0

// -[SCLensEffectApplicator _notifyRemovedEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x109035eb8

// -[SCLensEffectApplicator _shouldForceReloadLayer:]
// Type encoding: B24@0:8@16
// Implementation: 0x109036090

// -[SCLensEffectApplicator _turnedOnEffectsFromEffects:appliedEffects:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090361ec

// -[SCLensEffectApplicator lensComponent:didLoadResourcesForLensId:applyDelay:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1090362cc

// -[SCLensEffectApplicator lensComponent:firstFrameDidBecomeReadyWithLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090364f4

// -[SCLensEffectApplicator willTurnOnEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10903673c

// -[SCLensEffectApplicator willTurnOffEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x109036744

// -[SCLensEffectApplicator didTurnOnEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10903674c

// -[SCLensEffectApplicator didTurnOffEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x109036754

// -[SCLensEffectApplicator appliedEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10903675c

// -[SCLensEffectApplicator failedEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x109036764

// -[SCLensEffectApplicator didLoadEffectObservable]
// Type encoding: @16@0:8
// Implementation: 0x10903676c

// -[SCLensEffectApplicator didProcessFirstFrameObservable]
// Type encoding: @16@0:8
// Implementation: 0x109036774

// -[SCLensEffectApplicator effectInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x10903677c

// -[SCLensEffectApplicator setEffectInfoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x109036788

// -[SCLensEffectApplicator appliedEffects]
// Type encoding: @16@0:8
// Implementation: 0x109036790

// -[SCLensEffectApplicator setAppliedEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x10903679c

// -[SCLensEffectApplicator currentApplyingEffects]
// Type encoding: @16@0:8
// Implementation: 0x1090367a4

// -[SCLensEffectApplicator setCurrentApplyingEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090367b0

// -[SCLensEffectApplicator loadedEffects]
// Type encoding: @16@0:8
// Implementation: 0x1090367b8

// -[SCLensEffectApplicator setLoadedEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090367c4

// -[SCLensEffectApplicator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090367cc

@end
