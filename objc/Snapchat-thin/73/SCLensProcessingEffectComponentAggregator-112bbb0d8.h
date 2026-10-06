// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingEffectComponentAggregator
// Superclass: NSObject
// Address: 0x112bbb0d8

@interface SCLensProcessingEffectComponentAggregator

// Property: scheduledApplyCount; attributes: Tq,V_scheduledApplyCount
// Property: cancelationDelegate; attributes: T@"<SCLensEffectCancelationDelegate>",W,N,V_cancelationDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: toggleCameraEventObservable; attributes: T@"SCObservable",R,N,V_toggleCameraEventSubject
// Property: screenDimmingEventObservable; attributes: T@"SCObservable",R,N,V_screenDimmingEventSubject
// Property: linkBitmojiCTAEventObservable; attributes: T@"SCObservable",R,N,V_linkBitmojiCTAEventSubject
// Property: hapticFeedbackEventObservable; attributes: T@"SCObservable",R,N,V_hapticFeedbackEventSubject
// Property: hintEventObservable; attributes: T@"SCObservable",R,N
// Property: didRecongizeExpressionEventObservable; attributes: T@"SCObservable",R,N,V_didRecongizeExpressionEventSubject
// Property: effectRecordingEventObservable; attributes: T@"SCObservable",R,N,V_effectRecordingEffectSubject
// Property: didRecongizeFacesEventObservable; attributes: T@"SCObservable",R,N,V_didRecongizeFacesEventSubject
// Property: lensEffectAudioPlayingStatusObservable; attributes: T@"SCObservable",R,N,V_lensEffectAudioPlayingStatusSubject
// Property: appliedEffectsObservable; attributes: T@"SCObservable",R,N
// Property: appliedEffects; attributes: T@"NSArray",R
// Property: currentApplyingEffects; attributes: T@"NSArray",R
// Property: loadedEffects; attributes: T@"NSArray",R
// Property: memoryUsage; attributes: T@"SCFuture",R,N
// Property: effectsStatistics; attributes: T@"NSArray",R,N
// Property: willTurnOnEffectsObservable; attributes: T@"SCObservable",R,N
// Property: willTurnOffEffectsObservable; attributes: T@"SCObservable",R,N
// Property: didTurnOnEffectsObservable; attributes: T@"SCObservable",R,N
// Property: didTurnOffEffectsObservable; attributes: T@"SCObservable",R,N
// Property: failedEffectsObservable; attributes: T@"SCObservable",R,N
// Property: willLoadEffectConcurrentlyObservable; attributes: T@"SCObservable",R,N
// Property: willLoadEffectsObservable; attributes: T@"SCObservable",R,N
// Property: didLoadEffectObservable; attributes: T@"SCObservable",R,N
// Property: didProcessFirstFrameObservable; attributes: T@"SCObservable",R,N

// -[SCLensProcessingEffectComponentAggregator initWithLensProcessingCore:audioHandler:performer:bitmojiScopeExposer:externalImagePluginScopeExposer:reverseCameraPluginScopeExposer:lensTouchesScopeExposer:lensTouchesScopeServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x108c826cc

// -[SCLensProcessingEffectComponentAggregator setupWithExternalStreamProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c82de4

// -[SCLensProcessingEffectComponentAggregator hintEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c82e14

// -[SCLensProcessingEffectComponentAggregator activate]
// Type encoding: v16@0:8
// Implementation: 0x108c831cc

// -[SCLensProcessingEffectComponentAggregator deactivate]
// Type encoding: v16@0:8
// Implementation: 0x108c83380

// -[SCLensProcessingEffectComponentAggregator componentManager]
// Type encoding: @16@0:8
// Implementation: 0x108c8346c

// -[SCLensProcessingEffectComponentAggregator effectApplicator]
// Type encoding: @16@0:8
// Implementation: 0x108c834b4

// -[SCLensProcessingEffectComponentAggregator effectApplicatorIfCreated]
// Type encoding: @16@0:8
// Implementation: 0x108c834fc

// -[SCLensProcessingEffectComponentAggregator addEffectFeaturesListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c83544

// -[SCLensProcessingEffectComponentAggregator removeEffectFeaturesListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c83554

// -[SCLensProcessingEffectComponentAggregator applyEffectLayer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108c83564

// -[SCLensProcessingEffectComponentAggregator applyEffectLayers:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108c83640

// -[SCLensProcessingEffectComponentAggregator applyEffectLayers:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108c8364c

// -[SCLensProcessingEffectComponentAggregator forceReloadAppliedEffects]
// Type encoding: v16@0:8
// Implementation: 0x108c839a8

// -[SCLensProcessingEffectComponentAggregator _applyEffectLayers:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108c83a9c

// -[SCLensProcessingEffectComponentAggregator clearEffectLayerWithType:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108c83d60

// -[SCLensProcessingEffectComponentAggregator clearEffectLayerWithTypes:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108c83e3c

// -[SCLensProcessingEffectComponentAggregator getEffectsTrace]
// Type encoding: @16@0:8
// Implementation: 0x108c83f78

// -[SCLensProcessingEffectComponentAggregator willTurnOnEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c83fbc

// -[SCLensProcessingEffectComponentAggregator willTurnOffEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c84278

// -[SCLensProcessingEffectComponentAggregator willLoadEffectConcurrentlyObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c84534

// -[SCLensProcessingEffectComponentAggregator willLoadEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c847f0

// -[SCLensProcessingEffectComponentAggregator didTurnOnEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c84aac

// -[SCLensProcessingEffectComponentAggregator didTurnOffEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c84d68

// -[SCLensProcessingEffectComponentAggregator didProcessFirstFrameObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c85024

// -[SCLensProcessingEffectComponentAggregator clearAllEffects]
// Type encoding: v16@0:8
// Implementation: 0x108c852e0

// -[SCLensProcessingEffectComponentAggregator clearAllResources]
// Type encoding: v16@0:8
// Implementation: 0x108c852e4

// -[SCLensProcessingEffectComponentAggregator cancelAllEffects]
// Type encoding: v16@0:8
// Implementation: 0x108c852e8

// -[SCLensProcessingEffectComponentAggregator cancelEffectWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c85318

// -[SCLensProcessingEffectComponentAggregator appliedEffects]
// Type encoding: @16@0:8
// Implementation: 0x108c85368

// -[SCLensProcessingEffectComponentAggregator currentApplyingEffects]
// Type encoding: @16@0:8
// Implementation: 0x108c853d4

// -[SCLensProcessingEffectComponentAggregator loadedEffects]
// Type encoding: @16@0:8
// Implementation: 0x108c85440

// -[SCLensProcessingEffectComponentAggregator appliedEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c854ac

// -[SCLensProcessingEffectComponentAggregator failedEffectsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c85768

// -[SCLensProcessingEffectComponentAggregator didLoadEffectObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c85a24

// -[SCLensProcessingEffectComponentAggregator memoryUsage]
// Type encoding: @16@0:8
// Implementation: 0x108c85ce0

// -[SCLensProcessingEffectComponentAggregator effectsStatistics]
// Type encoding: @16@0:8
// Implementation: 0x108c85d68

// -[SCLensProcessingEffectComponentAggregator startSnapRecording]
// Type encoding: v16@0:8
// Implementation: 0x108c85dd4

// -[SCLensProcessingEffectComponentAggregator stopSnapRecording]
// Type encoding: v16@0:8
// Implementation: 0x108c85e40

// -[SCLensProcessingEffectComponentAggregator captureSnapImage]
// Type encoding: v16@0:8
// Implementation: 0x108c85e84

// -[SCLensProcessingEffectComponentAggregator lensComponent:didTurnOnLensWithId:features:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108c85ef0

// -[SCLensProcessingEffectComponentAggregator lensComponent:willTurnOffLensWithId:features:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108c85fa8

// -[SCLensProcessingEffectComponentAggregator lensComponent:lensId:performHapticFeedback:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108c86048

// -[SCLensProcessingEffectComponentAggregator lensComponent:lensId:setScreenDimmingEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108c86128

// -[SCLensProcessingEffectComponentAggregator lensComponent:lensId:performInterfaceAction:interfaceElement:interfaceData:]
// Type encoding: v56@0:8@16@24Q32Q40@48
// Implementation: 0x108c86208

// -[SCLensProcessingEffectComponentAggregator lensComponent:lensId:showHintWithId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108c86308

// -[SCLensProcessingEffectComponentAggregator lensComponent:hideAllHintsForLensWithId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c86408

// -[SCLensProcessingEffectComponentAggregator lensComponentDidStartPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c864d0

// -[SCLensProcessingEffectComponentAggregator lensComponentDidStopPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c865b4

// -[SCLensProcessingEffectComponentAggregator trackingComponent:didRecognizeExpression:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c86678

// -[SCLensProcessingEffectComponentAggregator trackingComponent:didRecognizeFaces:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108c86738

// -[SCLensProcessingEffectComponentAggregator playButtonDidPerformActionWithLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c867e0

// -[SCLensProcessingEffectComponentAggregator snapButtonDidPerformTriggerActionWithLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c86870

// -[SCLensProcessingEffectComponentAggregator snapButtonDidPerformLongTapStartActionWithLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c86900

// -[SCLensProcessingEffectComponentAggregator snapButtonDidPerformLongTapReleaseActionWithLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c86990

// -[SCLensProcessingEffectComponentAggregator fullScreenDidEnterWithLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c86a20

// -[SCLensProcessingEffectComponentAggregator fullScreenDidExitWithLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c86adc

// -[SCLensProcessingEffectComponentAggregator _provideExternalMediaWithHandler:forEffectId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c86b98

// -[SCLensProcessingEffectComponentAggregator _willRemoveReverseCameraLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c86f38

// -[SCLensProcessingEffectComponentAggregator _cancelEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c87038

// -[SCLensProcessingEffectComponentAggregator _willRemovePhotoPickerLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c870c8

// -[SCLensProcessingEffectComponentAggregator _willRemoveSnapButtonLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c87124

// -[SCLensProcessingEffectComponentAggregator _willRemoveAllUIHiddenLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c87180

// -[SCLensProcessingEffectComponentAggregator _willRemoveModalCardLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c871dc

// -[SCLensProcessingEffectComponentAggregator _willRemoveExternalMediaLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c87238

// -[SCLensProcessingEffectComponentAggregator _willRemoveTouchProcessorForLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c87300

// -[SCLensProcessingEffectComponentAggregator _willRemoveLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c873c8

// -[SCLensProcessingEffectComponentAggregator _didApplyLensWithId:withFeatures:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108c87644

// -[SCLensProcessingEffectComponentAggregator _didRequestInterfaceElementForEffectId:interfaceAction:interfaceElement:interfaceData:]
// Type encoding: v48@0:8@16Q24Q32@40
// Implementation: 0x108c88190

// -[SCLensProcessingEffectComponentAggregator toggleCameraEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88ab8

// -[SCLensProcessingEffectComponentAggregator screenDimmingEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88ac0

// -[SCLensProcessingEffectComponentAggregator hapticFeedbackEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88ac8

// -[SCLensProcessingEffectComponentAggregator didRecongizeExpressionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88ad0

// -[SCLensProcessingEffectComponentAggregator didRecongizeFacesEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88ad8

// -[SCLensProcessingEffectComponentAggregator effectRecordingEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88ae0

// -[SCLensProcessingEffectComponentAggregator linkBitmojiCTAEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88ae8

// -[SCLensProcessingEffectComponentAggregator lensEffectAudioPlayingStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c88af0

// -[SCLensProcessingEffectComponentAggregator cancelationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108c88af8

// -[SCLensProcessingEffectComponentAggregator setCancelationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c88b10

// -[SCLensProcessingEffectComponentAggregator scheduledApplyCount]
// Type encoding: q16@0:8
// Implementation: 0x108c88b1c

// -[SCLensProcessingEffectComponentAggregator setScheduledApplyCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108c88b24

// -[SCLensProcessingEffectComponentAggregator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c88b2c

@end
