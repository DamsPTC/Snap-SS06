// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureContextShortcutImpl
// Superclass: SCFeature
// Address: 0x112acd8d8

@interface SCFeatureContextShortcutImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: activated; attributes: TB,R,N,V_activated
// Property: delegate; attributes: T@"<SCFeatureContextShortcutDelegate>",W,N,V_delegate
// Property: sourcePageType; attributes: Tq,N,V_sourcePageType

// -[SCFeatureContextShortcutImpl initWithCameraConfiguration:cameraViewType:viewControllerLifecycleObservable:mainCameraViewControllerLifecycleObservable:cameraHardwareResource:lensUnlocker:musicFeature:lensCarouselManager:directorModeFeature:batchCaptureFeature:valdiRuntimeProvider:cameraFeatureLoggingServices:]
// Type encoding: @112@0:8@16q24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x1008c81b8

// -[SCFeatureContextShortcutImpl _viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x1008d17a8

// -[SCFeatureContextShortcutImpl _viewWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10614d4b8

// -[SCFeatureContextShortcutImpl _viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10614d4cc

// -[SCFeatureContextShortcutImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10614d4f0

// -[SCFeatureContextShortcutImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c894c

// -[SCFeatureContextShortcutImpl isActivated]
// Type encoding: B16@0:8
// Implementation: 0x10614d638

// -[SCFeatureContextShortcutImpl setContextAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c8afc

// -[SCFeatureContextShortcutImpl _activateContextShortcutIfAvailable]
// Type encoding: v16@0:8
// Implementation: 0x1008d1ad4

// -[SCFeatureContextShortcutImpl _setContextActionExpired]
// Type encoding: v16@0:8
// Implementation: 0x10614d798

// -[SCFeatureContextShortcutImpl _applySoundWithContextAction:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10614d7ac

// -[SCFeatureContextShortcutImpl _applyLensWithContextAction:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10614dbf4

// -[SCFeatureContextShortcutImpl _showToastWithIconInfoDictionaryIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10614e09c

// -[SCFeatureContextShortcutImpl _startObservingMusicPickerSelectionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10614e380

// -[SCFeatureContextShortcutImpl _stopObservingMusicPickerSelection]
// Type encoding: v16@0:8
// Implementation: 0x10614e588

// -[SCFeatureContextShortcutImpl _startObservingLensSelectionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10614e5cc

// -[SCFeatureContextShortcutImpl _stopObservingLensSelection]
// Type encoding: v16@0:8
// Implementation: 0x10614e98c

// -[SCFeatureContextShortcutImpl onShortcutToastRemoveButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10614e9f0

// -[SCFeatureContextShortcutImpl onShortcutToastDismissed]
// Type encoding: v16@0:8
// Implementation: 0x10614eb80

// -[SCFeatureContextShortcutImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10614ecf4

// -[SCFeatureContextShortcutImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008d1938

// -[SCFeatureContextShortcutImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10614f114

// -[SCFeatureContextShortcutImpl _shouldUseRuntimeViewfinderGeometry]
// Type encoding: B16@0:8
// Implementation: 0x1008c8a94

// -[SCFeatureContextShortcutImpl _invalidateToastLayout]
// Type encoding: v16@0:8
// Implementation: 0x1008c8a34

// -[SCFeatureContextShortcutImpl _installLayoutForToastView:directorModeActivated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10614f148

// -[SCFeatureContextShortcutImpl _subscribeToObservablesWithBatchCaptureFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c8444

// -[SCFeatureContextShortcutImpl _setIsRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x10614f654

// -[SCFeatureContextShortcutImpl _logCreateTapWithContextAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10614f664

// -[SCFeatureContextShortcutImpl _logCameraShortcutEnableWithContextAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10614f938

// -[SCFeatureContextShortcutImpl _logCameraShortcutTapWithContextAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10614fa94

// -[SCFeatureContextShortcutImpl activated]
// Type encoding: B16@0:8
// Implementation: 0x10614fbf0

// -[SCFeatureContextShortcutImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10614fc00

// -[SCFeatureContextShortcutImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008c8938

// -[SCFeatureContextShortcutImpl sourcePageType]
// Type encoding: q16@0:8
// Implementation: 0x10614fc20

// -[SCFeatureContextShortcutImpl setSourcePageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10614fc30

// -[SCFeatureContextShortcutImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10614fc40

@end
