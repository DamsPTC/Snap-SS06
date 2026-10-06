// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSALensComponent
// Superclass: LSABaseComponent
// Address: 0x112bf9388

@interface LSALensComponent

// Property: pendingEffectKey; attributes: T@"<NSObject>",&,V_pendingEffectKey
// Property: shouldClearUnusedResources; attributes: TB,V_shouldClearUnusedResources
// Property: applicationActive; attributes: TB,GisApplicationActive,V_applicationActive
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSALensComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ada2358

// -[LSALensComponent applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x10ada26c0

// -[LSALensComponent applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x10ada26c8

// -[LSALensComponent audioPlayer]
// Type encoding: @16@0:8
// Implementation: 0x10ada26d0

// -[LSALensComponent setLensWithLensInfo:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10ada2700

// -[LSALensComponent setCompositeLensWithLensInfos:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10ada2840

// -[LSALensComponent setLensWhenLoadedWithLensInfo:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada2980

// -[LSALensComponent setCompositeLensWhenLoadedWithLensInfos:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10ada2abc

// -[LSALensComponent setEffectWithOperation:async:keepActiveLensesUntilLoaded:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x10ada2bfc

// -[LSALensComponent clearLensWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ada3170

// -[LSALensComponent clearAllResourcesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ada3344

// -[LSALensComponent clearUnusedLensesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ada34f8

// -[LSALensComponent removeLensWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada377c

// -[LSALensComponent cancelAll]
// Type encoding: v16@0:8
// Implementation: 0x10ada39c0

// -[LSALensComponent cancelLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada3b24

// -[LSALensComponent clearUnusedEffects]
// Type encoding: v16@0:8
// Implementation: 0x10ada3cfc

// -[LSALensComponent setPersistentStore:lensId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10ada3d04

// -[LSALensComponent getLensStatistics:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10ada42cc

// -[LSALensComponent getLensTrace:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10ada468c

// -[LSALensComponent setLensTraceConfig:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada4a30

// -[LSALensComponent setLensMetricsCollectionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ada5310

// -[LSALensComponent retrieveCurrentLensMemoryUsage:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ada5534

// -[LSALensComponent addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada57f0

// -[LSALensComponent removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada5800

// -[LSALensComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10ada5810

// -[LSALensComponent willTurnOnLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada61dc

// -[LSALensComponent didTurnOnEffect:lensId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10ada6470

// -[LSALensComponent willTurnOffEffect:lensId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10ada657c

// -[LSALensComponent didTurnOffEffect:lensId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10ada6688

// -[LSALensComponent didLoadEffectResources:lensId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10ada68fc

// -[LSALensComponent firstFrameDidBecomeReady:lensId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10ada6b20

// -[LSALensComponent lensWithId:showHintWithId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ada6c0c

// -[LSALensComponent lensWithIdHideAllHints:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada6d38

// -[LSALensComponent lensWithId:performHapticFeedback:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x10ada6e24

// -[LSALensComponent lensWithId:performInterfaceAction:interfaceControl:interfaceData:]
// Type encoding: v40@0:8@16i24i28@32
// Implementation: 0x10ada6f84

// -[LSALensComponent lensWithId:interfaceControl:didShow:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x10ada71cc

// -[LSALensComponent lensWithId:interfaceControl:didPerformAction:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x10ada73ac

// -[LSALensComponent lensWithId:setScreenDimmingEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10ada770c

// -[LSALensComponent loadPersistentStoreForLensWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada7844

// -[LSALensComponent lensWithId:savePersistentStore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ada7930

// -[LSALensComponent sendWillTurnOffCurrentEffectIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10ada7a5c

// -[LSALensComponent setupVideoCodecFactory]
// Type encoding: v16@0:8
// Implementation: 0x10ada7c88

// -[LSALensComponent _disableAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ada7e20

// -[LSALensComponent _enableAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ada7e38

// -[LSALensComponent _muteAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ada7e4c

// -[LSALensComponent _unmuteAudio]
// Type encoding: v16@0:8
// Implementation: 0x10ada7e64

// -[LSALensComponent addLensWithLensInfo:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10ada7e78

// -[LSALensComponent warmupLensWithLensInfo:async:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10ada7e88

// -[LSALensComponent removeLensWithLensId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada7e98

// -[LSALensComponent setLensRectangles:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada7ea8

// -[LSALensComponent setLensRectangles:rectanglesTransform:completion:]
// Type encoding: v80@0:8@16{CGAffineTransform=dddddd}24@?72
// Implementation: 0x10ada7eb8

// -[LSALensComponent setDestinationRect:forLensWithId:completion:]
// Type encoding: v64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@?56
// Implementation: 0x10ada7ef4

// -[LSALensComponent setSourceRect:forLensWithId:completion:]
// Type encoding: v64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@?56
// Implementation: 0x10ada7f04

// -[LSALensComponent setRestartTrackersOnNewLenses:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10ada7f14

// -[LSALensComponent suspendSceneUpdatesForLensId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada80fc

// -[LSALensComponent resumeSceneUpdatesForLensId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ada842c

// -[LSALensComponent audioPlayerDidStartPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada875c

// -[LSALensComponent audioPlayerDidStopPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada8770

// -[LSALensComponent audioPlayerDidMuteAllSounds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada8784

// -[LSALensComponent audioPlayerDidUnmuteAllSounds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada8844

// -[LSALensComponent pendingEffectKey]
// Type encoding: @16@0:8
// Implementation: 0x10ada8904

// -[LSALensComponent setPendingEffectKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada8914

// -[LSALensComponent shouldClearUnusedResources]
// Type encoding: B16@0:8
// Implementation: 0x10ada8920

// -[LSALensComponent setShouldClearUnusedResources:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ada8934

// -[LSALensComponent isApplicationActive]
// Type encoding: B16@0:8
// Implementation: 0x10ada8944

// -[LSALensComponent setApplicationActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ada8958

// -[LSALensComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ada8968

// -[LSALensComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ada8c40

// +[LSALensComponent getLensStatisticsWithHost:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10ada4110

// +[LSALensComponent getSupportedFeaturesOfEffect:]
// Type encoding: Q24@0:8r^v16
// Implementation: 0x10ada7c28

@end
