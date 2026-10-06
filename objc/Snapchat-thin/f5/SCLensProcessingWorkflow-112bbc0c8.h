// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingWorkflow
// Superclass: NSObject
// Address: 0x112bbc0c8

@interface SCLensProcessingWorkflow

// Property: screenVisible; attributes: TB,V_screenVisible
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingWorkflow initWithProcessingStrategy:lensProcessingCore:lensEffectWarmupComponent:metadataProvider:processingActivator:processingPipeline:audioProcessingPipeline:renderingPipeline:lensCarouselStudySettings:applicationLifecycleEvents:screenLifecycleEvents:performer:relyOnMuteSwitchCheckerOnly:]
// Type encoding: @116@0:8@16@24@32@40@48@56@64@72@80@88@96@104B112
// Implementation: 0x108ca0db0

// -[SCLensProcessingWorkflow begin]
// Type encoding: v16@0:8
// Implementation: 0x108ca12a0

// -[SCLensProcessingWorkflow endWorkflowForUsecase:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x108ca1384

// -[SCLensProcessingWorkflow _subscribeOnObservablesWithAppLifecycleEvent:screenLifecycleEvents:isAnyEffectAppliedObservable:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108ca1554

// -[SCLensProcessingWorkflow _subscribeToForegroundEvents]
// Type encoding: v16@0:8
// Implementation: 0x108ca2134

// -[SCLensProcessingWorkflow _subscribeOnEffectApplicatorEvents]
// Type encoding: @16@0:8
// Implementation: 0x108ca2390

// -[SCLensProcessingWorkflow _applicationInBackground]
// Type encoding: v16@0:8
// Implementation: 0x108ca2c14

// -[SCLensProcessingWorkflow _screenBecameVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ca2d64

// -[SCLensProcessingWorkflow _clearAllEffects]
// Type encoding: v16@0:8
// Implementation: 0x108ca2dec

// -[SCLensProcessingWorkflow _audioActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ca2df4

// -[SCLensProcessingWorkflow _processingActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ca2e94

// -[SCLensProcessingWorkflow _lensProcessingScopeActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ca2f34

// -[SCLensProcessingWorkflow _audioSessionWillDeactivateNotificationReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ca3018

// -[SCLensProcessingWorkflow _audioSessionDidActivateNotificationReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ca3078

// -[SCLensProcessingWorkflow secretFeatureChecker:didCheckSecretFeatureMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108ca30d8

// -[SCLensProcessingWorkflow _applySecretFeatureState:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ca30e0

// -[SCLensProcessingWorkflow screenVisible]
// Type encoding: B16@0:8
// Implementation: 0x108ca3110

// -[SCLensProcessingWorkflow setScreenVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ca311c

// -[SCLensProcessingWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ca3124

// +[SCLensProcessingWorkflow setMainThreadBlocked:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ca1534

// +[SCLensProcessingWorkflow mainThreadBlocked]
// Type encoding: B16@0:8
// Implementation: 0x108ca1544

@end
